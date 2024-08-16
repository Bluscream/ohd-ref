#pragma once
#include "CoreMinimal.h"
#include "HDSquadAssignmentInfo.generated.h"

class AHDSquadState;

USTRUCT(BlueprintType)
struct HDMAIN_API FHDSquadAssignmentInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDSquadState* SquadState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SquadAssignmentTime;
    
public:
    FHDSquadAssignmentInfo();
};

