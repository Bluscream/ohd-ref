#pragma once
#include "CoreMinimal.h"
#include "RepShotInfo.generated.h"

USTRUCT(BlueprintType)
struct FRepShotInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint16 ShotCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompressByte;
    
public:
    DONKEHFRAMEWORK_API FRepShotInfo();
};

