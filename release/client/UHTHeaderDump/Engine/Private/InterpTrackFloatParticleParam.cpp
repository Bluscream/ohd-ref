#include "InterpTrackFloatParticleParam.h"
#include "InterpTrackInstFloatParticleParam.h"

UInterpTrackFloatParticleParam::UInterpTrackFloatParticleParam() {
    this->TrackInstClass = UInterpTrackInstFloatParticleParam::StaticClass();
    this->TrackTitle = TEXT("Float Particle Param");
}


