#pragma once
#include "CoreMinimal.h"
#include "DFPlayerVoteSelection.generated.h"

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FDFPlayerVoteSelection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectionIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoteCount;
    
    FDFPlayerVoteSelection();
};

