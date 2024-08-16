---@enum EGrassScaling
EGrassScaling = {
    Uniform = 0,
    Free = 1,
    LockXY = 2,
    EGrassScaling_MAX = 3,
}

---@enum ELandscapeBlendMode
ELandscapeBlendMode = {
    LSBM_AdditiveBlend = 0,
    LSBM_AlphaBlend = 1,
    LSBM_MAX = 2,
}

---@enum ELandscapeClearMode
ELandscapeClearMode = {
    Clear_Weightmap = 1,
    Clear_Heightmap = 2,
    Clear_All = 3,
    Clear_MAX = 4,
}

---@enum ELandscapeCustomizedCoordType
ELandscapeCustomizedCoordType = {
    LCCT_None = 0,
    LCCT_CustomUV0 = 1,
    LCCT_CustomUV1 = 2,
    LCCT_CustomUV2 = 3,
    LCCT_WeightMapUV = 4,
    LCCT_MAX = 5,
}

---@enum ELandscapeGizmoType
ELandscapeGizmoType = {
    LGT_None = 0,
    LGT_Height = 1,
    LGT_Weight = 2,
    LGT_MAX = 3,
}

---@enum ELandscapeImportAlphamapType
ELandscapeImportAlphamapType = {
    Additive = 0,
    Layered = 1,
    ELandscapeImportAlphamapType_MAX = 2,
}

---@enum ELandscapeLODFalloff
ELandscapeLODFalloff = {
    Linear = 0,
    SquareRoot = 1,
    ELandscapeLODFalloff_MAX = 2,
}

---@enum ELandscapeLayerBlendType
ELandscapeLayerBlendType = {
    LB_WeightBlend = 0,
    LB_AlphaBlend = 1,
    LB_HeightBlend = 2,
    LB_MAX = 3,
}

---@enum ELandscapeLayerDisplayMode
ELandscapeLayerDisplayMode = {
    Default = 0,
    Alphabetical = 1,
    UserSpecific = 2,
    ELandscapeLayerDisplayMode_MAX = 3,
}

---@enum ELandscapeLayerPaintingRestriction
ELandscapeLayerPaintingRestriction = {
    None = 0,
    UseMaxLayers = 1,
    ExistingOnly = 2,
    UseComponentWhitelist = 3,
    ELandscapeLayerPaintingRestriction_MAX = 4,
}

---@enum ELandscapeSetupErrors
ELandscapeSetupErrors = {
    LSE_None = 0,
    LSE_NoLandscapeInfo = 1,
    LSE_CollsionXY = 2,
    LSE_NoLayerInfo = 3,
    LSE_MAX = 4,
}

---@enum ESplineModulationColorMask
ESplineModulationColorMask = {
    Red = 0,
    Green = 1,
    Blue = 2,
    Alpha = 3,
    ESplineModulationColorMask_MAX = 4,
}

---@enum ETerrainCoordMappingType
ETerrainCoordMappingType = {
    TCMT_Auto = 0,
    TCMT_XY = 1,
    TCMT_XZ = 2,
    TCMT_YZ = 3,
    TCMT_MAX = 4,
}

---@enum LandscapeSplineMeshOrientation
LandscapeSplineMeshOrientation = {
    LSMO_XUp = 0,
    LSMO_YUp = 1,
    LSMO_MAX = 2,
}

