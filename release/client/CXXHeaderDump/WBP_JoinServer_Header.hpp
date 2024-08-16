#ifndef UE4SS_SDK_WBP_JoinServer_Header_HPP
#define UE4SS_SDK_WBP_JoinServer_Header_HPP

class UWBP_JoinServer_Header_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UTextBlock* HeaderText;                                                     // 0x0238 (size: 0x8)
    FDataTableRowHandle LayoutInfoHandle;                                             // 0x0240 (size: 0x10)
    FFServerListingLayoutInfo HeaderLayoutInfo;                                       // 0x0250 (size: 0x38)
    bool bSortListBtnEnabled;                                                         // 0x0288 (size: 0x1)

    void SetSortBtnIsEnabled(bool bEnabled);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_JoinServer_Header(int32 EntryPoint);
}; // Size: 0x289

#endif
