#pragma once
#include "CoreMinimal.h"
#include "HDSquadCreationParams.generated.h"

class AHDPlatoonState;
class AHDPlayerState;

USTRUCT(BlueprintType)
struct HDMAIN_API FHDSquadCreationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDPlatoonState* OwnerPlatoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDPlayerState* SquadLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLocked: 1;
    
    FHDSquadCreationParams();
};

