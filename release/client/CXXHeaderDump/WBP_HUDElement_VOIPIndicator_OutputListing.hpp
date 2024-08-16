#ifndef UE4SS_SDK_WBP_HUDElement_VOIPIndicator_OutputListing_HPP
#define UE4SS_SDK_WBP_HUDElement_VOIPIndicator_OutputListing_HPP

class UWBP_HUDElement_VOIPIndicator_OutputListing_C : public UHDVoipIndicatorListingWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UWidgetAnimation* VOIPInputUIAnim;                                          // 0x0240 (size: 0x8)
    class UImage* PlayerClassIcon;                                                    // 0x0248 (size: 0x8)
    class UTextBlock* PlayerName;                                                     // 0x0250 (size: 0x8)
    bool bTintClassSymbolOnly;                                                        // 0x0258 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0259 (size: 0x7)
    FSlateColor LocalChannelColor;                                                    // 0x0260 (size: 0x28)
    FSlateColor SquadChannelColor;                                                    // 0x0288 (size: 0x28)
    FSlateColor CommandChannelColor;                                                  // 0x02B0 (size: 0x28)
    class UHDKit* PlayerLoadout;                                                      // 0x02D8 (size: 0x8)
    bool bVoiceMsgInfoSet;                                                            // 0x02E0 (size: 0x1)
    bool bActive;                                                                     // 0x02E1 (size: 0x1)

    void CheckForClassSymbolUpdates();
    void UpdateClassSymbol(class UHDKit* Loadout);
    void GetClassSymbolForLoadout(class UHDKit* Loadout, FSlateBrush& ClassSymbolToUse);
    void GetMostValidLoadoutFromPS(class APlayerState* PlayerState, class UHDKit*& Loadout);
    void OnVoiceMsgInfoSet(bool bIsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PlayerLoadoutChanged(class UHDKit* NewLoadout);
    void PreConstruct(bool IsDesignTime);
    void OnInitialized();
    void Activate();
    void Deactivate();
    void InputAnimFinished();
    void ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing(int32 EntryPoint);
}; // Size: 0x2E2

#endif
