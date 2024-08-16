#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESpawnActorCollisionHandlingMethod -FallbackName=ESpawnActorCollisionHandlingMethod
#include "SpawnPointDef.h"
#include "Templates/SubclassOf.h"
#include "SpawnPointProviderInterface.generated.h"

class AActor;
class AController;
class APawn;

UINTERFACE(Blueprintable, MinimalAPI)
class USpawnPointProviderInterface : public UInterface {
    GENERATED_BODY()
};

class ISpawnPointProviderInterface : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetSpawnPointCollisionHandlingOverrideBP(const FSpawnPointDef& SpawnPoint, ESpawnActorCollisionHandlingMethod& OutSpawnCollisionMethod) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetAllSpawnPointsBP(TArray<FSpawnPointDef>& SpawnPoints) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool FindSpawnPointBP(int32 SpawnPointID, FSpawnPointDef& FoundSpawnPoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanSpawnActorFromSpawnPointBP(const FSpawnPointDef& SpawnPoint, TSubclassOf<AActor> SpawnActorClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanRestartPlayerFromSpawnPointBP(const FSpawnPointDef& SpawnPoint, AController* Player, TSubclassOf<APawn> PlayerPawnClass) const;
    
};

