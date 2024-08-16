#ifndef UE4SS_SDK_WBP_CreateGameSelectionListEntry_HPP
#define UE4SS_SDK_WBP_CreateGameSelectionListEntry_HPP

class UWBP_CreateGameSelectionListEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UImage* ItemBg;                                                             // 0x0238 (size: 0x8)
    class USizeBox* ItemBox;                                                          // 0x0240 (size: 0x8)
    class UCheckBox* ItemCheckBox;                                                    // 0x0248 (size: 0x8)
    class UImage* ItemSelectionHighlight;                                             // 0x0250 (size: 0x8)
    class UTextBlock* ItemSubText;                                                    // 0x0258 (size: 0x8)
    class UTextBlock* ItemText;                                                       // 0x0260 (size: 0x8)
    FWBP_CreateGameSelectionListEntry_COnSelectionStateChanged OnSelectionStateChanged; // 0x0268 (size: 0x10)
    void OnSelectionStateChanged(class UWBP_CreateGameSelectionListEntry_C* Item, bool bSelected);
    FCheckBoxStyle ItemStyle;                                                         // 0x0278 (size: 0x580)
    FFSelectionItemTextStyle ItemTextStyle;                                           // 0x07F8 (size: 0x130)
    FFSelectionItemTextStyle ItemSubTextStyle;                                        // 0x0928 (size: 0x130)
    int32 ItemMinWidth;                                                               // 0x0A58 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0A5C (size: 0x4)
    FText Text;                                                                       // 0x0A60 (size: 0x18)
    FText SubText;                                                                    // 0x0A78 (size: 0x18)
    int32 ItemMinHeight;                                                              // 0x0A90 (size: 0x4)
    bool bSelectionToggle;                                                            // 0x0A94 (size: 0x1)

    void GetBrushWithImageTexture(FSlateBrush& Brush, class UTexture2D* Image, FSlateBrush& UpdatedBrush);
    void InternalRefreshDimensions();
    void GetItemMinHeight(int32& MinHeight);
    void GetItemMinWidth(int32& MinWidth);
    void SetItemMinDimensions(int32 InMinWidth, int32 InMinHeight);
    void GetItemSubText(FText& Text);
    void GetItemText(FText& Text);
    void SetItemSubText(FText InText);
    void SetItemText(FText InText);
    void GetItemSubTextStyle(FFSelectionItemTextStyle& TextStyle);
    void GetItemTextStyle(FFSelectionItemTextStyle& TextStyle);
    void GetItemStyle(FCheckBoxStyle& ItemStyle);
    void SetItemImage(class UTexture2D* InItemImg);
    void SetItemSubTextStyle(FFSelectionItemTextStyle InItemSubTextStyle);
    void SetItemTextStyle(FFSelectionItemTextStyle InItemTextStyle);
    void SetItemStyle(FCheckBoxStyle InItemStyle);
    void InternalUpdateItemBgTintColor(bool bSelected);
    void InternalApplyStyleToText(class UTextBlock* Text, FFSelectionItemTextStyle& TextStyle);
    void IsItemSelected(bool& bSelected);
    void GetItemSelectionState(ECheckBoxState& SelectionState);
    void SetItemIsSelected(bool bSelected);
    void SetItemSelectionState(ECheckBoxState InSelectionState);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_WBP_CreateGameSelectionListEntry(int32 EntryPoint);
    void OnSelectionStateChanged__DelegateSignature(class UWBP_CreateGameSelectionListEntry_C* Item, bool bSelected);
}; // Size: 0xA95

#endif
