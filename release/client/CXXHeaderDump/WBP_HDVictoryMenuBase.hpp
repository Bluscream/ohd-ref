#ifndef UE4SS_SDK_WBP_HDVictoryMenuBase_HPP
#define UE4SS_SDK_WBP_HDVictoryMenuBase_HPP

class UWBP_HDVictoryMenuBase_C : public UVictoryMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0250 (size: 0x8)
    class UTextBlock* BluforForceText;                                                // 0x0258 (size: 0x8)
    class UTextBlock* BluforTeamScoreText;                                            // 0x0260 (size: 0x8)
    class UTextBlock* ElapsedTimeText;                                                // 0x0268 (size: 0x8)
    class UTextBlock* GameModeNameText;                                               // 0x0270 (size: 0x8)
    class UTextBlock* MapNameText;                                                    // 0x0278 (size: 0x8)
    class UTextBlock* OpforForceText;                                                 // 0x0280 (size: 0x8)
    class UTextBlock* OpforTeamScoreText;                                             // 0x0288 (size: 0x8)
    class UTextBlock* VictoryText;                                                    // 0x0290 (size: 0x8)
    FText BluforVictoryText;                                                          // 0x0298 (size: 0x18)
    FText OpforVictoryText;                                                           // 0x02B0 (size: 0x18)
    FText NoTeamVictoryText;                                                          // 0x02C8 (size: 0x18)
    class UAudioComponent* MenuMusicAC;                                               // 0x02E0 (size: 0x8)
    class USoundBase* WinMusicBlufor;                                                 // 0x02E8 (size: 0x8)
    class USoundBase* WinMusicOpfor;                                                  // 0x02F0 (size: 0x8)
    class USoundBase* LossMusicBlufor;                                                // 0x02F8 (size: 0x8)
    class USoundBase* LossMusicOpfor;                                                 // 0x0300 (size: 0x8)
    class AHDTeamState* WinningTeamState;                                             // 0x0308 (size: 0x8)
    class AHDTeamState* BluforTeamState;                                              // 0x0310 (size: 0x8)
    TSubclassOf<class UBP_HDFactionInfoBase_C> BluforFactionInfoClass;                // 0x0318 (size: 0x8)
    class AHDTeamState* OpforTeamState;                                               // 0x0320 (size: 0x8)
    TSubclassOf<class UBP_HDFactionInfoBase_C> OpforFactionInfoClass;                 // 0x0328 (size: 0x8)

    void GetPlayerTeam(EHDTeam& PlayerTeam);
    void GetMusicTrackToUse(EHDTeam PlayerTeam, bool bPlayerWon, class USoundBase*& SoundToUse);
    void PlayWinLossMenuMusic();
    void SetupTeamScoreText();
    void SetupGameModeNameText();
    void SetupElapsedTimeText();
    void SetupMapNameText();
    void SetupForceNameText();
    void SetupVictoryText();
    FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Construct();
    void OnVictoryInit();
    void ExecuteUbergraph_WBP_HDVictoryMenuBase(int32 EntryPoint);
}; // Size: 0x330

#endif
