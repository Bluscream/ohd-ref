#ifndef UE4SS_SDK_WBP_OptionMenu_Home_HPP
#define UE4SS_SDK_WBP_OptionMenu_Home_HPP

class UWBP_OptionMenu_Home_C : public UDFBaseMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UUniformGridPanel* EntitlementBadgeGrid;                                    // 0x0240 (size: 0x8)
    class UVerticalBox* MediaLinkVBox;                                                // 0x0248 (size: 0x8)
    class UDataTable* EntitlementBadgeDefinitionSource;                               // 0x0250 (size: 0x8)
    class UDataTable* MediaLinkDefinitionSource;                                      // 0x0258 (size: 0x8)
    int32 BadgeMaxRows;                                                               // 0x0260 (size: 0x4)
    int32 BadgeMaxColumns;                                                            // 0x0264 (size: 0x4)
    FMargin BadgeSlotPadding;                                                         // 0x0268 (size: 0x10)
    float BadgeMinDesiredSlotWidth;                                                   // 0x0278 (size: 0x4)
    float BadgeMinDesiredSlotHeight;                                                  // 0x027C (size: 0x4)

    void IsEntitledToBadge(TArray<FFEntitlementDefinition>& Entitlements, bool& bEntitled);
    void GetMaxGridSize(int32& MaxSize);
    void InsertMediaLink(FFCommunityMediaLinkUIDefinition& LinkUIDef);
    void InsertEntitlementBadge(FFEntitlementBadgeUIDefinition& EntitlementUIDef);
    void PreConstruct(bool IsDesignTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_OptionMenu_Home(int32 EntryPoint);
}; // Size: 0x280

#endif
