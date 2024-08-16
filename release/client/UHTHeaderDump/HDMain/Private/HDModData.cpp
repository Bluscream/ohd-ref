#include "HDModData.h"

UHDModData::UHDModData() {
    this->PrimaryAssetPathsToScan.AddDefaulted(3);
    this->bServersideOnlyMod = false;
    this->ModDataVersion = 1;
}

bool UHDModData::DoesModPluginUseLegacyMapScanning(const FString& PluginName) {
    return false;
}


