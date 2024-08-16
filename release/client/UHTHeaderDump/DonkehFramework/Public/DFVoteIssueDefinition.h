#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DFVoteIssueDefinition.generated.h"

class UDFVoteIssue;

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FDFVoteIssueDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDFVoteIssue> IssueClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlyAdminsCanInitiateVote: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowAdminTargets: 1;
    
    FDFVoteIssueDefinition();
};

