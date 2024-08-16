#include "InterpTrackParticleReplay.h"
#include "InterpTrackInstParticleReplay.h"

UInterpTrackParticleReplay::UInterpTrackParticleReplay() {
    this->TrackInstClass = UInterpTrackInstParticleReplay::StaticClass();
    this->TrackTitle = TEXT("Particle Replay");
}


