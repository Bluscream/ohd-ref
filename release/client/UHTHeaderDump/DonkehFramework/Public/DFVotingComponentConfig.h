#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DFVotingComponentConfig.generated.h"

class UDFVoteIssue;

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FDFVotingComponentConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDFVoteIssue>> AllowedVoteIssues;
    
    FDFVotingComponentConfig();
};

