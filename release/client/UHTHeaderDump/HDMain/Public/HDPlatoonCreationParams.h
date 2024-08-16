#pragma once
#include "CoreMinimal.h"
#include "HDPlatoonCreationParams.generated.h"

class AHDTeamState;
class UHDPlatoonInfo;

USTRUCT(BlueprintType)
struct HDMAIN_API FHDPlatoonCreationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHDPlatoonInfo* Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDTeamState* OwnerTeam;
    
    FHDPlatoonCreationParams();
};

