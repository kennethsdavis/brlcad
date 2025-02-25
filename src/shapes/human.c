/*                          H U M A N . C
 * BRL-CAD
 *
 * Copyright (c) 2008-2024 United States Government as represented by
 * the U.S. Army Research Laboratory.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * version 2.1 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this file; see the file named COPYING for more
 * information.
 */
/** @file shapes/human.c
 *
 * Generator for human models based on height, and other stuff eventually
 *
 */

#include "common.h"

#include <stdio.h>
#include <stdlib.h>
#ifdef HAVE_UNISTD_H
#  include <unistd.h>
#endif

#include "bu/app.h"
#include "wdb.h"
#include "ged.h"

#define DEFAULT_FILENAME "human.g"

int main(int ac, char *av[])
{
    struct rt_wdb *wdbp = NULL;
    struct ged ged;
    int ret;
    const char *filename = NULL;

    bu_setprogname(av[0]);

    filename = DEFAULT_FILENAME;

    wdbp = wdb_fopen(filename);

    mk_id_units(wdbp, "Human Model", "in");

    ged_init(&ged);
    ged.dbip = wdbp->dbip;
    bu_log("Building\n");
    ret = ged_exec_human(&ged, ac, (const char **)av);
    bu_log("Finished Building\n");
    db_close(wdbp->dbip);

    if (ret) {
	bu_file_delete(filename);
	bu_log("%s", bu_vls_addr(ged.ged_result_str));
    }

    /* release our ged instance memory */
    ged_free(&ged);
    return ret;
}


/*
 * Local Variables:
 * mode: C
 * tab-width: 8
 * indent-tabs-mode: t
 * c-file-style: "stroustrup"
 * End:
 * ex: shiftwidth=4 tabstop=8
 */
