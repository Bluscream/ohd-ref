#include "HierarchicalInstancedStaticMeshComponent.h"

UHierarchicalInstancedStaticMeshComponent::UHierarchicalInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAsOccluder = false;
    this->NumBuiltInstances = 0;
    this->bEnableDensityScaling = false;
    this->OcclusionLayerNumNodes = 0;
    this->bDisableCollision = false;
    this->InstanceCountToRender = 0;
}

bool UHierarchicalInstancedStaticMeshComponent::RemoveInstances(const TArray<int32>& InstancesToRemove) {
    return false;
}


