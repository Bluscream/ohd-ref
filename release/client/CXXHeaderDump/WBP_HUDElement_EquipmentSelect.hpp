#ifndef UE4SS_SDK_WBP_HUDElement_EquipmentSelect_HPP
#define UE4SS_SDK_WBP_HUDElement_EquipmentSelect_HPP

class UWBP_HUDElement_EquipmentSelect_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UVerticalBox* SlotVBox;                                                     // 0x0238 (size: 0x8)
    int32 CurrentSlotIndex;                                                           // 0x0240 (size: 0x4)
    int32 CurrentSlotNum;                                                             // 0x0244 (size: 0x4)
    TArray<FFEqpSlotData> SlotData;                                                   // 0x0248 (size: 0x10)

    void SelectItemBySlotNum(int32 SlotNum);
    void GetSelectedItem(FFEqpSlotData& OutSlotData, bool& bFoundItem);
    void GetMinSlotIndex(TArray<FFEqpSlotData>& SlotDataArray, int32& MinSlotIndex);
    void CreateAndAddEquipmentWidget(class UTexture2D* Icon, int32 SlotNum, bool bEnabled, class AHDBaseWeapon* EqpItem);
    void ClearEquipmentList();
    void RemoveEquipmentAtSlotNum(int32 SlotNum, bool& bRemoved);
    void RebuildEquipmentList();
    void AddEquipment(FHDItemEntry& EqpInfo, class AHDBaseWeapon* EqpItem);
    void SelectItem(int32 NewSlotIndex);
    void SelectPrevItem();
    void SelectNextItem();
    void OnLoaded_B4ECD00040B15A8A41EE1DA4CE775D64(class UObject* Loaded);
    void PreConstruct(bool IsDesignTime);
    void LoadEquipmentAsset(TSoftObjectPtr<UTexture2D> IconToLoad, int32 SlotNum, class AHDBaseWeapon* EqpItem);
    void OnEquipmentListModified();
    void ExecuteUbergraph_WBP_HUDElement_EquipmentSelect(int32 EntryPoint);
}; // Size: 0x258

#endif
