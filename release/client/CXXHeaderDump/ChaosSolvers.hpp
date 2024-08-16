#ifndef UE4SS_SDK_ChaosSolvers_HPP
#define UE4SS_SDK_ChaosSolvers_HPP

struct FSolverBreakingFilterSettings
{
    bool FilterEnabled;                                                               // 0x0000 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0001 (size: 0x3)
    float MinMass;                                                                    // 0x0004 (size: 0x4)
    float MinSpeed;                                                                   // 0x0008 (size: 0x4)
    float MinVolume;                                                                  // 0x000C (size: 0x4)

}; // Size: 0x10

struct FSolverCollisionFilterSettings
{
    bool FilterEnabled;                                                               // 0x0000 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0001 (size: 0x3)
    float MinMass;                                                                    // 0x0004 (size: 0x4)
    float MinSpeed;                                                                   // 0x0008 (size: 0x4)
    float MinImpulse;                                                                 // 0x000C (size: 0x4)

}; // Size: 0x10

struct FSolverTrailingFilterSettings
{
    bool FilterEnabled;                                                               // 0x0000 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0001 (size: 0x3)
    float MinMass;                                                                    // 0x0004 (size: 0x4)
    float MinSpeed;                                                                   // 0x0008 (size: 0x4)
    float MinVolume;                                                                  // 0x000C (size: 0x4)

}; // Size: 0x10

#endif
