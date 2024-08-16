#ifndef UE4SS_SDK_Tinkerbox_HPP
#define UE4SS_SDK_Tinkerbox_HPP

#include "Tinkerbox_enums.hpp"

struct FMinimapGenerationSettings
{
    class AActor* BoundaryMarkerA;                                                    // 0x0000 (size: 0x8)
    class AActor* BoundaryMarkerB;                                                    // 0x0008 (size: 0x8)
    FVector BoundaryMidPointLoc;                                                      // 0x0010 (size: 0xC)
    EMinimapCaptureResolution CaptureResolution;                                      // 0x001C (size: 0x2)
    char padding_0[0x2];                                                              // 0x001E (size: 0x2)
    float PlayableBoundaryLength;                                                     // 0x0020 (size: 0x4)

}; // Size: 0x28

class ATBLevelScriptActor : public ADFLevelScriptActor
{
    char padding_0[0x228];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x228

class ATBWorldSettings : public ADFWorldSettings
{
    FMinimapGenerationSettings MinimapSettings;                                       // 0x04C8 (size: 0x28)
    TSoftObjectPtr<UTexture2D> MinimapImg;                                            // 0x04F0 (size: 0x28)

}; // Size: 0x518

class UTBGameInstance : public UDFBaseGameInstance
{
    class UDFBaseMenu* MainMenu;                                                      // 0x0288 (size: 0x8)
    TSubclassOf<class UDFBaseMenu> MainMenuClass;                                     // 0x0290 (size: 0x8)
    FSoftClassPath MenuGameMode;                                                      // 0x0298 (size: 0x18)
    uint8 bHidePlayerHUDInMainMenu;                                                   // 0x02B0 (size: 0x1)
    uint8 bUseMenuBackgroundMaps;                                                     // 0x02B0 (size: 0x1)
    char padding_0[0x7];                                                              // 0x02B1 (size: 0x7)
    TArray<FSoftObjectPath> MenuBackgroundMaps;                                       // 0x02B8 (size: 0x10)
    char padding_1[0x8];                                                              // 0x02C8 (size: 0x8)
    class URCONServerSystem* RCONServerSystem;                                        // 0x02D0 (size: 0x8)

    void UnloadMainMenu();
    void LoadMainMenu(bool bExclusive);
    void HandleGoToMainMenu();
    void GoToMainMenu();
    void GetGameBuildInfo();
    bool GetCurrentSessionHostAddressStr(FString& OutHostAddrStr, bool bPreferSteamP2PAddr, bool bAppendPort);
}; // Size: 0x2D8

class UTBGameUserDeveloperSettings : public UDeveloperSettings
{
    FSoftObjectPath SFXSoundMix;                                                      // 0x0038 (size: 0x18)
    FSoftObjectPath MusicSoundMix;                                                    // 0x0050 (size: 0x18)
    FSoftObjectPath VOSoundMix;                                                       // 0x0068 (size: 0x18)
    FSoftObjectPath VoiPSoundMix;                                                     // 0x0080 (size: 0x18)

}; // Size: 0x98

class UTBGameUserSettings : public UGameUserSettings
{
    uint32 CustomVersion;                                                             // 0x0120 (size: 0x4)
    bool bUseSmoothFrameRate;                                                         // 0x0124 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0125 (size: 0x3)
    float DesiredDisplayGamma;                                                        // 0x0128 (size: 0x4)
    float DesiredFOV;                                                                 // 0x012C (size: 0x4)
    bool bUseMotionBlur;                                                              // 0x0130 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0131 (size: 0x3)
    float DesiredMouseSensitivityX;                                                   // 0x0134 (size: 0x4)
    float DesiredMouseSensitivityY;                                                   // 0x0138 (size: 0x4)
    bool bInvertMousePitch;                                                           // 0x013C (size: 0x1)
    bool bUseMouseSmoothing;                                                          // 0x013D (size: 0x1)
    bool DesiredSwitchFireModeOnReselect;                                             // 0x013E (size: 0x1)
    bool LastConfirmedSwitchFireModeOnReselect;                                       // 0x013F (size: 0x1)
    bool bUseHeadphoneMode;                                                           // 0x0140 (size: 0x1)
    bool bAllowSoundInBackground;                                                     // 0x0141 (size: 0x1)
    char padding_2[0x2];                                                              // 0x0142 (size: 0x2)
    float DesiredMasterVolumeLevel;                                                   // 0x0144 (size: 0x4)
    float LastConfirmedMasterVolumeLevel;                                             // 0x0148 (size: 0x4)
    float DesiredSFXVolumeLevel;                                                      // 0x014C (size: 0x4)
    float LastConfirmedSFXVolumeLevel;                                                // 0x0150 (size: 0x4)
    float DesiredMusicVolumeLevel;                                                    // 0x0154 (size: 0x4)
    float LastConfirmedMusicVolumeLevel;                                              // 0x0158 (size: 0x4)
    float DesiredVOVolumeLevel;                                                       // 0x015C (size: 0x4)
    float LastConfirmedVOVolumeLevel;                                                 // 0x0160 (size: 0x4)
    float DesiredVoiPVolumeLevel;                                                     // 0x0164 (size: 0x4)
    float LastConfirmedVoiPVolumeLevel;                                               // 0x0168 (size: 0x4)
    bool bPlayerIsChangingKeyBindings;                                                // 0x016C (size: 0x1)
    char padding_3[0x3];                                                              // 0x016D (size: 0x3)
    FKey DesiredMoveForwardKey;                                                       // 0x0170 (size: 0x18)
    FKey LastConfirmedMoveForwardKey;                                                 // 0x0188 (size: 0x18)
    FKey DesiredMoveBackwardKey;                                                      // 0x01A0 (size: 0x18)
    FKey LastConfirmedMoveBackwardKey;                                                // 0x01B8 (size: 0x18)
    FKey DesiredMoveLeftKey;                                                          // 0x01D0 (size: 0x18)
    FKey LastConfirmedMoveLeftKey;                                                    // 0x01E8 (size: 0x18)
    FKey DesiredMoveRightKey;                                                         // 0x0200 (size: 0x18)
    FKey LastConfirmedMoveRightKey;                                                   // 0x0218 (size: 0x18)
    FKey DesiredLeanLeftKey;                                                          // 0x0230 (size: 0x18)
    FKey LastConfirmedLeanLeftKey;                                                    // 0x0248 (size: 0x18)
    FKey DesiredLeanLeftToggleKey;                                                    // 0x0260 (size: 0x18)
    FKey LastConfirmedLeanLeftToggleKey;                                              // 0x0278 (size: 0x18)
    FKey DesiredLeanRightKey;                                                         // 0x0290 (size: 0x18)
    FKey LastConfirmedLeanRightKey;                                                   // 0x02A8 (size: 0x18)
    FKey DesiredLeanRightToggleKey;                                                   // 0x02C0 (size: 0x18)
    FKey LastConfirmedLeanRightToggleKey;                                             // 0x02D8 (size: 0x18)
    FKey DesiredSprintKey;                                                            // 0x02F0 (size: 0x18)
    FKey LastConfirmedSprintKey;                                                      // 0x0308 (size: 0x18)
    FKey DesiredSprintToggleKey;                                                      // 0x0320 (size: 0x18)
    FKey LastConfirmedSprintToggleKey;                                                // 0x0338 (size: 0x18)
    FKey DesiredCrouchKey;                                                            // 0x0350 (size: 0x18)
    FKey LastConfirmedCrouchKey;                                                      // 0x0368 (size: 0x18)
    FKey DesiredCrouchToggleKey;                                                      // 0x0380 (size: 0x18)
    FKey LastConfirmedCrouchToggleKey;                                                // 0x0398 (size: 0x18)
    FKey DesiredProneKey;                                                             // 0x03B0 (size: 0x18)
    FKey LastConfirmedProneKey;                                                       // 0x03C8 (size: 0x18)
    FKey DesiredJumpVaultKey;                                                         // 0x03E0 (size: 0x18)
    FKey LastConfirmedJumpVaultKey;                                                   // 0x03F8 (size: 0x18)
    FKey DesiredJumpKey;                                                              // 0x0410 (size: 0x18)
    FKey LastConfirmedJumpKey;                                                        // 0x0428 (size: 0x18)
    FKey DesiredVaultKey;                                                             // 0x0440 (size: 0x18)
    FKey LastConfirmedVaultKey;                                                       // 0x0458 (size: 0x18)
    FKey DesiredFireKey;                                                              // 0x0470 (size: 0x18)
    FKey LastConfirmedFireKey;                                                        // 0x0488 (size: 0x18)
    FKey DesiredSwitchFireModeKey;                                                    // 0x04A0 (size: 0x18)
    FKey LastConfirmedSwitchFireModeKey;                                              // 0x04B8 (size: 0x18)
    FKey DesiredReloadKey;                                                            // 0x04D0 (size: 0x18)
    FKey LastConfirmedReloadKey;                                                      // 0x04E8 (size: 0x18)
    FKey DesiredAimKey;                                                               // 0x0500 (size: 0x18)
    FKey LastConfirmedAimKey;                                                         // 0x0518 (size: 0x18)
    FKey DesiredAimToggleKey;                                                         // 0x0530 (size: 0x18)
    FKey LastConfirmedAimToggleKey;                                                   // 0x0548 (size: 0x18)
    FKey DesiredPointAimToggleKey;                                                    // 0x0560 (size: 0x18)
    FKey LastConfirmedPointAimToggleKey;                                              // 0x0578 (size: 0x18)
    FKey DesiredCycleWeaponSightsKey;                                                 // 0x0590 (size: 0x18)
    FKey LastConfirmedCycleWeaponSightsKey;                                           // 0x05A8 (size: 0x18)
    FKey DesiredNextItemKey;                                                          // 0x05C0 (size: 0x18)
    FKey LastConfirmedNextItemKey;                                                    // 0x05D8 (size: 0x18)
    FKey DesiredPreviousItemKey;                                                      // 0x05F0 (size: 0x18)
    FKey LastConfirmedPreviousItemKey;                                                // 0x0608 (size: 0x18)
    FKey DesiredItemSlot0Key;                                                         // 0x0620 (size: 0x18)
    FKey LastConfirmedItemSlot0Key;                                                   // 0x0638 (size: 0x18)
    FKey DesiredItemSlot1Key;                                                         // 0x0650 (size: 0x18)
    FKey LastConfirmedItemSlot1Key;                                                   // 0x0668 (size: 0x18)
    FKey DesiredItemSlot2Key;                                                         // 0x0680 (size: 0x18)
    FKey LastConfirmedItemSlot2Key;                                                   // 0x0698 (size: 0x18)
    FKey DesiredItemSlot3Key;                                                         // 0x06B0 (size: 0x18)
    FKey LastConfirmedItemSlot3Key;                                                   // 0x06C8 (size: 0x18)
    FKey DesiredItemSlot4Key;                                                         // 0x06E0 (size: 0x18)
    FKey LastConfirmedItemSlot4Key;                                                   // 0x06F8 (size: 0x18)
    FKey DesiredItemSlot5Key;                                                         // 0x0710 (size: 0x18)
    FKey LastConfirmedItemSlot5Key;                                                   // 0x0728 (size: 0x18)
    FKey DesiredItemSlot6Key;                                                         // 0x0740 (size: 0x18)
    FKey LastConfirmedItemSlot6Key;                                                   // 0x0758 (size: 0x18)
    FKey DesiredItemSlot7Key;                                                         // 0x0770 (size: 0x18)
    FKey LastConfirmedItemSlot7Key;                                                   // 0x0788 (size: 0x18)
    FKey DesiredItemSlot8Key;                                                         // 0x07A0 (size: 0x18)
    FKey LastConfirmedItemSlot8Key;                                                   // 0x07B8 (size: 0x18)
    FKey DesiredItemSlot9Key;                                                         // 0x07D0 (size: 0x18)
    FKey LastConfirmedItemSlot9Key;                                                   // 0x07E8 (size: 0x18)
    FKey DesiredPushToTalkLocalKey;                                                   // 0x0800 (size: 0x18)
    FKey LastConfirmedPushToTalkLocalKey;                                             // 0x0818 (size: 0x18)
    FKey DesiredPushToTalkSquadKey;                                                   // 0x0830 (size: 0x18)
    FKey LastConfirmedPushToTalkSquadKey;                                             // 0x0848 (size: 0x18)
    FKey DesiredPushToTalkCommandKey;                                                 // 0x0860 (size: 0x18)
    FKey LastConfirmedPushToTalkCommandKey;                                           // 0x0878 (size: 0x18)
    FKey DesiredSayAllKey;                                                            // 0x0890 (size: 0x18)
    FKey LastConfirmedSayAllKey;                                                      // 0x08A8 (size: 0x18)
    FKey DesiredSayTeamKey;                                                           // 0x08C0 (size: 0x18)
    FKey LastConfirmedSayTeamKey;                                                     // 0x08D8 (size: 0x18)
    FKey DesiredSaySquadKey;                                                          // 0x08F0 (size: 0x18)
    FKey LastConfirmedSaySquadKey;                                                    // 0x0908 (size: 0x18)
    FKey DesiredUseKey;                                                               // 0x0920 (size: 0x18)
    FKey LastConfirmedUseKey;                                                         // 0x0938 (size: 0x18)
    FKey DesiredShowScoreboardKey;                                                    // 0x0950 (size: 0x18)
    FKey LastConfirmedShowScoreboardKey;                                              // 0x0968 (size: 0x18)
    FKey DesiredDeployMenuKey;                                                        // 0x0980 (size: 0x18)
    FKey LastConfirmedDeployMenuKey;                                                  // 0x0998 (size: 0x18)
    FKey DesiredRadialMenuKey;                                                        // 0x09B0 (size: 0x18)
    FKey LastConfirmedRadialMenuKey;                                                  // 0x09C8 (size: 0x18)
    FKey DesiredCameraToggleKey;                                                      // 0x09E0 (size: 0x18)
    FKey LastConfirmedCameraToggleKey;                                                // 0x09F8 (size: 0x18)
    FKey DesiredChatHistoryKey;                                                       // 0x0A10 (size: 0x18)
    FKey LastConfirmedChatHistoryKey;                                                 // 0x0A28 (size: 0x18)
    FKey DesiredVoteYesKey;                                                           // 0x0A40 (size: 0x18)
    FKey LastConfirmedVoteYesKey;                                                     // 0x0A58 (size: 0x18)
    FKey DesiredVoteNoKey;                                                            // 0x0A70 (size: 0x18)
    FKey LastConfirmedVoteNoKey;                                                      // 0x0A88 (size: 0x18)
    FKey DesiredConsoleKey;                                                           // 0x0AA0 (size: 0x18)
    FKey LastConfirmedConsoleKey;                                                     // 0x0AB8 (size: 0x18)

    void SetWeaponSlot9KeyBinding(FInputChord NewKey);
    void SetWeaponSlot8KeyBinding(FInputChord NewKey);
    void SetWeaponSlot7KeyBinding(FInputChord NewKey);
    void SetWeaponSlot6KeyBinding(FInputChord NewKey);
    void SetWeaponSlot5KeyBinding(FInputChord NewKey);
    void SetWeaponSlot4KeyBinding(FInputChord NewKey);
    void SetWeaponSlot3KeyBinding(FInputChord NewKey);
    void SetWeaponSlot2KeyBinding(FInputChord NewKey);
    void SetWeaponSlot1KeyBinding(FInputChord NewKey);
    void SetWeaponSlot0KeyBinding(FInputChord NewKey);
    void SetVoteYesKeyBinding(FInputChord NewKey);
    void SetVoteNoKeyBinding(FInputChord NewKey);
    void SetVoiceVolumeLevelNormalized(float NormVoiceVolume);
    void SetVoiceVolumeLevel(float VoiceVolume);
    void SetVaultKeyBinding(FInputChord NewKey);
    void SetUseKeyBinding(FInputChord NewKey);
    void SetSwitchFireModeOnReselect(bool bEnable);
    void SetSwitchFireModeKeyBinding(FInputChord NewKey);
    void SetSprintToggleKeyBinding(FInputChord NewKey);
    void SetSprintKeyBinding(FInputChord NewKey);
    void SetSoundEffectsVolumeLevelNormalized(float NormSFXVolume);
    void SetSoundEffectsVolumeLevel(float SFXVolume);
    void SetSmoothMouseEnabled(bool bEnable);
    void SetSmoothFrameRateEnabled(bool bEnabled);
    void SetShowScoreboardKeyBinding(FInputChord NewKey);
    void SetSayTeamKeyBinding(FInputChord NewKey);
    void SetSaySquadKeyBinding(FInputChord NewKey);
    void SetSayAllKeyBinding(FInputChord NewKey);
    void SetReloadKeyBinding(FInputChord NewKey);
    void SetRadialMenuKeyBinding(FInputChord NewKey);
    void SetPushToTalkSquadKeyBinding(FInputChord NewKey);
    void SetPushToTalkLocalKeyBinding(FInputChord NewKey);
    void SetPushToTalkCommandKeyBinding(FInputChord NewKey);
    void SetProneKeyBinding(FInputChord NewKey);
    void SetPreviousItemKeyBinding(FInputChord NewKey);
    void SetPointAimToggleKeyBinding(FInputChord NewKey);
    void SetPlayerIsChangingKeyBindings(bool NewValue);
    void SetNextItemKeyBinding(FInputChord NewKey);
    void SetMusicVolumeLevelNormalized(float NormMusicVolume);
    void SetMusicVolumeLevel(float MusicVolume);
    void SetMoveRightKeyBinding(FInputChord NewKey);
    void SetMoveLeftKeyBinding(FInputChord NewKey);
    void SetMoveForwardKeyBinding(FInputChord NewKey);
    void SetMoveBackwardKeyBinding(FInputChord NewKey);
    void SetMouseSensitivityNormalized(float NormSensitivityX, float NormSensitivityY);
    void SetMouseSensitivity(float SensitivityX, float SensitivityY);
    void SetMotionBlurEnabled(bool bEnabled);
    void SetMasterVolumeLevelNormalized(float NormMasterVolume);
    void SetMasterVolumeLevel(float MasterVolume);
    void SetLeanRightToggleKeyBinding(FInputChord NewKey);
    void SetLeanRightKeyBinding(FInputChord NewKey);
    void SetLeanLeftToggleKeyBinding(FInputChord NewKey);
    void SetLeanLeftKeyBinding(FInputChord NewKey);
    void SetJumpVaultKeyBinding(FInputChord NewKey);
    void SetJumpKeyBinding(FInputChord NewKey);
    void SetInvertMousePitch(bool bInvertPitch);
    void SetFireKeyBinding(FInputChord NewKey);
    void SetFieldOfView(float NewFOV);
    void SetDisplayGamma(float NewGamma);
    void SetDialogueVolumeLevelNormalized(float NormDialogueVolume);
    void SetDialogueVolumeLevel(float DialogueVolume);
    void SetDeployMenuKeyBinding(FInputChord NewKey);
    void SetCycleWeaponSightsKeyBinding(FInputChord NewKey);
    void SetCrouchToggleKeyBinding(FInputChord NewKey);
    void SetCrouchKeyBinding(FInputChord NewKey);
    void SetConsoleKeyBinding(FInputChord NewKey);
    void SetChatHistoryKeyBinding(FInputChord NewKey);
    void SetCameraToggleKeyBinding(FInputChord NewKey);
    void SetAllowSoundInBackground(bool bAllow);
    void SetAimDownSightsToggleKeyBinding(FInputChord NewKey);
    void SetAimDownSightsKeyBinding(FInputChord NewKey);
    bool IsVoiceVolumeLevelDirty();
    bool IsSwitchFireModeOnReselectDirty();
    bool IsSoundInBackgroundAllowed();
    bool IsSoundEffectsVolumeLevelDirty();
    bool IsSmoothMouseEnabled();
    bool IsSmoothMouseDirty();
    bool IsSmoothFrameRateEnabled();
    bool IsSmoothFrameRateDirty();
    bool IsPlayerChangingKeyBindings();
    bool IsMusicVolumeLevelDirty();
    bool IsMouseSensitivityDirty();
    bool IsMotionBlurEnabled();
    bool IsMotionBlurDirty();
    bool IsMasterVolumeLevelDirty();
    bool IsInvertMouseDirty();
    bool IsHeadphoneModeEnabled();
    bool IsHeadphoneModeDirty();
    bool IsFrameRateLimitDirty();
    bool IsFieldOfViewDirty();
    bool IsDisplayGammaDirty();
    bool IsDialogueVolumeLevelDirty();
    bool IsAudioQualityDirty();
    bool IsAnyInputKeyBindingDirty();
    bool IsAllowSoundInBackgroundDirty();
    FKey GetWeaponSlot9KeyBinding();
    FKey GetWeaponSlot8KeyBinding();
    FKey GetWeaponSlot7KeyBinding();
    FKey GetWeaponSlot6KeyBinding();
    FKey GetWeaponSlot5KeyBinding();
    FKey GetWeaponSlot4KeyBinding();
    FKey GetWeaponSlot3KeyBinding();
    FKey GetWeaponSlot2KeyBinding();
    FKey GetWeaponSlot1KeyBinding();
    FKey GetWeaponSlot0KeyBinding();
    FKey GetVoteYesKeyBinding();
    FKey GetVoteNoKeyBinding();
    float GetVoiceVolumeLevelNormalized();
    float GetVoiceVolumeLevel();
    FKey GetVaultKeyBinding();
    FKey GetUseKeyBinding();
    bool GetSwitchFireModeOnReselect(bool bLastConfirmed);
    FKey GetSwitchFireModeKeyBinding();
    FKey GetSprintToggleKeyBinding();
    FKey GetSprintKeyBinding();
    float GetSoundEffectsVolumeLevelNormalized();
    float GetSoundEffectsVolumeLevel();
    FKey GetShowScoreboardKeyBinding();
    FKey GetSayTeamKeyBinding();
    FKey GetSaySquadKeyBinding();
    FKey GetSayAllKeyBinding();
    FKey GetReloadKeyBinding();
    FKey GetRadialMenuKeyBinding();
    FKey GetPushToTalkSquadKeyBinding();
    FKey GetPushToTalkLocalKeyBinding();
    FKey GetPushToTalkCommandKeyBinding();
    FKey GetProneKeyBinding();
    FKey GetPreviousItemKeyBinding();
    FKey GetPointAimToggleKeyBinding();
    FKey GetNextItemKeyBinding();
    float GetMusicVolumeLevelNormalized();
    float GetMusicVolumeLevel();
    FKey GetMoveRightKeyBinding();
    FKey GetMoveLeftKeyBinding();
    FKey GetMoveForwardKeyBinding();
    FKey GetMoveBackwardKeyBinding();
    float GetMouseSensitivityYNormalized();
    float GetMouseSensitivityY();
    float GetMouseSensitivityXNormalized();
    float GetMouseSensitivityX();
    float GetMasterVolumeLevelNormalized();
    float GetMasterVolumeLevel();
    class APlayerController* GetLocalPlayerControllerBP();
    FKey GetLeanRightKeyToggleBinding();
    FKey GetLeanRightKeyBinding();
    FKey GetLeanLeftToggleKeyBinding();
    FKey GetLeanLeftKeyBinding();
    float GetLastConfirmedMasterVolumeLevelNormalized();
    float GetLastConfirmedMasterVolumeLevel();
    FKey GetJumpVaultKeyBinding();
    FKey GetJumpKeyBinding();
    bool GetInvertMousePitch();
    float GetFrameRateLimitCurrent();
    FKey GetFireKeyBinding();
    float GetFieldOfView();
    float GetDisplayGamma();
    float GetDialogueVolumeLevelNormalized();
    float GetDialogueVolumeLevel();
    FKey GetDeployMenuKeyBinding();
    FKey GetCycleWeaponSightsKeyBinding();
    FKey GetCrouchToggleKeyBinding();
    FKey GetCrouchKeyBinding();
    FKey GetConsoleKeyBinding();
    FKey GetChatHistoryKeyBinding();
    FKey GetCameraToggleKeyBinding();
    FKey GetAimDownSightsToggleKeyBinding();
    FKey GetAimDownSightsKeyBinding();
    bool FirstRunHardwareBenchmark(int32 WorkScale, float CPUMultiplier, float GPUMultiplier);
    void EnableHeadphoneMode(bool bEnabled);
}; // Size: 0xAD0

class UTBVoiceIndicator : public UUserWidget
{
    TSubclassOf<class UTBVoiceIndicatorListing> VoiceListingClass;                    // 0x0230 (size: 0x8)
    class UPanelWidget* ActiveVoiceList;                                              // 0x0238 (size: 0x8)
    int32 MaxActiveVoices;                                                            // 0x0240 (size: 0x4)
    int32 ActiveVoices;                                                               // 0x0244 (size: 0x4)

    void ActiveVoiceRemoved(class APlayerState* PlayerState, class UPanelSlot* NewVoiceWidget);
    void ActiveVoiceAdded(class APlayerState* PlayerState, class UPanelSlot* NewVoiceWidget);
}; // Size: 0x248

class UTBVoiceIndicatorListing : public UUserWidget
{
    class UTextBlock* PlayerName;                                                     // 0x0230 (size: 0x8)
    class UTBVoiceIndicator* ParentMenu;                                              // 0x0238 (size: 0x8)

    void Init(class UTBVoiceIndicator* InParentMenu, const FUniqueNetIdRepl& InUniqueNetId, FString& InPlayerName);
}; // Size: 0x258

#endif
