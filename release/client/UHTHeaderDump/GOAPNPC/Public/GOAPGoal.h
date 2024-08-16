#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Atom.h"
#include "GOAPGoal.generated.h"

class AAIController;
class UGOAPGoalManager;

UCLASS(Abstract, Blueprintable, Within=GOAPGoalManager)
class GOAPNPC_API UGOAPGoal : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GoalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtom> DesiredWorldInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelevanceWeightBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RelevanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIOwner;
    
public:
    UGOAPGoal();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RequiresNewPlan();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGOAPGoalManager* GetOuterGoalManager() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GeneratePlanFailure();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void ClearRelevance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CalculateRelevance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Activate();
    
};

