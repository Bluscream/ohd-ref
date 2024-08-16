#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameUserSettings -FallbackName=GameUserSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
#include "TBGameUserSettings.generated.h"

class APlayerController;

UCLASS(Blueprintable, Config=Engine)
class TINKERBOX_API UTBGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CustomVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSmoothFrameRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredDisplayGamma;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredFOV;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMotionBlur;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredMouseSensitivityX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredMouseSensitivityY;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertMousePitch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMouseSmoothing;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DesiredSwitchFireModeOnReselect;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LastConfirmedSwitchFireModeOnReselect;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHeadphoneMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSoundInBackground;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredMasterVolumeLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastConfirmedMasterVolumeLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredSFXVolumeLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastConfirmedSFXVolumeLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredMusicVolumeLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastConfirmedMusicVolumeLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredVOVolumeLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastConfirmedVOVolumeLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredVoiPVolumeLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastConfirmedVoiPVolumeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayerIsChangingKeyBindings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredMoveForwardKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedMoveForwardKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredMoveBackwardKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedMoveBackwardKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredMoveLeftKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedMoveLeftKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredMoveRightKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedMoveRightKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredLeanLeftKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedLeanLeftKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredLeanLeftToggleKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedLeanLeftToggleKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredLeanRightKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedLeanRightKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredLeanRightToggleKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedLeanRightToggleKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredSprintKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedSprintKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredSprintToggleKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedSprintToggleKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredCrouchKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedCrouchKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredCrouchToggleKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedCrouchToggleKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredProneKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedProneKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredJumpVaultKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedJumpVaultKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredJumpKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedJumpKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredVaultKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedVaultKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredFireKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedFireKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredSwitchFireModeKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedSwitchFireModeKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredReloadKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedReloadKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredAimKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedAimKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredAimToggleKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedAimToggleKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredPointAimToggleKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedPointAimToggleKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredCycleWeaponSightsKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedCycleWeaponSightsKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredNextItemKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedNextItemKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredPreviousItemKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedPreviousItemKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredItemSlot0Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedItemSlot0Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredItemSlot1Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedItemSlot1Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredItemSlot2Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedItemSlot2Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredItemSlot3Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedItemSlot3Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredItemSlot4Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedItemSlot4Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredItemSlot5Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedItemSlot5Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredItemSlot6Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedItemSlot6Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredItemSlot7Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedItemSlot7Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredItemSlot8Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedItemSlot8Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredItemSlot9Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedItemSlot9Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredPushToTalkLocalKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedPushToTalkLocalKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredPushToTalkSquadKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedPushToTalkSquadKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredPushToTalkCommandKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedPushToTalkCommandKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredSayAllKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedSayAllKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredSayTeamKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedSayTeamKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredSaySquadKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedSaySquadKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredUseKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedUseKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredShowScoreboardKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedShowScoreboardKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredDeployMenuKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedDeployMenuKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredRadialMenuKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedRadialMenuKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredCameraToggleKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedCameraToggleKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredChatHistoryKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedChatHistoryKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredVoteYesKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedVoteYesKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredVoteNoKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedVoteNoKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DesiredConsoleKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastConfirmedConsoleKey;
    
public:
    UTBGameUserSettings();

    UFUNCTION(BlueprintCallable)
    void SetWeaponSlot9KeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponSlot8KeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponSlot7KeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponSlot6KeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponSlot5KeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponSlot4KeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponSlot3KeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponSlot2KeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponSlot1KeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponSlot0KeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetVoteYesKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetVoteNoKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceVolumeLevelNormalized(float NormVoiceVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceVolumeLevel(float VoiceVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetVaultKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetUseKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetSwitchFireModeOnReselect(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetSwitchFireModeKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetSprintToggleKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetSprintKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundEffectsVolumeLevelNormalized(float NormSFXVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundEffectsVolumeLevel(float SFXVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetSmoothMouseEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetSmoothFrameRateEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetShowScoreboardKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetSayTeamKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetSaySquadKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetSayAllKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetReloadKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetRadialMenuKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetPushToTalkSquadKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetPushToTalkLocalKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetPushToTalkCommandKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetProneKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviousItemKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetPointAimToggleKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerIsChangingKeyBindings(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNextItemKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicVolumeLevelNormalized(float NormMusicVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicVolumeLevel(float MusicVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveRightKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveLeftKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveForwardKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveBackwardKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivityNormalized(float NormSensitivityX, float NormSensitivityY);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivity(float SensitivityX, float SensitivityY);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionBlurEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterVolumeLevelNormalized(float NormMasterVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterVolumeLevel(float MasterVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetLeanRightToggleKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetLeanRightKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetLeanLeftToggleKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetLeanLeftKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetJumpVaultKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetJumpKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertMousePitch(bool bInvertPitch);
    
    UFUNCTION(BlueprintCallable)
    void SetFireKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetFieldOfView(float NewFOV);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayGamma(float NewGamma);
    
    UFUNCTION(BlueprintCallable)
    void SetDialogueVolumeLevelNormalized(float NormDialogueVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetDialogueVolumeLevel(float DialogueVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetDeployMenuKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetCycleWeaponSightsKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetCrouchToggleKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetCrouchKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetConsoleKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetChatHistoryKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraToggleKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowSoundInBackground(bool bAllow);
    
    UFUNCTION(BlueprintCallable)
    void SetAimDownSightsToggleKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable)
    void SetAimDownSightsKeyBinding(FInputChord NewKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVoiceVolumeLevelDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwitchFireModeOnReselectDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSoundInBackgroundAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSoundEffectsVolumeLevelDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSmoothMouseEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSmoothMouseDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSmoothFrameRateEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSmoothFrameRateDirty() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerChangingKeyBindings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMusicVolumeLevelDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMouseSensitivityDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMotionBlurEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMotionBlurDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMasterVolumeLevelDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvertMouseDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeadphoneModeEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeadphoneModeDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFrameRateLimitDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFieldOfViewDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayGammaDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDialogueVolumeLevelDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAudioQualityDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyInputKeyBindingDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllowSoundInBackgroundDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetWeaponSlot9KeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetWeaponSlot8KeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetWeaponSlot7KeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetWeaponSlot6KeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetWeaponSlot5KeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetWeaponSlot4KeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetWeaponSlot3KeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetWeaponSlot2KeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetWeaponSlot1KeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetWeaponSlot0KeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetVoteYesKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetVoteNoKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVoiceVolumeLevelNormalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVoiceVolumeLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetVaultKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetUseKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSwitchFireModeOnReselect(bool bLastConfirmed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetSwitchFireModeKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetSprintToggleKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetSprintKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSoundEffectsVolumeLevelNormalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSoundEffectsVolumeLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetShowScoreboardKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetSayTeamKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetSaySquadKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetSayAllKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetReloadKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetRadialMenuKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetPushToTalkSquadKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetPushToTalkLocalKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetPushToTalkCommandKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetProneKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetPreviousItemKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetPointAimToggleKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetNextItemKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMusicVolumeLevelNormalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMusicVolumeLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetMoveRightKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetMoveLeftKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetMoveForwardKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetMoveBackwardKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseSensitivityYNormalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseSensitivityY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseSensitivityXNormalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseSensitivityX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMasterVolumeLevelNormalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMasterVolumeLevel() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetLocalPlayerControllerBP() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetLeanRightKeyToggleBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetLeanRightKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetLeanLeftToggleKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetLeanLeftKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastConfirmedMasterVolumeLevelNormalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastConfirmedMasterVolumeLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetJumpVaultKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetJumpKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvertMousePitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFrameRateLimitCurrent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetFireKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFieldOfView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDisplayGamma() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDialogueVolumeLevelNormalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDialogueVolumeLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetDeployMenuKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetCycleWeaponSightsKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetCrouchToggleKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetCrouchKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetConsoleKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetChatHistoryKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetCameraToggleKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetAimDownSightsToggleKeyBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetAimDownSightsKeyBinding() const;
    
    UFUNCTION(BlueprintCallable)
    bool FirstRunHardwareBenchmark(int32 WorkScale, float CPUMultiplier, float GPUMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void EnableHeadphoneMode(bool bEnabled);
    
};

