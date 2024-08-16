#include "AnimNode_AssetPlayerBase.h"

FAnimNode_AssetPlayerBase::FAnimNode_AssetPlayerBase() {
    this->GroupIndex = 0;
    this->GroupRole = EAnimGroupRole::CanBeLeader;
    this->bIgnoreForRelevancyTest = false;
    this->BlendWeight = 0.00f;
    this->InternalTimeAccumulator = 0.00f;
}

