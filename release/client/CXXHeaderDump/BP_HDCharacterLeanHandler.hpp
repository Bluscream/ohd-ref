#ifndef UE4SS_SDK_BP_HDCharacterLeanHandler_HPP
#define UE4SS_SDK_BP_HDCharacterLeanHandler_HPP

class UBP_HDCharacterLeanHandler_C : public UDFCharacterLeanHandler
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UCameraComponent* CachedFPPCamera;                                          // 0x0288 (size: 0x8)
    class USkeletalMeshComponent* CachedFPPMesh;                                      // 0x0290 (size: 0x8)
    float LastLeanRollAmt;                                                            // 0x0298 (size: 0x4)
    float LastXOffset;                                                                // 0x029C (size: 0x4)
    float LastYOffset;                                                                // 0x02A0 (size: 0x4)
    char padding_0[0x4];                                                              // 0x02A4 (size: 0x4)
    class USpringArmComponent* CachedFPPSpringArm;                                    // 0x02A8 (size: 0x8)

    void TickRot(float DeltaTime);
    void TickYOffset(float DeltaTime);
    void TickXOffset(float DeltaTime);
    void GetFPPSpringArmComp(class USpringArmComponent*& FPPSpringArm);
    void GetFPPCameraComp(class UCameraComponent*& FPPCamera);
    void GetFPPMeshComp(class USkeletalMeshComponent*& FPPMesh);
    void ReceiveTick(float DeltaTime);
    void ExecuteUbergraph_BP_HDCharacterLeanHandler(int32 EntryPoint);
}; // Size: 0x2B0

#endif
