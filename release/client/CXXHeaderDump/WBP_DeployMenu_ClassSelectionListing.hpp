#ifndef UE4SS_SDK_WBP_DeployMenu_ClassSelectionListing_HPP
#define UE4SS_SDK_WBP_DeployMenu_ClassSelectionListing_HPP

class UWBP_DeployMenu_ClassSelectionListing_C : public UDeployMenu_ClassSelectionListing
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UImage* ClassBg;                                                            // 0x0238 (size: 0x8)
    class UTextBlock* ClassNameText;                                                  // 0x0240 (size: 0x8)
    class UTextBlock* ClassRestrictedText;                                            // 0x0248 (size: 0x8)
    class UImage* ClassSymbol;                                                        // 0x0250 (size: 0x8)
    class UUniformGridPanel* EqpGrid;                                                 // 0x0258 (size: 0x8)
    class UImage* EqpSlot1;                                                           // 0x0260 (size: 0x8)
    class UImage* EqpSlot2;                                                           // 0x0268 (size: 0x8)
    class UImage* EqpSlot3;                                                           // 0x0270 (size: 0x8)
    class UImage* EqpSlot4;                                                           // 0x0278 (size: 0x8)
    class UImage* EqpSlot5;                                                           // 0x0280 (size: 0x8)
    class UImage* EqpSlot6;                                                           // 0x0288 (size: 0x8)
    class UImage* EqpSlot7;                                                           // 0x0290 (size: 0x8)
    class UImage* EqpSlot8;                                                           // 0x0298 (size: 0x8)
    class UImage* Image_10;                                                           // 0x02A0 (size: 0x8)
    class UImage* Image_11;                                                           // 0x02A8 (size: 0x8)
    class UImage* Image_12;                                                           // 0x02B0 (size: 0x8)
    class UImage* Image_13;                                                           // 0x02B8 (size: 0x8)
    class UImage* PrimaryWeaponIcon;                                                  // 0x02C0 (size: 0x8)
    class UOverlay* RestrictedOverlay;                                                // 0x02C8 (size: 0x8)
    class UButton* SelectClassBtn;                                                    // 0x02D0 (size: 0x8)
    class UHDKit* Kit;                                                                // 0x02D8 (size: 0x8)
    bool bListingInitialized;                                                         // 0x02E0 (size: 0x1)
    char padding_0[0x7];                                                              // 0x02E1 (size: 0x7)
    class ABP_HDPlayerControllerBase_C* HDOwningPlayer;                               // 0x02E8 (size: 0x8)
    FWBP_DeployMenu_ClassSelectionListing_COnClassSelected OnClassSelected;           // 0x02F0 (size: 0x10)
    void OnClassSelected(class UWBP_DeployMenu_ClassSelectionListing_C* SelectedClassWidget);
    bool bSelected;                                                                   // 0x0300 (size: 0x1)
    bool bRestricted;                                                                 // 0x0301 (size: 0x1)
    char padding_1[0x6];                                                              // 0x0302 (size: 0x6)
    FWBP_DeployMenu_ClassSelectionListing_COnClassDeselected OnClassDeselected;       // 0x0308 (size: 0x10)
    void OnClassDeselected(class UWBP_DeployMenu_ClassSelectionListing_C* DeselectedClassWidget);
    FSlateBrush DefaultDisplaySymbolBrush;                                            // 0x0318 (size: 0x88)
    FLinearColor NoSymbolColor;                                                       // 0x03A0 (size: 0x10)
    FText DefaultDisplayNameText;                                                     // 0x03B0 (size: 0x18)
    FButtonStyle SelectedBtnStyle;                                                    // 0x03C8 (size: 0x278)
    FButtonStyle DeselectedBtnStyle;                                                  // 0x0640 (size: 0x278)
    FSlateColor ClassSymbolDisabledTint;                                              // 0x08B8 (size: 0x28)
    FSlateColor ClassSymbolEnabledTint;                                               // 0x08E0 (size: 0x28)
    TArray<FHDItemEntry> KitItemEntries;                                              // 0x0908 (size: 0x10)
    FSlateBrush DefaultEqpSymbolBrush;                                                // 0x0918 (size: 0x88)
    FLinearColor DefaultEqpSymbolColor;                                               // 0x09A0 (size: 0x10)
    FSlateColor RestrictedTextColor;                                                  // 0x09B0 (size: 0x28)
    FSlateColor UnrestrictedTextColor;                                                // 0x09D8 (size: 0x28)
    FText KitLimitationDisplayText;                                                   // 0x0A00 (size: 0x18)

    void AreColorsNearlyEqual(FLinearColor ColorOne, FLinearColor ColorTwo, bool& bEqual);
    void InternalFillEqpSlots();
    void SortItemEntriesInPlaceBySlotNum(TArray<FHDItemEntry>& EntriesToSort);
    void InternalSetEqpDisplaySymbolBySlotNum(int32 SlotNum, class UTexture2D* SlotSymbolToUse, bool bDesignTime);
    void InternalSetupKitDisplayEqpSlots();
    void InternalGetEqpSlotImageWidgetByNum(int32 SlotNum, class UImage*& EqpSlotImage);
    void InternalSetClassRestrictedState(bool bNewRestricted, FText& NewRestrictionReason);
    void InternalUpdateClassRestrictedText(bool bKitRestricted, FText& KitRestrictionReason);
    void InternalSetupKitRestrictionDisplay(bool bKitRestricted, FText& KitRestrictionReason);
    void InternalIsKitRestricted(bool& bKitRestricted, FText& KitRestrictionReason);
    void InternalSetupKitDisplayName();
    void InternalSetupKitDisplaySymbol();
    void SetSelected(bool bSelected);
    void ToggleClassSelection();
    void InternalSetClassSelectionState(bool bNewSelected);
    void DeselectClass();
    void SelectClass();
    void InternalSetupPrimaryWeaponIcon();
    void UpdateRestrictedState();
    void InternalKitDisplaySetup();
    void Init(class UHDKit* Kit, class ABP_HDPlayerControllerBase_C* OwningPC);
    void BndEvt__SelectClassBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_WBP_DeployMenu_ClassSelectionListing(int32 EntryPoint);
    void OnClassDeselected__DelegateSignature(class UWBP_DeployMenu_ClassSelectionListing_C* DeselectedClassWidget);
    void OnClassSelected__DelegateSignature(class UWBP_DeployMenu_ClassSelectionListing_C* SelectedClassWidget);
}; // Size: 0xA18

#endif
