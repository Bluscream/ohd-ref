#include "CameraShake.h"

UCameraShake::UCameraShake() {
    this->bSingleInstance = false;
    this->OscillationDuration = 0.00f;
    this->OscillationBlendInTime = 0.10f;
    this->OscillationBlendOutTime = 0.20f;
    this->AnimPlayRate = 1.00f;
    this->AnimScale = 1.00f;
    this->AnimBlendInTime = 0.20f;
    this->AnimBlendOutTime = 0.20f;
    this->RandomAnimSegmentDuration = 0.00f;
    this->Anim = NULL;
    this->bRandomAnimSegment = false;
    this->CameraOwner = NULL;
    this->ShakeScale = 0.00f;
    this->OscillatorTimeRemaining = 0.00f;
    this->AnimInst = NULL;
}



bool UCameraShake::ReceiveIsFinished_Implementation() const {
    return false;
}



