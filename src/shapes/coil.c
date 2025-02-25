/*                          C O I L . C
 * BRL-CAD
 *
 * Copyright (c) 2009-2024 United States Government as represented by
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
/** @file shapes/coil.c
 *
 * Coil Generator
 *
 * Program to create coils using the pipe primitive.
 *
 */

#include "common.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "bu/app.h"
#include "bu/file.h"
#include "bu/log.h"
#include "vmath.h"
#include "bn.h"
#include "raytrace.h"
#include "wdb.h"
#include "ged.h"


#define DEFAULT_COIL_FILENAME "coil.g"

int
main(int ac, char *av[])
{

    struct rt_wdb *wdbp = NULL;
    struct ged ged;
    int flag;

    bu_setprogname(av[0]);

    /* make sure file doesn't already exist and opens for writing */
    if (bu_file_exists(DEFAULT_COIL_FILENAME, NULL))
	bu_exit(2, "%s: refusing to overwrite pre-existing file %s\n", av[0], DEFAULT_COIL_FILENAME);

    wdbp = wdb_fopen(DEFAULT_COIL_FILENAME);
    if (!wdbp)
	bu_exit(2, "%s: unable to open %s for writing\n", av[0], DEFAULT_COIL_FILENAME);

    /* do it. */
    mk_id(wdbp, "coil");
    ged_init(&ged);
    ged.dbip = wdbp->dbip;
    flag = ged_exec_coil(&ged, ac, (const char**)av);
    /* Close database */
    db_close(wdbp->dbip);
    if (flag & BRLCAD_ERROR)
	/* Creation failed - remove file */
	bu_file_delete(DEFAULT_COIL_FILENAME);
    bu_log("%s\n", bu_vls_addr(ged.ged_result_str));
    /* return -1 if flag is 1; return 0 if flag is 0; BRLCAD_ERROR is 1 */
    return -flag;
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
