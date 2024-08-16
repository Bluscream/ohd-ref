---@meta

---@class ATBLevelScriptActor : ADFLevelScriptActor
ATBLevelScriptActor = {}


---@class ATBWorldSettings : ADFWorldSettings
---@field MinimapSettings FMinimapGenerationSettings
---@field MinimapImg TSoftObjectPtr<UTexture2D>
ATBWorldSettings = {}



---@class FMinimapGenerationSettings
---@field BoundaryMarkerA AActor
---@field BoundaryMarkerB AActor
---@field BoundaryMidPointLoc FVector
---@field CaptureResolution EMinimapCaptureResolution
---@field PlayableBoundaryLength float
FMinimapGenerationSettings = {}



---@class UTBGameInstance : UDFBaseGameInstance
---@field MainMenu UDFBaseMenu
---@field MainMenuClass TSubclassOf<UDFBaseMenu>
---@field MenuGameMode FSoftClassPath
---@field bHidePlayerHUDInMainMenu boolean
---@field bUseMenuBackgroundMaps boolean
---@field MenuBackgroundMaps TArray<FSoftObjectPath>
---@field RCONServerSystem URCONServerSystem
UTBGameInstance = {}

function UTBGameInstance:UnloadMainMenu() end
---@param bExclusive boolean
function UTBGameInstance:LoadMainMenu(bExclusive) end
function UTBGameInstance:HandleGoToMainMenu() end
function UTBGameInstance:GoToMainMenu() end
function UTBGameInstance:GetGameBuildInfo() end
---@param OutHostAddrStr FString
---@param bPreferSteamP2PAddr boolean
---@param bAppendPort boolean
---@return boolean
function UTBGameInstance:GetCurrentSessionHostAddressStr(OutHostAddrStr, bPreferSteamP2PAddr, bAppendPort) end


---@class UTBGameUserDeveloperSettings : UDeveloperSettings
---@field SFXSoundMix FSoftObjectPath
---@field MusicSoundMix FSoftObjectPath
---@field VOSoundMix FSoftObjectPath
---@field VoiPSoundMix FSoftObjectPath
UTBGameUserDeveloperSettings = {}



---@class UTBGameUserSettings : UGameUserSettings
---@field CustomVersion uint32
---@field bUseSmoothFrameRate boolean
---@field DesiredDisplayGamma float
---@field DesiredFOV float
---@field bUseMotionBlur boolean
---@field DesiredMouseSensitivityX float
---@field DesiredMouseSensitivityY float
---@field bInvertMousePitch boolean
---@field bUseMouseSmoothing boolean
---@field DesiredSwitchFireModeOnReselect boolean
---@field LastConfirmedSwitchFireModeOnReselect boolean
---@field bUseHeadphoneMode boolean
---@field bAllowSoundInBackground boolean
---@field DesiredMasterVolumeLevel float
---@field LastConfirmedMasterVolumeLevel float
---@field DesiredSFXVolumeLevel float
---@field LastConfirmedSFXVolumeLevel float
---@field DesiredMusicVolumeLevel float
---@field LastConfirmedMusicVolumeLevel float
---@field DesiredVOVolumeLevel float
---@field LastConfirmedVOVolumeLevel float
---@field DesiredVoiPVolumeLevel float
---@field LastConfirmedVoiPVolumeLevel float
---@field bPlayerIsChangingKeyBindings boolean
---@field DesiredMoveForwardKey FKey
---@field LastConfirmedMoveForwardKey FKey
---@field DesiredMoveBackwardKey FKey
---@field LastConfirmedMoveBackwardKey FKey
---@field DesiredMoveLeftKey FKey
---@field LastConfirmedMoveLeftKey FKey
---@field DesiredMoveRightKey FKey
---@field LastConfirmedMoveRightKey FKey
---@field DesiredLeanLeftKey FKey
---@field LastConfirmedLeanLeftKey FKey
---@field DesiredLeanLeftToggleKey FKey
---@field LastConfirmedLeanLeftToggleKey FKey
---@field DesiredLeanRightKey FKey
---@field LastConfirmedLeanRightKey FKey
---@field DesiredLeanRightToggleKey FKey
---@field LastConfirmedLeanRightToggleKey FKey
---@field DesiredSprintKey FKey
---@field LastConfirmedSprintKey FKey
---@field DesiredSprintToggleKey FKey
---@field LastConfirmedSprintToggleKey FKey
---@field DesiredCrouchKey FKey
---@field LastConfirmedCrouchKey FKey
---@field DesiredCrouchToggleKey FKey
---@field LastConfirmedCrouchToggleKey FKey
---@field DesiredProneKey FKey
---@field LastConfirmedProneKey FKey
---@field DesiredJumpVaultKey FKey
---@field LastConfirmedJumpVaultKey FKey
---@field DesiredJumpKey FKey
---@field LastConfirmedJumpKey FKey
---@field DesiredVaultKey FKey
---@field LastConfirmedVaultKey FKey
---@field DesiredFireKey FKey
---@field LastConfirmedFireKey FKey
---@field DesiredSwitchFireModeKey FKey
---@field LastConfirmedSwitchFireModeKey FKey
---@field DesiredReloadKey FKey
---@field LastConfirmedReloadKey FKey
---@field DesiredAimKey FKey
---@field LastConfirmedAimKey FKey
---@field DesiredAimToggleKey FKey
---@field LastConfirmedAimToggleKey FKey
---@field DesiredPointAimToggleKey FKey
---@field LastConfirmedPointAimToggleKey FKey
---@field DesiredCycleWeaponSightsKey FKey
---@field LastConfirmedCycleWeaponSightsKey FKey
---@field DesiredNextItemKey FKey
---@field LastConfirmedNextItemKey FKey
---@field DesiredPreviousItemKey FKey
---@field LastConfirmedPreviousItemKey FKey
---@field DesiredItemSlot0Key FKey
---@field LastConfirmedItemSlot0Key FKey
---@field DesiredItemSlot1Key FKey
---@field LastConfirmedItemSlot1Key FKey
---@field DesiredItemSlot2Key FKey
---@field LastConfirmedItemSlot2Key FKey
---@field DesiredItemSlot3Key FKey
---@field LastConfirmedItemSlot3Key FKey
---@field DesiredItemSlot4Key FKey
---@field LastConfirmedItemSlot4Key FKey
---@field DesiredItemSlot5Key FKey
---@field LastConfirmedItemSlot5Key FKey
---@field DesiredItemSlot6Key FKey
---@field LastConfirmedItemSlot6Key FKey
---@field DesiredItemSlot7Key FKey
---@field LastConfirmedItemSlot7Key FKey
---@field DesiredItemSlot8Key FKey
---@field LastConfirmedItemSlot8Key FKey
---@field DesiredItemSlot9Key FKey
---@field LastConfirmedItemSlot9Key FKey
---@field DesiredPushToTalkLocalKey FKey
---@field LastConfirmedPushToTalkLocalKey FKey
---@field DesiredPushToTalkSquadKey FKey
---@field LastConfirmedPushToTalkSquadKey FKey
---@field DesiredPushToTalkCommandKey FKey
---@field LastConfirmedPushToTalkCommandKey FKey
---@field DesiredSayAllKey FKey
---@field LastConfirmedSayAllKey FKey
---@field DesiredSayTeamKey FKey
---@field LastConfirmedSayTeamKey FKey
---@field DesiredSaySquadKey FKey
---@field LastConfirmedSaySquadKey FKey
---@field DesiredUseKey FKey
---@field LastConfirmedUseKey FKey
---@field DesiredShowScoreboardKey FKey
---@field LastConfirmedShowScoreboardKey FKey
---@field DesiredDeployMenuKey FKey
---@field LastConfirmedDeployMenuKey FKey
---@field DesiredRadialMenuKey FKey
---@field LastConfirmedRadialMenuKey FKey
---@field DesiredCameraToggleKey FKey
---@field LastConfirmedCameraToggleKey FKey
---@field DesiredChatHistoryKey FKey
---@field LastConfirmedChatHistoryKey FKey
---@field DesiredVoteYesKey FKey
---@field LastConfirmedVoteYesKey FKey
---@field DesiredVoteNoKey FKey
---@field LastConfirmedVoteNoKey FKey
---@field DesiredConsoleKey FKey
---@field LastConfirmedConsoleKey FKey
UTBGameUserSettings = {}

---@param NewKey FInputChord
function UTBGameUserSettings:SetWeaponSlot9KeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetWeaponSlot8KeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetWeaponSlot7KeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetWeaponSlot6KeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetWeaponSlot5KeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetWeaponSlot4KeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetWeaponSlot3KeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetWeaponSlot2KeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetWeaponSlot1KeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetWeaponSlot0KeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetVoteYesKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetVoteNoKeyBinding(NewKey) end
---@param NormVoiceVolume float
function UTBGameUserSettings:SetVoiceVolumeLevelNormalized(NormVoiceVolume) end
---@param VoiceVolume float
function UTBGameUserSettings:SetVoiceVolumeLevel(VoiceVolume) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetVaultKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetUseKeyBinding(NewKey) end
---@param bEnable boolean
function UTBGameUserSettings:SetSwitchFireModeOnReselect(bEnable) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetSwitchFireModeKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetSprintToggleKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetSprintKeyBinding(NewKey) end
---@param NormSFXVolume float
function UTBGameUserSettings:SetSoundEffectsVolumeLevelNormalized(NormSFXVolume) end
---@param SFXVolume float
function UTBGameUserSettings:SetSoundEffectsVolumeLevel(SFXVolume) end
---@param bEnable boolean
function UTBGameUserSettings:SetSmoothMouseEnabled(bEnable) end
---@param bEnabled boolean
function UTBGameUserSettings:SetSmoothFrameRateEnabled(bEnabled) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetShowScoreboardKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetSayTeamKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetSaySquadKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetSayAllKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetReloadKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetRadialMenuKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetPushToTalkSquadKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetPushToTalkLocalKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetPushToTalkCommandKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetProneKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetPreviousItemKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetPointAimToggleKeyBinding(NewKey) end
---@param NewValue boolean
function UTBGameUserSettings:SetPlayerIsChangingKeyBindings(NewValue) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetNextItemKeyBinding(NewKey) end
---@param NormMusicVolume float
function UTBGameUserSettings:SetMusicVolumeLevelNormalized(NormMusicVolume) end
---@param MusicVolume float
function UTBGameUserSettings:SetMusicVolumeLevel(MusicVolume) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetMoveRightKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetMoveLeftKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetMoveForwardKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetMoveBackwardKeyBinding(NewKey) end
---@param NormSensitivityX float
---@param NormSensitivityY float
function UTBGameUserSettings:SetMouseSensitivityNormalized(NormSensitivityX, NormSensitivityY) end
---@param SensitivityX float
---@param SensitivityY float
function UTBGameUserSettings:SetMouseSensitivity(SensitivityX, SensitivityY) end
---@param bEnabled boolean
function UTBGameUserSettings:SetMotionBlurEnabled(bEnabled) end
---@param NormMasterVolume float
function UTBGameUserSettings:SetMasterVolumeLevelNormalized(NormMasterVolume) end
---@param MasterVolume float
function UTBGameUserSettings:SetMasterVolumeLevel(MasterVolume) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetLeanRightToggleKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetLeanRightKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetLeanLeftToggleKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetLeanLeftKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetJumpVaultKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetJumpKeyBinding(NewKey) end
---@param bInvertPitch boolean
function UTBGameUserSettings:SetInvertMousePitch(bInvertPitch) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetFireKeyBinding(NewKey) end
---@param NewFOV float
function UTBGameUserSettings:SetFieldOfView(NewFOV) end
---@param NewGamma float
function UTBGameUserSettings:SetDisplayGamma(NewGamma) end
---@param NormDialogueVolume float
function UTBGameUserSettings:SetDialogueVolumeLevelNormalized(NormDialogueVolume) end
---@param DialogueVolume float
function UTBGameUserSettings:SetDialogueVolumeLevel(DialogueVolume) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetDeployMenuKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetCycleWeaponSightsKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetCrouchToggleKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetCrouchKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetConsoleKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetChatHistoryKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetCameraToggleKeyBinding(NewKey) end
---@param bAllow boolean
function UTBGameUserSettings:SetAllowSoundInBackground(bAllow) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetAimDownSightsToggleKeyBinding(NewKey) end
---@param NewKey FInputChord
function UTBGameUserSettings:SetAimDownSightsKeyBinding(NewKey) end
---@return boolean
function UTBGameUserSettings:IsVoiceVolumeLevelDirty() end
---@return boolean
function UTBGameUserSettings:IsSwitchFireModeOnReselectDirty() end
---@return boolean
function UTBGameUserSettings:IsSoundInBackgroundAllowed() end
---@return boolean
function UTBGameUserSettings:IsSoundEffectsVolumeLevelDirty() end
---@return boolean
function UTBGameUserSettings:IsSmoothMouseEnabled() end
---@return boolean
function UTBGameUserSettings:IsSmoothMouseDirty() end
---@return boolean
function UTBGameUserSettings:IsSmoothFrameRateEnabled() end
---@return boolean
function UTBGameUserSettings:IsSmoothFrameRateDirty() end
---@return boolean
function UTBGameUserSettings:IsPlayerChangingKeyBindings() end
---@return boolean
function UTBGameUserSettings:IsMusicVolumeLevelDirty() end
---@return boolean
function UTBGameUserSettings:IsMouseSensitivityDirty() end
---@return boolean
function UTBGameUserSettings:IsMotionBlurEnabled() end
---@return boolean
function UTBGameUserSettings:IsMotionBlurDirty() end
---@return boolean
function UTBGameUserSettings:IsMasterVolumeLevelDirty() end
---@return boolean
function UTBGameUserSettings:IsInvertMouseDirty() end
---@return boolean
function UTBGameUserSettings:IsHeadphoneModeEnabled() end
---@return boolean
function UTBGameUserSettings:IsHeadphoneModeDirty() end
---@return boolean
function UTBGameUserSettings:IsFrameRateLimitDirty() end
---@return boolean
function UTBGameUserSettings:IsFieldOfViewDirty() end
---@return boolean
function UTBGameUserSettings:IsDisplayGammaDirty() end
---@return boolean
function UTBGameUserSettings:IsDialogueVolumeLevelDirty() end
---@return boolean
function UTBGameUserSettings:IsAudioQualityDirty() end
---@return boolean
function UTBGameUserSettings:IsAnyInputKeyBindingDirty() end
---@return boolean
function UTBGameUserSettings:IsAllowSoundInBackgroundDirty() end
---@return FKey
function UTBGameUserSettings:GetWeaponSlot9KeyBinding() end
---@return FKey
function UTBGameUserSettings:GetWeaponSlot8KeyBinding() end
---@return FKey
function UTBGameUserSettings:GetWeaponSlot7KeyBinding() end
---@return FKey
function UTBGameUserSettings:GetWeaponSlot6KeyBinding() end
---@return FKey
function UTBGameUserSettings:GetWeaponSlot5KeyBinding() end
---@return FKey
function UTBGameUserSettings:GetWeaponSlot4KeyBinding() end
---@return FKey
function UTBGameUserSettings:GetWeaponSlot3KeyBinding() end
---@return FKey
function UTBGameUserSettings:GetWeaponSlot2KeyBinding() end
---@return FKey
function UTBGameUserSettings:GetWeaponSlot1KeyBinding() end
---@return FKey
function UTBGameUserSettings:GetWeaponSlot0KeyBinding() end
---@return FKey
function UTBGameUserSettings:GetVoteYesKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetVoteNoKeyBinding() end
---@return float
function UTBGameUserSettings:GetVoiceVolumeLevelNormalized() end
---@return float
function UTBGameUserSettings:GetVoiceVolumeLevel() end
---@return FKey
function UTBGameUserSettings:GetVaultKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetUseKeyBinding() end
---@param bLastConfirmed boolean
---@return boolean
function UTBGameUserSettings:GetSwitchFireModeOnReselect(bLastConfirmed) end
---@return FKey
function UTBGameUserSettings:GetSwitchFireModeKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetSprintToggleKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetSprintKeyBinding() end
---@return float
function UTBGameUserSettings:GetSoundEffectsVolumeLevelNormalized() end
---@return float
function UTBGameUserSettings:GetSoundEffectsVolumeLevel() end
---@return FKey
function UTBGameUserSettings:GetShowScoreboardKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetSayTeamKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetSaySquadKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetSayAllKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetReloadKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetRadialMenuKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetPushToTalkSquadKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetPushToTalkLocalKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetPushToTalkCommandKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetProneKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetPreviousItemKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetPointAimToggleKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetNextItemKeyBinding() end
---@return float
function UTBGameUserSettings:GetMusicVolumeLevelNormalized() end
---@return float
function UTBGameUserSettings:GetMusicVolumeLevel() end
---@return FKey
function UTBGameUserSettings:GetMoveRightKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetMoveLeftKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetMoveForwardKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetMoveBackwardKeyBinding() end
---@return float
function UTBGameUserSettings:GetMouseSensitivityYNormalized() end
---@return float
function UTBGameUserSettings:GetMouseSensitivityY() end
---@return float
function UTBGameUserSettings:GetMouseSensitivityXNormalized() end
---@return float
function UTBGameUserSettings:GetMouseSensitivityX() end
---@return float
function UTBGameUserSettings:GetMasterVolumeLevelNormalized() end
---@return float
function UTBGameUserSettings:GetMasterVolumeLevel() end
---@return APlayerController
function UTBGameUserSettings:GetLocalPlayerControllerBP() end
---@return FKey
function UTBGameUserSettings:GetLeanRightKeyToggleBinding() end
---@return FKey
function UTBGameUserSettings:GetLeanRightKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetLeanLeftToggleKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetLeanLeftKeyBinding() end
---@return float
function UTBGameUserSettings:GetLastConfirmedMasterVolumeLevelNormalized() end
---@return float
function UTBGameUserSettings:GetLastConfirmedMasterVolumeLevel() end
---@return FKey
function UTBGameUserSettings:GetJumpVaultKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetJumpKeyBinding() end
---@return boolean
function UTBGameUserSettings:GetInvertMousePitch() end
---@return float
function UTBGameUserSettings:GetFrameRateLimitCurrent() end
---@return FKey
function UTBGameUserSettings:GetFireKeyBinding() end
---@return float
function UTBGameUserSettings:GetFieldOfView() end
---@return float
function UTBGameUserSettings:GetDisplayGamma() end
---@return float
function UTBGameUserSettings:GetDialogueVolumeLevelNormalized() end
---@return float
function UTBGameUserSettings:GetDialogueVolumeLevel() end
---@return FKey
function UTBGameUserSettings:GetDeployMenuKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetCycleWeaponSightsKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetCrouchToggleKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetCrouchKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetConsoleKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetChatHistoryKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetCameraToggleKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetAimDownSightsToggleKeyBinding() end
---@return FKey
function UTBGameUserSettings:GetAimDownSightsKeyBinding() end
---@param WorkScale int32
---@param CPUMultiplier float
---@param GPUMultiplier float
---@return boolean
function UTBGameUserSettings:FirstRunHardwareBenchmark(WorkScale, CPUMultiplier, GPUMultiplier) end
---@param bEnabled boolean
function UTBGameUserSettings:EnableHeadphoneMode(bEnabled) end


---@class UTBVoiceIndicator : UUserWidget
---@field VoiceListingClass TSubclassOf<UTBVoiceIndicatorListing>
---@field ActiveVoiceList UPanelWidget
---@field MaxActiveVoices int32
---@field ActiveVoices int32
UTBVoiceIndicator = {}

---@param PlayerState APlayerState
---@param NewVoiceWidget UPanelSlot
function UTBVoiceIndicator:ActiveVoiceRemoved(PlayerState, NewVoiceWidget) end
---@param PlayerState APlayerState
---@param NewVoiceWidget UPanelSlot
function UTBVoiceIndicator:ActiveVoiceAdded(PlayerState, NewVoiceWidget) end


---@class UTBVoiceIndicatorListing : UUserWidget
---@field PlayerName UTextBlock
---@field ParentMenu UTBVoiceIndicator
UTBVoiceIndicatorListing = {}

---@param InParentMenu UTBVoiceIndicator
---@param InUniqueNetId FUniqueNetIdRepl
---@param InPlayerName FString
function UTBVoiceIndicatorListing:Init(InParentMenu, InUniqueNetId, InPlayerName) end


