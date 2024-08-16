#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LevelCollection.h"
#include "StreamingLevelsToConsider.h"
#include "WorldPSCPool.h"
#include "World.generated.h"

class AActor;
class AGameModeBase;
class AGameNetworkManager;
class AGameStateBase;
class AParticleEventManager;
class APhysicsVolume;
class AWorldSettings;
class UAISystemBase;
class UActorComponent;
class UAvoidanceManager;
class UCanvas;
class UDemoNetDriver;
class UGameInstance;
class ULevel;
class ULevelStreaming;
class ULineBatchComponent;
class UMaterialParameterCollectionInstance;
class UNavigationSystemBase;
class UNetDriver;
class UPhysicsCollisionHandler;
class UWorldComposition;

UCLASS(Blueprintable)
class ENGINE_API UWorld : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevel* PersistentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNetDriver* NetDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULineBatchComponent* LineBatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULineBatchComponent* PersistentLineBatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULineBatchComponent* ForegroundLineBatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameNetworkManager* NetworkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPhysicsCollisionHandler* PhysicsCollisionHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ExtraReferencedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> PerModuleDataObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> LevelSequenceActors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> StreamingLevels;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FStreamingLevelsToConsider StreamingLevelsToConsider;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StreamingLevelsPrefix;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevel* CurrentLevelPendingVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevel* CurrentLevelPendingInvisibility;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDemoNetDriver* DemoNetDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AParticleEventManager* MyParticleEventManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APhysicsVolume* DefaultPhysicsVolume;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAreConstraintsDirty: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNavigationSystemBase* NavigationSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameModeBase* AuthorityGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameStateBase* GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAISystemBase* AISystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAvoidanceManager* AvoidanceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevel*> Levels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLevelCollection> LevelCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameInstance* OwningGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialParameterCollectionInstance*> ParameterCollectionInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCanvas* CanvasForRenderingToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCanvas* CanvasForDrawMaterialToRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldComposition* WorldComposition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldPSCPool PSCPool;
    
public:
    UWorld();

    UFUNCTION(BlueprintCallable)
    AWorldSettings* K2_GetWorldSettings();
    
    UFUNCTION(BlueprintCallable)
    void HandleTimelineScrubbed();
    
};

