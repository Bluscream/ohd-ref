#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EMouseCursor -FallbackName=EMouseCursor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=EControllerHand -FallbackName=EControllerHand
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=ETouchIndex -FallbackName=ETouchIndex
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "ActiveForceFeedbackEffect.h"
#include "Controller.h"
#include "ECameraAnimPlaySpace.h"
#include "ECollisionChannel.h"
#include "EControllerAnalogStick.h"
#include "EDynamicForceFeedbackAction.h"
#include "EObjectTypeQuery.h"
#include "ETraceTypeQuery.h"
#include "ETravelType.h"
#include "EViewTargetBlendFunction.h"
#include "ForceFeedbackParameters.h"
#include "HitResult.h"
#include "LatentActionInfo.h"
#include "Templates/SubclassOf.h"
#include "UniqueNetIdRepl.h"
#include "UpdateLevelStreamingLevelStatus.h"
#include "UpdateLevelVisibilityLevelInfo.h"
#include "Vector_NetQuantize.h"
#include "ViewTargetTransitionParams.h"
#include "PlayerController.generated.h"

class AActor;
class AEmitterCameraLensEffectBase;
class AHUD;
class APawn;
class APlayerCameraManager;
class APlayerState;
class ASpectatorPawn;
class UCameraAnim;
class UCameraShake;
class UCameraShakeSourceComponent;
class UCheatManager;
class UForceFeedbackEffect;
class UHapticFeedbackEffect_Base;
class UInputComponent;
class UInterpTrackInstDirector;
class ULocalMessage;
class UMaterialInterface;
class UNetConnection;
class UObject;
class UPlayer;
class UPlayerInput;
class UPrimitiveComponent;
class USceneComponent;
class USoundBase;
class UTouchInterface;
class UUserWidget;

UCLASS(Blueprintable, Config=Game)
class ENGINE_API APlayerController : public AController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayer* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* AcknowledgedPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpTrackInstDirector* ControllingDirTrackInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHUD* MyHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* PlayerCameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerCameraManager> PlayerCameraManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoManageActiveCameraTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator TargetViewRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothTargetViewRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HiddenActors;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenPrimitiveComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastSpectatorStateSynchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastSpectatorSyncLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator LastSpectatorSyncRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClientCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCheatManager* CheatManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCheatManager> CheatClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerInput* PlayerInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveForceFeedbackEffect> ActiveForceFeedbackEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayerIsWaiting: 1;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NetPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetConnection* PendingSwapConnection;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetConnection* NetConnection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputYawScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputPitchScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputRollScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowMouseCursor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableClickEvents: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableTouchEvents: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableMouseOverEvents: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableTouchOverEvents: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceFeedbackEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceFeedbackScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> ClickEventKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMouseCursor::Type> DefaultMouseCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMouseCursor::Type> CurrentMouseCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> DefaultClickTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CurrentClickTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitResultTraceDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SeamlessTravelCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 LastCompletedSeamlessTravelCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* InactiveStateInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldPerformFullTickWhenPaused: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTouchInterface* CurrentTouchInterface;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpectatorPawn* SpectatorPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocalPlayerController;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector SpawnLocation;
    
public:
    APlayerController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasInputKeyJustReleased(FKey Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasInputKeyJustPressed(FKey Key) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSpeaking(bool bInSpeaking);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void TestServerLevelVisibilityChange(const FName PackageName, const FName Filename);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SwitchLevel(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void StopHapticEffect(EControllerHand Hand);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartFire(uint8 FireModeNum);
    
    UFUNCTION(BlueprintCallable)
    void SetVirtualJoystickVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetViewTargetWithBlend(AActor* NewViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetName(const FString& S);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseLocation(const int32 X, const int32 Y);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseCursorWidget(TEnumAsByte<EMouseCursor::Type> Cursor, UUserWidget* CursorWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetHapticsByValue(const float Frequency, const float Amplitude, EControllerHand Hand);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableHaptics(bool bNewDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerLightColor(FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioListenerOverride(USceneComponent* AttachToComponent, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioListenerAttenuationOverride(USceneComponent* AttachToComponent, FVector AttenuationLocationOVerride);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerViewSelf(FViewTargetTransitionParams TransitionParams);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerViewPrevPlayer();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerViewNextPlayer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerVerifyViewTarget();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateMultipleLevelsVisibility(const TArray<FUpdateLevelVisibilityLevelInfo>& LevelVisibilities);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateLevelVisibility(const FUpdateLevelVisibilityLevelInfo& LevelVisibility);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerUpdateCamera(FVector_NetQuantize CamLoc, int32 CamPitchAndYaw);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnmutePlayer(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleAILogging();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerShortTimeout();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetSpectatorWaiting(bool bWaiting);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerSetSpectatorLocation(FVector NewLoc, FRotator NewRot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRestartPlayer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPause();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyLoadedWorld(FName WorldPackageName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMutePlayer(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerExecRPC(const FString& Msg);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ServerExec(const FString& Msg);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheckClientPossessionReliable();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerCheckClientPossession();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerChangeName(const FString& S);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCamera(FName NewMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAcknowledgePossession(APawn* P);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SendToConsole(const FString& Command);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RestartLevel();
    
    UFUNCTION(BlueprintCallable)
    void ResetControllerLightColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ProjectWorldLocationToScreen(FVector WorldLocation, FVector2D& ScreenLocation, bool bPlayerViewportRelative) const;
    
    UFUNCTION(BlueprintCallable)
    void PlayHapticEffect(UHapticFeedbackEffect_Base* HapticEffect, EControllerHand Hand, float Scale, bool bLoop);
    
private:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction::Type> Action, FLatentActionInfo LatentInfo);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void Pause();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnServerStartedVisualLogger(bool bIsLogging);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LocalTravel(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void K2_ClientPlayForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputKeyDown(FKey Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetViewportSize(int32& SizeX, int32& SizeY) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASpectatorPawn* GetSpectatorPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMousePosition(float& LocationX, float& LocationY) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInputVectorKeyState(FKey Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInputTouchState(TEnumAsByte<ETouchIndex::Type> FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInputMouseDelta(float& DeltaX, float& DeltaY) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInputMotionState(FVector& Tilt, FVector& RotationRate, FVector& Gravity, FVector& Acceleration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputKeyTimeDown(FKey Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInputAnalogStickState(TEnumAsByte<EControllerAnalogStick::Type> WhichStick, float& StickX, float& StickY) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputAnalogKeyState(FKey Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHUD* GetHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHitResultUnderFingerForObjects(TEnumAsByte<ETouchIndex::Type> FingerIndex, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHitResultUnderFingerByChannel(TEnumAsByte<ETouchIndex::Type> FingerIndex, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHitResultUnderFinger(TEnumAsByte<ETouchIndex::Type> FingerIndex, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHitResultUnderCursorForObjects(const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHitResultUnderCursorByChannel(TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHitResultUnderCursor(TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFocalLocation() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void FOV(float NewFOV);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableCheats();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, FVector& WorldLocation, FVector& WorldDirection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DeprojectMousePositionToWorld(FVector& WorldLocation, FVector& WorldDirection) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ConsoleKey(FKey Key);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientWasKicked(const FText& KickReason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientVoiceHandshakeComplete();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateMultipleLevelsStreamingStatus(const TArray<FUpdateLevelStreamingLevelStatus>& LevelStatuses);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateLevelStreamingStatus(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32 LODIndex);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUnmutePlayer(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTravelInternal(const FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, FGuid MapPackageGuid);
    
    UFUNCTION(BlueprintCallable)
    void ClientTravel(const FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, FGuid MapPackageGuid);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTeamMessage(APlayerState* SenderPlayerState, const FString& S, FName Type, float MsgLifeTime);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void ClientStopCameraShakesFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopCameraShake(TSubclassOf<UCameraShake> Shake, bool bImmediately);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopCameraAnim(UCameraAnim* AnimToStop);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartOnlineSession();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientSpawnCameraLensEffect(TSubclassOf<AEmitterCameraLensEffectBase> LensEffectEmitterClass);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetViewTarget(AActor* A, FViewTargetTransitionParams TransitionParams);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetSpectatorWaiting(bool bWaiting);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetHUD(TSubclassOf<AHUD> NewHUDClass);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetForceMipLevelsToBeResident(UMaterialInterface* Material, float ForceDuration, int32 CinematicTextureGroups);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetCameraMode(FName NewCamMode);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetCameraFade(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetBlockOnAsyncLoading();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReturnToMainMenuWithTextReason(const FText& ReturnReason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReturnToMainMenu(const FString& ReturnReason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRetryClientRestart(APawn* NewPawn);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRestart(APawn* NewPawn);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReset();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRepObjRef(UObject* Object);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveLocalizedMessage(TSubclassOf<ULocalMessage> Message, int32 Switch, APlayerState* RelatedPlayerState_1, APlayerState* RelatedPlayerState_2, UObject* OptionalObject);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPrestreamTextures(AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32 CinematicTextureGroups);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPrepareMapChange(FName LevelName, bool bFirst, bool bLast);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlaySoundAtLocation(USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlaySound(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);
    
private:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlayForceFeedback_Internal(UForceFeedbackEffect* ForceFeedbackEffect, FForceFeedbackParameters Params);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClientPlayCameraShakeFromSource(TSubclassOf<UCameraShake> Shake, UCameraShakeSourceComponent* SourceComponent);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlayCameraShake(TSubclassOf<UCameraShake> Shake, float Scale, TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace, FRotator UserPlaySpaceRot);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlayCameraAnim(UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, TEnumAsByte<ECameraAnimPlaySpace::Type> Space, FRotator CustomPlaySpace);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientMutePlayer(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientMessage(const FString& S, FName Type, float MsgLifeTime);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientIgnoreMoveInput(bool bIgnore);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientIgnoreLookInput(bool bIgnore);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientGotoState(FName NewState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientGameEnded(AActor* EndGameFocus, bool bIsWinner);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientForceGarbageCollection();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientFlushLevelStreaming();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEndOnlineSession();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEnableNetworkVoice(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCommitMapChange();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClearCameraLensEffects();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCapBandwidth(int32 Cap);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCancelPendingMapChange();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddTextureStreamingLoc(FVector InLoc, float Duration, bool bOverrideLocation);
    
    UFUNCTION(BlueprintCallable)
    void ClearAudioListenerOverride();
    
    UFUNCTION(BlueprintCallable)
    void ClearAudioListenerAttenuationOverride();
    
    UFUNCTION(BlueprintCallable)
    bool CanRestartPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Camera(FName NewMode);
    
    UFUNCTION(BlueprintCallable)
    void AddYawInput(float Val);
    
    UFUNCTION(BlueprintCallable)
    void AddRollInput(float Val);
    
    UFUNCTION(BlueprintCallable)
    void AddPitchInput(float Val);
    
    UFUNCTION(BlueprintCallable)
    void ActivateTouchInterface(UTouchInterface* NewTouchInterface);
    
};

