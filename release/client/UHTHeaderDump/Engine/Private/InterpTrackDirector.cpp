#include "InterpTrackDirector.h"
#include "InterpTrackInstDirector.h"

UInterpTrackDirector::UInterpTrackDirector() {
    this->TrackInstClass = UInterpTrackInstDirector::StaticClass();
    this->TrackTitle = TEXT("Director");
    this->bOnePerGroup = true;
    this->bDirGroupOnly = true;
    this->bSimulateCameraCutsOnClients = true;
}


