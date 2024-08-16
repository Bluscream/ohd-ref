#ifndef UE4SS_SDK_WBP_HDRadialMenu_HPP
#define UE4SS_SDK_WBP_HDRadialMenu_HPP

class UWBP_HDRadialMenu_C : public UWBP_HDRadialMenuBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* ShowFirst;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* ShowCategory;                                             // 0x0288 (size: 0x8)
    class UWidgetAnimation* ShowBuild;                                                // 0x0290 (size: 0x8)
    class UTextBlock* CategoryTitle;                                                  // 0x0298 (size: 0x8)
    class UImage* CenterCircle;                                                       // 0x02A0 (size: 0x8)
    class UWBP_RadialMenuBase_C* MenuOptionsRing;                                     // 0x02A8 (size: 0x8)
    class UTextBlock* MenuSubselection;                                               // 0x02B0 (size: 0x8)
    FName SelectedItem;                                                               // 0x02B8 (size: 0x8)
    FName SelectedMenuOption;                                                         // 0x02C0 (size: 0x8)
    FSHDRadialMenu_OptionData CategoryData;                                           // 0x02C8 (size: 0x28)
    bool bPickingItem;                                                                // 0x02F0 (size: 0x1)
    char padding_0[0x7];                                                              // 0x02F1 (size: 0x7)
    FSHDRadialMenu_OptionData SelectedItemData;                                       // 0x02F8 (size: 0x28)
    int32 SelectedIndex;                                                              // 0x0320 (size: 0x4)
    char padding_1[0x4];                                                              // 0x0324 (size: 0x4)
    class USoundBase* CategorySelectSound;                                            // 0x0328 (size: 0x8)
    class USoundBase* GoBackSound;                                                    // 0x0330 (size: 0x8)
    FSRadialMenuIconSettings IconStyle;                                               // 0x0338 (size: 0x28)
    class UDataTable* MenuOptionsMain;                                                // 0x0360 (size: 0x8)
    class UDataTable* MenuOptionsSelected;                                            // 0x0368 (size: 0x8)
    FSRadialMenuIconSettings DisabledIconStyle;                                       // 0x0370 (size: 0x28)
    float RallypointRespawnTimeDefault;                                               // 0x0398 (size: 0x4)
    float OutpostRespawnTime;                                                         // 0x039C (size: 0x4)
    int32 NumberOfSegments;                                                           // 0x03A0 (size: 0x4)

    FText GetOutpostName();
    void GetOutpostTimeRemaining(class ABP_HDPlayerCharacterBase_C* OwnerPawn, FText& TimeRemaining);
    FText GetRallypointName();
    void GetRallypointTimeRemaining(class ABP_HDPlayerCharacterBase_C* OwnerPawn, FText& TimeRemaining);
    void OwnerPawnDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
    void MakeOutpostIcon(FSHDRadialMenu_OptionData OptionData, class UWBP_RadialMenuIconBase_C*& Widget);
    void MakeRallypointIcon(FSHDRadialMenu_OptionData OptionData, class UWBP_RadialMenuIconBase_C*& Widget);
    void MakeSpottingIcon(FSHDRadialMenu_OptionData OptionData, class UWBP_RadialMenuIconBase_C*& Widget);
    void SelectSubmenu();
    void PopulateSubmenuOptions();
    void PopulateMenuOptions(class UDataTable* MenuOptions);
    void GetItemData(FName RowName, FSHDRadialMenu_OptionData& ItemData);
    void GetItemNamesForSelectedOption(TArray<FName>& OutRowNames);
    void GetCategoryData(FName Category, FSHDRadialMenu_OptionData& CategoryData);
    void GetCategories(TArray<FName>& Categories);
    FText GetCategoryName();
    void BndEvt__categoryRing_K2Node_ComponentBoundEvent_1_SelectionChanged__DelegateSignature(int32 NewSelection, int32 OldSelection);
    void Submit();
    void GoBack();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void OnCancel();
    void ExecuteUbergraph_WBP_HDRadialMenu(int32 EntryPoint);
}; // Size: 0x3A4

#endif
