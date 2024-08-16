#include "DFBaseItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"

ADFBaseItem::ADFBaseItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetUseOwnerRelevancy = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
    this->PawnOwner = NULL;
    this->ItemMesh = (UStaticMeshComponent*)RootComponent;
    this->ItemMesh1P = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh1P"));
    this->PawnMesh1P = NULL;
    this->PawnMesh1PAnimClass = NULL;
    this->ItemType = EItemType::Other;
    this->SpecificItemType = ESpecificItemType::Undefined;
    this->bCanEquip = false;
    this->bCanAimWhileEquipped = true;
    this->bDisableFireInput = false;
    this->bEquipped = false;
    this->bPendingEquip = false;
    this->bPendingUnEquip = false;
    this->bWantsToFire = false;
    this->LastFiredShotID = -1;
    this->bDebug = false;
    this->ItemMesh1P->SetupAttachment(RootComponent);
}

void ADFBaseItem::StopFire() {
}

void ADFBaseItem::StartFire() {
}

void ADFBaseItem::SetOwningPawn(ADFBaseCharacter* NewOwner) {
}

void ADFBaseItem::SetMeshVisibility(bool bFirstPerson) {
}

void ADFBaseItem::ServerStopFire_Implementation() {
}
bool ADFBaseItem::ServerStopFire_Validate() {
    return true;
}

void ADFBaseItem::ServerStartFire_Implementation(const FVector_NetQuantize& Origin, const FVector_NetQuantizeNormal& ShootDir, int32 RandomSeed, float Timestamp, int32 ShotID) {
}
bool ADFBaseItem::ServerStartFire_Validate(const FVector_NetQuantize& Origin, const FVector_NetQuantizeNormal& ShootDir, int32 RandomSeed, float Timestamp, int32 ShotID) {
    return true;
}












bool ADFBaseItem::OwnerIsSprinting() const {
    return false;
}

bool ADFBaseItem::OwnerIsAiming() const {
    return false;
}

void ADFBaseItem::OnUnEquip(bool bPlayAnimAndWait, bool bLeavingPawnInventory) {
}

void ADFBaseItem::OnTurnOff() {
}

void ADFBaseItem::OnRep_PawnOwner(ADFBaseCharacter* LastOwner) {
}

void ADFBaseItem::OnLeaveInventory(ADFBaseCharacter* LastOwner) {
}

void ADFBaseItem::OnEquip(const ADFBaseItem* LastItem) {
}

void ADFBaseItem::OnEnterInventory(ADFBaseCharacter* NewOwner, ADFBaseCharacter* LastOwner) {
}

bool ADFBaseItem::IsUnEquipping() const {
    return false;
}

bool ADFBaseItem::IsLocallyControlled() const {
    return false;
}

bool ADFBaseItem::IsEquipping() const {
    return false;
}

bool ADFBaseItem::IsEquipped() const {
    return false;
}

bool ADFBaseItem::IsClientSimulated() const {
    return false;
}

ESpecificItemType ADFBaseItem::GetSpecificItemType() const {
    return ESpecificItemType::None;
}

ADFBaseCharacter* ADFBaseItem::GetPawnOwner() const {
    return NULL;
}

UDFInventoryComponent* ADFBaseItem::GetPawnInventory() const {
    return NULL;
}

FRotator ADFBaseItem::GetOwnerViewRotation() const {
    return FRotator{};
}

bool ADFBaseItem::GetOwnerViewPoint(FVector& OutViewLoc, FRotator& OutViewRot) const {
    return false;
}

FVector ADFBaseItem::GetOwnerViewLocation() const {
    return FVector{};
}


EItemType ADFBaseItem::GetItemType() const {
    return EItemType::Melee;
}

UStaticMeshComponent* ADFBaseItem::GetItemMeshToUse(bool bIgnoreLocalControlOnServer) const {
    return NULL;
}

UStaticMeshComponent* ADFBaseItem::GetItemMesh1P() const {
    return NULL;
}

UStaticMeshComponent* ADFBaseItem::GetItemMesh() const {
    return NULL;
}

FVector ADFBaseItem::GetAdjustedAimDirection_Implementation() const {
    return FVector{};
}

void ADFBaseItem::ForceStopFiring() {
}

bool ADFBaseItem::CanTriggerFire() const {
    return false;
}

bool ADFBaseItem::CanStartFire() const {
    return false;
}

bool ADFBaseItem::CanSprintWhileEquipped() const {
    return false;
}

bool ADFBaseItem::CanFire_Implementation() const {
    return false;
}

bool ADFBaseItem::CanEquip() const {
    return false;
}

bool ADFBaseItem::CanAimWhileEquipped() const {
    return false;
}

void ADFBaseItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADFBaseItem, PawnOwner);
}


