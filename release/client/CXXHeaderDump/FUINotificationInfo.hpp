#ifndef UE4SS_SDK_FUINotificationInfo_HPP
#define UE4SS_SDK_FUINotificationInfo_HPP

struct FFUINotificationInfo
{
    bool bSticky_39_C8B5F7EA4B0CE36A7C3FCFB49144B3F7;                                 // 0x0000 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0001 (size: 0x3)
    int32 StickyPriority_40_320EDA894F6E6AAB7C7637A2B6D710D1;                         // 0x0004 (size: 0x4)
    TEnumAsByte<EUINotificationType::Type> Type_28_365504214430999EE18714B7E8E4629C;  // 0x0008 (size: 0x1)
    bool bUseRichText_41_A1267AFD452EE85D86C81492DEBB09A7;                            // 0x0009 (size: 0x1)
    char padding_1[0x6];                                                              // 0x000A (size: 0x6)
    FText Text_8_5EED6FCB45B9C6640B0335BFC4E80567;                                    // 0x0010 (size: 0x18)
    FText TimerStyleNeedtohavetimerwrittenbetweenstylemarkersex<Normal>timer<>_43_A147B8FE4FCBDE086D11D58AE938D024; // 0x0028 (size: 0x18)
    float DisplayTime_42_6C0F85FE461EEF4AB0BC469F8B8D1E92;                            // 0x0040 (size: 0x4)

}; // Size: 0x44

#endif
