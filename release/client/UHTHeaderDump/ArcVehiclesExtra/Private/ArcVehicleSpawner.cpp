#include "ArcVehicleSpawner.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AArcVehicleSpawner::AArcVehicleSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->EditorVehicleMesh = NULL;
    this->VehicleClass = NULL;
    this->bSpawnImmediately = false;
    this->RespawnDelay = 0.00f;
    this->MaxVehiclesAlive = 0;
}

void AArcVehicleSpawner::SpawnVehicleTimerEnd() {
}

void AArcVehicleSpawner::OnVehicleDestroyed(AActor* DestroyedActor) {
}


