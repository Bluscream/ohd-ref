#include "LandscapeMeshProxyActor.h"
#include "LandscapeMeshProxyComponent.h"

ALandscapeMeshProxyActor::ALandscapeMeshProxyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<ULandscapeMeshProxyComponent>(TEXT("LandscapeMeshProxyComponent0"));
    this->LandscapeMeshProxyComponent = (ULandscapeMeshProxyComponent*)RootComponent;
}


