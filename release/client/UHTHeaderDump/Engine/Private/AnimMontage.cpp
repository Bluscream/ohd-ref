#include "AnimMontage.h"

UAnimMontage::UAnimMontage() {
    this->BlendInTime = -1.00f;
    this->BlendOutTime = -1.00f;
    this->BlendOutTriggerTime = -1.00f;
    this->SyncSlotIndex = 0;
    this->SlotAnimTracks.AddDefaulted(1);
    this->bEnableRootMotionTranslation = false;
    this->bEnableRootMotionRotation = false;
    this->bEnableAutoBlendOut = true;
    this->RootMotionRootLock = ERootMotionRootLock::RefPose;
    this->TimeStretchCurveName = TEXT("MontageTimeStretchCurve");
}

float UAnimMontage::GetDefaultBlendOutTime() const {
    return 0.0f;
}


