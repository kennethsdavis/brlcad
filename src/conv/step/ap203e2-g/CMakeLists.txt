set(STEP_SCHEMA_FILE ${CMAKE_CURRENT_SOURCE_DIR}/ap203e2.exp)
add_definitions(-DAP203e2)

if(DEFINED ENABLE_STEP_EXPERIMENTAL)
  generate_schema_inputs(${STEP_SCHEMA_FILE} ap203e2g)
endif(DEFINED ENABLE_STEP_EXPERIMENTAL)

set(
  ap203e2g_SOURCES
  ${express_srcs}
  ../BRLCADWrapper.cpp
  ../STEPWrapper.cpp
  ../step-g/AdvancedBrepShapeRepresentation.cpp
  ../step-g/AdvancedFace.cpp
  ../step-g/AmountOfSubstanceContextDependentUnit.cpp
  ../step-g/AmountOfSubstanceConversionBasedUnit.cpp
  ../step-g/AmountOfSubstanceSiUnit.cpp
  ../step-g/AmountOfSubstanceUnit.cpp
  ../step-g/ApplicationContext.cpp
  ../step-g/ApplicationContextElement.cpp
  ../step-g/AreaContextDependentUnit.cpp
  ../step-g/AreaConversionBasedUnit.cpp
  ../step-g/AreaSiUnit.cpp
  ../step-g/AreaUnit.cpp
  ../step-g/Axis1Placement.cpp
  ../step-g/Axis2Placement.cpp
  ../step-g/Axis2Placement2D.cpp
  ../step-g/Axis2Placement3D.cpp
  ../step-g/BSplineCurve.cpp
  ../step-g/BSplineCurveWithKnots.cpp
  ../step-g/BSplineSurface.cpp
  ../step-g/BSplineSurfaceWithKnots.cpp
  ../step-g/BezierCurve.cpp
  ../step-g/BezierSurface.cpp
  ../step-g/BoundaryCurve.cpp
  ../step-g/BoundedCurve.cpp
  ../step-g/BoundedPCurve.cpp
  ../step-g/BoundedSurface.cpp
  ../step-g/BoundedSurfaceCurve.cpp
  ../step-g/BrepWithVoids.cpp
  ../step-g/CartesianPoint.cpp
  ../step-g/CartesianTransformationOperator.cpp
  ../step-g/CartesianTransformationOperator2D.cpp
  ../step-g/CartesianTransformationOperator3D.cpp
  ../step-g/CharacterizedDefinition.cpp
  ../step-g/CharacterizedProductDefinition.cpp
  ../step-g/Circle.cpp
  ../step-g/ClosedShell.cpp
  ../step-g/CompositeCurve.cpp
  ../step-g/CompositeCurveOnSurface.cpp
  ../step-g/CompositeCurveSegment.cpp
  ../step-g/Conic.cpp
  ../step-g/ConicalSurface.cpp
  ../step-g/ConnectedFaceSet.cpp
  ../step-g/ContextDependentShapeRepresentation.cpp
  ../step-g/ContextDependentUnit.cpp
  ../step-g/ConversionBasedUnit.cpp
  ../step-g/Curve.cpp
  ../step-g/CurveBoundedSurface.cpp
  ../step-g/CurveReplica.cpp
  ../step-g/CylindricalSurface.cpp
  ../step-g/DefinitionalRepresentation.cpp
  ../step-g/DerivedUnit.cpp
  ../step-g/DerivedUnitElement.cpp
  ../step-g/DesignContext.cpp
  ../step-g/DimensionalExponents.cpp
  ../step-g/Direction.cpp
  ../step-g/Edge.cpp
  ../step-g/EdgeCurve.cpp
  ../step-g/EdgeLoop.cpp
  ../step-g/ElectricCurrentContextDependentUnit.cpp
  ../step-g/ElectricCurrentConversionBasedUnit.cpp
  ../step-g/ElectricCurrentSiUnit.cpp
  ../step-g/ElectricCurrentUnit.cpp
  ../step-g/ElementarySurface.cpp
  ../step-g/Ellipse.cpp
  ../step-g/Face.cpp
  ../step-g/FaceBound.cpp
  ../step-g/FaceOuterBound.cpp
  ../step-g/FaceSurface.cpp
  ../step-g/Factory.cpp
  ../step-g/FoundedItem.cpp
  ../step-g/FunctionallyDefinedTransformation.cpp
  ../step-g/GeometricRepresentationContext.cpp
  ../step-g/GeometricRepresentationItem.cpp
  ../step-g/GlobalUncertaintyAssignedContext.cpp
  ../step-g/GlobalUnitAssignedContext.cpp
  ../step-g/Hyperbola.cpp
  ../step-g/IntersectionCurve.cpp
  ../step-g/ItemDefinedTransformation.cpp
  ../step-g/LengthContextDependentUnit.cpp
  ../step-g/LengthConversionBasedUnit.cpp
  ../step-g/LengthMeasureWithUnit.cpp
  ../step-g/LengthSiUnit.cpp
  ../step-g/LengthUnit.cpp
  ../step-g/Line.cpp
  ../step-g/LocalUnits.cpp
  ../step-g/Loop.cpp
  ../step-g/LuminousIntensityContextDependentUnit.cpp
  ../step-g/LuminousIntensityConversionBasedUnit.cpp
  ../step-g/LuminousIntensitySiUnit.cpp
  ../step-g/LuminousIntensityUnit.cpp
  ../step-g/ManifoldSolidBrep.cpp
  ../step-g/MassContextDependentUnit.cpp
  ../step-g/MassConversionBasedUnit.cpp
  ../step-g/MassSiUnit.cpp
  ../step-g/MassUnit.cpp
  ../step-g/MeasureValue.cpp
  ../step-g/MeasureWithUnit.cpp
  ../step-g/MechanicalContext.cpp
  ../step-g/NamedUnit.cpp
  ../step-g/OffsetCurve2D.cpp
  ../step-g/OffsetCurve3D.cpp
  ../step-g/OffsetSurface.cpp
  ../step-g/OpenNurbsInterfaces.cpp
  ../step-g/OrientedEdge.cpp
  ../step-g/OrientedClosedShell.cpp
  ../step-g/PCurve.cpp
  ../step-g/PCurveOrSurface.cpp
  ../step-g/Parabola.cpp
  ../step-g/ParametricRepresentationContext.cpp
  ../step-g/Path.cpp
  ../step-g/Placement.cpp
  ../step-g/Plane.cpp
  ../step-g/PlaneAngleContextDependentUnit.cpp
  ../step-g/PlaneAngleConversionBasedUnit.cpp
  ../step-g/PlaneAngleMeasureWithUnit.cpp
  ../step-g/PlaneAngleSiUnit.cpp
  ../step-g/PlaneAngleUnit.cpp
  ../step-g/Point.cpp
  ../step-g/Polyline.cpp
  ../step-g/Product.cpp
  ../step-g/ProductCategory.cpp
  ../step-g/ProductContext.cpp
  ../step-g/ProductDefinition.cpp
  ../step-g/ProductDefinitionContext.cpp
  ../step-g/ProductDefinitionContextAssociation.cpp
  ../step-g/ProductDefinitionContextRole.cpp
  ../step-g/ProductDefinitionFormation.cpp
  ../step-g/ProductDefinitionFormationWithSpecifiedSource.cpp
  ../step-g/ProductDefinitionRelationship.cpp
  ../step-g/ProductDefinitionShape.cpp
  ../step-g/ProductRelatedProductCategory.cpp
  ../step-g/PropertyDefinition.cpp
  ../step-g/PropertyDefinitionRepresentation.cpp
  ../step-g/QuasiUniformCurve.cpp
  ../step-g/QuasiUniformSurface.cpp
  ../step-g/RatioContextDependentUnit.cpp
  ../step-g/RatioConversionBasedUnit.cpp
  ../step-g/RatioSiUnit.cpp
  ../step-g/RatioUnit.cpp
  ../step-g/RationalBSplineCurve.cpp
  ../step-g/RationalBSplineCurveWithKnots.cpp
  ../step-g/RationalBSplineSurface.cpp
  ../step-g/RationalBSplineSurfaceWithKnots.cpp
  ../step-g/RationalBezierCurve.cpp
  ../step-g/RationalBezierSurface.cpp
  ../step-g/RationalQuasiUniformCurve.cpp
  ../step-g/RationalQuasiUniformSurface.cpp
  ../step-g/RationalUniformCurve.cpp
  ../step-g/RationalUniformSurface.cpp
  ../step-g/RectangularCompositeSurface.cpp
  ../step-g/RectangularTrimmedSurface.cpp
  ../step-g/Representation.cpp
  ../step-g/RepresentationContext.cpp
  ../step-g/RepresentationItem.cpp
  ../step-g/RepresentationRelationship.cpp
  ../step-g/RepresentationRelationshipWithTransformation.cpp
  ../step-g/RepresentedDefinition.cpp
  ../step-g/STEPEntity.cpp
  ../step-g/SeamCurve.cpp
  ../step-g/ShapeAspect.cpp
  ../step-g/ShapeAspectRelationship.cpp
  ../step-g/ShapeDefinition.cpp
  ../step-g/ShapeDefinitionRepresentation.cpp
  ../step-g/ShapeRepresentation.cpp
  ../step-g/ShapeRepresentationRelationship.cpp
  ../step-g/SiUnit.cpp
  ../step-g/SolidAngleContextDependentUnit.cpp
  ../step-g/SolidAngleConversionBasedUnit.cpp
  ../step-g/SolidAngleSiUnit.cpp
  ../step-g/SolidAngleUnit.cpp
  ../step-g/SolidModel.cpp
  ../step-g/SphericalSurface.cpp
  ../step-g/Surface.cpp
  ../step-g/SurfaceCurve.cpp
  ../step-g/SurfaceOfLinearExtrusion.cpp
  ../step-g/SurfaceOfRevolution.cpp
  ../step-g/SurfacePatch.cpp
  ../step-g/SurfaceReplica.cpp
  ../step-g/SweptSurface.cpp
  ../step-g/ThermodynamicTemperatureContextDependentUnit.cpp
  ../step-g/ThermodynamicTemperatureConversionBasedUnit.cpp
  ../step-g/ThermodynamicTemperatureSiUnit.cpp
  ../step-g/ThermodynamicTemperatureUnit.cpp
  ../step-g/TimeContextDependentUnit.cpp
  ../step-g/TimeConversionBasedUnit.cpp
  ../step-g/TimeSiUnit.cpp
  ../step-g/TimeUnit.cpp
  ../step-g/TopologicalRepresentationItem.cpp
  ../step-g/ToroidalSurface.cpp
  ../step-g/Transformation.cpp
  ../step-g/TrimmedCurve.cpp
  ../step-g/TrimmingSelect.cpp
  ../step-g/UncertaintyMeasureWithUnit.cpp
  ../step-g/UniformCurve.cpp
  ../step-g/UniformSurface.cpp
  ../step-g/Unit.cpp
  ../step-g/Vector.cpp
  ../step-g/Vertex.cpp
  ../step-g/VertexLoop.cpp
  ../step-g/VertexPoint.cpp
  ../step-g/VolumeContextDependentUnit.cpp
  ../step-g/VolumeConversionBasedUnit.cpp
  ../step-g/VolumeSiUnit.cpp
  ../step-g/VolumeUnit.cpp
  ../step-g/step-g.cpp
)

set(
  ap203e2g_LIBS
  libwdb
  librt
  libbu
  libbrep
  ${STEPCODE_UTILS_LIBRARY}
  ${STEPCODE_EDITOR_LIBRARY}
  ${STEPCODE_DAI_LIBRARY}
  ${STEPCODE_CORE_LIBRARY}
  ${OPENNURBS_LIBRARIES}
)

set(
  AP203_INCLUDE_DIRS
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/..
  ${CMAKE_CURRENT_SOURCE_DIR}/../step-g
  ${STEPCODE_INCLUDE_DIRS}
  ${CMAKE_SOURCE_DIR}/src/libbrep # for PullbackCurve.h
)

if(DEFINED ENABLE_STEP_EXPERIMENTAL)
  brlcad_addexec(ap203e2-g "${ap203e2g_SOURCES}" "${ap203e2g_LIBS}" NO_STRICT FOLDER Conv)
  target_include_directories(ap203e2-g BEFORE PRIVATE ${AP203_INCLUDE_DIRS})
  add_dependencies(ap203e2-g step-express-${SCHEMA_NAME}-ap203e2g)
endif(DEFINED ENABLE_STEP_EXPERIMENTAL)

cmakefiles(
  ${ap203e2g_SOURCES}
  CMakeLists.txt
  ap203e2.exp
)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
