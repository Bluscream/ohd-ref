#ifndef UE4SS_SDK_WBP_DlgBox_Quit_HPP
#define UE4SS_SDK_WBP_DlgBox_Quit_HPP

class UWBP_DlgBox_Quit_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UImage* DialogBg;                                                           // 0x0238 (size: 0x8)
    class UImage* DialogDivider;                                                      // 0x0240 (size: 0x8)
    class UWBP_DialogBox_Button_C* NoBtn;                                             // 0x0248 (size: 0x8)
    class UWBP_DialogBox_Button_C* YesBtn;                                            // 0x0250 (size: 0x8)

    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Construct();
    void BndEvt__YesBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature(class UWBP_DialogBox_Button_C* ClickedBtn);
    void BndEvt__NoBtn_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature(class UWBP_DialogBox_Button_C* ClickedBtn);
    void DummyInput();
    void ExecuteUbergraph_WBP_DlgBox_Quit(int32 EntryPoint);
}; // Size: 0x258

#endif
