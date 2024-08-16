#pragma once
#include "CoreMinimal.h"
#include "DFPlayerVote.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FDFPlayerVote {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* VoterPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectionIdx;
    
    FDFPlayerVote();
};

