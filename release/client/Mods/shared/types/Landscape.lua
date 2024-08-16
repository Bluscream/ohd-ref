---@meta

---@class AControlPointMeshActor : AActor
---@field ControlPointMeshComponent UControlPointMeshComponent
AControlPointMeshActor = {}



---@class ALandscape : ALandscapeProxy
ALandscape = {}


---@class ALandscapeBlueprintBrushBase : AActor
ALandscapeBlueprintBrushBase = {}

function ALandscapeBlueprintBrushBase:RequestLandscapeUpdate() end
---@param InIsHeightmap boolean
---@param InCombinedResult UTextureRenderTarget2D
---@param InWeightmapLayerName FName
---@return UTextureRenderTarget2D
function ALandscapeBlueprintBrushBase:Render(InIsHeightmap, InCombinedResult, InWeightmapLayerName) end
---@param InLandscapeTransform FTransform
---@param InLandscapeSize FIntPoint
---@param InLandscapeRenderTargetSize FIntPoint
function ALandscapeBlueprintBrushBase:Initialize(InLandscapeTransform, InLandscapeSize, InLandscapeRenderTargetSize) end
---@param OutStreamableAssets TArray<UTexture2D>
function ALandscapeBlueprintBrushBase:GetBlueprintRenderDependencies(OutStreamableAssets) end


---@class ALandscapeGizmoActiveActor : ALandscapeGizmoActor
ALandscapeGizmoActiveActor = {}


---@class ALandscapeGizmoActor : AActor
ALandscapeGizmoActor = {}


---@class ALandscapeMeshProxyActor : AActor
---@field LandscapeMeshProxyComponent ULandscapeMeshProxyComponent
ALandscapeMeshProxyActor = {}



---@class ALandscapeProxy : AActor
---@field SplineComponent ULandscapeSplinesComponent
---@field LandscapeGuid FGuid
---@field LandscapeSectionOffset FIntPoint
---@field MaxLODLevel int32
---@field LODDistanceFactor float
---@field LODFalloff ELandscapeLODFalloff::Type
---@field ComponentScreenSizeToUseSubSections float
---@field LOD0ScreenSize float
---@field LOD0DistributionSetting float
---@field LODDistributionSetting float
---@field TessellationComponentScreenSize float
---@field UseTessellationComponentScreenSizeFalloff boolean
---@field TessellationComponentScreenSizeFalloff float
---@field OccluderGeometryLOD int32
---@field StaticLightingLOD int32
---@field DefaultPhysMaterial UPhysicalMaterial
---@field StreamingDistanceMultiplier float
---@field LandscapeMaterial UMaterialInterface
---@field LandscapeHoleMaterial UMaterialInterface
---@field LandscapeMaterialsOverride TArray<FLandscapeProxyMaterialOverride>
---@field bMeshHoles boolean
---@field MeshHolesMaxLod uint8
---@field RuntimeVirtualTextures TArray<URuntimeVirtualTexture>
---@field VirtualTextureNumLods int32
---@field VirtualTextureLodBias int32
---@field VirtualTextureRenderPassType ERuntimeVirtualTextureMainPassType
---@field NegativeZBoundsExtension float
---@field PositiveZBoundsExtension float
---@field LandscapeComponents TArray<ULandscapeComponent>
---@field CollisionComponents TArray<ULandscapeHeightfieldCollisionComponent>
---@field FoliageComponents TArray<UHierarchicalInstancedStaticMeshComponent>
---@field bHasLandscapeGrass boolean
---@field StaticLightingResolution float
---@field bCastStaticShadow boolean
---@field bCastShadowAsTwoSided boolean
---@field bCastFarShadow boolean
---@field bAffectDistanceFieldLighting boolean
---@field LightingChannels FLightingChannels
---@field bUseMaterialPositionOffsetInStaticLighting boolean
---@field bRenderCustomDepth boolean
---@field CustomDepthStencilValue int32
---@field LDMaxDrawDistance float
---@field LightmassSettings FLightmassPrimitiveSettings
---@field CollisionMipLevel int32
---@field SimpleCollisionMipLevel int32
---@field CollisionThickness float
---@field BodyInstance FBodyInstance
---@field bGenerateOverlapEvents boolean
---@field bBakeMaterialPositionOffsetIntoCollision boolean
---@field ComponentSizeQuads int32
---@field SubsectionSizeQuads int32
---@field NumSubsections int32
---@field bUsedForNavigation boolean
---@field bFillCollisionUnderLandscapeForNavmesh boolean
---@field bUseDynamicMaterialInstance boolean
---@field NavigationGeometryGatheringMode ENavDataGatheringMode
---@field bUseLandscapeForCullingInvisibleHLODVertices boolean
---@field bHasLayersContent boolean
---@field WeightmapUsageMap TMap<UTexture2D, ULandscapeWeightmapUsage>
ALandscapeProxy = {}

---@param ParameterName FName
---@param Value FLinearColor
function ALandscapeProxy:SetLandscapeMaterialVectorParameterValue(ParameterName, Value) end
---@param ParameterName FName
---@param Value UTexture
function ALandscapeProxy:SetLandscapeMaterialTextureParameterValue(ParameterName, Value) end
---@param ParameterName FName
---@param Value float
function ALandscapeProxy:SetLandscapeMaterialScalarParameterValue(ParameterName, Value) end
---@param NewLandscapeMaterial UMaterialInterface
function ALandscapeProxy:EditorSetLandscapeMaterial(NewLandscapeMaterial) end
---@param InSplineComponent USplineComponent
---@param StartWidth float
---@param EndWidth float
---@param StartSideFalloff float
---@param EndSideFalloff float
---@param StartRoll float
---@param EndRoll float
---@param NumSubdivisions int32
---@param bRaiseHeights boolean
---@param bLowerHeights boolean
---@param PaintLayer ULandscapeLayerInfoObject
function ALandscapeProxy:EditorApplySpline(InSplineComponent, StartWidth, EndWidth, StartSideFalloff, EndSideFalloff, StartRoll, EndRoll, NumSubdivisions, bRaiseHeights, bLowerHeights, PaintLayer) end
---@param InComponentScreenSizeToUseSubSections boolean
function ALandscapeProxy:ChangeUseTessellationComponentScreenSizeFalloff(InComponentScreenSizeToUseSubSections) end
---@param InUseTessellationComponentScreenSizeFalloff float
function ALandscapeProxy:ChangeTessellationComponentScreenSizeFalloff(InUseTessellationComponentScreenSizeFalloff) end
---@param InTessellationComponentScreenSize float
function ALandscapeProxy:ChangeTessellationComponentScreenSize(InTessellationComponentScreenSize) end
---@param InLODDistanceFactor float
function ALandscapeProxy:ChangeLODDistanceFactor(InLODDistanceFactor) end
---@param InComponentScreenSizeToUseSubSections float
function ALandscapeProxy:ChangeComponentScreenSizeToUseSubSections(InComponentScreenSizeToUseSubSections) end


---@class ALandscapeStreamingProxy : ALandscapeProxy
---@field LandscapeActor TLazyObjectPtr<ALandscape>
ALandscapeStreamingProxy = {}



---@class FForeignControlPointData
FForeignControlPointData = {}


---@class FForeignSplineSegmentData
FForeignSplineSegmentData = {}


---@class FForeignWorldSplineData
FForeignWorldSplineData = {}


---@class FGizmoSelectData
FGizmoSelectData = {}


---@class FGrassInput
---@field Name FName
---@field GrassType ULandscapeGrassType
---@field Input FExpressionInput
FGrassInput = {}



---@class FGrassVariety
---@field GrassMesh UStaticMesh
---@field GrassDensity FPerPlatformFloat
---@field bUseGrid boolean
---@field PlacementJitter float
---@field StartCullDistance FPerPlatformInt
---@field EndCullDistance FPerPlatformInt
---@field MinLOD int32
---@field Scaling EGrassScaling
---@field ScaleX FFloatInterval
---@field ScaleY FFloatInterval
---@field ScaleZ FFloatInterval
---@field RandomRotation boolean
---@field AlignToSurface boolean
---@field bUseLandscapeLightmap boolean
---@field LightingChannels FLightingChannels
---@field bReceivesDecals boolean
---@field bCastDynamicShadow boolean
---@field bKeepInstanceBufferCPUCopy boolean
FGrassVariety = {}



---@class FHeightmapData
---@field Texture UTexture2D
FHeightmapData = {}



---@class FLandscapeComponentMaterialOverride
---@field LODIndex FPerPlatformInt
---@field Material UMaterialInterface
FLandscapeComponentMaterialOverride = {}



---@class FLandscapeEditToolRenderData
---@field ToolMaterial UMaterialInterface
---@field GizmoMaterial UMaterialInterface
---@field SelectedType int32
---@field DebugChannelR int32
---@field DebugChannelG int32
---@field DebugChannelB int32
---@field DataTexture UTexture2D
---@field LayerContributionTexture UTexture2D
---@field DirtyTexture UTexture2D
FLandscapeEditToolRenderData = {}



---@class FLandscapeEditorLayerSettings
FLandscapeEditorLayerSettings = {}


---@class FLandscapeImportLayerInfo
FLandscapeImportLayerInfo = {}


---@class FLandscapeInfoLayerSettings
---@field LayerInfoObj ULandscapeLayerInfoObject
---@field LayerName FName
FLandscapeInfoLayerSettings = {}



---@class FLandscapeLayer
---@field Guid FGuid
---@field Name FName
---@field bVisible boolean
---@field bLocked boolean
---@field HeightmapAlpha float
---@field WeightmapAlpha float
---@field BlendMode ELandscapeBlendMode
---@field Brushes TArray<FLandscapeLayerBrush>
---@field WeightmapLayerAllocationBlend TMap<ULandscapeLayerInfoObject, boolean>
FLandscapeLayer = {}



---@class FLandscapeLayerBrush
FLandscapeLayerBrush = {}


---@class FLandscapeLayerComponentData
---@field HeightmapData FHeightmapData
---@field WeightmapData FWeightmapData
FLandscapeLayerComponentData = {}



---@class FLandscapeLayerStruct
---@field LayerInfoObj ULandscapeLayerInfoObject
FLandscapeLayerStruct = {}



---@class FLandscapeMaterialTextureStreamingInfo
---@field TextureName FName
---@field TexelFactor float
FLandscapeMaterialTextureStreamingInfo = {}



---@class FLandscapeProxyMaterialOverride
---@field LODIndex FPerPlatformInt
---@field Material UMaterialInterface
FLandscapeProxyMaterialOverride = {}



---@class FLandscapeSplineConnection
---@field Segment ULandscapeSplineSegment
---@field End boolean
FLandscapeSplineConnection = {}



---@class FLandscapeSplineInterpPoint
---@field Center FVector
---@field Left FVector
---@field Right FVector
---@field FalloffLeft FVector
---@field FalloffRight FVector
---@field LayerLeft FVector
---@field LayerRight FVector
---@field LayerFalloffLeft FVector
---@field LayerFalloffRight FVector
---@field StartEndFalloff float
FLandscapeSplineInterpPoint = {}



---@class FLandscapeSplineMeshEntry
---@field Mesh UStaticMesh
---@field MaterialOverrides TArray<UMaterialInterface>
---@field bCenterH boolean
---@field CenterAdjust FVector2D
---@field bScaleToWidth boolean
---@field Scale FVector
---@field Orientation LandscapeSplineMeshOrientation
---@field ForwardAxis ESplineMeshAxis::Type
---@field UpAxis ESplineMeshAxis::Type
FLandscapeSplineMeshEntry = {}



---@class FLandscapeSplineSegmentConnection
---@field ControlPoint ULandscapeSplineControlPoint
---@field TangentLen float
---@field SocketName FName
FLandscapeSplineSegmentConnection = {}



---@class FLayerBlendInput
---@field LayerName FName
---@field BlendType ELandscapeLayerBlendType
---@field LayerInput FExpressionInput
---@field HeightInput FExpressionInput
---@field PreviewWeight float
---@field ConstLayerInput FVector
---@field ConstHeightInput float
FLayerBlendInput = {}



---@class FWeightmapData
---@field Textures TArray<UTexture2D>
---@field LayerAllocations TArray<FWeightmapLayerAllocationInfo>
---@field TextureUsages TArray<ULandscapeWeightmapUsage>
FWeightmapData = {}



---@class FWeightmapLayerAllocationInfo
---@field LayerInfo ULandscapeLayerInfoObject
---@field WeightmapTextureIndex uint8
---@field WeightmapTextureChannel uint8
FWeightmapLayerAllocationInfo = {}



---@class UControlPointMeshComponent : UStaticMeshComponent
---@field VirtualTextureMainPassMaxDrawDistance float
UControlPointMeshComponent = {}



---@class ULandscapeComponent : UPrimitiveComponent
---@field SectionBaseX int32
---@field SectionBaseY int32
---@field ComponentSizeQuads int32
---@field SubsectionSizeQuads int32
---@field NumSubsections int32
---@field OverrideMaterial UMaterialInterface
---@field OverrideHoleMaterial UMaterialInterface
---@field OverrideMaterials TArray<FLandscapeComponentMaterialOverride>
---@field MaterialInstances TArray<UMaterialInstanceConstant>
---@field MaterialInstancesDynamic TArray<UMaterialInstanceDynamic>
---@field LODIndexToMaterialIndex TArray<int8>
---@field MaterialIndexToDisabledTessellationMaterial TArray<int8>
---@field XYOffsetmapTexture UTexture2D
---@field WeightmapScaleBias FVector4
---@field WeightmapSubsectionOffset float
---@field HeightmapScaleBias FVector4
---@field CachedLocalBox FBox
---@field CollisionComponent TLazyObjectPtr<ULandscapeHeightfieldCollisionComponent>
---@field HeightmapTexture UTexture2D
---@field WeightmapLayerAllocations TArray<FWeightmapLayerAllocationInfo>
---@field WeightmapTextures TArray<UTexture2D>
---@field MapBuildDataId FGuid
---@field IrrelevantLights TArray<FGuid>
---@field CollisionMipLevel int32
---@field SimpleCollisionMipLevel int32
---@field NegativeZBoundsExtension float
---@field PositiveZBoundsExtension float
---@field StaticLightingResolution float
---@field ForcedLOD int32
---@field LODBias int32
---@field StateId FGuid
---@field BakedTextureMaterialGuid FGuid
---@field GIBakedBaseColorTexture UTexture2D
---@field MobileBlendableLayerMask uint8
---@field MobileMaterialInterface UMaterialInterface
---@field MobileMaterialInterfaces TArray<UMaterialInterface>
---@field MobileWeightmapTextures TArray<UTexture2D>
ULandscapeComponent = {}

---@param InIndex int32
---@return UMaterialInstanceDynamic
function ULandscapeComponent:GetMaterialInstanceDynamic(InIndex) end
---@param InLocation FVector
---@param InPaintLayerName FName
---@return float
function ULandscapeComponent:EditorGetPaintLayerWeightByNameAtLocation(InLocation, InPaintLayerName) end
---@param InLocation FVector
---@param PaintLayer ULandscapeLayerInfoObject
---@return float
function ULandscapeComponent:EditorGetPaintLayerWeightAtLocation(InLocation, PaintLayer) end


---@class ULandscapeGizmoRenderComponent : UPrimitiveComponent
ULandscapeGizmoRenderComponent = {}


---@class ULandscapeGrassType : UObject
---@field GrassVarieties TArray<FGrassVariety>
---@field bEnableDensityScaling boolean
---@field GrassMesh UStaticMesh
---@field GrassDensity float
---@field PlacementJitter float
---@field StartCullDistance int32
---@field EndCullDistance int32
---@field RandomRotation boolean
---@field AlignToSurface boolean
ULandscapeGrassType = {}



---@class ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent
---@field ComponentLayerInfos TArray<ULandscapeLayerInfoObject>
---@field SectionBaseX int32
---@field SectionBaseY int32
---@field CollisionSizeQuads int32
---@field CollisionScale float
---@field SimpleCollisionSizeQuads int32
---@field CollisionQuadFlags TArray<uint8>
---@field HeightfieldGuid FGuid
---@field CachedLocalBox FBox
---@field RenderComponent TLazyObjectPtr<ULandscapeComponent>
---@field CookedPhysicalMaterials TArray<UPhysicalMaterial>
ULandscapeHeightfieldCollisionComponent = {}

---@return ULandscapeComponent
function ULandscapeHeightfieldCollisionComponent:GetRenderComponent() end


---@class ULandscapeInfo : UObject
---@field LandscapeActor TLazyObjectPtr<ALandscape>
---@field LandscapeGuid FGuid
---@field ComponentSizeQuads int32
---@field SubsectionSizeQuads int32
---@field ComponentNumSubsections int32
---@field DrawScale FVector
---@field Proxies TArray<ALandscapeStreamingProxy>
ULandscapeInfo = {}



---@class ULandscapeInfoMap : UObject
ULandscapeInfoMap = {}


---@class ULandscapeLayerInfoObject : UObject
---@field LayerName FName
---@field PhysMaterial UPhysicalMaterial
---@field Hardness float
---@field LayerUsageDebugColor FLinearColor
ULandscapeLayerInfoObject = {}



---@class ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant
---@field TextureStreamingInfo TArray<FLandscapeMaterialTextureStreamingInfo>
---@field bIsLayerThumbnail boolean
---@field bDisableTessellation boolean
---@field bMobile boolean
---@field bEditorToolUsage boolean
ULandscapeMaterialInstanceConstant = {}



---@class ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent
---@field MeshGuid FGuid
ULandscapeMeshCollisionComponent = {}



---@class ULandscapeMeshProxyComponent : UStaticMeshComponent
---@field LandscapeGuid FGuid
---@field ProxyComponentBases TArray<FIntPoint>
---@field ProxyLOD int8
ULandscapeMeshProxyComponent = {}



---@class ULandscapeSettings : UDeveloperSettings
---@field MaxNumberOfLayers int32
ULandscapeSettings = {}



---@class ULandscapeSplineControlPoint : UObject
---@field Location FVector
---@field Rotation FRotator
---@field Width float
---@field LayerWidthRatio float
---@field SideFalloff float
---@field LeftSideFalloffFactor float
---@field RightSideFalloffFactor float
---@field LeftSideLayerFalloffFactor float
---@field RightSideLayerFalloffFactor float
---@field EndFalloff float
---@field ConnectedSegments TArray<FLandscapeSplineConnection>
---@field Points TArray<FLandscapeSplineInterpPoint>
---@field Bounds FBox
---@field LocalMeshComponent UControlPointMeshComponent
ULandscapeSplineControlPoint = {}



---@class ULandscapeSplineSegment : UObject
---@field Connections FLandscapeSplineSegmentConnection
---@field SplineInfo FInterpCurveVector
---@field Points TArray<FLandscapeSplineInterpPoint>
---@field Bounds FBox
---@field LocalMeshComponents TArray<USplineMeshComponent>
ULandscapeSplineSegment = {}



---@class ULandscapeSplinesComponent : UPrimitiveComponent
---@field ControlPoints TArray<ULandscapeSplineControlPoint>
---@field Segments TArray<ULandscapeSplineSegment>
---@field CookedForeignMeshComponents TArray<UMeshComponent>
ULandscapeSplinesComponent = {}

---@return TArray<USplineMeshComponent>
function ULandscapeSplinesComponent:GetSplineMeshComponents() end


---@class ULandscapeSubsystem : UWorldSubsystem
ULandscapeSubsystem = {}


---@class ULandscapeWeightmapUsage : UObject
---@field ChannelUsage ULandscapeComponent
---@field LayerGuid FGuid
ULandscapeWeightmapUsage = {}



---@class UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput
---@field GrassTypes TArray<FGrassInput>
UMaterialExpressionLandscapeGrassOutput = {}



---@class UMaterialExpressionLandscapeLayerBlend : UMaterialExpression
---@field Layers TArray<FLayerBlendInput>
---@field ExpressionGUID FGuid
UMaterialExpressionLandscapeLayerBlend = {}



---@class UMaterialExpressionLandscapeLayerCoords : UMaterialExpression
---@field MappingType ETerrainCoordMappingType
---@field CustomUVType ELandscapeCustomizedCoordType
---@field MappingScale float
---@field MappingRotation float
---@field MappingPanU float
---@field MappingPanV float
UMaterialExpressionLandscapeLayerCoords = {}



---@class UMaterialExpressionLandscapeLayerSample : UMaterialExpression
---@field ParameterName FName
---@field PreviewWeight float
---@field ExpressionGUID FGuid
UMaterialExpressionLandscapeLayerSample = {}



---@class UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression
---@field LayerUsed FExpressionInput
---@field LayerNotUsed FExpressionInput
---@field ParameterName FName
---@field PreviewUsed boolean
---@field ExpressionGUID FGuid
UMaterialExpressionLandscapeLayerSwitch = {}



---@class UMaterialExpressionLandscapeLayerWeight : UMaterialExpression
---@field Base FExpressionInput
---@field Layer FExpressionInput
---@field ParameterName FName
---@field PreviewWeight float
---@field ConstBase FVector
---@field ExpressionGUID FGuid
UMaterialExpressionLandscapeLayerWeight = {}



---@class UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression
---@field ExpressionGUID FGuid
UMaterialExpressionLandscapeVisibilityMask = {}



