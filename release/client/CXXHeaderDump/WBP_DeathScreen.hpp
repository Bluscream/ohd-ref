#ifndef UE4SS_SDK_WBP_DeathScreen_HPP
#define UE4SS_SDK_WBP_DeathScreen_HPP

class UWBP_DeathScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UTextBlock* DeathKeyBindText;                                               // 0x0238 (size: 0x8)

    void UpdateDeathKeyText(FKey& Key);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_DeathScreen(int32 EntryPoint);
}; // Size: 0x240

#endif
