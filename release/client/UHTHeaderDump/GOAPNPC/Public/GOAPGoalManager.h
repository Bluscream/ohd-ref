#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Atom.h"
#include "Templates/SubclassOf.h"
#include "GOAPGoalManager.generated.h"

class UGOAPComponent;
class UGOAPGoal;
class UGOAPGoalSet;

UCLASS(Blueprintable, Within=GOAPComponent)
class GOAPNPC_API UGOAPGoalManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGOAPGoalSet* GoalSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGOAPGoal*> AuxGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGOAPGoal* CurrentGoal;
    
public:
    UGOAPGoalManager();

    UFUNCTION(BlueprintCallable)
    void UpdateGoalSet(const UGOAPGoalSet* InGoalSet);
    
    UFUNCTION(BlueprintCallable)
    void SetGoalSet(const UGOAPGoalSet* InGoalSet);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentGoal(UGOAPGoal* NewGoal, bool bDeactivatePreviousGoal);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGoal(const TSubclassOf<UGOAPGoal>& GoalClass);
    
    UFUNCTION(BlueprintCallable)
    void InvalidatePlan();
    
    UFUNCTION(BlueprintCallable)
    void InvalidateGoalSelection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGOAPComponent* GetOuterGOAPComp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAtom> GetCurrentGoalAtoms() const;
    
    UFUNCTION(BlueprintCallable)
    UGOAPGoal* FindGoal(const TSubclassOf<UGOAPGoal>& GoalClass);
    
    UFUNCTION(BlueprintCallable)
    void ClearGoals();
    
    UFUNCTION(BlueprintCallable)
    UGOAPGoal* AddGoal(const TSubclassOf<UGOAPGoal>& GoalClass);
    
};

