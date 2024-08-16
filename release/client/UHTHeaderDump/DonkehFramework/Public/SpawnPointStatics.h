#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESpawnActorCollisionHandlingMethod -FallbackName=ESpawnActorCollisionHandlingMethod
#include "SpawnPointDef.h"
#include "Templates/SubclassOf.h"
#include "SpawnPointStatics.generated.h"

class AActor;
class AController;
class APawn;
class UObject;

UCLASS(Blueprintable)
class DONKEHFRAMEWORK_API USpawnPointStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpawnPointStatics();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SpawnPointExists(const UObject* Target, int32 SpawnPointID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSpawnPointCollisionHandlingOverride(const UObject* Target, const FSpawnPointDef& SpawnPoint, ESpawnActorCollisionHandlingMethod& OutSpawnCollisionMethod);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAllSpawnPointTransforms(const UObject* Target, TArray<FTransform>& SpawnPointTransforms);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAllSpawnPoints(const UObject* Target, TArray<FSpawnPointDef>& SpawnPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindSpawnPoint(const UObject* Target, int32 SpawnPointID, FSpawnPointDef& FoundSpawnPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanSpawnActorFromSpawnPoint(const UObject* Target, const FSpawnPointDef& SpawnPoint, const TSubclassOf<AActor>& SpawnActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanSpawnActorFromAnySpawnPoint(const UObject* Target, const TSubclassOf<AActor>& SpawnActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanRestartPlayerFromSpawnPoint(const UObject* Target, const FSpawnPointDef& SpawnPoint, AController* Player, const TSubclassOf<APawn>& PlayerPawnClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanRestartPlayerFromAnySpawnPoint(const UObject* Target, AController* Player, const TSubclassOf<APawn>& PlayerPawnClass);
    
};

