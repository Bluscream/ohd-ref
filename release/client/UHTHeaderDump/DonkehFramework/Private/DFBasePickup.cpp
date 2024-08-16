#include "DFBasePickup.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"

ADFBasePickup::ADFBasePickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh = (UStaticMeshComponent*)RootComponent;
    this->bActive = true;
    this->InvokingPawn = NULL;
    this->bUseable = false;
    this->bOverlap = true;
    this->RespawnDelay = 0.00f;
    this->PickupSound = NULL;
}

void ADFBasePickup::UpdatePickupState_Implementation(bool bNewActive) {
}

void ADFBasePickup::RespawnPickup() {
}

void ADFBasePickup::OnRespawn_Implementation() {
}

void ADFBasePickup::OnRep_Active() {
}

void ADFBasePickup::OnPickup_Implementation() {
}

void ADFBasePickup::InitializePickup_Implementation() {
}

void ADFBasePickup::GivePickupTo_Implementation(ADFBaseCharacter* PickupOwner) {
}

bool ADFBasePickup::CanBePickedUp(ADFBaseCharacter* Invoker) const {
    return false;
}

void ADFBasePickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADFBasePickup, bActive);
    DOREPLIFETIME(ADFBasePickup, InvokingPawn);
}


