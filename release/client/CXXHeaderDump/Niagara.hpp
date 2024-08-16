#ifndef UE4SS_SDK_Niagara_HPP
#define UE4SS_SDK_Niagara_HPP

#include "Niagara_enums.hpp"

struct FBasicParticleData
{
    FVector Position;                                                                 // 0x0000 (size: 0xC)
    float Size;                                                                       // 0x000C (size: 0x4)
    FVector Velocity;                                                                 // 0x0010 (size: 0xC)

}; // Size: 0x1C

struct FEmitterCompiledScriptPair
{
    char padding_0[0x78];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x78

struct FMeshTriCoordinate
{
    int32 Tri;                                                                        // 0x0000 (size: 0x4)
    FVector BaryCoord;                                                                // 0x0004 (size: 0xC)

}; // Size: 0x10

struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneBoolChannel BoolChannel;                                               // 0x0048 (size: 0x90)

}; // Size: 0xD8

struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneFloatChannel RedChannel;                                               // 0x0048 (size: 0xA0)
    FMovieSceneFloatChannel GreenChannel;                                             // 0x00E8 (size: 0xA0)
    FMovieSceneFloatChannel BlueChannel;                                              // 0x0188 (size: 0xA0)
    FMovieSceneFloatChannel AlphaChannel;                                             // 0x0228 (size: 0xA0)

}; // Size: 0x2C8

struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneFloatChannel FloatChannel;                                             // 0x0048 (size: 0xA0)

}; // Size: 0xE8

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneIntegerChannel IntegerChannel;                                         // 0x0048 (size: 0x90)

}; // Size: 0xD8

struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
    FNiagaraVariable Parameter;                                                       // 0x0020 (size: 0x28)

}; // Size: 0x48

struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{
    FFrameNumber SpawnSectionStartFrame;                                              // 0x0010 (size: 0x4)
    FFrameNumber SpawnSectionEndFrame;                                                // 0x0014 (size: 0x4)
    ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior;                // 0x0018 (size: 0x4)
    ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior;          // 0x001C (size: 0x4)
    ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior;                    // 0x0020 (size: 0x4)
    ENiagaraAgeUpdateMode AgeUpdateMode;                                              // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{
    char padding_0[0x20];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x20

struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneFloatChannel VectorChannels;                                           // 0x0048 (size: 0x280)
    int32 ChannelsUsed;                                                               // 0x02C8 (size: 0x4)

}; // Size: 0x2D0

struct FNCPool
{
    TArray<FNCPoolElement> FreeElements;                                              // 0x0000 (size: 0x10)
    TArray<class UNiagaraComponent*> InUseComponents_Auto;                            // 0x0010 (size: 0x10)
    TArray<class UNiagaraComponent*> InUseComponents_Manual;                          // 0x0020 (size: 0x10)

}; // Size: 0x38

struct FNCPoolElement
{
    class UNiagaraComponent* Component;                                               // 0x0000 (size: 0x8)

}; // Size: 0x10

struct FNDIStaticMeshSectionFilter
{
    TArray<int32> AllowedMaterialSlots;                                               // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNiagaraBool
{
    int32 Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FNiagaraBoundParameter
{
    FNiagaraVariable Parameter;                                                       // 0x0000 (size: 0x28)
    int32 SrcOffset;                                                                  // 0x0028 (size: 0x4)
    int32 DestOffset;                                                                 // 0x002C (size: 0x4)

}; // Size: 0x30

struct FNiagaraCollisionEventPayload
{
    FVector CollisionPos;                                                             // 0x0000 (size: 0xC)
    FVector CollisionNormal;                                                          // 0x000C (size: 0xC)
    FVector CollisionVelocity;                                                        // 0x0018 (size: 0xC)
    int32 ParticleIndex;                                                              // 0x0024 (size: 0x4)
    int32 PhysicalMaterialIndex;                                                      // 0x0028 (size: 0x4)

}; // Size: 0x2C

struct FNiagaraCompileHashVisitorDebugInfo
{
    FString Object;                                                                   // 0x0000 (size: 0x10)
    TArray<FString> PropertyKeys;                                                     // 0x0010 (size: 0x10)
    TArray<FString> PropertyValues;                                                   // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FNiagaraDataSetCompiledData
{
    TArray<FNiagaraVariable> Variables;                                               // 0x0000 (size: 0x10)
    TArray<FNiagaraVariableLayoutInfo> VariableLayouts;                               // 0x0010 (size: 0x10)
    uint32 TotalFloatComponents;                                                      // 0x0020 (size: 0x4)
    uint32 TotalInt32Components;                                                      // 0x0024 (size: 0x4)
    uint8 bRequiresPersistentIDs;                                                     // 0x0028 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0029 (size: 0x3)
    FNiagaraDataSetID ID;                                                             // 0x002C (size: 0xC)
    ENiagaraSimTarget SimTarget;                                                      // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FNiagaraDataSetID
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    ENiagaraDataSetType Type;                                                         // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FNiagaraDataSetProperties
{
    FNiagaraDataSetID ID;                                                             // 0x0000 (size: 0xC)
    char padding_0[0x4];                                                              // 0x000C (size: 0x4)
    TArray<FNiagaraVariable> Variables;                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FNiagaraDetailsLevelScaleOverrides
{
    float Low;                                                                        // 0x0000 (size: 0x4)
    float Medium;                                                                     // 0x0004 (size: 0x4)
    float High;                                                                       // 0x0008 (size: 0x4)
    float Epic;                                                                       // 0x000C (size: 0x4)
    float Cine;                                                                       // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FNiagaraDeviceProfileStateEntry
{
    FName ProfileName;                                                                // 0x0000 (size: 0x8)
    uint32 QualityLevelMask;                                                          // 0x0008 (size: 0x4)
    uint32 SetQualityLevelMask;                                                       // 0x000C (size: 0x4)

}; // Size: 0x10

struct FNiagaraEmitterCompiledData
{
    TArray<FName> SpawnAttributes;                                                    // 0x0000 (size: 0x10)
    FNiagaraVariable EmitterSpawnIntervalVar;                                         // 0x0010 (size: 0x28)
    FNiagaraVariable EmitterInterpSpawnStartDTVar;                                    // 0x0038 (size: 0x28)
    FNiagaraVariable EmitterSpawnGroupVar;                                            // 0x0060 (size: 0x28)
    FNiagaraVariable EmitterAgeVar;                                                   // 0x0088 (size: 0x28)
    FNiagaraVariable EmitterRandomSeedVar;                                            // 0x00B0 (size: 0x28)
    FNiagaraVariable EmitterTotalSpawnedParticlesVar;                                 // 0x00D8 (size: 0x28)
    FNiagaraDataSetCompiledData DataSetCompiledData;                                  // 0x0100 (size: 0x40)

}; // Size: 0x140

struct FNiagaraEmitterHandle
{
    FGuid ID;                                                                         // 0x0000 (size: 0x10)
    FName IdName;                                                                     // 0x0010 (size: 0x8)
    bool bIsEnabled;                                                                  // 0x0018 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0019 (size: 0x3)
    FName Name;                                                                       // 0x001C (size: 0x8)
    char padding_1[0x4];                                                              // 0x0024 (size: 0x4)
    class UNiagaraEmitter* Instance;                                                  // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{
    uint8 bOverrideSpawnCountScale;                                                   // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FNiagaraEmitterScalabilityOverrides
{
    TArray<FNiagaraEmitterScalabilityOverride> Overrides;                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNiagaraEmitterScalabilitySettings
{
    FNiagaraPlatformSet Platforms;                                                    // 0x0000 (size: 0x20)
    uint8 bScaleSpawnCount;                                                           // 0x0020 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0021 (size: 0x3)
    float SpawnCountScale;                                                            // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FNiagaraEmitterScalabilitySettingsArray
{
    TArray<FNiagaraEmitterScalabilitySettings> Settings;                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNiagaraEmitterScriptProperties
{
    class UNiagaraScript* Script;                                                     // 0x0000 (size: 0x8)
    TArray<FNiagaraEventReceiverProperties> EventReceivers;                           // 0x0008 (size: 0x10)
    TArray<FNiagaraEventGeneratorProperties> EventGenerators;                         // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FNiagaraEventGeneratorProperties
{
    int32 MaxEventsPerFrame;                                                          // 0x0000 (size: 0x4)
    FName ID;                                                                         // 0x0004 (size: 0x8)
    char padding_0[0x4];                                                              // 0x000C (size: 0x4)
    FNiagaraDataSetCompiledData DataSetCompiledData;                                  // 0x0010 (size: 0x40)

}; // Size: 0x50

struct FNiagaraEventReceiverProperties
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FName SourceEventGenerator;                                                       // 0x0008 (size: 0x8)
    FName SourceEmitter;                                                              // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
    EScriptExecutionMode ExecutionMode;                                               // 0x0028 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0029 (size: 0x3)
    uint32 SpawnNumber;                                                               // 0x002C (size: 0x4)
    uint32 MaxEventsPerFrame;                                                         // 0x0030 (size: 0x4)
    FGuid SourceEmitterID;                                                            // 0x0034 (size: 0x10)
    FName SourceEventName;                                                            // 0x0044 (size: 0x8)
    bool bRandomSpawnNumber;                                                          // 0x004C (size: 0x1)
    char padding_1[0x3];                                                              // 0x004D (size: 0x3)
    uint32 MinSpawnNumber;                                                            // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FNiagaraFloat
{
    float Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FNiagaraFunctionSignature
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    TArray<FNiagaraVariable> Inputs;                                                  // 0x0008 (size: 0x10)
    TArray<FNiagaraVariable> Outputs;                                                 // 0x0018 (size: 0x10)
    FName OwnerName;                                                                  // 0x0028 (size: 0x8)
    uint8 bRequiresContext;                                                           // 0x0030 (size: 0x1)
    uint8 bMemberFunction;                                                            // 0x0030 (size: 0x1)
    uint8 bExperimental;                                                              // 0x0030 (size: 0x1)
    uint8 bSupportsCPU;                                                               // 0x0030 (size: 0x1)
    uint8 bSupportsGPU;                                                               // 0x0030 (size: 0x1)
    uint8 bWriteFunction;                                                             // 0x0030 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0031 (size: 0x7)
    TMap<class FName, class FName> FunctionSpecifiers;                                // 0x0038 (size: 0x50)

}; // Size: 0x88

struct FNiagaraGraphViewSettings
{
    FVector2D Location;                                                               // 0x0000 (size: 0x8)
    float Zoom;                                                                       // 0x0008 (size: 0x4)
    bool bIsValid;                                                                    // 0x000C (size: 0x1)

}; // Size: 0x10

struct FNiagaraID
{
    int32 Index;                                                                      // 0x0000 (size: 0x4)
    int32 AcquireTag;                                                                 // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FNiagaraInputConditionMetadata
{
    FName InputName;                                                                  // 0x0000 (size: 0x8)
    TArray<FString> TargetValues;                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FNiagaraInt32
{
    int32 Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FNiagaraMatrix
{
    FVector4 Row0;                                                                    // 0x0000 (size: 0x10)
    FVector4 Row1;                                                                    // 0x0010 (size: 0x10)
    FVector4 Row2;                                                                    // 0x0020 (size: 0x10)
    FVector4 Row3;                                                                    // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FNiagaraMeshMaterialOverride
{
    class UMaterialInterface* ExplicitMat;                                            // 0x0000 (size: 0x8)
    FNiagaraUserParameterBinding UserParamBinding;                                    // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FNiagaraModuleDependency
{
    FName ID;                                                                         // 0x0000 (size: 0x8)
    ENiagaraModuleDependencyType Type;                                                // 0x0008 (size: 0x1)
    ENiagaraModuleDependencyScriptConstraint ScriptConstraint;                        // 0x0009 (size: 0x1)
    char padding_0[0x6];                                                              // 0x000A (size: 0x6)
    FText Description;                                                                // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FNiagaraNumeric
{
    char padding_0[0x1];                                                              // 0x0000 (size: 0x0)
}; // Size: 0x1

struct FNiagaraParameterDataSetBinding
{
    int32 ParameterOffset;                                                            // 0x0000 (size: 0x4)
    int32 DataSetComponentOffset;                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FNiagaraParameterDataSetBindingCollection
{
    TArray<FNiagaraParameterDataSetBinding> FloatOffsets;                             // 0x0000 (size: 0x10)
    TArray<FNiagaraParameterDataSetBinding> Int32Offsets;                             // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FNiagaraParameterMap
{
    char padding_0[0x1];                                                              // 0x0000 (size: 0x0)
}; // Size: 0x1

struct FNiagaraParameterScopeInfo
{
    ENiagaraParameterScope Scope;                                                     // 0x0000 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0004 (size: 0x4)
    FString NamespaceString;                                                          // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FNiagaraParameterStore
{
    class UObject* Owner;                                                             // 0x0008 (size: 0x8)
    TArray<FNiagaraVariableWithOffset> SortedParameterOffsets;                        // 0x0010 (size: 0x10)
    TArray<uint8> ParameterData;                                                      // 0x0020 (size: 0x10)
    TArray<class UNiagaraDataInterface*> DataInterfaces;                              // 0x0030 (size: 0x10)
    TArray<class UObject*> UObjects;                                                  // 0x0040 (size: 0x10)

}; // Size: 0xB8

struct FNiagaraParameters
{
    TArray<FNiagaraVariable> Parameters;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNiagaraPlatformSet
{
    int32 QualityLevelMask;                                                           // 0x0000 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0004 (size: 0x4)
    TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates;                      // 0x0008 (size: 0x10)

}; // Size: 0x20

struct FNiagaraPlatformSetConflictEntry
{
    FName ProfileName;                                                                // 0x0000 (size: 0x8)
    int32 QualityLevelMask;                                                           // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FNiagaraPlatformSetConflictInfo
{
    int32 SetAIndex;                                                                  // 0x0000 (size: 0x4)
    int32 SetBIndex;                                                                  // 0x0004 (size: 0x4)
    TArray<FNiagaraPlatformSetConflictEntry> Conflicts;                               // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FNiagaraRandInfo
{
    int32 Seed1;                                                                      // 0x0000 (size: 0x4)
    int32 Seed2;                                                                      // 0x0004 (size: 0x4)
    int32 Seed3;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FNiagaraScalabilityManager
{
    class UNiagaraEffectType* EffectType;                                             // 0x0000 (size: 0x8)
    TArray<class UNiagaraComponent*> ManagedComponents;                               // 0x0008 (size: 0x10)

}; // Size: 0x40

struct FNiagaraScriptDataInterfaceCompileInfo
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    int32 UserPtrIdx;                                                                 // 0x0008 (size: 0x4)
    char padding_0[0x4];                                                              // 0x000C (size: 0x4)
    FNiagaraTypeDefinition Type;                                                      // 0x0010 (size: 0x10)
    FName RegisteredParameterMapRead;                                                 // 0x0020 (size: 0x8)
    FName RegisteredParameterMapWrite;                                                // 0x0028 (size: 0x8)
    bool bIsPlaceholder;                                                              // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FNiagaraScriptDataInterfaceInfo
{
    class UNiagaraDataInterface* DataInterface;                                       // 0x0000 (size: 0x8)
    FName Name;                                                                       // 0x0008 (size: 0x8)
    int32 UserPtrIdx;                                                                 // 0x0010 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0014 (size: 0x4)
    FNiagaraTypeDefinition Type;                                                      // 0x0018 (size: 0x10)
    FName RegisteredParameterMapRead;                                                 // 0x0028 (size: 0x8)
    FName RegisteredParameterMapWrite;                                                // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FNiagaraScriptDataUsageInfo
{
    bool bReadsAttributeData;                                                         // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FNiagaraScriptExecutionPaddingInfo
{
    uint16 SrcOffset;                                                                 // 0x0000 (size: 0x2)
    uint16 DestOffset;                                                                // 0x0002 (size: 0x2)
    uint16 SrcSize;                                                                   // 0x0004 (size: 0x2)
    uint16 DestSize;                                                                  // 0x0006 (size: 0x2)

}; // Size: 0x8

struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{
    int32 ParameterSize;                                                              // 0x00B8 (size: 0x4)
    uint32 PaddedParameterSize;                                                       // 0x00BC (size: 0x4)
    TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo;                           // 0x00C0 (size: 0x10)
    uint8 bInitialized;                                                               // 0x00D0 (size: 0x1)

}; // Size: 0xD8

struct FNiagaraScriptHighlight
{
    FLinearColor Color;                                                               // 0x0000 (size: 0x10)
    FText DisplayName;                                                                // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FNiagaraScriptVariableBinding
{
    FName Name;                                                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FNiagaraSpawnInfo
{
    int32 Count;                                                                      // 0x0000 (size: 0x4)
    float InterpStartDt;                                                              // 0x0004 (size: 0x4)
    float IntervalDt;                                                                 // 0x0008 (size: 0x4)
    int32 SpawnGroup;                                                                 // 0x000C (size: 0x4)

}; // Size: 0x10

struct FNiagaraStatScope
{
    FName FullName;                                                                   // 0x0000 (size: 0x8)
    FName FriendlyName;                                                               // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FNiagaraSystemCompileRequest
{
    TArray<class UObject*> RootObjects;                                               // 0x0008 (size: 0x10)

}; // Size: 0x80

struct FNiagaraSystemCompiledData
{
    FNiagaraParameterStore InstanceParamStore;                                        // 0x0000 (size: 0xB8)
    FNiagaraDataSetCompiledData DataSetCompiledData;                                  // 0x00B8 (size: 0x40)
    FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData;               // 0x00F8 (size: 0x40)
    FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData;              // 0x0138 (size: 0x40)
    FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;             // 0x0178 (size: 0x20)
    FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;             // 0x0198 (size: 0x20)
    FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;              // 0x01B8 (size: 0x20)
    TArray<FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;   // 0x01D8 (size: 0x10)
    FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;            // 0x01E8 (size: 0x20)
    FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;            // 0x0208 (size: 0x20)
    FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;             // 0x0228 (size: 0x20)
    TArray<FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;  // 0x0248 (size: 0x10)

}; // Size: 0x258

struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{
    uint8 bOverrideDistanceSettings;                                                  // 0x0030 (size: 0x1)
    uint8 bOverrideInstanceCountSettings;                                             // 0x0030 (size: 0x1)
    uint8 bOverrideTimeSinceRendererSettings;                                         // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FNiagaraSystemScalabilityOverrides
{
    TArray<FNiagaraSystemScalabilityOverride> Overrides;                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNiagaraSystemScalabilitySettings
{
    FNiagaraPlatformSet Platforms;                                                    // 0x0000 (size: 0x20)
    uint8 bCullByDistance;                                                            // 0x0020 (size: 0x1)
    uint8 bCullMaxInstanceCount;                                                      // 0x0020 (size: 0x1)
    uint8 bCullByMaxTimeWithoutRender;                                                // 0x0020 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0021 (size: 0x3)
    float MaxDistance;                                                                // 0x0024 (size: 0x4)
    float MaxInstances;                                                               // 0x0028 (size: 0x4)
    float MaxTimeWithoutRender;                                                       // 0x002C (size: 0x4)

}; // Size: 0x30

struct FNiagaraSystemScalabilitySettingsArray
{
    TArray<FNiagaraSystemScalabilitySettings> Settings;                               // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNiagaraSystemUpdateContext
{
    TArray<class UNiagaraComponent*> ComponentsToReset;                               // 0x0000 (size: 0x10)
    TArray<class UNiagaraComponent*> ComponentsToReInit;                              // 0x0010 (size: 0x10)
    TArray<class UNiagaraSystem*> SystemSimsToDestroy;                                // 0x0020 (size: 0x10)

}; // Size: 0x38

struct FNiagaraTestStruct
{
    FVector Vector1;                                                                  // 0x0000 (size: 0xC)
    FVector Vector2;                                                                  // 0x000C (size: 0xC)
    FNiagaraTestStructInner InnerStruct1;                                             // 0x0018 (size: 0x18)
    FNiagaraTestStructInner InnerStruct2;                                             // 0x0030 (size: 0x18)

}; // Size: 0x48

struct FNiagaraTestStructInner
{
    FVector InnerVector1;                                                             // 0x0000 (size: 0xC)
    FVector InnerVector2;                                                             // 0x000C (size: 0xC)

}; // Size: 0x18

struct FNiagaraTypeDefinition
{
    class UObject* ClassStructOrEnum;                                                 // 0x0000 (size: 0x8)
    uint16 UnderlyingType;                                                            // 0x0008 (size: 0x2)

}; // Size: 0x10

struct FNiagaraTypeLayoutInfo
{
    TArray<uint32> FloatComponentByteOffsets;                                         // 0x0000 (size: 0x10)
    TArray<uint32> FloatComponentRegisterOffsets;                                     // 0x0010 (size: 0x10)
    TArray<uint32> Int32ComponentByteOffsets;                                         // 0x0020 (size: 0x10)
    TArray<uint32> Int32ComponentRegisterOffsets;                                     // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FNiagaraUserParameterBinding
{
    FNiagaraVariable Parameter;                                                       // 0x0000 (size: 0x28)

}; // Size: 0x28

struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{
    TMap<class FNiagaraVariable, class FNiagaraVariable> UserParameterRedirects;      // 0x00B8 (size: 0x50)

}; // Size: 0x108

struct FNiagaraVMExecutableData
{
    TArray<uint8> ByteCode;                                                           // 0x0000 (size: 0x10)
    TArray<uint8> OptimizedByteCode;                                                  // 0x0010 (size: 0x10)
    int32 NumTempRegisters;                                                           // 0x0020 (size: 0x4)
    int32 NumUserPtrs;                                                                // 0x0024 (size: 0x4)
    FNiagaraParameters Parameters;                                                    // 0x0028 (size: 0x10)
    FNiagaraParameters InternalParameters;                                            // 0x0038 (size: 0x10)
    TMap<class FName, class FNiagaraParameters> DataSetToParameters;                  // 0x0048 (size: 0x50)
    TArray<FNiagaraVariable> Attributes;                                              // 0x0098 (size: 0x10)
    FNiagaraScriptDataUsageInfo DataUsage;                                            // 0x00A8 (size: 0x1)
    char padding_0[0x7];                                                              // 0x00A9 (size: 0x7)
    TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;                 // 0x00B0 (size: 0x10)
    TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;                 // 0x00C0 (size: 0x10)
    TArray<FNiagaraDataSetID> ReadDataSets;                                           // 0x00D0 (size: 0x10)
    TArray<FNiagaraDataSetProperties> WriteDataSets;                                  // 0x00E0 (size: 0x10)
    TArray<FNiagaraStatScope> StatScopes;                                             // 0x00F0 (size: 0x10)
    TArray<FNiagaraDataInterfaceGPUParamInfo> DIParamInfo;                            // 0x0100 (size: 0x10)
    ENiagaraScriptCompileStatus LastCompileStatus;                                    // 0x0110 (size: 0x1)
    char padding_1[0x7];                                                              // 0x0111 (size: 0x7)
    TArray<FSimulationStageMetaData> SimulationStageMetaData;                         // 0x0118 (size: 0x10)

}; // Size: 0x128

struct FNiagaraVMExecutableDataId
{
    FGuid CompilerVersionID;                                                          // 0x0000 (size: 0x10)
    ENiagaraScriptUsage ScriptUsageType;                                              // 0x0010 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0011 (size: 0x3)
    FGuid ScriptUsageTypeID;                                                          // 0x0014 (size: 0x10)
    uint8 bUsesRapidIterationParams;                                                  // 0x0024 (size: 0x1)
    uint8 bInterpolatedSpawn;                                                         // 0x0024 (size: 0x1)
    uint8 bRequiresPersistentIDs;                                                     // 0x0024 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0025 (size: 0x3)
    FGuid BaseScriptID;                                                               // 0x0028 (size: 0x10)
    FNiagaraCompileHash BaseScriptCompileHash;                                        // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FNiagaraVariable : public FNiagaraVariableBase
{
    TArray<uint8> VarData;                                                            // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FNiagaraVariableAttributeBinding
{
    FNiagaraVariable BoundVariable;                                                   // 0x0000 (size: 0x28)
    FNiagaraVariable DataSetVariable;                                                 // 0x0028 (size: 0x28)
    FNiagaraVariable DefaultValueIfNonExistent;                                       // 0x0050 (size: 0x28)

}; // Size: 0x78

struct FNiagaraVariableBase
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FNiagaraTypeDefinition TypeDef;                                                   // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FNiagaraVariableDataInterfaceBinding
{
    FNiagaraVariable BoundVariable;                                                   // 0x0000 (size: 0x28)

}; // Size: 0x28

struct FNiagaraVariableInfo
{
    FNiagaraVariable Variable;                                                        // 0x0000 (size: 0x28)
    FText Definition;                                                                 // 0x0028 (size: 0x18)
    class UNiagaraDataInterface* DataInterface;                                       // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FNiagaraVariableLayoutInfo
{
    uint32 FloatComponentStart;                                                       // 0x0000 (size: 0x4)
    uint32 Int32ComponentStart;                                                       // 0x0004 (size: 0x4)
    FNiagaraTypeLayoutInfo LayoutInfo;                                                // 0x0008 (size: 0x40)

}; // Size: 0x48

struct FNiagaraVariableMetaData
{
    FText Description;                                                                // 0x0000 (size: 0x18)
    FText CategoryName;                                                               // 0x0018 (size: 0x18)
    bool bAdvancedDisplay;                                                            // 0x0030 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0031 (size: 0x3)
    int32 EditorSortPriority;                                                         // 0x0034 (size: 0x4)
    bool bInlineEditConditionToggle;                                                  // 0x0038 (size: 0x1)
    char padding_1[0x7];                                                              // 0x0039 (size: 0x7)
    FNiagaraInputConditionMetadata EditCondition;                                     // 0x0040 (size: 0x18)
    FNiagaraInputConditionMetadata VisibleCondition;                                  // 0x0058 (size: 0x18)
    TMap<class FName, class FString> PropertyMetaData;                                // 0x0070 (size: 0x50)
    FName ScopeName;                                                                  // 0x00C0 (size: 0x8)
    ENiagaraScriptParameterUsage Usage;                                               // 0x00C8 (size: 0x4)
    bool bIsStaticSwitch;                                                             // 0x00CC (size: 0x1)
    char padding_2[0x3];                                                              // 0x00CD (size: 0x3)
    int32 StaticSwitchDefaultValue;                                                   // 0x00D0 (size: 0x4)
    bool bAddedToNodeGraphDeepCopy;                                                   // 0x00D4 (size: 0x1)
    bool bOutputIsPersistent;                                                         // 0x00D5 (size: 0x1)
    char padding_3[0x2];                                                              // 0x00D6 (size: 0x2)
    FName CachedNamespacelessVariableName;                                            // 0x00D8 (size: 0x8)
    bool bCreatedInSystemEditor;                                                      // 0x00E0 (size: 0x1)
    bool bUseLegacyNameString;                                                        // 0x00E1 (size: 0x1)

}; // Size: 0xE8

struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
{
    int32 Offset;                                                                     // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FNiagaraVariant
{
    class UObject* Object;                                                            // 0x0000 (size: 0x8)
    class UNiagaraDataInterface* DataInterface;                                       // 0x0008 (size: 0x8)
    TArray<uint8> Bytes;                                                              // 0x0010 (size: 0x10)
    ENiagaraVariantMode CurrentMode;                                                  // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FNiagaraWorldManagerTickFunction : public FTickFunction
{
    char padding_0[0x30];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x30

struct FSimulationStageMetaData
{
    FName IterationSource;                                                            // 0x0000 (size: 0x8)
    uint8 bSpawnOnly;                                                                 // 0x0008 (size: 0x1)
    uint8 bWritesParticles;                                                           // 0x0008 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0009 (size: 0x7)
    TArray<FName> OutputDestinations;                                                 // 0x0010 (size: 0x10)
    int32 MinStage;                                                                   // 0x0020 (size: 0x4)
    int32 MaxStage;                                                                   // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FVMExternalFunctionBindingInfo
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FName OwnerName;                                                                  // 0x0008 (size: 0x8)
    TArray<bool> InputParamLocations;                                                 // 0x0010 (size: 0x10)
    int32 NumOutputs;                                                                 // 0x0020 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0024 (size: 0x4)
    TArray<FVMFunctionSpecifier> FunctionSpecifiers;                                  // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FVMFunctionSpecifier
{
    FName Key;                                                                        // 0x0000 (size: 0x8)
    FName Value;                                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

class ANiagaraActor : public AActor
{
    class UNiagaraComponent* NiagaraComponent;                                        // 0x0220 (size: 0x8)
    uint8 bDestroyOnSystemFinish;                                                     // 0x0228 (size: 0x1)

    void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
    void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);
}; // Size: 0x230

class ANiagaraPreviewBase : public AActor
{
    char padding_0[0x220];                                                            // 0x0000 (size: 0x0)

    void SetSystem(class UNiagaraSystem* InSystem);
    void SetLabelText(const FText& InXAxisText, const FText& InYAxisText);
}; // Size: 0x220

class ANiagaraPreviewGrid : public AActor
{
    class UNiagaraSystem* System;                                                     // 0x0220 (size: 0x8)
    ENiagaraPreviewGridResetMode ResetMode;                                           // 0x0228 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0229 (size: 0x7)
    class UNiagaraPreviewAxis* PreviewAxisX;                                          // 0x0230 (size: 0x8)
    class UNiagaraPreviewAxis* PreviewAxisY;                                          // 0x0238 (size: 0x8)
    TSubclassOf<class ANiagaraPreviewBase> PreviewClass;                              // 0x0240 (size: 0x8)
    float SpacingX;                                                                   // 0x0248 (size: 0x4)
    float SpacingY;                                                                   // 0x024C (size: 0x4)
    int32 NumX;                                                                       // 0x0250 (size: 0x4)
    int32 NumY;                                                                       // 0x0254 (size: 0x4)
    TArray<class UChildActorComponent*> PreviewComponents;                            // 0x0258 (size: 0x10)

    void SetPaused(bool bPaused);
    void GetPreviews(TArray<class UNiagaraComponent*>& OutPreviews);
    void DeactivatePreviews();
    void ActivatePreviews(bool bReset);
}; // Size: 0x270

class INiagaraParticleCallbackHandler : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);
}; // Size: 0x28

class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
    char padding_0[0x90];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x90

class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
    char padding_0[0x90];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x90

class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
    char padding_0[0x90];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x90

class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
    char padding_0[0x90];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x90

class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
    FNiagaraVariable Parameter;                                                       // 0x0068 (size: 0x28)

}; // Size: 0x90

class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
    ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior;                     // 0x00E0 (size: 0x4)
    ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;               // 0x00E4 (size: 0x4)
    ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior;                         // 0x00E8 (size: 0x4)
    ENiagaraAgeUpdateMode AgeUpdateMode;                                              // 0x00EC (size: 0x1)

}; // Size: 0xF0

class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
    char padding_0[0x68];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x68

class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0058 (size: 0x10)

}; // Size: 0x68

class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
    int32 ChannelsUsed;                                                               // 0x0090 (size: 0x4)

}; // Size: 0x98

class UNiagaraComponent : public UFXSystemComponent
{
    class UNiagaraSystem* Asset;                                                      // 0x0408 (size: 0x8)
    ENiagaraTickBehavior TickBehavior;                                                // 0x0410 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0411 (size: 0x7)
    FNiagaraUserRedirectionParameterStore OverrideParameters;                         // 0x0418 (size: 0x108)
    uint8 bForceSolo;                                                                 // 0x0520 (size: 0x1)
    char padding_1[0x2B];                                                             // 0x0521 (size: 0x2B)
    uint8 bAutoDestroy;                                                               // 0x054C (size: 0x1)
    uint8 bRenderingEnabled;                                                          // 0x054C (size: 0x1)
    uint8 bAutoManageAttachment;                                                      // 0x054C (size: 0x1)
    uint8 bAutoAttachWeldSimulatedBodies;                                             // 0x054C (size: 0x1)
    char padding_2[0x3];                                                              // 0x054D (size: 0x3)
    float MaxTimeBeforeForceUpdateTransform;                                          // 0x0550 (size: 0x4)
    char padding_3[0x4];                                                              // 0x0554 (size: 0x4)
    FNiagaraComponentOnSystemFinished OnSystemFinished;                               // 0x0558 (size: 0x10)
    void OnNiagaraSystemFinished(class UNiagaraComponent* PSystem);
    TWeakObjectPtr<class USceneComponent> AutoAttachParent;                           // 0x0568 (size: 0x8)
    FName AutoAttachSocketName;                                                       // 0x0570 (size: 0x8)
    EAttachmentRule AutoAttachLocationRule;                                           // 0x0578 (size: 0x1)
    EAttachmentRule AutoAttachRotationRule;                                           // 0x0579 (size: 0x1)
    EAttachmentRule AutoAttachScaleRule;                                              // 0x057A (size: 0x1)

    void SetVariableVec4(FName InVariableName, const FVector4& InValue);
    void SetVariableVec3(FName InVariableName, FVector InValue);
    void SetVariableVec2(FName InVariableName, FVector2D InValue);
    void SetVariableQuat(FName InVariableName, const FQuat& InValue);
    void SetVariableObject(FName InVariableName, class UObject* Object);
    void SetVariableMaterial(FName InVariableName, class UMaterialInterface* Object);
    void SetVariableLinearColor(FName InVariableName, const FLinearColor& InValue);
    void SetVariableInt(FName InVariableName, int32 InValue);
    void SetVariableFloat(FName InVariableName, float InValue);
    void SetVariableBool(FName InVariableName, bool InValue);
    void SetVariableActor(FName InVariableName, class AActor* Actor);
    void SetSeekDelta(float InSeekDelta);
    void SetRenderingEnabled(bool bInRenderingEnabled);
    void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
    void SetPaused(bool bInPaused);
    void SetNiagaraVariableVec4(FString InVariableName, const FVector4& InValue);
    void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);
    void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);
    void SetNiagaraVariableQuat(FString InVariableName, const FQuat& InValue);
    void SetNiagaraVariableObject(FString InVariableName, class UObject* Object);
    void SetNiagaraVariableLinearColor(FString InVariableName, const FLinearColor& InValue);
    void SetNiagaraVariableInt(FString InVariableName, int32 InValue);
    void SetNiagaraVariableFloat(FString InVariableName, float InValue);
    void SetNiagaraVariableBool(FString InVariableName, bool InValue);
    void SetNiagaraVariableActor(FString InVariableName, class AActor* Actor);
    void SetMaxSimTime(float InMaxTime);
    void SetForceSolo(bool bInForceSolo);
    void SetDesiredAge(float InDesiredAge);
    void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
    void SetAutoDestroy(bool bInAutoDestroy);
    void SetAsset(class UNiagaraSystem* InAsset);
    void SetAllowScalability(bool bAllow);
    void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);
    void SeekToDesiredAge(float InDesiredAge);
    void ResetSystem();
    void ReinitializeSystem();
    bool IsPaused();
    float GetSeekDelta();
    bool GetPreviewLODDistanceEnabled();
    int32 GetPreviewLODDistance();
    TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);
    TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);
    TArray<FVector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);
    float GetMaxSimTime();
    bool GetForceSolo();
    float GetDesiredAge();
    class UNiagaraDataInterface* GetDataInterface(FString Name);
    class UNiagaraSystem* GetAsset();
    ENiagaraAgeUpdateMode GetAgeUpdateMode();
    void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
    void AdvanceSimulation(int32 TickCount, float TickDeltaSeconds);
}; // Size: 0x5C0

class UNiagaraComponentPool : public UObject
{
    TMap<class UNiagaraSystem*, class FNCPool> WorldParticleSystemPools;              // 0x0028 (size: 0x50)

}; // Size: 0x80

class UNiagaraConvertInPlaceUtilityBase : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
    char padding_0[0x30];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x30

class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{
    class USoundSubmix* Submix;                                                       // 0x0030 (size: 0x8)
    int32 Resolution;                                                                 // 0x0038 (size: 0x4)
    float ScopeInMilliseconds;                                                        // 0x003C (size: 0x4)

}; // Size: 0x40

class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{
    int32 Resolution;                                                                 // 0x0038 (size: 0x4)
    float MinimumFrequency;                                                           // 0x003C (size: 0x4)
    float MaximumFrequency;                                                           // 0x0040 (size: 0x4)
    float NoiseFloorDb;                                                               // 0x0044 (size: 0x4)

}; // Size: 0x48

class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{
    class USoundSubmix* Submix;                                                       // 0x0030 (size: 0x8)

}; // Size: 0x38

class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{
    int32 PlayerControllerIndex;                                                      // 0x0030 (size: 0x4)

}; // Size: 0x38

class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
    char padding_0[0x40];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x40

class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve RedCurve;                                                              // 0x0058 (size: 0x80)
    FRichCurve GreenCurve;                                                            // 0x00D8 (size: 0x80)
    FRichCurve BlueCurve;                                                             // 0x0158 (size: 0x80)
    FRichCurve AlphaCurve;                                                            // 0x01D8 (size: 0x80)

}; // Size: 0x258

class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
    uint32 Seed;                                                                      // 0x0030 (size: 0x4)

}; // Size: 0x40

class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve Curve;                                                                 // 0x0058 (size: 0x80)

}; // Size: 0xD8

class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
    TArray<float> ShaderLUT;                                                          // 0x0030 (size: 0x10)
    float LUTMinTime;                                                                 // 0x0040 (size: 0x4)
    float LUTMaxTime;                                                                 // 0x0044 (size: 0x4)
    float LUTInvTimeRange;                                                            // 0x0048 (size: 0x4)
    float LUTNumSamplesMinusOne;                                                      // 0x004C (size: 0x4)
    uint8 bUseLUT;                                                                    // 0x0050 (size: 0x1)

}; // Size: 0x58

class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
    FNiagaraUserParameterBinding CallbackHandlerParameter;                            // 0x0030 (size: 0x28)

}; // Size: 0x58

class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
    int32 NumCellsX;                                                                  // 0x00D0 (size: 0x4)
    int32 NumCellsY;                                                                  // 0x00D4 (size: 0x4)
    int32 NumCellsMaxAxis;                                                            // 0x00D8 (size: 0x4)
    int32 NumAttributes;                                                              // 0x00DC (size: 0x4)
    bool SetGridFromMaxAxis;                                                          // 0x00E0 (size: 0x1)
    char padding_0[0x3];                                                              // 0x00E1 (size: 0x3)
    FVector2D WorldBBoxSize;                                                          // 0x00E4 (size: 0x8)

}; // Size: 0xF0

class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
    char padding_0[0x140];                                                            // 0x0000 (size: 0x0)

    void GetTextureSize(const class UNiagaraComponent* Component, int32& SizeX, int32& SizeY);
    void GetRawTextureSize(const class UNiagaraComponent* Component, int32& SizeX, int32& SizeY);
    bool FillTexture2D(const class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32 AttributeIndex);
    bool FillRawTexture2D(const class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32& TilesX, int32& TilesY);
}; // Size: 0x140

class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
    FIntVector NumVoxels;                                                             // 0x00D0 (size: 0xC)
    float VoxelSize;                                                                  // 0x00DC (size: 0x4)
    bool SetGridFromVoxelSize;                                                        // 0x00E0 (size: 0x1)
    char padding_0[0x3];                                                              // 0x00E1 (size: 0x3)
    FVector WorldBBoxSize;                                                            // 0x00E4 (size: 0xC)

}; // Size: 0xF0

class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
    uint32 MaxNeighborsPerVoxel;                                                      // 0x00F0 (size: 0x4)

}; // Size: 0xF8

class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{
    char padding_0[0x30];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x30

class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterface
{
    FString EmitterName;                                                              // 0x0030 (size: 0x10)

}; // Size: 0x40

class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
    TSet<int32> OutputShaderStages;                                                   // 0x0030 (size: 0x50)
    TSet<int32> IterationShaderStages;                                                // 0x0080 (size: 0x50)

}; // Size: 0xD0

class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
    char padding_0[0x30];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x30

class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
    class AActor* Source;                                                             // 0x0030 (size: 0x8)
    FNiagaraUserParameterBinding MeshUserParameter;                                   // 0x0038 (size: 0x28)
    class USkeletalMeshComponent* SourceComponent;                                    // 0x0060 (size: 0x8)
    ENDISkeletalMesh_SkinningMode SkinningMode;                                       // 0x0068 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0069 (size: 0x7)
    TArray<FName> SamplingRegions;                                                    // 0x0070 (size: 0x10)
    int32 WholeMeshLOD;                                                               // 0x0080 (size: 0x4)
    char padding_1[0x4];                                                              // 0x0084 (size: 0x4)
    TArray<FName> FilteredBones;                                                      // 0x0088 (size: 0x10)
    TArray<FName> FilteredSockets;                                                    // 0x0098 (size: 0x10)
    FName ExcludeBoneName;                                                            // 0x00A8 (size: 0x8)
    uint8 bExcludeBone;                                                               // 0x00B0 (size: 0x1)

}; // Size: 0xB8

class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
    class AActor* Source;                                                             // 0x0030 (size: 0x8)

}; // Size: 0x38

class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
    class UStaticMesh* DefaultMesh;                                                   // 0x0030 (size: 0x8)
    class AActor* Source;                                                             // 0x0038 (size: 0x8)
    class UStaticMeshComponent* SourceComponent;                                      // 0x0040 (size: 0x8)
    FNDIStaticMeshSectionFilter SectionFilter;                                        // 0x0048 (size: 0x10)

}; // Size: 0x60

class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
    class UTexture* Texture;                                                          // 0x0030 (size: 0x8)

}; // Size: 0x38

class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve XCurve;                                                                // 0x0058 (size: 0x80)
    FRichCurve YCurve;                                                                // 0x00D8 (size: 0x80)

}; // Size: 0x158

class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve XCurve;                                                                // 0x0058 (size: 0x80)
    FRichCurve YCurve;                                                                // 0x00D8 (size: 0x80)
    FRichCurve ZCurve;                                                                // 0x0158 (size: 0x80)
    FRichCurve WCurve;                                                                // 0x01D8 (size: 0x80)

}; // Size: 0x258

class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve XCurve;                                                                // 0x0058 (size: 0x80)
    FRichCurve YCurve;                                                                // 0x00D8 (size: 0x80)
    FRichCurve ZCurve;                                                                // 0x0158 (size: 0x80)

}; // Size: 0x1D8

class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
    class UVectorField* Field;                                                        // 0x0030 (size: 0x8)
    bool bTileX;                                                                      // 0x0038 (size: 0x1)
    bool bTileY;                                                                      // 0x0039 (size: 0x1)
    bool bTileZ;                                                                      // 0x003A (size: 0x1)

}; // Size: 0x40

class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{
    class UVolumeTexture* Texture;                                                    // 0x0030 (size: 0x8)

}; // Size: 0x38

class UNiagaraEditorDataBase : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UNiagaraEffectType : public UObject
{
    ENiagaraScalabilityUpdateFrequency UpdateFrequency;                               // 0x0028 (size: 0x4)
    ENiagaraCullReaction CullReaction;                                                // 0x002C (size: 0x4)
    TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;         // 0x0030 (size: 0x10)
    FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;                 // 0x0040 (size: 0x10)
    FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;               // 0x0050 (size: 0x10)

}; // Size: 0x100

class UNiagaraEmitter : public UObject
{
    bool bLocalSpace;                                                                 // 0x0028 (size: 0x1)
    bool bDeterminism;                                                                // 0x0029 (size: 0x1)
    char padding_0[0x2];                                                              // 0x002A (size: 0x2)
    int32 RandomSeed;                                                                 // 0x002C (size: 0x4)
    EParticleAllocationMode AllocationMode;                                           // 0x0030 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0031 (size: 0x3)
    int32 PreAllocationCount;                                                         // 0x0034 (size: 0x4)
    FNiagaraEmitterScriptProperties UpdateScriptProps;                                // 0x0038 (size: 0x28)
    FNiagaraEmitterScriptProperties SpawnScriptProps;                                 // 0x0060 (size: 0x28)
    FNiagaraEmitterScriptProperties EmitterSpawnScriptProps;                          // 0x0088 (size: 0x28)
    FNiagaraEmitterScriptProperties EmitterUpdateScriptProps;                         // 0x00B0 (size: 0x28)
    ENiagaraSimTarget SimTarget;                                                      // 0x00D8 (size: 0x1)
    char padding_2[0x3];                                                              // 0x00D9 (size: 0x3)
    FBox FixedBounds;                                                                 // 0x00DC (size: 0x1C)
    int32 MinDetailLevel;                                                             // 0x00F8 (size: 0x4)
    int32 MaxDetailLevel;                                                             // 0x00FC (size: 0x4)
    FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides;                // 0x0100 (size: 0x14)
    char padding_3[0x4];                                                              // 0x0114 (size: 0x4)
    FNiagaraPlatformSet Platforms;                                                    // 0x0118 (size: 0x20)
    FNiagaraEmitterScalabilityOverrides ScalabilityOverrides;                         // 0x0138 (size: 0x10)
    uint8 bInterpolatedSpawning;                                                      // 0x0148 (size: 0x1)
    uint8 bFixedBounds;                                                               // 0x0148 (size: 0x1)
    uint8 bUseMinDetailLevel;                                                         // 0x0148 (size: 0x1)
    uint8 bUseMaxDetailLevel;                                                         // 0x0148 (size: 0x1)
    uint8 bOverrideGlobalSpawnCountScale;                                             // 0x0148 (size: 0x1)
    uint8 bRequiresPersistentIDs;                                                     // 0x0148 (size: 0x1)
    char padding_4[0x3];                                                              // 0x0149 (size: 0x3)
    float MaxDeltaTimePerTick;                                                        // 0x014C (size: 0x4)
    uint32 DefaultShaderStageIndex;                                                   // 0x0150 (size: 0x4)
    uint32 MaxUpdateIterations;                                                       // 0x0154 (size: 0x4)
    TSet<uint32> SpawnStages;                                                         // 0x0158 (size: 0x50)
    uint8 bSimulationStagesEnabled;                                                   // 0x01A8 (size: 0x1)
    uint8 bDeprecatedShaderStagesEnabled;                                             // 0x01A8 (size: 0x1)
    uint8 bLimitDeltaTime;                                                            // 0x01A8 (size: 0x1)
    char padding_5[0x7];                                                              // 0x01A9 (size: 0x7)
    FString UniqueEmitterName;                                                        // 0x01B0 (size: 0x10)
    TArray<class UNiagaraRendererProperties*> RendererProperties;                     // 0x01C0 (size: 0x10)
    TArray<FNiagaraEventScriptProperties> EventHandlerScriptProps;                    // 0x01D0 (size: 0x10)
    TArray<class UNiagaraSimulationStageBase*> SimulationStages;                      // 0x01E0 (size: 0x10)
    class UNiagaraScript* GPUComputeScript;                                           // 0x01F0 (size: 0x8)
    TArray<FName> SharedEventGeneratorIds;                                            // 0x01F8 (size: 0x10)

}; // Size: 0x2B0

class UNiagaraEventReceiverEmitterAction : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
    uint32 NumParticles;                                                              // 0x0028 (size: 0x4)

}; // Size: 0x30

class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    class UNiagaraComponent* SpawnSystemAtLocation(const class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UVolumeTexture* Texture);
    void SetTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture* Texture);
    void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMeshComponent* StaticMeshComponent);
    void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMesh* StaticMesh);
    void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
    class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
}; // Size: 0x28

class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
    uint8 bUseInverseSquaredFalloff;                                                  // 0x0050 (size: 0x1)
    uint8 bAffectsTranslucency;                                                       // 0x0050 (size: 0x1)
    uint8 bOverrideRenderingEnabled;                                                  // 0x0050 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0051 (size: 0x3)
    float RadiusScale;                                                                // 0x0054 (size: 0x4)
    FVector ColorAdd;                                                                 // 0x0058 (size: 0xC)
    char padding_1[0x4];                                                              // 0x0064 (size: 0x4)
    FNiagaraVariableAttributeBinding LightRenderingEnabledBinding;                    // 0x0068 (size: 0x78)
    FNiagaraVariableAttributeBinding LightExponentBinding;                            // 0x00E0 (size: 0x78)
    FNiagaraVariableAttributeBinding PositionBinding;                                 // 0x0158 (size: 0x78)
    FNiagaraVariableAttributeBinding ColorBinding;                                    // 0x01D0 (size: 0x78)
    FNiagaraVariableAttributeBinding RadiusBinding;                                   // 0x0248 (size: 0x78)
    FNiagaraVariableAttributeBinding VolumetricScatteringBinding;                     // 0x02C0 (size: 0x78)

}; // Size: 0x338

class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
    class UStaticMesh* ParticleMesh;                                                  // 0x0050 (size: 0x8)
    ENiagaraSortMode SortMode;                                                        // 0x0058 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0059 (size: 0x3)
    uint8 bOverrideMaterials;                                                         // 0x005C (size: 0x1)
    uint8 bSortOnlyWhenTranslucent;                                                   // 0x005C (size: 0x1)
    char padding_1[0x3];                                                              // 0x005D (size: 0x3)
    TArray<FNiagaraMeshMaterialOverride> OverrideMaterials;                           // 0x0060 (size: 0x10)
    FVector2D SubImageSize;                                                           // 0x0070 (size: 0x8)
    uint8 bSubImageBlend;                                                             // 0x0078 (size: 0x1)
    char padding_2[0x3];                                                              // 0x0079 (size: 0x3)
    ENiagaraMeshFacingMode FacingMode;                                                // 0x007C (size: 0x1)
    char padding_3[0x3];                                                              // 0x007D (size: 0x3)
    uint8 bLockedAxisEnable;                                                          // 0x0080 (size: 0x1)
    char padding_4[0x3];                                                              // 0x0081 (size: 0x3)
    FVector LockedAxis;                                                               // 0x0084 (size: 0xC)
    ENiagaraMeshLockedAxisSpace LockedAxisSpace;                                      // 0x0090 (size: 0x1)
    char padding_5[0x7];                                                              // 0x0091 (size: 0x7)
    FNiagaraVariableAttributeBinding PositionBinding;                                 // 0x0098 (size: 0x78)
    FNiagaraVariableAttributeBinding ColorBinding;                                    // 0x0110 (size: 0x78)
    FNiagaraVariableAttributeBinding VelocityBinding;                                 // 0x0188 (size: 0x78)
    FNiagaraVariableAttributeBinding MeshOrientationBinding;                          // 0x0200 (size: 0x78)
    FNiagaraVariableAttributeBinding ScaleBinding;                                    // 0x0278 (size: 0x78)
    FNiagaraVariableAttributeBinding SubImageIndexBinding;                            // 0x02F0 (size: 0x78)
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;                          // 0x0368 (size: 0x78)
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;                         // 0x03E0 (size: 0x78)
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;                         // 0x0458 (size: 0x78)
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;                         // 0x04D0 (size: 0x78)
    FNiagaraVariableAttributeBinding MaterialRandomBinding;                           // 0x0548 (size: 0x78)
    FNiagaraVariableAttributeBinding CustomSortingBinding;                            // 0x05C0 (size: 0x78)
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;                            // 0x0638 (size: 0x78)
    FNiagaraVariableAttributeBinding CameraOffsetBinding;                             // 0x06B0 (size: 0x78)

}; // Size: 0x728

class UNiagaraParameterCollection : public UObject
{
    FName Namespace;                                                                  // 0x0028 (size: 0x8)
    TArray<FNiagaraVariable> Parameters;                                              // 0x0030 (size: 0x10)
    class UNiagaraParameterCollectionInstance* DefaultInstance;                       // 0x0040 (size: 0x8)
    FGuid CompileId;                                                                  // 0x0048 (size: 0x10)

}; // Size: 0x58

class UNiagaraParameterCollectionInstance : public UObject
{
    class UNiagaraParameterCollection* Collection;                                    // 0x0028 (size: 0x8)
    TArray<FNiagaraVariable> OverridenParameters;                                     // 0x0030 (size: 0x10)
    FNiagaraParameterStore ParameterStorage;                                          // 0x0040 (size: 0xB8)

    void SetVectorParameter(FString InVariableName, FVector InValue);
    void SetVector4Parameter(FString InVariableName, const FVector4& InValue);
    void SetVector2DParameter(FString InVariableName, FVector2D InValue);
    void SetQuatParameter(FString InVariableName, const FQuat& InValue);
    void SetIntParameter(FString InVariableName, int32 InValue);
    void SetFloatParameter(FString InVariableName, float InValue);
    void SetColorParameter(FString InVariableName, FLinearColor InValue);
    void SetBoolParameter(FString InVariableName, bool InValue);
    FVector GetVectorParameter(FString InVariableName);
    FVector4 GetVector4Parameter(FString InVariableName);
    FVector2D GetVector2DParameter(FString InVariableName);
    FQuat GetQuatParameter(FString InVariableName);
    int32 GetIntParameter(FString InVariableName);
    float GetFloatParameter(FString InVariableName);
    FLinearColor GetColorParameter(FString InVariableName);
    bool GetBoolParameter(FString InVariableName);
}; // Size: 0xF8

class UNiagaraPrecompileContainer : public UObject
{
    TArray<class UNiagaraScript*> Scripts;                                            // 0x0028 (size: 0x10)
    class UNiagaraSystem* System;                                                     // 0x0038 (size: 0x8)

}; // Size: 0x40

class UNiagaraPreviewAxis : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    int32 Num();
    void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, FString& OutLabelText);
}; // Size: 0x28

class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
    FName Param;                                                                      // 0x0028 (size: 0x8)
    int32 Count;                                                                      // 0x0030 (size: 0x4)

}; // Size: 0x38

class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
    float Min;                                                                        // 0x0038 (size: 0x4)
    float Max;                                                                        // 0x003C (size: 0x4)

}; // Size: 0x40

class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
    int32 Min;                                                                        // 0x0038 (size: 0x4)
    int32 Max;                                                                        // 0x003C (size: 0x4)

}; // Size: 0x40

class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
    FLinearColor Min;                                                                 // 0x0038 (size: 0x10)
    FLinearColor Max;                                                                 // 0x0048 (size: 0x10)

}; // Size: 0x58

class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
    FVector Min;                                                                      // 0x0038 (size: 0xC)
    FVector Max;                                                                      // 0x0044 (size: 0xC)

}; // Size: 0x50

class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
    FVector2D Min;                                                                    // 0x0038 (size: 0x8)
    FVector2D Max;                                                                    // 0x0040 (size: 0x8)

}; // Size: 0x48

class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
    FVector4 Min;                                                                     // 0x0040 (size: 0x10)
    FVector4 Max;                                                                     // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraRendererProperties : public UNiagaraMergeable
{
    int32 SortOrderHint;                                                              // 0x0028 (size: 0x4)
    bool bIsEnabled;                                                                  // 0x002C (size: 0x1)
    bool bMotionBlurEnabled;                                                          // 0x002D (size: 0x1)

}; // Size: 0x50

class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
    class UMaterialInterface* Material;                                               // 0x0050 (size: 0x8)
    FNiagaraUserParameterBinding MaterialUserParamBinding;                            // 0x0058 (size: 0x28)
    ENiagaraRibbonFacingMode FacingMode;                                              // 0x0080 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0081 (size: 0x3)
    float UV0TilingDistance;                                                          // 0x0084 (size: 0x4)
    FVector2D UV0Scale;                                                               // 0x0088 (size: 0x8)
    FVector2D UV0Offset;                                                              // 0x0090 (size: 0x8)
    ENiagaraRibbonAgeOffsetMode UV0AgeOffsetMode;                                     // 0x0098 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0099 (size: 0x3)
    float UV1TilingDistance;                                                          // 0x009C (size: 0x4)
    FVector2D UV1Scale;                                                               // 0x00A0 (size: 0x8)
    FVector2D UV1Offset;                                                              // 0x00A8 (size: 0x8)
    ENiagaraRibbonAgeOffsetMode UV1AgeOffsetMode;                                     // 0x00B0 (size: 0x1)
    ENiagaraRibbonDrawDirection DrawDirection;                                        // 0x00B1 (size: 0x1)
    char padding_2[0x2];                                                              // 0x00B2 (size: 0x2)
    float CurveTension;                                                               // 0x00B4 (size: 0x4)
    ENiagaraRibbonTessellationMode TessellationMode;                                  // 0x00B8 (size: 0x1)
    char padding_3[0x3];                                                              // 0x00B9 (size: 0x3)
    int32 TessellationFactor;                                                         // 0x00BC (size: 0x4)
    bool bUseConstantFactor;                                                          // 0x00C0 (size: 0x1)
    char padding_4[0x3];                                                              // 0x00C1 (size: 0x3)
    float TessellationAngle;                                                          // 0x00C4 (size: 0x4)
    bool bScreenSpaceTessellation;                                                    // 0x00C8 (size: 0x1)
    char padding_5[0x7];                                                              // 0x00C9 (size: 0x7)
    FNiagaraVariableAttributeBinding PositionBinding;                                 // 0x00D0 (size: 0x78)
    FNiagaraVariableAttributeBinding ColorBinding;                                    // 0x0148 (size: 0x78)
    FNiagaraVariableAttributeBinding VelocityBinding;                                 // 0x01C0 (size: 0x78)
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;                            // 0x0238 (size: 0x78)
    FNiagaraVariableAttributeBinding RibbonTwistBinding;                              // 0x02B0 (size: 0x78)
    FNiagaraVariableAttributeBinding RibbonWidthBinding;                              // 0x0328 (size: 0x78)
    FNiagaraVariableAttributeBinding RibbonFacingBinding;                             // 0x03A0 (size: 0x78)
    FNiagaraVariableAttributeBinding RibbonIdBinding;                                 // 0x0418 (size: 0x78)
    FNiagaraVariableAttributeBinding RibbonLinkOrderBinding;                          // 0x0490 (size: 0x78)
    FNiagaraVariableAttributeBinding MaterialRandomBinding;                           // 0x0508 (size: 0x78)
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;                          // 0x0580 (size: 0x78)
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;                         // 0x05F8 (size: 0x78)
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;                         // 0x0670 (size: 0x78)
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;                         // 0x06E8 (size: 0x78)

}; // Size: 0x760

class UNiagaraScript : public UObject
{
    ENiagaraScriptUsage Usage;                                                        // 0x0028 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0029 (size: 0x3)
    int32 UsageIndex;                                                                 // 0x002C (size: 0x4)
    FGuid UsageId;                                                                    // 0x0030 (size: 0x10)
    FNiagaraParameterStore RapidIterationParameters;                                  // 0x0040 (size: 0xB8)
    FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;                  // 0x00F8 (size: 0xD8)
    TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters;                    // 0x01D0 (size: 0x10)
    FNiagaraVMExecutableDataId CachedScriptVMId;                                      // 0x01E0 (size: 0x48)
    char padding_1[0x1B0];                                                            // 0x0228 (size: 0x1B0)
    FNiagaraVMExecutableData CachedScriptVM;                                          // 0x03D8 (size: 0x128)
    TArray<class UNiagaraParameterCollection*> CachedParameterCollectionReferences;   // 0x0500 (size: 0x10)
    TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;              // 0x0510 (size: 0x10)

    void RaiseOnGPUCompilationComplete();
}; // Size: 0x520

class UNiagaraScriptSourceBase : public UObject
{
    char padding_0[0x48];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x48

class UNiagaraSettings : public UDeveloperSettings
{
    TArray<FSoftObjectPath> AdditionalParameterTypes;                                 // 0x0038 (size: 0x10)
    TArray<FSoftObjectPath> AdditionalPayloadTypes;                                   // 0x0048 (size: 0x10)
    TArray<FSoftObjectPath> AdditionalParameterEnums;                                 // 0x0058 (size: 0x10)
    FSoftObjectPath DefaultEffectType;                                                // 0x0068 (size: 0x18)
    TArray<FText> QualityLevels;                                                      // 0x0080 (size: 0x10)
    class UNiagaraEffectType* DefaultEffectTypePtr;                                   // 0x0090 (size: 0x8)

}; // Size: 0x98

class UNiagaraSimulationStageBase : public UNiagaraMergeable
{
    class UNiagaraScript* Script;                                                     // 0x0028 (size: 0x8)
    FName SimulationStageName;                                                        // 0x0030 (size: 0x8)

}; // Size: 0x38

class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
    ENiagaraIterationSource IterationSource;                                          // 0x0038 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0039 (size: 0x3)
    int32 Iterations;                                                                 // 0x003C (size: 0x4)
    uint8 bSpawnOnly;                                                                 // 0x0040 (size: 0x1)
    char padding_1[0x7];                                                              // 0x0041 (size: 0x7)
    FNiagaraVariableDataInterfaceBinding DataInterface;                               // 0x0048 (size: 0x28)

}; // Size: 0x70

class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
    class UMaterialInterface* Material;                                               // 0x0050 (size: 0x8)
    FNiagaraUserParameterBinding MaterialUserParamBinding;                            // 0x0058 (size: 0x28)
    ENiagaraSpriteAlignment Alignment;                                                // 0x0080 (size: 0x1)
    ENiagaraSpriteFacingMode FacingMode;                                              // 0x0081 (size: 0x1)
    char padding_0[0x2];                                                              // 0x0082 (size: 0x2)
    FVector2D PivotInUVSpace;                                                         // 0x0084 (size: 0x8)
    ENiagaraSortMode SortMode;                                                        // 0x008C (size: 0x1)
    char padding_1[0x3];                                                              // 0x008D (size: 0x3)
    FVector2D SubImageSize;                                                           // 0x0090 (size: 0x8)
    uint8 bSubImageBlend;                                                             // 0x0098 (size: 0x1)
    uint8 bRemoveHMDRollInVR;                                                         // 0x0098 (size: 0x1)
    uint8 bSortOnlyWhenTranslucent;                                                   // 0x0098 (size: 0x1)
    char padding_2[0x3];                                                              // 0x0099 (size: 0x3)
    float MinFacingCameraBlendDistance;                                               // 0x009C (size: 0x4)
    float MaxFacingCameraBlendDistance;                                               // 0x00A0 (size: 0x4)
    char padding_3[0x4];                                                              // 0x00A4 (size: 0x4)
    FNiagaraVariableAttributeBinding PositionBinding;                                 // 0x00A8 (size: 0x78)
    FNiagaraVariableAttributeBinding ColorBinding;                                    // 0x0120 (size: 0x78)
    FNiagaraVariableAttributeBinding VelocityBinding;                                 // 0x0198 (size: 0x78)
    FNiagaraVariableAttributeBinding SpriteRotationBinding;                           // 0x0210 (size: 0x78)
    FNiagaraVariableAttributeBinding SpriteSizeBinding;                               // 0x0288 (size: 0x78)
    FNiagaraVariableAttributeBinding SpriteFacingBinding;                             // 0x0300 (size: 0x78)
    FNiagaraVariableAttributeBinding SpriteAlignmentBinding;                          // 0x0378 (size: 0x78)
    FNiagaraVariableAttributeBinding SubImageIndexBinding;                            // 0x03F0 (size: 0x78)
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;                          // 0x0468 (size: 0x78)
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;                         // 0x04E0 (size: 0x78)
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;                         // 0x0558 (size: 0x78)
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;                         // 0x05D0 (size: 0x78)
    FNiagaraVariableAttributeBinding CameraOffsetBinding;                             // 0x0648 (size: 0x78)
    FNiagaraVariableAttributeBinding UVScaleBinding;                                  // 0x06C0 (size: 0x78)
    FNiagaraVariableAttributeBinding MaterialRandomBinding;                           // 0x0738 (size: 0x78)
    FNiagaraVariableAttributeBinding CustomSortingBinding;                            // 0x07B0 (size: 0x78)
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;                            // 0x0828 (size: 0x78)

}; // Size: 0x8B0

class UNiagaraSystem : public UFXSystemAsset
{
    bool bDumpDebugSystemInfo;                                                        // 0x0031 (size: 0x1)
    bool bDumpDebugEmitterInfo;                                                       // 0x0032 (size: 0x1)
    char padding_0[0x1];                                                              // 0x0033 (size: 0x1)
    uint8 bFixedBounds;                                                               // 0x0034 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0035 (size: 0x3)
    class UNiagaraEffectType* EffectType;                                             // 0x0038 (size: 0x8)
    bool bOverrideScalabilitySettings;                                                // 0x0040 (size: 0x1)
    char padding_2[0x7];                                                              // 0x0041 (size: 0x7)
    TArray<FNiagaraSystemScalabilityOverride> ScalabilityOverrides;                   // 0x0048 (size: 0x10)
    FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides;                    // 0x0058 (size: 0x10)
    TArray<FNiagaraEmitterHandle> EmitterHandles;                                     // 0x0068 (size: 0x10)
    TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;  // 0x0078 (size: 0x10)
    class UNiagaraScript* SystemSpawnScript;                                          // 0x0088 (size: 0x8)
    class UNiagaraScript* SystemUpdateScript;                                         // 0x0090 (size: 0x8)
    char padding_3[0x10];                                                             // 0x0098 (size: 0x10)
    FNiagaraSystemCompiledData SystemCompiledData;                                    // 0x00A8 (size: 0x258)
    FNiagaraUserRedirectionParameterStore ExposedParameters;                          // 0x0300 (size: 0x108)
    FBox FixedBounds;                                                                 // 0x0408 (size: 0x1C)
    bool bAutoDeactivate;                                                             // 0x0424 (size: 0x1)
    char padding_4[0x3];                                                              // 0x0425 (size: 0x3)
    float WarmupTime;                                                                 // 0x0428 (size: 0x4)
    int32 WarmupTickCount;                                                            // 0x042C (size: 0x4)
    float WarmupTickDelta;                                                            // 0x0430 (size: 0x4)
    bool bHasSystemScriptDIsWithPerInstanceData;                                      // 0x0434 (size: 0x1)
    char padding_5[0x3];                                                              // 0x0435 (size: 0x3)
    TArray<FName> UserDINamesReadInSystemScripts;                                     // 0x0438 (size: 0x10)

}; // Size: 0x478

#endif
