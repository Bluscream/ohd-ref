#ifndef UE4SS_SDK_WBP_MouseInputCatcherOverlay_HPP
#define UE4SS_SDK_WBP_MouseInputCatcherOverlay_HPP

class UWBP_MouseInputCatcherOverlay_C : public UUserWidget
{
    class UWBP_OptionsMenuItem_InputKeySelector_C* TargetIKS;                         // 0x0230 (size: 0x8)

    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void SelectKey(FKey Key);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
}; // Size: 0x238

#endif
