#ifndef UE4SS_SDK_WBP_ServerBadge_HPP
#define UE4SS_SDK_WBP_ServerBadge_HPP

class UWBP_ServerBadge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UImage* BadgeIcon;                                                          // 0x0238 (size: 0x8)
    FFServerBadgeUIDefinition BadgeUIDefinition;                                      // 0x0240 (size: 0x98)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_ServerBadge(int32 EntryPoint);
}; // Size: 0x2D8

#endif
