#include "LevelStreamingDynamic.h"

ULevelStreamingDynamic::ULevelStreamingDynamic() {
    this->bInitiallyLoaded = false;
    this->bInitiallyVisible = false;
}

ULevelStreamingDynamic* ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, FVector Location, FRotator Rotation, bool& bOutSuccess) {
    return NULL;
}

ULevelStreamingDynamic* ULevelStreamingDynamic::LoadLevelInstance(UObject* WorldContextObject, const FString& LevelName, FVector Location, FRotator Rotation, bool& bOutSuccess) {
    return NULL;
}


