#include "StreamableRenderAsset.h"

UStreamableRenderAsset::UStreamableRenderAsset() {
    this->ForceMipLevelsToBeResidentTimestamp = 0.00f;
    this->NumCinematicMipLevels = 0;
    this->StreamingIndex = -1;
    this->CachedCombinedLODBias = 0;
    this->CachedNumResidentLODs = 0;
    this->bCachedReadyForStreaming = false;
    this->NeverStream = false;
    this->bGlobalForceMipLevelsToBeResident = false;
    this->bIsStreamable = false;
    this->bHasStreamingUpdatePending = false;
    this->bForceMiplevelsToBeResident = false;
    this->bIgnoreStreamingMipBias = false;
    this->bUseCinematicMipLevels = false;
}


