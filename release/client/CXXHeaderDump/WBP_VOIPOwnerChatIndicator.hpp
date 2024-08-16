#ifndef UE4SS_SDK_WBP_VOIPOwnerChatIndicator_HPP
#define UE4SS_SDK_WBP_VOIPOwnerChatIndicator_HPP

class UWBP_VOIPOwnerChatIndicator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWidgetAnimation* OwnerVOIPInputUIAnim;                                     // 0x0238 (size: 0x8)
    class UImage* IndicatorSpeakerIcon;                                               // 0x0240 (size: 0x8)
    class UTextBlock* IndicatorText;                                                  // 0x0248 (size: 0x8)
    FText IndicatorNameText;                                                          // 0x0250 (size: 0x18)
    FSlateColor IndicatorColor;                                                       // 0x0268 (size: 0x28)
    bool bActive;                                                                     // 0x0290 (size: 0x1)

    void PreConstruct(bool IsDesignTime);
    void OnInitialized();
    void Activate();
    void Deactivate();
    void InputAnimFinished();
    void ExecuteUbergraph_WBP_VOIPOwnerChatIndicator(int32 EntryPoint);
}; // Size: 0x291

#endif
