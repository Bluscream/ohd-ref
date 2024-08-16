#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ConstructionSystemSaveConstructedItem.generated.h"

class UPrefabricatorAssetInterface;

USTRUCT(BlueprintType)
struct CONSTRUCTIONSYSTEMRUNTIME_API FConstructionSystemSaveConstructedItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrefabricatorAssetInterface* PrefabAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    FConstructionSystemSaveConstructedItem();
};

