#include "AnimSequenceBase.h"

UAnimSequenceBase::UAnimSequenceBase() {
    this->SequenceLength = 0.00f;
    this->RateScale = 1.00f;
}

float UAnimSequenceBase::GetPlayLength() {
    return 0.0f;
}


