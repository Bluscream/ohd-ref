#ifndef UE4SS_SDK_WBP_ScrollBarArrowButton_HPP
#define UE4SS_SDK_WBP_ScrollBarArrowButton_HPP

class UWBP_ScrollBarArrowButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UButton* ArrowBtn;                                                          // 0x0238 (size: 0x8)
    class UScrollBox* ScrollBox;                                                      // 0x0240 (size: 0x8)
    bool bScrollDown;                                                                 // 0x0248 (size: 0x1)
    bool bInit;                                                                       // 0x0249 (size: 0x1)

    void GetMaxScrollOffset(float& MaxOffset);
    void IsInitialized(bool& bInitialized);
    void SetScrollBox(class UScrollBox* ScrollBoxToUse);
    void BndEvt__ArrowBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_ScrollBarArrowButton(int32 EntryPoint);
}; // Size: 0x24A

#endif
