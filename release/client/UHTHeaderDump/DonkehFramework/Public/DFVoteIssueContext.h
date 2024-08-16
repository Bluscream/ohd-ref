#pragma once
#include "CoreMinimal.h"
#include "DFVoteIssueContext.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FDFVoteIssueContext {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* TargetPlayer;
    
public:
    FDFVoteIssueContext();
};

