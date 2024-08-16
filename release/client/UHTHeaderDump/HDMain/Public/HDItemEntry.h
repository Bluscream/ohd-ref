#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HDItemEntry.generated.h"

class AHDBaseWeapon;

USTRUCT(BlueprintType)
struct HDMAIN_API FHDItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHDBaseWeapon> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotNum;
    
    FHDItemEntry();
};

