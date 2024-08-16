#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PrefabActor.generated.h"

class UPrefabComponent;
class UPrefabricatorAsset;

UCLASS(Blueprintable)
class PREFABRICATORRUNTIME_API APrefabActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrefabComponent* PrefabComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LastUpdateID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    APrefabActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SavePrefab();
    
    UFUNCTION(BlueprintCallable)
    void RandomizeSeed(const FRandomStream& InRandom, bool bRecursive);
    
    UFUNCTION(BlueprintCallable)
    void LoadPrefab();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrefabOutdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrefabricatorAsset* GetPrefabAsset();
    
};

