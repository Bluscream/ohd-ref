#include "PrefabRandomizer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

APrefabRandomizer::APrefabRandomizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->bRandomizeOnBeginPlay = false;
    this->SeedOffset = 0;
    this->MaxBuildTimePerFrame = 0.02f;
    this->bFastSyncBuild = false;
}

void APrefabRandomizer::Randomize(int32 InSeed) {
}


