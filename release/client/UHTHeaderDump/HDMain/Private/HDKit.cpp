#include "HDKit.h"

UHDKit::UHDKit() {
    this->PrimaryItemSlotNum = 3;
    this->KitDropPrefabClass = NULL;
    this->bSquadLeaderKit = false;
    this->bAllowsRallyPointDeployment = false;
    this->KitDisplaySymbol = NULL;
}

FDFCharacterVariationDataHandle UHDKit::RandomCharacterVariationDataFromKit() const {
    return FDFCharacterVariationDataHandle{};
}

bool UHDKit::PlayerCanStartWithKit(const AController* Player, FText& OutKitDenialReason) const {
    return false;
}

bool UHDKit::HasKitRequirements() const {
    return false;
}

bool UHDKit::GetPrimaryItemEntryDisplayIcon(UTexture2D*& OutDisplayIcon) const {
    return false;
}

bool UHDKit::GetPrimaryItemEntry(FHDItemEntry& OutPrimaryEntry) const {
    return false;
}

int32 UHDKit::GetPlayersUsingKit(UObject* WorldContextObject, TArray<AHDPlayerState*>& OutPSArray) const {
    return 0;
}

int32 UHDKit::GetNumPlayersUsingKit(UObject* WorldContextObject) const {
    return 0;
}

bool UHDKit::GetItemEntryDisplayIcon(const FHDItemEntry& ItemEntry, UTexture2D*& OutDisplayIcon) {
    return false;
}

bool UHDKit::GetItemEntryDisplayEquipmentSymbol(const FHDItemEntry& ItemEntry, UTexture2D*& OutDisplayEquipmentSymbol) {
    return false;
}

bool UHDKit::GetItemEntryBySlotNum(const int32 SlotNum, FHDItemEntry& OutEntry) const {
    return false;
}


