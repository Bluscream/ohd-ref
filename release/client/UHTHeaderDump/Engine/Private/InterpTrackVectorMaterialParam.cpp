#include "InterpTrackVectorMaterialParam.h"
#include "InterpTrackInstVectorMaterialParam.h"

UInterpTrackVectorMaterialParam::UInterpTrackVectorMaterialParam() {
    this->TrackInstClass = UInterpTrackInstVectorMaterialParam::StaticClass();
    this->TrackTitle = TEXT("Vector UMaterial Param");
}


