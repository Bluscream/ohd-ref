#include "HDUIUserWidget.h"

UHDUIUserWidget::UHDUIUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bListenForPlayerCharacterEvents = false;
}

void UHDUIUserWidget::OwnerUnpossessPawn(APawn* UnpossessedPawn) {
}

void UHDUIUserWidget::OwnerPossessPawn(APawn* NewPawn) {
}

void UHDUIUserWidget::OwnerEquippedItemChanged(ADFBaseCharacter* Character, ADFBaseItem* NewEquippedItem, ADFBaseItem* PrevEquippedItem) {
}

void UHDUIUserWidget::OwnerDeath(APawn* VictimPawn, AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) {
}

AHUD* UHDUIUserWidget::GetOwningPlayerHUD() const {
    return NULL;
}

AHDHUD* UHDUIUserWidget::GetOwningHDPlayerHUD() const {
    return NULL;
}

UDFCharacterMovementComponent* UHDUIUserWidget::GetOwningHDPlayerCharacterMovement() const {
    return NULL;
}

AHDPlayerCharacter* UHDUIUserWidget::GetOwningHDPlayerCharacter() const {
    return NULL;
}

AHDPlayerController* UHDUIUserWidget::GetOwningHDPlayer() const {
    return NULL;
}

AHDBaseWeapon* UHDUIUserWidget::GetOwnerEquippedWeapon() const {
    return NULL;
}










