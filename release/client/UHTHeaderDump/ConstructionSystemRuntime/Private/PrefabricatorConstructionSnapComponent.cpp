#include "PrefabricatorConstructionSnapComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea_Obstacle -FallbackName=NavArea_Obstacle

UPrefabricatorConstructionSnapComponent::UPrefabricatorConstructionSnapComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->SnapType = EPrefabricatorConstructionSnapType::Floor;
    this->bAlignToGroundSlope = false;
    this->bUseMaxGroundSlopeConstraint = false;
    this->MaxGroundPlacementSlope = 60.00f;
}


