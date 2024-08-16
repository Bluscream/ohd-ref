#include "DFGunRecoilHandler.h"

UDFGunRecoilHandler::UDFGunRecoilHandler() {
}

void UDFGunRecoilHandler::OnWeaponStopFire_Implementation() {
}

void UDFGunRecoilHandler::OnWeaponStartFire_Implementation() {
}

void UDFGunRecoilHandler::OnWeaponFire_Implementation() {
}

void UDFGunRecoilHandler::OnTick_Implementation(float DeltaTime) {
}

bool UDFGunRecoilHandler::IsFiring() const {
    return false;
}

APawn* UDFGunRecoilHandler::GetOwningPawn() const {
    return NULL;
}

ADFBaseGun* UDFGunRecoilHandler::GetOwningGun() const {
    return NULL;
}

FVector UDFGunRecoilHandler::GetConeOfFireOffset_Implementation() {
    return FVector{};
}


