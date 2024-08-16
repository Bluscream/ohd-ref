#ifndef UE4SS_SDK_WBP_ModifierSettingBox_HPP
#define UE4SS_SDK_WBP_ModifierSettingBox_HPP

class UWBP_ModifierSettingBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UNamedSlot* Content;                                                        // 0x0238 (size: 0x8)
    class UTextBlock* SettingLabel;                                                   // 0x0240 (size: 0x8)
    FText SettingText;                                                                // 0x0248 (size: 0x18)
    FFModifierTextStyle SettingTextStyle;                                             // 0x0260 (size: 0x78)

    void SetSettingTextStyle(FFModifierTextStyle& InSettingTextStyle);
    void GetSettingText(FText& SettingText);
    void SetSettingText(FText InSettingText);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_ModifierSettingBox(int32 EntryPoint);
}; // Size: 0x2D8

#endif
