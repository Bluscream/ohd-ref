---@meta

---@class ANiagaraActor : AActor
---@field NiagaraComponent UNiagaraComponent
---@field bDestroyOnSystemFinish boolean
ANiagaraActor = {}

---@param bShouldDestroyOnSystemFinish boolean
function ANiagaraActor:SetDestroyOnSystemFinish(bShouldDestroyOnSystemFinish) end
---@param FinishedComponent UNiagaraComponent
function ANiagaraActor:OnNiagaraSystemFinished(FinishedComponent) end


---@class ANiagaraPreviewBase : AActor
ANiagaraPreviewBase = {}

---@param InSystem UNiagaraSystem
function ANiagaraPreviewBase:SetSystem(InSystem) end
---@param InXAxisText FText
---@param InYAxisText FText
function ANiagaraPreviewBase:SetLabelText(InXAxisText, InYAxisText) end


---@class ANiagaraPreviewGrid : AActor
---@field System UNiagaraSystem
---@field ResetMode ENiagaraPreviewGridResetMode
---@field PreviewAxisX UNiagaraPreviewAxis
---@field PreviewAxisY UNiagaraPreviewAxis
---@field PreviewClass TSubclassOf<ANiagaraPreviewBase>
---@field SpacingX float
---@field SpacingY float
---@field NumX int32
---@field NumY int32
---@field PreviewComponents TArray<UChildActorComponent>
ANiagaraPreviewGrid = {}

---@param bPaused boolean
function ANiagaraPreviewGrid:SetPaused(bPaused) end
---@param OutPreviews TArray<UNiagaraComponent>
function ANiagaraPreviewGrid:GetPreviews(OutPreviews) end
function ANiagaraPreviewGrid:DeactivatePreviews() end
---@param bReset boolean
function ANiagaraPreviewGrid:ActivatePreviews(bReset) end


---@class FBasicParticleData
---@field Position FVector
---@field Size float
---@field Velocity FVector
FBasicParticleData = {}



---@class FEmitterCompiledScriptPair
FEmitterCompiledScriptPair = {}


---@class FMeshTriCoordinate
---@field Tri int32
---@field BaryCoord FVector
FMeshTriCoordinate = {}



---@class FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
---@field BoolChannel FMovieSceneBoolChannel
FMovieSceneNiagaraBoolParameterSectionTemplate = {}



---@class FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
---@field RedChannel FMovieSceneFloatChannel
---@field GreenChannel FMovieSceneFloatChannel
---@field BlueChannel FMovieSceneFloatChannel
---@field AlphaChannel FMovieSceneFloatChannel
FMovieSceneNiagaraColorParameterSectionTemplate = {}



---@class FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
---@field FloatChannel FMovieSceneFloatChannel
FMovieSceneNiagaraFloatParameterSectionTemplate = {}



---@class FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
---@field IntegerChannel FMovieSceneIntegerChannel
FMovieSceneNiagaraIntegerParameterSectionTemplate = {}



---@class FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate
---@field Parameter FNiagaraVariable
FMovieSceneNiagaraParameterSectionTemplate = {}



---@class FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation
---@field SpawnSectionStartFrame FFrameNumber
---@field SpawnSectionEndFrame FFrameNumber
---@field SpawnSectionStartBehavior ENiagaraSystemSpawnSectionStartBehavior
---@field SpawnSectionEvaluateBehavior ENiagaraSystemSpawnSectionEvaluateBehavior
---@field SpawnSectionEndBehavior ENiagaraSystemSpawnSectionEndBehavior
---@field AgeUpdateMode ENiagaraAgeUpdateMode
FMovieSceneNiagaraSystemTrackImplementation = {}



---@class FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate
FMovieSceneNiagaraSystemTrackTemplate = {}


---@class FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
---@field VectorChannels FMovieSceneFloatChannel
---@field ChannelsUsed int32
FMovieSceneNiagaraVectorParameterSectionTemplate = {}



---@class FNCPool
---@field FreeElements TArray<FNCPoolElement>
---@field InUseComponents_Auto TArray<UNiagaraComponent>
---@field InUseComponents_Manual TArray<UNiagaraComponent>
FNCPool = {}



---@class FNCPoolElement
---@field Component UNiagaraComponent
FNCPoolElement = {}



---@class FNDIStaticMeshSectionFilter
---@field AllowedMaterialSlots TArray<int32>
FNDIStaticMeshSectionFilter = {}



---@class FNiagaraBool
---@field Value int32
FNiagaraBool = {}



---@class FNiagaraBoundParameter
---@field Parameter FNiagaraVariable
---@field SrcOffset int32
---@field DestOffset int32
FNiagaraBoundParameter = {}



---@class FNiagaraCollisionEventPayload
---@field CollisionPos FVector
---@field CollisionNormal FVector
---@field CollisionVelocity FVector
---@field ParticleIndex int32
---@field PhysicalMaterialIndex int32
FNiagaraCollisionEventPayload = {}



---@class FNiagaraCompileHashVisitorDebugInfo
---@field Object FString
---@field PropertyKeys TArray<FString>
---@field PropertyValues TArray<FString>
FNiagaraCompileHashVisitorDebugInfo = {}



---@class FNiagaraDataSetCompiledData
---@field Variables TArray<FNiagaraVariable>
---@field VariableLayouts TArray<FNiagaraVariableLayoutInfo>
---@field TotalFloatComponents uint32
---@field TotalInt32Components uint32
---@field bRequiresPersistentIDs boolean
---@field ID FNiagaraDataSetID
---@field SimTarget ENiagaraSimTarget
FNiagaraDataSetCompiledData = {}



---@class FNiagaraDataSetID
---@field Name FName
---@field Type ENiagaraDataSetType
FNiagaraDataSetID = {}



---@class FNiagaraDataSetProperties
---@field ID FNiagaraDataSetID
---@field Variables TArray<FNiagaraVariable>
FNiagaraDataSetProperties = {}



---@class FNiagaraDetailsLevelScaleOverrides
---@field Low float
---@field Medium float
---@field High float
---@field Epic float
---@field Cine float
FNiagaraDetailsLevelScaleOverrides = {}



---@class FNiagaraDeviceProfileStateEntry
---@field ProfileName FName
---@field QualityLevelMask uint32
---@field SetQualityLevelMask uint32
FNiagaraDeviceProfileStateEntry = {}



---@class FNiagaraEmitterCompiledData
---@field SpawnAttributes TArray<FName>
---@field EmitterSpawnIntervalVar FNiagaraVariable
---@field EmitterInterpSpawnStartDTVar FNiagaraVariable
---@field EmitterSpawnGroupVar FNiagaraVariable
---@field EmitterAgeVar FNiagaraVariable
---@field EmitterRandomSeedVar FNiagaraVariable
---@field EmitterTotalSpawnedParticlesVar FNiagaraVariable
---@field DataSetCompiledData FNiagaraDataSetCompiledData
FNiagaraEmitterCompiledData = {}



---@class FNiagaraEmitterHandle
---@field ID FGuid
---@field IdName FName
---@field bIsEnabled boolean
---@field Name FName
---@field Instance UNiagaraEmitter
FNiagaraEmitterHandle = {}



---@class FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings
---@field bOverrideSpawnCountScale boolean
FNiagaraEmitterScalabilityOverride = {}



---@class FNiagaraEmitterScalabilityOverrides
---@field Overrides TArray<FNiagaraEmitterScalabilityOverride>
FNiagaraEmitterScalabilityOverrides = {}



---@class FNiagaraEmitterScalabilitySettings
---@field Platforms FNiagaraPlatformSet
---@field bScaleSpawnCount boolean
---@field SpawnCountScale float
FNiagaraEmitterScalabilitySettings = {}



---@class FNiagaraEmitterScalabilitySettingsArray
---@field Settings TArray<FNiagaraEmitterScalabilitySettings>
FNiagaraEmitterScalabilitySettingsArray = {}



---@class FNiagaraEmitterScriptProperties
---@field Script UNiagaraScript
---@field EventReceivers TArray<FNiagaraEventReceiverProperties>
---@field EventGenerators TArray<FNiagaraEventGeneratorProperties>
FNiagaraEmitterScriptProperties = {}



---@class FNiagaraEventGeneratorProperties
---@field MaxEventsPerFrame int32
---@field ID FName
---@field DataSetCompiledData FNiagaraDataSetCompiledData
FNiagaraEventGeneratorProperties = {}



---@class FNiagaraEventReceiverProperties
---@field Name FName
---@field SourceEventGenerator FName
---@field SourceEmitter FName
FNiagaraEventReceiverProperties = {}



---@class FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties
---@field ExecutionMode EScriptExecutionMode
---@field SpawnNumber uint32
---@field MaxEventsPerFrame uint32
---@field SourceEmitterID FGuid
---@field SourceEventName FName
---@field bRandomSpawnNumber boolean
---@field MinSpawnNumber uint32
FNiagaraEventScriptProperties = {}



---@class FNiagaraFloat
---@field Value float
FNiagaraFloat = {}



---@class FNiagaraFunctionSignature
---@field Name FName
---@field Inputs TArray<FNiagaraVariable>
---@field Outputs TArray<FNiagaraVariable>
---@field OwnerName FName
---@field bRequiresContext boolean
---@field bMemberFunction boolean
---@field bExperimental boolean
---@field bSupportsCPU boolean
---@field bSupportsGPU boolean
---@field bWriteFunction boolean
---@field FunctionSpecifiers TMap<FName, FName>
FNiagaraFunctionSignature = {}



---@class FNiagaraGraphViewSettings
---@field Location FVector2D
---@field Zoom float
---@field bIsValid boolean
FNiagaraGraphViewSettings = {}



---@class FNiagaraID
---@field Index int32
---@field AcquireTag int32
FNiagaraID = {}



---@class FNiagaraInputConditionMetadata
---@field InputName FName
---@field TargetValues TArray<FString>
FNiagaraInputConditionMetadata = {}



---@class FNiagaraInt32
---@field Value int32
FNiagaraInt32 = {}



---@class FNiagaraMatrix
---@field Row0 FVector4
---@field Row1 FVector4
---@field Row2 FVector4
---@field Row3 FVector4
FNiagaraMatrix = {}



---@class FNiagaraMeshMaterialOverride
---@field ExplicitMat UMaterialInterface
---@field UserParamBinding FNiagaraUserParameterBinding
FNiagaraMeshMaterialOverride = {}



---@class FNiagaraModuleDependency
---@field ID FName
---@field Type ENiagaraModuleDependencyType
---@field ScriptConstraint ENiagaraModuleDependencyScriptConstraint
---@field Description FText
FNiagaraModuleDependency = {}



---@class FNiagaraNumeric
FNiagaraNumeric = {}


---@class FNiagaraParameterDataSetBinding
---@field ParameterOffset int32
---@field DataSetComponentOffset int32
FNiagaraParameterDataSetBinding = {}



---@class FNiagaraParameterDataSetBindingCollection
---@field FloatOffsets TArray<FNiagaraParameterDataSetBinding>
---@field Int32Offsets TArray<FNiagaraParameterDataSetBinding>
FNiagaraParameterDataSetBindingCollection = {}



---@class FNiagaraParameterMap
FNiagaraParameterMap = {}


---@class FNiagaraParameterScopeInfo
---@field Scope ENiagaraParameterScope
---@field NamespaceString FString
FNiagaraParameterScopeInfo = {}



---@class FNiagaraParameterStore
---@field Owner UObject
---@field SortedParameterOffsets TArray<FNiagaraVariableWithOffset>
---@field ParameterData TArray<uint8>
---@field DataInterfaces TArray<UNiagaraDataInterface>
---@field UObjects TArray<UObject>
FNiagaraParameterStore = {}



---@class FNiagaraParameters
---@field Parameters TArray<FNiagaraVariable>
FNiagaraParameters = {}



---@class FNiagaraPlatformSet
---@field QualityLevelMask int32
---@field DeviceProfileStates TArray<FNiagaraDeviceProfileStateEntry>
FNiagaraPlatformSet = {}



---@class FNiagaraPlatformSetConflictEntry
---@field ProfileName FName
---@field QualityLevelMask int32
FNiagaraPlatformSetConflictEntry = {}



---@class FNiagaraPlatformSetConflictInfo
---@field SetAIndex int32
---@field SetBIndex int32
---@field Conflicts TArray<FNiagaraPlatformSetConflictEntry>
FNiagaraPlatformSetConflictInfo = {}



---@class FNiagaraRandInfo
---@field Seed1 int32
---@field Seed2 int32
---@field Seed3 int32
FNiagaraRandInfo = {}



---@class FNiagaraScalabilityManager
---@field EffectType UNiagaraEffectType
---@field ManagedComponents TArray<UNiagaraComponent>
FNiagaraScalabilityManager = {}



---@class FNiagaraScriptDataInterfaceCompileInfo
---@field Name FName
---@field UserPtrIdx int32
---@field Type FNiagaraTypeDefinition
---@field RegisteredParameterMapRead FName
---@field RegisteredParameterMapWrite FName
---@field bIsPlaceholder boolean
FNiagaraScriptDataInterfaceCompileInfo = {}



---@class FNiagaraScriptDataInterfaceInfo
---@field DataInterface UNiagaraDataInterface
---@field Name FName
---@field UserPtrIdx int32
---@field Type FNiagaraTypeDefinition
---@field RegisteredParameterMapRead FName
---@field RegisteredParameterMapWrite FName
FNiagaraScriptDataInterfaceInfo = {}



---@class FNiagaraScriptDataUsageInfo
---@field bReadsAttributeData boolean
FNiagaraScriptDataUsageInfo = {}



---@class FNiagaraScriptExecutionPaddingInfo
---@field SrcOffset uint16
---@field DestOffset uint16
---@field SrcSize uint16
---@field DestSize uint16
FNiagaraScriptExecutionPaddingInfo = {}



---@class FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore
---@field ParameterSize int32
---@field PaddedParameterSize uint32
---@field PaddingInfo TArray<FNiagaraScriptExecutionPaddingInfo>
---@field bInitialized boolean
FNiagaraScriptExecutionParameterStore = {}



---@class FNiagaraScriptHighlight
---@field Color FLinearColor
---@field DisplayName FText
FNiagaraScriptHighlight = {}



---@class FNiagaraScriptVariableBinding
---@field Name FName
FNiagaraScriptVariableBinding = {}



---@class FNiagaraSpawnInfo
---@field Count int32
---@field InterpStartDt float
---@field IntervalDt float
---@field SpawnGroup int32
FNiagaraSpawnInfo = {}



---@class FNiagaraStatScope
---@field FullName FName
---@field FriendlyName FName
FNiagaraStatScope = {}



---@class FNiagaraSystemCompileRequest
---@field RootObjects TArray<UObject>
FNiagaraSystemCompileRequest = {}



---@class FNiagaraSystemCompiledData
---@field InstanceParamStore FNiagaraParameterStore
---@field DataSetCompiledData FNiagaraDataSetCompiledData
---@field SpawnInstanceParamsDataSetCompiledData FNiagaraDataSetCompiledData
---@field UpdateInstanceParamsDataSetCompiledData FNiagaraDataSetCompiledData
---@field SpawnInstanceGlobalBinding FNiagaraParameterDataSetBindingCollection
---@field SpawnInstanceSystemBinding FNiagaraParameterDataSetBindingCollection
---@field SpawnInstanceOwnerBinding FNiagaraParameterDataSetBindingCollection
---@field SpawnInstanceEmitterBindings TArray<FNiagaraParameterDataSetBindingCollection>
---@field UpdateInstanceGlobalBinding FNiagaraParameterDataSetBindingCollection
---@field UpdateInstanceSystemBinding FNiagaraParameterDataSetBindingCollection
---@field UpdateInstanceOwnerBinding FNiagaraParameterDataSetBindingCollection
---@field UpdateInstanceEmitterBindings TArray<FNiagaraParameterDataSetBindingCollection>
FNiagaraSystemCompiledData = {}



---@class FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings
---@field bOverrideDistanceSettings boolean
---@field bOverrideInstanceCountSettings boolean
---@field bOverrideTimeSinceRendererSettings boolean
FNiagaraSystemScalabilityOverride = {}



---@class FNiagaraSystemScalabilityOverrides
---@field Overrides TArray<FNiagaraSystemScalabilityOverride>
FNiagaraSystemScalabilityOverrides = {}



---@class FNiagaraSystemScalabilitySettings
---@field Platforms FNiagaraPlatformSet
---@field bCullByDistance boolean
---@field bCullMaxInstanceCount boolean
---@field bCullByMaxTimeWithoutRender boolean
---@field MaxDistance float
---@field MaxInstances float
---@field MaxTimeWithoutRender float
FNiagaraSystemScalabilitySettings = {}



---@class FNiagaraSystemScalabilitySettingsArray
---@field Settings TArray<FNiagaraSystemScalabilitySettings>
FNiagaraSystemScalabilitySettingsArray = {}



---@class FNiagaraSystemUpdateContext
---@field ComponentsToReset TArray<UNiagaraComponent>
---@field ComponentsToReInit TArray<UNiagaraComponent>
---@field SystemSimsToDestroy TArray<UNiagaraSystem>
FNiagaraSystemUpdateContext = {}



---@class FNiagaraTestStruct
---@field Vector1 FVector
---@field Vector2 FVector
---@field InnerStruct1 FNiagaraTestStructInner
---@field InnerStruct2 FNiagaraTestStructInner
FNiagaraTestStruct = {}



---@class FNiagaraTestStructInner
---@field InnerVector1 FVector
---@field InnerVector2 FVector
FNiagaraTestStructInner = {}



---@class FNiagaraTypeDefinition
---@field ClassStructOrEnum UObject
---@field UnderlyingType uint16
FNiagaraTypeDefinition = {}



---@class FNiagaraTypeLayoutInfo
---@field FloatComponentByteOffsets TArray<uint32>
---@field FloatComponentRegisterOffsets TArray<uint32>
---@field Int32ComponentByteOffsets TArray<uint32>
---@field Int32ComponentRegisterOffsets TArray<uint32>
FNiagaraTypeLayoutInfo = {}



---@class FNiagaraUserParameterBinding
---@field Parameter FNiagaraVariable
FNiagaraUserParameterBinding = {}



---@class FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore
---@field UserParameterRedirects TMap<FNiagaraVariable, FNiagaraVariable>
FNiagaraUserRedirectionParameterStore = {}



---@class FNiagaraVMExecutableData
---@field ByteCode TArray<uint8>
---@field OptimizedByteCode TArray<uint8>
---@field NumTempRegisters int32
---@field NumUserPtrs int32
---@field Parameters FNiagaraParameters
---@field InternalParameters FNiagaraParameters
---@field DataSetToParameters TMap<FName, FNiagaraParameters>
---@field Attributes TArray<FNiagaraVariable>
---@field DataUsage FNiagaraScriptDataUsageInfo
---@field DataInterfaceInfo TArray<FNiagaraScriptDataInterfaceCompileInfo>
---@field CalledVMExternalFunctions TArray<FVMExternalFunctionBindingInfo>
---@field ReadDataSets TArray<FNiagaraDataSetID>
---@field WriteDataSets TArray<FNiagaraDataSetProperties>
---@field StatScopes TArray<FNiagaraStatScope>
---@field DIParamInfo TArray<FNiagaraDataInterfaceGPUParamInfo>
---@field LastCompileStatus ENiagaraScriptCompileStatus
---@field SimulationStageMetaData TArray<FSimulationStageMetaData>
FNiagaraVMExecutableData = {}



---@class FNiagaraVMExecutableDataId
---@field CompilerVersionID FGuid
---@field ScriptUsageType ENiagaraScriptUsage
---@field ScriptUsageTypeID FGuid
---@field bUsesRapidIterationParams boolean
---@field bInterpolatedSpawn boolean
---@field bRequiresPersistentIDs boolean
---@field BaseScriptID FGuid
---@field BaseScriptCompileHash FNiagaraCompileHash
FNiagaraVMExecutableDataId = {}



---@class FNiagaraVariable : FNiagaraVariableBase
---@field VarData TArray<uint8>
FNiagaraVariable = {}



---@class FNiagaraVariableAttributeBinding
---@field BoundVariable FNiagaraVariable
---@field DataSetVariable FNiagaraVariable
---@field DefaultValueIfNonExistent FNiagaraVariable
FNiagaraVariableAttributeBinding = {}



---@class FNiagaraVariableBase
---@field Name FName
---@field TypeDef FNiagaraTypeDefinition
FNiagaraVariableBase = {}



---@class FNiagaraVariableDataInterfaceBinding
---@field BoundVariable FNiagaraVariable
FNiagaraVariableDataInterfaceBinding = {}



---@class FNiagaraVariableInfo
---@field Variable FNiagaraVariable
---@field Definition FText
---@field DataInterface UNiagaraDataInterface
FNiagaraVariableInfo = {}



---@class FNiagaraVariableLayoutInfo
---@field FloatComponentStart uint32
---@field Int32ComponentStart uint32
---@field LayoutInfo FNiagaraTypeLayoutInfo
FNiagaraVariableLayoutInfo = {}



---@class FNiagaraVariableMetaData
---@field Description FText
---@field CategoryName FText
---@field bAdvancedDisplay boolean
---@field EditorSortPriority int32
---@field bInlineEditConditionToggle boolean
---@field EditCondition FNiagaraInputConditionMetadata
---@field VisibleCondition FNiagaraInputConditionMetadata
---@field PropertyMetaData TMap<FName, FString>
---@field ScopeName FName
---@field Usage ENiagaraScriptParameterUsage
---@field bIsStaticSwitch boolean
---@field StaticSwitchDefaultValue int32
---@field bAddedToNodeGraphDeepCopy boolean
---@field bOutputIsPersistent boolean
---@field CachedNamespacelessVariableName FName
---@field bCreatedInSystemEditor boolean
---@field bUseLegacyNameString boolean
FNiagaraVariableMetaData = {}



---@class FNiagaraVariableWithOffset : FNiagaraVariableBase
---@field Offset int32
FNiagaraVariableWithOffset = {}



---@class FNiagaraVariant
---@field Object UObject
---@field DataInterface UNiagaraDataInterface
---@field Bytes TArray<uint8>
---@field CurrentMode ENiagaraVariantMode
FNiagaraVariant = {}



---@class FNiagaraWorldManagerTickFunction : FTickFunction
FNiagaraWorldManagerTickFunction = {}


---@class FSimulationStageMetaData
---@field IterationSource FName
---@field bSpawnOnly boolean
---@field bWritesParticles boolean
---@field OutputDestinations TArray<FName>
---@field MinStage int32
---@field MaxStage int32
FSimulationStageMetaData = {}



---@class FVMExternalFunctionBindingInfo
---@field Name FName
---@field OwnerName FName
---@field InputParamLocations TArray<boolean>
---@field NumOutputs int32
---@field FunctionSpecifiers TArray<FVMFunctionSpecifier>
FVMExternalFunctionBindingInfo = {}



---@class FVMFunctionSpecifier
---@field Key FName
---@field Value FName
FVMFunctionSpecifier = {}



---@class INiagaraParticleCallbackHandler : IInterface
INiagaraParticleCallbackHandler = {}

---@param Data TArray<FBasicParticleData>
---@param NiagaraSystem UNiagaraSystem
function INiagaraParticleCallbackHandler:ReceiveParticleData(Data, NiagaraSystem) end


---@class UMovieSceneNiagaraBoolParameterTrack : UMovieSceneNiagaraParameterTrack
UMovieSceneNiagaraBoolParameterTrack = {}


---@class UMovieSceneNiagaraColorParameterTrack : UMovieSceneNiagaraParameterTrack
UMovieSceneNiagaraColorParameterTrack = {}


---@class UMovieSceneNiagaraFloatParameterTrack : UMovieSceneNiagaraParameterTrack
UMovieSceneNiagaraFloatParameterTrack = {}


---@class UMovieSceneNiagaraIntegerParameterTrack : UMovieSceneNiagaraParameterTrack
UMovieSceneNiagaraIntegerParameterTrack = {}


---@class UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack
---@field Parameter FNiagaraVariable
UMovieSceneNiagaraParameterTrack = {}



---@class UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection
---@field SectionStartBehavior ENiagaraSystemSpawnSectionStartBehavior
---@field SectionEvaluateBehavior ENiagaraSystemSpawnSectionEvaluateBehavior
---@field SectionEndBehavior ENiagaraSystemSpawnSectionEndBehavior
---@field AgeUpdateMode ENiagaraAgeUpdateMode
UMovieSceneNiagaraSystemSpawnSection = {}



---@class UMovieSceneNiagaraSystemTrack : UMovieSceneNiagaraTrack
UMovieSceneNiagaraSystemTrack = {}


---@class UMovieSceneNiagaraTrack : UMovieSceneNameableTrack
---@field Sections TArray<UMovieSceneSection>
UMovieSceneNiagaraTrack = {}



---@class UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack
---@field ChannelsUsed int32
UMovieSceneNiagaraVectorParameterTrack = {}



---@class UNiagaraComponent : UFXSystemComponent
---@field Asset UNiagaraSystem
---@field TickBehavior ENiagaraTickBehavior
---@field OverrideParameters FNiagaraUserRedirectionParameterStore
---@field bForceSolo boolean
---@field bAutoDestroy boolean
---@field bRenderingEnabled boolean
---@field bAutoManageAttachment boolean
---@field bAutoAttachWeldSimulatedBodies boolean
---@field MaxTimeBeforeForceUpdateTransform float
---@field OnSystemFinished FNiagaraComponentOnSystemFinished
---@field AutoAttachParent TWeakObjectPtr<USceneComponent>
---@field AutoAttachSocketName FName
---@field AutoAttachLocationRule EAttachmentRule
---@field AutoAttachRotationRule EAttachmentRule
---@field AutoAttachScaleRule EAttachmentRule
UNiagaraComponent = {}

---@param InVariableName FName
---@param InValue FVector4
function UNiagaraComponent:SetVariableVec4(InVariableName, InValue) end
---@param InVariableName FName
---@param InValue FVector
function UNiagaraComponent:SetVariableVec3(InVariableName, InValue) end
---@param InVariableName FName
---@param InValue FVector2D
function UNiagaraComponent:SetVariableVec2(InVariableName, InValue) end
---@param InVariableName FName
---@param InValue FQuat
function UNiagaraComponent:SetVariableQuat(InVariableName, InValue) end
---@param InVariableName FName
---@param Object UObject
function UNiagaraComponent:SetVariableObject(InVariableName, Object) end
---@param InVariableName FName
---@param Object UMaterialInterface
function UNiagaraComponent:SetVariableMaterial(InVariableName, Object) end
---@param InVariableName FName
---@param InValue FLinearColor
function UNiagaraComponent:SetVariableLinearColor(InVariableName, InValue) end
---@param InVariableName FName
---@param InValue int32
function UNiagaraComponent:SetVariableInt(InVariableName, InValue) end
---@param InVariableName FName
---@param InValue float
function UNiagaraComponent:SetVariableFloat(InVariableName, InValue) end
---@param InVariableName FName
---@param InValue boolean
function UNiagaraComponent:SetVariableBool(InVariableName, InValue) end
---@param InVariableName FName
---@param Actor AActor
function UNiagaraComponent:SetVariableActor(InVariableName, Actor) end
---@param InSeekDelta float
function UNiagaraComponent:SetSeekDelta(InSeekDelta) end
---@param bInRenderingEnabled boolean
function UNiagaraComponent:SetRenderingEnabled(bInRenderingEnabled) end
---@param bEnablePreviewLODDistance boolean
---@param PreviewLODDistance float
function UNiagaraComponent:SetPreviewLODDistance(bEnablePreviewLODDistance, PreviewLODDistance) end
---@param bInPaused boolean
function UNiagaraComponent:SetPaused(bInPaused) end
---@param InVariableName FString
---@param InValue FVector4
function UNiagaraComponent:SetNiagaraVariableVec4(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FVector
function UNiagaraComponent:SetNiagaraVariableVec3(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FVector2D
function UNiagaraComponent:SetNiagaraVariableVec2(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FQuat
function UNiagaraComponent:SetNiagaraVariableQuat(InVariableName, InValue) end
---@param InVariableName FString
---@param Object UObject
function UNiagaraComponent:SetNiagaraVariableObject(InVariableName, Object) end
---@param InVariableName FString
---@param InValue FLinearColor
function UNiagaraComponent:SetNiagaraVariableLinearColor(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue int32
function UNiagaraComponent:SetNiagaraVariableInt(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue float
function UNiagaraComponent:SetNiagaraVariableFloat(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue boolean
function UNiagaraComponent:SetNiagaraVariableBool(InVariableName, InValue) end
---@param InVariableName FString
---@param Actor AActor
function UNiagaraComponent:SetNiagaraVariableActor(InVariableName, Actor) end
---@param InMaxTime float
function UNiagaraComponent:SetMaxSimTime(InMaxTime) end
---@param bInForceSolo boolean
function UNiagaraComponent:SetForceSolo(bInForceSolo) end
---@param InDesiredAge float
function UNiagaraComponent:SetDesiredAge(InDesiredAge) end
---@param bInCanRenderWhileSeeking boolean
function UNiagaraComponent:SetCanRenderWhileSeeking(bInCanRenderWhileSeeking) end
---@param bInAutoDestroy boolean
function UNiagaraComponent:SetAutoDestroy(bInAutoDestroy) end
---@param InAsset UNiagaraSystem
function UNiagaraComponent:SetAsset(InAsset) end
---@param bAllow boolean
function UNiagaraComponent:SetAllowScalability(bAllow) end
---@param InAgeUpdateMode ENiagaraAgeUpdateMode
function UNiagaraComponent:SetAgeUpdateMode(InAgeUpdateMode) end
---@param InDesiredAge float
function UNiagaraComponent:SeekToDesiredAge(InDesiredAge) end
function UNiagaraComponent:ResetSystem() end
function UNiagaraComponent:ReinitializeSystem() end
---@return boolean
function UNiagaraComponent:IsPaused() end
---@return float
function UNiagaraComponent:GetSeekDelta() end
---@return boolean
function UNiagaraComponent:GetPreviewLODDistanceEnabled() end
---@return int32
function UNiagaraComponent:GetPreviewLODDistance() end
---@param InEmitterName FString
---@param InValueName FString
---@return TArray<FVector>
function UNiagaraComponent:GetNiagaraParticleValueVec3_DebugOnly(InEmitterName, InValueName) end
---@param InEmitterName FString
---@param InValueName FString
---@return TArray<float>
function UNiagaraComponent:GetNiagaraParticleValues_DebugOnly(InEmitterName, InValueName) end
---@param InEmitterName FString
---@return TArray<FVector>
function UNiagaraComponent:GetNiagaraParticlePositions_DebugOnly(InEmitterName) end
---@return float
function UNiagaraComponent:GetMaxSimTime() end
---@return boolean
function UNiagaraComponent:GetForceSolo() end
---@return float
function UNiagaraComponent:GetDesiredAge() end
---@param Name FString
---@return UNiagaraDataInterface
function UNiagaraComponent:GetDataInterface(Name) end
---@return UNiagaraSystem
function UNiagaraComponent:GetAsset() end
---@return ENiagaraAgeUpdateMode
function UNiagaraComponent:GetAgeUpdateMode() end
---@param SimulateTime float
---@param TickDeltaSeconds float
function UNiagaraComponent:AdvanceSimulationByTime(SimulateTime, TickDeltaSeconds) end
---@param TickCount int32
---@param TickDeltaSeconds float
function UNiagaraComponent:AdvanceSimulation(TickCount, TickDeltaSeconds) end


---@class UNiagaraComponentPool : UObject
---@field WorldParticleSystemPools TMap<UNiagaraSystem, FNCPool>
UNiagaraComponentPool = {}



---@class UNiagaraConvertInPlaceUtilityBase : UObject
UNiagaraConvertInPlaceUtilityBase = {}


---@class UNiagaraDataInterface : UNiagaraDataInterfaceBase
UNiagaraDataInterface = {}


---@class UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface
---@field Submix USoundSubmix
---@field Resolution int32
---@field ScopeInMilliseconds float
UNiagaraDataInterfaceAudioOscilloscope = {}



---@class UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix
---@field Resolution int32
---@field MinimumFrequency float
---@field MaximumFrequency float
---@field NoiseFloorDb float
UNiagaraDataInterfaceAudioSpectrum = {}



---@class UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface
---@field Submix USoundSubmix
UNiagaraDataInterfaceAudioSubmix = {}



---@class UNiagaraDataInterfaceCamera : UNiagaraDataInterface
---@field PlayerControllerIndex int32
UNiagaraDataInterfaceCamera = {}



---@class UNiagaraDataInterfaceCollisionQuery : UNiagaraDataInterface
UNiagaraDataInterfaceCollisionQuery = {}


---@class UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase
---@field RedCurve FRichCurve
---@field GreenCurve FRichCurve
---@field BlueCurve FRichCurve
---@field AlphaCurve FRichCurve
UNiagaraDataInterfaceColorCurve = {}



---@class UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface
---@field Seed uint32
UNiagaraDataInterfaceCurlNoise = {}



---@class UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase
---@field Curve FRichCurve
UNiagaraDataInterfaceCurve = {}



---@class UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface
---@field ShaderLUT TArray<float>
---@field LUTMinTime float
---@field LUTMaxTime float
---@field LUTInvTimeRange float
---@field LUTNumSamplesMinusOne float
---@field bUseLUT boolean
UNiagaraDataInterfaceCurveBase = {}



---@class UNiagaraDataInterfaceExport : UNiagaraDataInterface
---@field CallbackHandlerParameter FNiagaraUserParameterBinding
UNiagaraDataInterfaceExport = {}



---@class UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase
---@field NumCellsX int32
---@field NumCellsY int32
---@field NumCellsMaxAxis int32
---@field NumAttributes int32
---@field SetGridFromMaxAxis boolean
---@field WorldBBoxSize FVector2D
UNiagaraDataInterfaceGrid2D = {}



---@class UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D
UNiagaraDataInterfaceGrid2DCollection = {}

---@param Component UNiagaraComponent
---@param SizeX int32
---@param SizeY int32
function UNiagaraDataInterfaceGrid2DCollection:GetTextureSize(Component, SizeX, SizeY) end
---@param Component UNiagaraComponent
---@param SizeX int32
---@param SizeY int32
function UNiagaraDataInterfaceGrid2DCollection:GetRawTextureSize(Component, SizeX, SizeY) end
---@param Component UNiagaraComponent
---@param Dest UTextureRenderTarget2D
---@param AttributeIndex int32
---@return boolean
function UNiagaraDataInterfaceGrid2DCollection:FillTexture2D(Component, Dest, AttributeIndex) end
---@param Component UNiagaraComponent
---@param Dest UTextureRenderTarget2D
---@param TilesX int32
---@param TilesY int32
---@return boolean
function UNiagaraDataInterfaceGrid2DCollection:FillRawTexture2D(Component, Dest, TilesX, TilesY) end


---@class UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase
---@field NumVoxels FIntVector
---@field VoxelSize float
---@field SetGridFromVoxelSize boolean
---@field WorldBBoxSize FVector
UNiagaraDataInterfaceGrid3D = {}



---@class UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D
---@field MaxNeighborsPerVoxel uint32
UNiagaraDataInterfaceNeighborGrid3D = {}



---@class UNiagaraDataInterfaceOcclusion : UNiagaraDataInterface
UNiagaraDataInterfaceOcclusion = {}


---@class UNiagaraDataInterfaceParticleRead : UNiagaraDataInterface
---@field EmitterName FString
UNiagaraDataInterfaceParticleRead = {}



---@class UNiagaraDataInterfaceRWBase : UNiagaraDataInterface
---@field OutputShaderStages TSet<int32>
---@field IterationShaderStages TSet<int32>
UNiagaraDataInterfaceRWBase = {}



---@class UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterface
UNiagaraDataInterfaceSimpleCounter = {}


---@class UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface
---@field Source AActor
---@field MeshUserParameter FNiagaraUserParameterBinding
---@field SourceComponent USkeletalMeshComponent
---@field SkinningMode ENDISkeletalMesh_SkinningMode
---@field SamplingRegions TArray<FName>
---@field WholeMeshLOD int32
---@field FilteredBones TArray<FName>
---@field FilteredSockets TArray<FName>
---@field ExcludeBoneName FName
---@field bExcludeBone boolean
UNiagaraDataInterfaceSkeletalMesh = {}



---@class UNiagaraDataInterfaceSpline : UNiagaraDataInterface
---@field Source AActor
UNiagaraDataInterfaceSpline = {}



---@class UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface
---@field DefaultMesh UStaticMesh
---@field Source AActor
---@field SourceComponent UStaticMeshComponent
---@field SectionFilter FNDIStaticMeshSectionFilter
UNiagaraDataInterfaceStaticMesh = {}



---@class UNiagaraDataInterfaceTexture : UNiagaraDataInterface
---@field Texture UTexture
UNiagaraDataInterfaceTexture = {}



---@class UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase
---@field XCurve FRichCurve
---@field YCurve FRichCurve
UNiagaraDataInterfaceVector2DCurve = {}



---@class UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase
---@field XCurve FRichCurve
---@field YCurve FRichCurve
---@field ZCurve FRichCurve
---@field WCurve FRichCurve
UNiagaraDataInterfaceVector4Curve = {}



---@class UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase
---@field XCurve FRichCurve
---@field YCurve FRichCurve
---@field ZCurve FRichCurve
UNiagaraDataInterfaceVectorCurve = {}



---@class UNiagaraDataInterfaceVectorField : UNiagaraDataInterface
---@field Field UVectorField
---@field bTileX boolean
---@field bTileY boolean
---@field bTileZ boolean
UNiagaraDataInterfaceVectorField = {}



---@class UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface
---@field Texture UVolumeTexture
UNiagaraDataInterfaceVolumeTexture = {}



---@class UNiagaraEditorDataBase : UObject
UNiagaraEditorDataBase = {}


---@class UNiagaraEffectType : UObject
---@field UpdateFrequency ENiagaraScalabilityUpdateFrequency
---@field CullReaction ENiagaraCullReaction
---@field DetailLevelScalabilitySettings TArray<FNiagaraSystemScalabilitySettings>
---@field SystemScalabilitySettings FNiagaraSystemScalabilitySettingsArray
---@field EmitterScalabilitySettings FNiagaraEmitterScalabilitySettingsArray
UNiagaraEffectType = {}



---@class UNiagaraEmitter : UObject
---@field bLocalSpace boolean
---@field bDeterminism boolean
---@field RandomSeed int32
---@field AllocationMode EParticleAllocationMode
---@field PreAllocationCount int32
---@field UpdateScriptProps FNiagaraEmitterScriptProperties
---@field SpawnScriptProps FNiagaraEmitterScriptProperties
---@field EmitterSpawnScriptProps FNiagaraEmitterScriptProperties
---@field EmitterUpdateScriptProps FNiagaraEmitterScriptProperties
---@field SimTarget ENiagaraSimTarget
---@field FixedBounds FBox
---@field MinDetailLevel int32
---@field MaxDetailLevel int32
---@field GlobalSpawnCountScaleOverrides FNiagaraDetailsLevelScaleOverrides
---@field Platforms FNiagaraPlatformSet
---@field ScalabilityOverrides FNiagaraEmitterScalabilityOverrides
---@field bInterpolatedSpawning boolean
---@field bFixedBounds boolean
---@field bUseMinDetailLevel boolean
---@field bUseMaxDetailLevel boolean
---@field bOverrideGlobalSpawnCountScale boolean
---@field bRequiresPersistentIDs boolean
---@field MaxDeltaTimePerTick float
---@field DefaultShaderStageIndex uint32
---@field MaxUpdateIterations uint32
---@field SpawnStages TSet<uint32>
---@field bSimulationStagesEnabled boolean
---@field bDeprecatedShaderStagesEnabled boolean
---@field bLimitDeltaTime boolean
---@field UniqueEmitterName FString
---@field RendererProperties TArray<UNiagaraRendererProperties>
---@field EventHandlerScriptProps TArray<FNiagaraEventScriptProperties>
---@field SimulationStages TArray<UNiagaraSimulationStageBase>
---@field GPUComputeScript UNiagaraScript
---@field SharedEventGeneratorIds TArray<FName>
UNiagaraEmitter = {}



---@class UNiagaraEventReceiverEmitterAction : UObject
UNiagaraEventReceiverEmitterAction = {}


---@class UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction
---@field NumParticles uint32
UNiagaraEventReceiverEmitterAction_SpawnParticles = {}



---@class UNiagaraFunctionLibrary : UBlueprintFunctionLibrary
UNiagaraFunctionLibrary = {}

---@param SystemTemplate UNiagaraSystem
---@param AttachToComponent USceneComponent
---@param AttachPointName FName
---@param Location FVector
---@param Rotation FRotator
---@param LocationType EAttachLocation::Type
---@param bAutoDestroy boolean
---@param bAutoActivate boolean
---@param PoolingMethod ENCPoolMethod
---@param bPreCullCheck boolean
---@return UNiagaraComponent
function UNiagaraFunctionLibrary:SpawnSystemAttached(SystemTemplate, AttachToComponent, AttachPointName, Location, Rotation, LocationType, bAutoDestroy, bAutoActivate, PoolingMethod, bPreCullCheck) end
---@param WorldContextObject UObject
---@param SystemTemplate UNiagaraSystem
---@param Location FVector
---@param Rotation FRotator
---@param Scale FVector
---@param bAutoDestroy boolean
---@param bAutoActivate boolean
---@param PoolingMethod ENCPoolMethod
---@param bPreCullCheck boolean
---@return UNiagaraComponent
function UNiagaraFunctionLibrary:SpawnSystemAtLocation(WorldContextObject, SystemTemplate, Location, Rotation, Scale, bAutoDestroy, bAutoActivate, PoolingMethod, bPreCullCheck) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param Texture UVolumeTexture
function UNiagaraFunctionLibrary:SetVolumeTextureObject(NiagaraSystem, OverrideName, Texture) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param Texture UTexture
function UNiagaraFunctionLibrary:SetTextureObject(NiagaraSystem, OverrideName, Texture) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param StaticMeshComponent UStaticMeshComponent
function UNiagaraFunctionLibrary:OverrideSystemUserVariableStaticMeshComponent(NiagaraSystem, OverrideName, StaticMeshComponent) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param StaticMesh UStaticMesh
function UNiagaraFunctionLibrary:OverrideSystemUserVariableStaticMesh(NiagaraSystem, OverrideName, StaticMesh) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param SkeletalMeshComponent USkeletalMeshComponent
function UNiagaraFunctionLibrary:OverrideSystemUserVariableSkeletalMeshComponent(NiagaraSystem, OverrideName, SkeletalMeshComponent) end
---@param WorldContextObject UObject
---@param Collection UNiagaraParameterCollection
---@return UNiagaraParameterCollectionInstance
function UNiagaraFunctionLibrary:GetNiagaraParameterCollection(WorldContextObject, Collection) end


---@class UNiagaraLightRendererProperties : UNiagaraRendererProperties
---@field bUseInverseSquaredFalloff boolean
---@field bAffectsTranslucency boolean
---@field bOverrideRenderingEnabled boolean
---@field RadiusScale float
---@field ColorAdd FVector
---@field LightRenderingEnabledBinding FNiagaraVariableAttributeBinding
---@field LightExponentBinding FNiagaraVariableAttributeBinding
---@field PositionBinding FNiagaraVariableAttributeBinding
---@field ColorBinding FNiagaraVariableAttributeBinding
---@field RadiusBinding FNiagaraVariableAttributeBinding
---@field VolumetricScatteringBinding FNiagaraVariableAttributeBinding
UNiagaraLightRendererProperties = {}



---@class UNiagaraMeshRendererProperties : UNiagaraRendererProperties
---@field ParticleMesh UStaticMesh
---@field SortMode ENiagaraSortMode
---@field bOverrideMaterials boolean
---@field bSortOnlyWhenTranslucent boolean
---@field OverrideMaterials TArray<FNiagaraMeshMaterialOverride>
---@field SubImageSize FVector2D
---@field bSubImageBlend boolean
---@field FacingMode ENiagaraMeshFacingMode
---@field bLockedAxisEnable boolean
---@field LockedAxis FVector
---@field LockedAxisSpace ENiagaraMeshLockedAxisSpace
---@field PositionBinding FNiagaraVariableAttributeBinding
---@field ColorBinding FNiagaraVariableAttributeBinding
---@field VelocityBinding FNiagaraVariableAttributeBinding
---@field MeshOrientationBinding FNiagaraVariableAttributeBinding
---@field ScaleBinding FNiagaraVariableAttributeBinding
---@field SubImageIndexBinding FNiagaraVariableAttributeBinding
---@field DynamicMaterialBinding FNiagaraVariableAttributeBinding
---@field DynamicMaterial1Binding FNiagaraVariableAttributeBinding
---@field DynamicMaterial2Binding FNiagaraVariableAttributeBinding
---@field DynamicMaterial3Binding FNiagaraVariableAttributeBinding
---@field MaterialRandomBinding FNiagaraVariableAttributeBinding
---@field CustomSortingBinding FNiagaraVariableAttributeBinding
---@field NormalizedAgeBinding FNiagaraVariableAttributeBinding
---@field CameraOffsetBinding FNiagaraVariableAttributeBinding
UNiagaraMeshRendererProperties = {}



---@class UNiagaraParameterCollection : UObject
---@field Namespace FName
---@field Parameters TArray<FNiagaraVariable>
---@field DefaultInstance UNiagaraParameterCollectionInstance
---@field CompileId FGuid
UNiagaraParameterCollection = {}



---@class UNiagaraParameterCollectionInstance : UObject
---@field Collection UNiagaraParameterCollection
---@field OverridenParameters TArray<FNiagaraVariable>
---@field ParameterStorage FNiagaraParameterStore
UNiagaraParameterCollectionInstance = {}

---@param InVariableName FString
---@param InValue FVector
function UNiagaraParameterCollectionInstance:SetVectorParameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FVector4
function UNiagaraParameterCollectionInstance:SetVector4Parameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FVector2D
function UNiagaraParameterCollectionInstance:SetVector2DParameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FQuat
function UNiagaraParameterCollectionInstance:SetQuatParameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue int32
function UNiagaraParameterCollectionInstance:SetIntParameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue float
function UNiagaraParameterCollectionInstance:SetFloatParameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FLinearColor
function UNiagaraParameterCollectionInstance:SetColorParameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue boolean
function UNiagaraParameterCollectionInstance:SetBoolParameter(InVariableName, InValue) end
---@param InVariableName FString
---@return FVector
function UNiagaraParameterCollectionInstance:GetVectorParameter(InVariableName) end
---@param InVariableName FString
---@return FVector4
function UNiagaraParameterCollectionInstance:GetVector4Parameter(InVariableName) end
---@param InVariableName FString
---@return FVector2D
function UNiagaraParameterCollectionInstance:GetVector2DParameter(InVariableName) end
---@param InVariableName FString
---@return FQuat
function UNiagaraParameterCollectionInstance:GetQuatParameter(InVariableName) end
---@param InVariableName FString
---@return int32
function UNiagaraParameterCollectionInstance:GetIntParameter(InVariableName) end
---@param InVariableName FString
---@return float
function UNiagaraParameterCollectionInstance:GetFloatParameter(InVariableName) end
---@param InVariableName FString
---@return FLinearColor
function UNiagaraParameterCollectionInstance:GetColorParameter(InVariableName) end
---@param InVariableName FString
---@return boolean
function UNiagaraParameterCollectionInstance:GetBoolParameter(InVariableName) end


---@class UNiagaraPrecompileContainer : UObject
---@field Scripts TArray<UNiagaraScript>
---@field System UNiagaraSystem
UNiagaraPrecompileContainer = {}



---@class UNiagaraPreviewAxis : UObject
UNiagaraPreviewAxis = {}

---@return int32
function UNiagaraPreviewAxis:Num() end
---@param PreviewComponent UNiagaraComponent
---@param PreviewIndex int32
---@param bIsXAxis boolean
---@param OutLabelText FString
function UNiagaraPreviewAxis:ApplyToPreview(PreviewComponent, PreviewIndex, bIsXAxis, OutLabelText) end


---@class UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis
---@field Param FName
---@field Count int32
UNiagaraPreviewAxis_InterpParamBase = {}



---@class UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase
---@field Min float
---@field Max float
UNiagaraPreviewAxis_InterpParamFloat = {}



---@class UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase
---@field Min int32
---@field Max int32
UNiagaraPreviewAxis_InterpParamInt32 = {}



---@class UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase
---@field Min FLinearColor
---@field Max FLinearColor
UNiagaraPreviewAxis_InterpParamLinearColor = {}



---@class UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase
---@field Min FVector
---@field Max FVector
UNiagaraPreviewAxis_InterpParamVector = {}



---@class UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase
---@field Min FVector2D
---@field Max FVector2D
UNiagaraPreviewAxis_InterpParamVector2D = {}



---@class UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase
---@field Min FVector4
---@field Max FVector4
UNiagaraPreviewAxis_InterpParamVector4 = {}



---@class UNiagaraRendererProperties : UNiagaraMergeable
---@field SortOrderHint int32
---@field bIsEnabled boolean
---@field bMotionBlurEnabled boolean
UNiagaraRendererProperties = {}



---@class UNiagaraRibbonRendererProperties : UNiagaraRendererProperties
---@field Material UMaterialInterface
---@field MaterialUserParamBinding FNiagaraUserParameterBinding
---@field FacingMode ENiagaraRibbonFacingMode
---@field UV0TilingDistance float
---@field UV0Scale FVector2D
---@field UV0Offset FVector2D
---@field UV0AgeOffsetMode ENiagaraRibbonAgeOffsetMode
---@field UV1TilingDistance float
---@field UV1Scale FVector2D
---@field UV1Offset FVector2D
---@field UV1AgeOffsetMode ENiagaraRibbonAgeOffsetMode
---@field DrawDirection ENiagaraRibbonDrawDirection
---@field CurveTension float
---@field TessellationMode ENiagaraRibbonTessellationMode
---@field TessellationFactor int32
---@field bUseConstantFactor boolean
---@field TessellationAngle float
---@field bScreenSpaceTessellation boolean
---@field PositionBinding FNiagaraVariableAttributeBinding
---@field ColorBinding FNiagaraVariableAttributeBinding
---@field VelocityBinding FNiagaraVariableAttributeBinding
---@field NormalizedAgeBinding FNiagaraVariableAttributeBinding
---@field RibbonTwistBinding FNiagaraVariableAttributeBinding
---@field RibbonWidthBinding FNiagaraVariableAttributeBinding
---@field RibbonFacingBinding FNiagaraVariableAttributeBinding
---@field RibbonIdBinding FNiagaraVariableAttributeBinding
---@field RibbonLinkOrderBinding FNiagaraVariableAttributeBinding
---@field MaterialRandomBinding FNiagaraVariableAttributeBinding
---@field DynamicMaterialBinding FNiagaraVariableAttributeBinding
---@field DynamicMaterial1Binding FNiagaraVariableAttributeBinding
---@field DynamicMaterial2Binding FNiagaraVariableAttributeBinding
---@field DynamicMaterial3Binding FNiagaraVariableAttributeBinding
UNiagaraRibbonRendererProperties = {}



---@class UNiagaraScript : UObject
---@field Usage ENiagaraScriptUsage
---@field UsageIndex int32
---@field UsageId FGuid
---@field RapidIterationParameters FNiagaraParameterStore
---@field ScriptExecutionParamStore FNiagaraScriptExecutionParameterStore
---@field ScriptExecutionBoundParameters TArray<FNiagaraBoundParameter>
---@field CachedScriptVMId FNiagaraVMExecutableDataId
---@field CachedScriptVM FNiagaraVMExecutableData
---@field CachedParameterCollectionReferences TArray<UNiagaraParameterCollection>
---@field CachedDefaultDataInterfaces TArray<FNiagaraScriptDataInterfaceInfo>
UNiagaraScript = {}

function UNiagaraScript:RaiseOnGPUCompilationComplete() end


---@class UNiagaraScriptSourceBase : UObject
UNiagaraScriptSourceBase = {}


---@class UNiagaraSettings : UDeveloperSettings
---@field AdditionalParameterTypes TArray<FSoftObjectPath>
---@field AdditionalPayloadTypes TArray<FSoftObjectPath>
---@field AdditionalParameterEnums TArray<FSoftObjectPath>
---@field DefaultEffectType FSoftObjectPath
---@field QualityLevels TArray<FText>
---@field DefaultEffectTypePtr UNiagaraEffectType
UNiagaraSettings = {}



---@class UNiagaraSimulationStageBase : UNiagaraMergeable
---@field Script UNiagaraScript
---@field SimulationStageName FName
UNiagaraSimulationStageBase = {}



---@class UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase
---@field IterationSource ENiagaraIterationSource
---@field Iterations int32
---@field bSpawnOnly boolean
---@field DataInterface FNiagaraVariableDataInterfaceBinding
UNiagaraSimulationStageGeneric = {}



---@class UNiagaraSpriteRendererProperties : UNiagaraRendererProperties
---@field Material UMaterialInterface
---@field MaterialUserParamBinding FNiagaraUserParameterBinding
---@field Alignment ENiagaraSpriteAlignment
---@field FacingMode ENiagaraSpriteFacingMode
---@field PivotInUVSpace FVector2D
---@field SortMode ENiagaraSortMode
---@field SubImageSize FVector2D
---@field bSubImageBlend boolean
---@field bRemoveHMDRollInVR boolean
---@field bSortOnlyWhenTranslucent boolean
---@field MinFacingCameraBlendDistance float
---@field MaxFacingCameraBlendDistance float
---@field PositionBinding FNiagaraVariableAttributeBinding
---@field ColorBinding FNiagaraVariableAttributeBinding
---@field VelocityBinding FNiagaraVariableAttributeBinding
---@field SpriteRotationBinding FNiagaraVariableAttributeBinding
---@field SpriteSizeBinding FNiagaraVariableAttributeBinding
---@field SpriteFacingBinding FNiagaraVariableAttributeBinding
---@field SpriteAlignmentBinding FNiagaraVariableAttributeBinding
---@field SubImageIndexBinding FNiagaraVariableAttributeBinding
---@field DynamicMaterialBinding FNiagaraVariableAttributeBinding
---@field DynamicMaterial1Binding FNiagaraVariableAttributeBinding
---@field DynamicMaterial2Binding FNiagaraVariableAttributeBinding
---@field DynamicMaterial3Binding FNiagaraVariableAttributeBinding
---@field CameraOffsetBinding FNiagaraVariableAttributeBinding
---@field UVScaleBinding FNiagaraVariableAttributeBinding
---@field MaterialRandomBinding FNiagaraVariableAttributeBinding
---@field CustomSortingBinding FNiagaraVariableAttributeBinding
---@field NormalizedAgeBinding FNiagaraVariableAttributeBinding
UNiagaraSpriteRendererProperties = {}



---@class UNiagaraSystem : UFXSystemAsset
---@field bDumpDebugSystemInfo boolean
---@field bDumpDebugEmitterInfo boolean
---@field bFixedBounds boolean
---@field EffectType UNiagaraEffectType
---@field bOverrideScalabilitySettings boolean
---@field ScalabilityOverrides TArray<FNiagaraSystemScalabilityOverride>
---@field SystemScalabilityOverrides FNiagaraSystemScalabilityOverrides
---@field EmitterHandles TArray<FNiagaraEmitterHandle>
---@field ParameterCollectionOverrides TArray<UNiagaraParameterCollectionInstance>
---@field SystemSpawnScript UNiagaraScript
---@field SystemUpdateScript UNiagaraScript
---@field SystemCompiledData FNiagaraSystemCompiledData
---@field ExposedParameters FNiagaraUserRedirectionParameterStore
---@field FixedBounds FBox
---@field bAutoDeactivate boolean
---@field WarmupTime float
---@field WarmupTickCount int32
---@field WarmupTickDelta float
---@field bHasSystemScriptDIsWithPerInstanceData boolean
---@field UserDINamesReadInSystemScripts TArray<FName>
UNiagaraSystem = {}



