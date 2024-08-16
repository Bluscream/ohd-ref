#pragma once
#include "CoreMinimal.h"
#include "DFVoteIssue.h"
#include "DFVoteIssuePlayer.generated.h"

class APlayerState;

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORK_API UDFVoteIssuePlayer : public UDFVoteIssue {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowAdminTargets;
    
public:
    UDFVoteIssuePlayer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInitiateVoteWithTarget(APlayerState* TargetPS) const;
    
};

