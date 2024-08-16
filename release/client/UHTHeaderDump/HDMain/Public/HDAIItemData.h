#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=ESpecificItemType -FallbackName=ESpecificItemType
#include "HDAIItemData.generated.h"

USTRUCT(BlueprintType)
struct HDMAIN_API FHDAIItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecificItemType SpecificType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InventoryIndex;
    
    FHDAIItemData();
};

