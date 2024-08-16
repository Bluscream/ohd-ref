#include "SpawnPointStatics.h"
#include "Templates/SubclassOf.h"

USpawnPointStatics::USpawnPointStatics() {
}

bool USpawnPointStatics::SpawnPointExists(const UObject* Target, int32 SpawnPointID) {
    return false;
}

bool USpawnPointStatics::GetSpawnPointCollisionHandlingOverride(const UObject* Target, const FSpawnPointDef& SpawnPoint, ESpawnActorCollisionHandlingMethod& OutSpawnCollisionMethod) {
    return false;
}

int32 USpawnPointStatics::GetAllSpawnPointTransforms(const UObject* Target, TArray<FTransform>& SpawnPointTransforms) {
    return 0;
}

int32 USpawnPointStatics::GetAllSpawnPoints(const UObject* Target, TArray<FSpawnPointDef>& SpawnPoints) {
    return 0;
}

bool USpawnPointStatics::FindSpawnPoint(const UObject* Target, int32 SpawnPointID, FSpawnPointDef& FoundSpawnPoint) {
    return false;
}

bool USpawnPointStatics::CanSpawnActorFromSpawnPoint(const UObject* Target, const FSpawnPointDef& SpawnPoint, const TSubclassOf<AActor>& SpawnActorClass) {
    return false;
}

bool USpawnPointStatics::CanSpawnActorFromAnySpawnPoint(const UObject* Target, const TSubclassOf<AActor>& SpawnActorClass) {
    return false;
}

bool USpawnPointStatics::CanRestartPlayerFromSpawnPoint(const UObject* Target, const FSpawnPointDef& SpawnPoint, AController* Player, const TSubclassOf<APawn>& PlayerPawnClass) {
    return false;
}

bool USpawnPointStatics::CanRestartPlayerFromAnySpawnPoint(const UObject* Target, AController* Player, const TSubclassOf<APawn>& PlayerPawnClass) {
    return false;
}


