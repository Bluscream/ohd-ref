#ifndef UE4SS_SDK_WBP_SpawnMap_POISelectionIndicator_HPP
#define UE4SS_SDK_WBP_SpawnMap_POISelectionIndicator_HPP

class UWBP_SpawnMap_POISelectionIndicator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UImage* SelectionIcon;                                                      // 0x0238 (size: 0x8)
    class UDFPOIWidget* ParentPOI;                                                    // 0x0240 (size: 0x8)
    FSlateBrush SelectionBrush;                                                       // 0x0248 (size: 0x88)
    FSlateBrush DeselectionBrush;                                                     // 0x02D0 (size: 0x88)

    void SetDeselectionBrush(FSlateBrush& NewDeselectionBrush);
    void Init(class UDFPOIWidget* ParentPOI, FSlateBrush& SelectionBrush, FSlateBrush& DeselectionBrush, bool bSelectable);
    void POI Selected();
    void POI Deselected(bool bSelectable);
    void ExecuteUbergraph_WBP_SpawnMap_POISelectionIndicator(int32 EntryPoint);
}; // Size: 0x358

#endif
