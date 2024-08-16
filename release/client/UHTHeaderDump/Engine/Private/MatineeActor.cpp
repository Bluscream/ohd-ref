#include "MatineeActor.h"
#include "Net/UnrealNetwork.h"
#include "SceneComponent.h"

AMatineeActor::AMatineeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->MatineeData = NULL;
    this->PlayRate = 1.00f;
    this->bPlayOnLevelLoad = false;
    this->bForceStartPos = false;
    this->ForceStartPosition = 0.00f;
    this->bLooping = false;
    this->bRewindOnPlay = false;
    this->bNoResetOnRewind = false;
    this->bRewindIfAlreadyPlaying = false;
    this->bDisableRadioFilter = false;
    this->bClientSideOnly = false;
    this->bSkipUpdateIfNotVisible = false;
    this->bIsSkippable = false;
    this->PreferredSplitScreenNum = 0;
    this->bDisableMovementInput = false;
    this->bDisableLookAtInput = false;
    this->bHidePlayer = false;
    this->bHideHud = false;
    this->bShouldShowGore = false;
    this->bIsPlaying = false;
    this->bReversePlayback = false;
    this->bPaused = false;
    this->bPendingStop = false;
    this->InterpPosition = -1.00f;
    this->ReplicationForceIsPlaying = 0;
}

void AMatineeActor::Stop() {
}

void AMatineeActor::SetPosition(float NewPosition, bool bJump) {
}

void AMatineeActor::SetLoopingState(bool bNewLooping) {
}

void AMatineeActor::Reverse() {
}

void AMatineeActor::Play() {
}

void AMatineeActor::Pause() {
}

void AMatineeActor::EnableGroupByName(const FString& GroupName, bool bEnable) {
}

void AMatineeActor::ChangePlaybackDirection() {
}

void AMatineeActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMatineeActor, MatineeData);
    DOREPLIFETIME(AMatineeActor, PlayRate);
    DOREPLIFETIME(AMatineeActor, bLooping);
    DOREPLIFETIME(AMatineeActor, GroupActorInfos);
    DOREPLIFETIME(AMatineeActor, bIsPlaying);
    DOREPLIFETIME(AMatineeActor, bReversePlayback);
    DOREPLIFETIME(AMatineeActor, bPaused);
    DOREPLIFETIME(AMatineeActor, bPendingStop);
    DOREPLIFETIME(AMatineeActor, InterpPosition);
    DOREPLIFETIME(AMatineeActor, ReplicationForceIsPlaying);
}


