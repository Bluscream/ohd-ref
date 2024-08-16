#ifndef UE4SS_SDK_WBP_StanceIndicator_HPP
#define UE4SS_SDK_WBP_StanceIndicator_HPP

class UWBP_StanceIndicator_C : public UHDUIUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UImage* StanceIcon;                                                         // 0x0240 (size: 0x8)

    void SetHealth(float NewHealthValueNorm, float PrevHealthValueNorm);
    void StanceStateUpdate(EHDUICharacterStanceState State);
    void ExecuteUbergraph_WBP_StanceIndicator(int32 EntryPoint);
}; // Size: 0x248

#endif
