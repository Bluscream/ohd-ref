#include "HDGame_AdvanceAndSecure.h"

AHDGame_AdvanceAndSecure::AHDGame_AdvanceAndSecure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameDisplayName = FText::FromString(TEXT("Advance and Secure"));
    this->bForceRespawn = false;
    this->AllowedVoteIssues.AddDefaulted(1);
    this->StartingBlueTier = 0;
    this->StartingRedTier = 0;
    this->ActiveRoute = 0;
    this->CurrentBlueCaptureTier = 0;
    this->CurrentRedCaptureTier = 0;
    this->bBlueIncreasesTier = false;
}

int32 AHDGame_AdvanceAndSecure::GetCurrentRedCaptureTier() const {
    return 0;
}

int32 AHDGame_AdvanceAndSecure::GetCurrentBlueCaptureTier() const {
    return 0;
}


