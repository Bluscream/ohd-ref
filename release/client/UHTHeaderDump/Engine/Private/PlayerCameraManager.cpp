#include "PlayerCameraManager.h"
#include "SceneComponent.h"
#include "Templates/SubclassOf.h"

APlayerCameraManager::APlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TransformComponent0"));
    this->PCOwner = NULL;
    this->TransformComponent = (USceneComponent*)RootComponent;
    this->DefaultFOV = 90.00f;
    this->DefaultOrthoWidth = 512.00f;
    this->DefaultAspectRatio = 1.33f;
    this->DefaultModifiers.AddDefaulted(1);
    this->FreeCamDistance = 256.00f;
    this->CachedCameraShakeMod = NULL;
    this->AnimInstPool[0] = NULL;
    this->AnimInstPool[1] = NULL;
    this->AnimInstPool[2] = NULL;
    this->AnimInstPool[3] = NULL;
    this->AnimInstPool[4] = NULL;
    this->AnimInstPool[5] = NULL;
    this->AnimInstPool[6] = NULL;
    this->AnimInstPool[7] = NULL;
    this->AnimCameraActor = NULL;
    this->bIsOrthographic = false;
    this->bDefaultConstrainAspectRatio = false;
    this->bClientSimulatingViewTarget = false;
    this->bUseClientSideCameraUpdates = true;
    this->bGameCameraCutThisFrame = false;
    this->ViewPitchMin = -89.90f;
    this->ViewPitchMax = 89.90f;
    this->ViewYawMin = 0.00f;
    this->ViewYawMax = 360.00f;
    this->ViewRollMin = -89.90f;
    this->ViewRollMax = 89.90f;
    this->ServerUpdateCameraTimeout = 2.00f;
}

void APlayerCameraManager::StopCameraShake(UCameraShake* ShakeInstance, bool bImmediately) {
}

void APlayerCameraManager::StopCameraFade() {
}

void APlayerCameraManager::StopCameraAnimInst(UCameraAnimInst* AnimInst, bool bImmediate) {
}

void APlayerCameraManager::StopAllInstancesOfCameraShakeFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately) {
}

void APlayerCameraManager::StopAllInstancesOfCameraShake(TSubclassOf<UCameraShake> Shake, bool bImmediately) {
}

void APlayerCameraManager::StopAllInstancesOfCameraAnim(UCameraAnim* Anim, bool bImmediate) {
}

void APlayerCameraManager::StopAllCameraShakes(bool bImmediately) {
}

void APlayerCameraManager::StopAllCameraAnims(bool bImmediate) {
}

void APlayerCameraManager::StartCameraFade(float FromAlpha, float ToAlpha, float Duration, FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished) {
}

void APlayerCameraManager::SetManualCameraFade(float InFadeAmount, FLinearColor Color, bool bInFadeAudio) {
}

void APlayerCameraManager::SetGameCameraCutThisFrame() {
}

bool APlayerCameraManager::RemoveCameraModifier(UCameraModifier* ModifierToRemove) {
    return false;
}

void APlayerCameraManager::RemoveCameraLensEffect(AEmitterCameraLensEffectBase* Emitter) {
}

UCameraShake* APlayerCameraManager::PlayCameraShakeFromSource(TSubclassOf<UCameraShake> ShakeClass, UCameraShakeSourceComponent* SourceComponent) {
    return NULL;
}

UCameraShake* APlayerCameraManager::PlayCameraShake(TSubclassOf<UCameraShake> ShakeClass, float Scale, TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace, FRotator UserPlaySpaceRot) {
    return NULL;
}

UCameraAnimInst* APlayerCameraManager::PlayCameraAnim(UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace, FRotator UserPlaySpaceRot) {
    return NULL;
}

void APlayerCameraManager::PhotographyCameraModify_Implementation(const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& ResultCameraLocation) {
}

void APlayerCameraManager::OnPhotographySessionStart_Implementation() {
}

void APlayerCameraManager::OnPhotographySessionEnd_Implementation() {
}

void APlayerCameraManager::OnPhotographyMultiPartCaptureStart_Implementation() {
}

void APlayerCameraManager::OnPhotographyMultiPartCaptureEnd_Implementation() {
}

APlayerController* APlayerCameraManager::GetOwningPlayerController() const {
    return NULL;
}

float APlayerCameraManager::GetFOVAngle() const {
    return 0.0f;
}

FRotator APlayerCameraManager::GetCameraRotation() const {
    return FRotator{};
}

FVector APlayerCameraManager::GetCameraLocation() const {
    return FVector{};
}

UCameraModifier* APlayerCameraManager::FindCameraModifierByClass(TSubclassOf<UCameraModifier> ModifierClass) {
    return NULL;
}

void APlayerCameraManager::ClearCameraLensEffects() {
}


UCameraModifier* APlayerCameraManager::AddNewCameraModifier(TSubclassOf<UCameraModifier> ModifierClass) {
    return NULL;
}

AEmitterCameraLensEffectBase* APlayerCameraManager::AddCameraLensEffect(TSubclassOf<AEmitterCameraLensEffectBase> LensEffectEmitterClass) {
    return NULL;
}


