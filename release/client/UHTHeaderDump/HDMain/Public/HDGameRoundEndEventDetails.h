#pragma once
#include "CoreMinimal.h"
#include "EHDTeam.h"
#include "HDGameRoundEndEventDetails.generated.h"

USTRUCT(BlueprintType)
struct HDMAIN_API FHDGameRoundEndEventDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHDTeam WinningTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BluforTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OpforTickets;
    
    FHDGameRoundEndEventDetails();
};

