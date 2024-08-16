#include "InterpTrackFloatAnimBPParam.h"
#include "InterpTrackInstFloatAnimBPParam.h"

UInterpTrackFloatAnimBPParam::UInterpTrackFloatAnimBPParam() {
    this->TrackInstClass = UInterpTrackInstFloatAnimBPParam::StaticClass();
    this->TrackTitle = TEXT("Float AnimBP Param");
    this->AnimBlueprintClass = NULL;
    this->AnimClass = NULL;
}


