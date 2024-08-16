#include "InterpTrackFloatMaterialParam.h"
#include "InterpTrackInstFloatMaterialParam.h"

UInterpTrackFloatMaterialParam::UInterpTrackFloatMaterialParam() {
    this->TrackInstClass = UInterpTrackInstFloatMaterialParam::StaticClass();
    this->TrackTitle = TEXT("Float UMaterial Param");
}


