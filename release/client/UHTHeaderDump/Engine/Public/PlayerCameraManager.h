#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Actor.h"
#include "CameraCacheEntry.h"
#include "ECameraAnimPlaySpace.h"
#include "PostProcessSettings.h"
#include "TViewTarget.h"
#include "Templates/SubclassOf.h"
#include "PlayerCameraManager.generated.h"

class ACameraActor;
class AEmitterCameraLensEffectBase;
class APlayerController;
class UCameraAnim;
class UCameraAnimInst;
class UCameraModifier;
class UCameraModifier_CameraShake;
class UCameraShake;
class UCameraShakeSourceComponent;
class USceneComponent;

UCLASS(Blueprintable, NotPlaceable, Transient, Config=Engine)
class ENGINE_API APlayerCameraManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* PCOwner;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransformComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultOrthoWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultAspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCameraCacheEntry CameraCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCameraCacheEntry LastFrameCameraCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTViewTarget ViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTViewTarget PendingViewTarget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCameraCacheEntry CameraCachePrivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCameraCacheEntry LastFrameCameraCachePrivate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCameraModifier*> ModifierList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCameraModifier>> DefaultModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeCamDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FreeCamOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ViewTargetOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AEmitterCameraLensEffectBase*> CameraLensEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCameraModifier_CameraShake* CachedCameraShakeMod;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCameraAnimInst* AnimInstPool[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPostProcessSettings> PostProcessBlendCache;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCameraAnimInst*> ActiveAnims;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCameraAnimInst*> FreeAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACameraActor* AnimCameraActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsOrthographic: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDefaultConstrainAspectRatio: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bClientSimulatingViewTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseClientSideCameraUpdates: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bGameCameraCutThisFrame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewYawMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewYawMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewRollMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewRollMax;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerUpdateCameraTimeout;
    
public:
    APlayerCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopCameraShake(UCameraShake* ShakeInstance, bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void StopCameraFade();
    
    UFUNCTION(BlueprintCallable)
    void StopCameraAnimInst(UCameraAnimInst* AnimInst, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void StopAllInstancesOfCameraShakeFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void StopAllInstancesOfCameraShake(TSubclassOf<UCameraShake> Shake, bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void StopAllInstancesOfCameraAnim(UCameraAnim* Anim, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void StopAllCameraShakes(bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void StopAllCameraAnims(bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished);
    
    UFUNCTION(BlueprintCallable)
    void SetManualCameraFade(float InFadeAmount, FLinearColor Color, bool bInFadeAudio);
    
    UFUNCTION(BlueprintCallable)
    void SetGameCameraCutThisFrame();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCameraModifier(UCameraModifier* ModifierToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCameraLensEffect(AEmitterCameraLensEffectBase* Emitter);
    
    UFUNCTION(BlueprintCallable)
    UCameraShake* PlayCameraShakeFromSource(TSubclassOf<UCameraShake> ShakeClass, UCameraShakeSourceComponent* SourceComponent);
    
    UFUNCTION(BlueprintCallable)
    UCameraShake* PlayCameraShake(TSubclassOf<UCameraShake> ShakeClass, float Scale, TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace, FRotator UserPlaySpaceRot);
    
    UFUNCTION(BlueprintCallable)
    UCameraAnimInst* PlayCameraAnim(UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace, FRotator UserPlaySpaceRot);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void PhotographyCameraModify(const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& ResultCameraLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnPhotographySessionStart();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnPhotographySessionEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnPhotographyMultiPartCaptureStart();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnPhotographyMultiPartCaptureEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetOwningPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFOVAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetCameraRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCameraLocation() const;
    
    UFUNCTION(BlueprintCallable)
    UCameraModifier* FindCameraModifierByClass(TSubclassOf<UCameraModifier> ModifierClass);
    
    UFUNCTION(BlueprintCallable)
    void ClearCameraLensEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    bool BlueprintUpdateCamera(AActor* CameraTarget, FVector& NewCameraLocation, FRotator& NewCameraRotation, float& NewCameraFOV);
    
    UFUNCTION(BlueprintCallable)
    UCameraModifier* AddNewCameraModifier(TSubclassOf<UCameraModifier> ModifierClass);
    
    UFUNCTION(BlueprintCallable)
    AEmitterCameraLensEffectBase* AddCameraLensEffect(TSubclassOf<AEmitterCameraLensEffectBase> LensEffectEmitterClass);
    
};

