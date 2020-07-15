SET(TARGET_SRC
    FeatureSourceCDBV.cpp
    FeatureCursorCDBV.cpp
    ../../CDB_TileLib/CDB_Tile.cpp
)

SET(TARGET_H
    FeatureCursorCDBV    
    CDBVFeatureOptions
    ../../CDB_TileLib/CDB_Tile
)

INCLUDE_DIRECTORIES( ${GDAL_INCLUDE_DIR} )
SET(TARGET_COMMON_LIBRARIES ${TARGET_COMMON_LIBRARIES} osgEarthFeatures osgEarthSymbology)
SET(TARGET_LIBRARIES_VARS GDAL_LIBRARY)
SETUP_PLUGIN(osgearth_feature_cdbv)


# to install public driver includes:
SET(LIB_NAME feature_cdbv)
SET(LIB_PUBLIC_HEADERS ${TARGET_H})
INCLUDE(ModuleInstallOsgEarthDriverIncludes OPTIONAL)
