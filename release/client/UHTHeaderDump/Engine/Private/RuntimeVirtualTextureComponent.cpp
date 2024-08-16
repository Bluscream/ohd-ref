#include "RuntimeVirtualTextureComponent.h"

URuntimeVirtualTextureComponent::URuntimeVirtualTextureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VirtualTexture = NULL;
    this->bUseStreamingLowMipsInEditor = false;
    this->BoundsSourceActor = NULL;
}

FTransform URuntimeVirtualTextureComponent::GetVirtualTextureTransform() const {
    return FTransform{};
}


