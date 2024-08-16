#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DFActiveVoteInfo.h"
#include "DFVoteIssueContext.h"
#include "DFVotingStatics.generated.h"

class APlayerState;
class UDFVotingComponent;
class UObject;

UCLASS(Blueprintable)
class DONKEHFRAMEWORK_API UDFVotingStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDFVotingStatics();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText VoteInfoGetPromptTextForDisplay(const FDFActiveVoteInfo& VoteInfo);
    
    UFUNCTION(BlueprintCallable)
    static FDFVoteIssueContext MakeVoteContext(APlayerState* TargetPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidVotingPlayer(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDFVotingComponent* GetGameStateVotingComponent(const UObject* WorldContextObject);
    
};

