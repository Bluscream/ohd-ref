#ifndef UE4SS_SDK_WBP_HDRadialMenuBase_HPP
#define UE4SS_SDK_WBP_HDRadialMenuBase_HPP

class UWBP_HDRadialMenuBase_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    FWBP_HDRadialMenuBase_CSubmenuCommit SubmenuCommit;                               // 0x0238 (size: 0x10)
    void SubmenuCommit(FName Category, FName SubItem);
    TArray<FKey> SubmitKeys;                                                          // 0x0248 (size: 0x10)
    TArray<FKey> BackKeys;                                                            // 0x0258 (size: 0x10)
    FWBP_HDRadialMenuBase_CCancel Cancel;                                             // 0x0268 (size: 0x10)
    void Cancel();

    FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Submit();
    void GoBack();
    void ExecuteUbergraph_WBP_HDRadialMenuBase(int32 EntryPoint);
    void Cancel__DelegateSignature();
    void SubmenuCommit__DelegateSignature(FName Category, FName SubItem);
}; // Size: 0x278

#endif
