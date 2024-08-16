#pragma once
#include "CoreMinimal.h"
#include "DFVoteIssuePlayer.h"
#include "DFVoteIssuePlayerKick.generated.h"

UCLASS(Blueprintable, Config=Engine)
class DONKEHFRAMEWORK_API UDFVoteIssuePlayerKick : public UDFVoteIssuePlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BanDuration;
    
public:
    UDFVoteIssuePlayerKick();

};

