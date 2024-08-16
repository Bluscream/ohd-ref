#pragma once
#include "CoreMinimal.h"
#include "DFPlayerVoteSelection.h"
#include "DFVoteIssueContext.h"
#include "EDFVoteStatus.h"
#include "Templates/SubclassOf.h"
#include "DFActiveVoteInfo.generated.h"

class APlayerState;
class UDFVoteIssue;

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FDFActiveVoteInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDFVoteIssue> IssueClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDFVoteIssueContext IssueContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoteEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerState* OwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDFVoteStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDFPlayerVoteSelection> Votes;
    
    FDFActiveVoteInfo();
};

