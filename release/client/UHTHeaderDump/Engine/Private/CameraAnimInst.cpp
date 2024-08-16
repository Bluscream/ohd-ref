#include "CameraAnimInst.h"
#include "InterpGroupInst.h"

UCameraAnimInst::UCameraAnimInst() {
    this->CamAnim = NULL;
    this->InterpGroupInst = CreateDefaultSubobject<UInterpGroupInst>(TEXT("InterpGroupInst0"));
    this->PlayRate = 1.00f;
    this->MoveTrack = NULL;
    this->MoveInst = NULL;
    this->PlaySpace = ECameraAnimPlaySpace::CameraLocal;
}

void UCameraAnimInst::Stop(bool bImmediate) {
}

void UCameraAnimInst::SetScale(float NewDuration) {
}

void UCameraAnimInst::SetDuration(float NewDuration) {
}


