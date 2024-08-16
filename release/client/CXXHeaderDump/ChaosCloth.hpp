#ifndef UE4SS_SDK_ChaosCloth_HPP
#define UE4SS_SDK_ChaosCloth_HPP

#include "ChaosCloth_enums.hpp"

class UChaosClothConfig : public UClothConfigCommon
{
    EClothMassMode MassMode;                                                          // 0x0028 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0029 (size: 0x3)
    float UniformMass;                                                                // 0x002C (size: 0x4)
    float TotalMass;                                                                  // 0x0030 (size: 0x4)
    float Density;                                                                    // 0x0034 (size: 0x4)
    float MinPerParticleMass;                                                         // 0x0038 (size: 0x4)
    float EdgeStiffness;                                                              // 0x003C (size: 0x4)
    float BendingStiffness;                                                           // 0x0040 (size: 0x4)
    float AreaStiffness;                                                              // 0x0044 (size: 0x4)
    float VolumeStiffness;                                                            // 0x0048 (size: 0x4)
    float StrainLimitingStiffness;                                                    // 0x004C (size: 0x4)
    float LimitScale;                                                                 // 0x0050 (size: 0x4)
    bool bUseGeodesicDistance;                                                        // 0x0054 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0055 (size: 0x3)
    float ShapeTargetStiffness;                                                       // 0x0058 (size: 0x4)
    float CollisionThickness;                                                         // 0x005C (size: 0x4)
    float FrictionCoefficient;                                                        // 0x0060 (size: 0x4)
    float DampingCoefficient;                                                         // 0x0064 (size: 0x4)
    float DragCoefficient;                                                            // 0x0068 (size: 0x4)
    float AnimDriveSpringStiffness;                                                   // 0x006C (size: 0x4)
    bool bUseBendingElements;                                                         // 0x0070 (size: 0x1)
    bool bUseTetrahedralConstraints;                                                  // 0x0071 (size: 0x1)
    bool bUseThinShellVolumeConstraints;                                              // 0x0072 (size: 0x1)
    bool bUseSelfCollisions;                                                          // 0x0073 (size: 0x1)
    bool bUseContinuousCollisionDetection;                                            // 0x0074 (size: 0x1)
    char padding_2[0x3];                                                              // 0x0075 (size: 0x3)
    FVector LinearVelocityScale;                                                      // 0x0078 (size: 0xC)
    float AngularVelocityScale;                                                       // 0x0084 (size: 0x4)

}; // Size: 0x88

class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{
    int32 IterationCount;                                                             // 0x0028 (size: 0x4)
    int32 SubdivisionCount;                                                           // 0x002C (size: 0x4)
    float SelfCollisionThickness;                                                     // 0x0030 (size: 0x4)
    float CollisionThickness;                                                         // 0x0034 (size: 0x4)
    bool bUseDampingOverride;                                                         // 0x0038 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0039 (size: 0x3)
    float Damping;                                                                    // 0x003C (size: 0x4)
    bool bUseGravityOverride;                                                         // 0x0040 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0041 (size: 0x3)
    float GravityScale;                                                               // 0x0044 (size: 0x4)
    FVector Gravity;                                                                  // 0x0048 (size: 0xC)
    bool bUseLocalSpaceSimulation;                                                    // 0x0054 (size: 0x1)
    bool bUseXPBDConstraints;                                                         // 0x0055 (size: 0x1)

}; // Size: 0x58

class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{
    char padding_0[0x40];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x40

#endif
