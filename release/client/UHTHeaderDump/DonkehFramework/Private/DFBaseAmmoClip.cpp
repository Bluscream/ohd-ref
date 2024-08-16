#include "DFBaseAmmoClip.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

ADFBaseAmmoClip::ADFBaseAmmoClip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GunOwner = NULL;
    this->CurrentClipAmmo = 0;
    this->ReloadCounter = 0;
    this->SimulatedCurrentClipAmmo = 0;
    this->StartingClipAmmo = 1;
    this->MaxClipAmmo = 1;
}

int32 ADFBaseAmmoClip::StoreAmmoInInventory(UDFInventoryComponent* AmmoStore, int32 AmmoAmt, const TSubclassOf<ADFBaseAmmoClip>& AmmoType) {
    return 0;
}

void ADFBaseAmmoClip::StoreAmmo(int32 AmmoToStore) {
}

void ADFBaseAmmoClip::SetOwningGun(ADFBaseGun* NewOwner) {
}

void ADFBaseAmmoClip::SetCurrentClipAmmo(int32 NewClipAmmo) {
}

void ADFBaseAmmoClip::OnRep_ReloadCounter() {
}

void ADFBaseAmmoClip::OnRep_CurrentClipAmmo() {
}

bool ADFBaseAmmoClip::IsLoaded() const {
    return false;
}

int32 ADFBaseAmmoClip::GetStartingClipAmmo() const {
    return 0;
}

int32 ADFBaseAmmoClip::GetMaxClipAmmo() const {
    return 0;
}

ADFBaseGun* ADFBaseAmmoClip::GetGunOwner() const {
    return NULL;
}

int32 ADFBaseAmmoClip::GetCurrentClipAmmo() const {
    return 0;
}

void ADFBaseAmmoClip::ConsumeAmmo(int32 AmmoToConsume) {
}

void ADFBaseAmmoClip::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADFBaseAmmoClip, GunOwner);
    DOREPLIFETIME(ADFBaseAmmoClip, CurrentClipAmmo);
    DOREPLIFETIME(ADFBaseAmmoClip, ReloadCounter);
}


