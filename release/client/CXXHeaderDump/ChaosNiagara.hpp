#ifndef UE4SS_SDK_ChaosNiagara_HPP
#define UE4SS_SDK_ChaosNiagara_HPP

#include "ChaosNiagara_enums.hpp"

struct FChaosDestructionEvent
{
    FVector Position;                                                                 // 0x0000 (size: 0xC)
    FVector Normal;                                                                   // 0x000C (size: 0xC)
    FVector Velocity;                                                                 // 0x0018 (size: 0xC)
    FVector AngularVelocity;                                                          // 0x0024 (size: 0xC)
    float ExtentMin;                                                                  // 0x0030 (size: 0x4)
    float ExtentMax;                                                                  // 0x0034 (size: 0x4)
    int32 ParticleID;                                                                 // 0x0038 (size: 0x4)
    float Time;                                                                       // 0x003C (size: 0x4)
    int32 Type;                                                                       // 0x0040 (size: 0x4)

}; // Size: 0x44

class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{
    TSet<AChaosSolverActor*> ChaosSolverActorSet;                                     // 0x0030 (size: 0x50)
    EDataSourceTypeEnum DataSourceType;                                               // 0x0080 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0081 (size: 0x3)
    int32 DataProcessFrequency;                                                       // 0x0084 (size: 0x4)
    int32 MaxNumberOfDataEntriesToSpawn;                                              // 0x0088 (size: 0x4)
    bool DoSpawn;                                                                     // 0x008C (size: 0x1)
    char padding_1[0x3];                                                              // 0x008D (size: 0x3)
    FVector2D SpawnMultiplierMinMax;                                                  // 0x0090 (size: 0x8)
    float SpawnChance;                                                                // 0x0098 (size: 0x4)
    FVector2D ImpulseToSpawnMinMax;                                                   // 0x009C (size: 0x8)
    FVector2D SpeedToSpawnMinMax;                                                     // 0x00A4 (size: 0x8)
    FVector2D MassToSpawnMinMax;                                                      // 0x00AC (size: 0x8)
    FVector2D ExtentMinToSpawnMinMax;                                                 // 0x00B4 (size: 0x8)
    FVector2D ExtentMaxToSpawnMinMax;                                                 // 0x00BC (size: 0x8)
    FVector2D VolumeToSpawnMinMax;                                                    // 0x00C4 (size: 0x8)
    FVector2D SolverTimeToSpawnMinMax;                                                // 0x00CC (size: 0x8)
    int32 SurfaceTypeToSpawn;                                                         // 0x00D4 (size: 0x4)
    ELocationFilteringModeEnum LocationFilteringMode;                                 // 0x00D8 (size: 0x1)
    ELocationXToSpawnEnum LocationXToSpawn;                                           // 0x00D9 (size: 0x1)
    char padding_2[0x2];                                                              // 0x00DA (size: 0x2)
    FVector2D LocationXToSpawnMinMax;                                                 // 0x00DC (size: 0x8)
    ELocationYToSpawnEnum LocationYToSpawn;                                           // 0x00E4 (size: 0x1)
    char padding_3[0x3];                                                              // 0x00E5 (size: 0x3)
    FVector2D LocationYToSpawnMinMax;                                                 // 0x00E8 (size: 0x8)
    ELocationZToSpawnEnum LocationZToSpawn;                                           // 0x00F0 (size: 0x1)
    char padding_4[0x3];                                                              // 0x00F1 (size: 0x3)
    FVector2D LocationZToSpawnMinMax;                                                 // 0x00F4 (size: 0x8)
    EDataSortTypeEnum DataSortingType;                                                // 0x00FC (size: 0x1)
    bool bGetExternalCollisionData;                                                   // 0x00FD (size: 0x1)
    bool DoSpatialHash;                                                               // 0x00FE (size: 0x1)
    char padding_5[0x1];                                                              // 0x00FF (size: 0x1)
    FVector SpatialHashVolumeMin;                                                     // 0x0100 (size: 0xC)
    FVector SpatialHashVolumeMax;                                                     // 0x010C (size: 0xC)
    FVector SpatialHashVolumeCellSize;                                                // 0x0118 (size: 0xC)
    int32 MaxDataPerCell;                                                             // 0x0124 (size: 0x4)
    bool bApplyMaterialsFilter;                                                       // 0x0128 (size: 0x1)
    char padding_6[0x7];                                                              // 0x0129 (size: 0x7)
    TSet<UPhysicalMaterial*> ChaosBreakingMaterialSet;                                // 0x0130 (size: 0x50)
    bool bGetExternalBreakingData;                                                    // 0x0180 (size: 0x1)
    bool bGetExternalTrailingData;                                                    // 0x0181 (size: 0x1)
    char padding_7[0x2];                                                              // 0x0182 (size: 0x2)
    FVector2D RandomPositionMagnitudeMinMax;                                          // 0x0184 (size: 0x8)
    float InheritedVelocityMultiplier;                                                // 0x018C (size: 0x4)
    ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType;                   // 0x0190 (size: 0x1)
    char padding_8[0x3];                                                              // 0x0191 (size: 0x3)
    FVector2D RandomVelocityMagnitudeMinMax;                                          // 0x0194 (size: 0x8)
    float SpreadAngleMax;                                                             // 0x019C (size: 0x4)
    FVector VelocityOffsetMin;                                                        // 0x01A0 (size: 0xC)
    FVector VelocityOffsetMax;                                                        // 0x01AC (size: 0xC)
    FVector2D FinalVelocityMagnitudeMinMax;                                           // 0x01B8 (size: 0x8)
    float MaxLatency;                                                                 // 0x01C0 (size: 0x4)
    EDebugTypeEnum DebugType;                                                         // 0x01C4 (size: 0x1)
    char padding_9[0x3];                                                              // 0x01C5 (size: 0x3)
    int32 LastSpawnedPointID;                                                         // 0x01C8 (size: 0x4)
    float LastSpawnTime;                                                              // 0x01CC (size: 0x4)
    char padding_10[0x10];                                                            // 0x01D0 (size: 0x10)
    float SolverTime;                                                                 // 0x01E0 (size: 0x4)
    float TimeStampOfLastProcessedData;                                               // 0x01E4 (size: 0x4)

}; // Size: 0x230

#endif
