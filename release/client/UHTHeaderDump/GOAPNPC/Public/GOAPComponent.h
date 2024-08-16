#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Atom.h"
#include "Templates/SubclassOf.h"
#include "GOAPComponent.generated.h"

class AAIController;
class APawn;
class UGOAPAction;
class UGOAPGoal;
class UGOAPGoalManager;
class UGOAPGoalSet;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAPNPC_API UGOAPComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtom> CurrentWorldInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtom> DesiredWorldInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGOAPGoal> GoalInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGOAPGoalSet> GoalSetInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGOAPAction>> ActionClasses;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* AIPawnOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGOAPGoalManager* GoalManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGOAPAction*> AuxActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGOAPAction*> Plan;
    
public:
    UGOAPComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCurrentWorld(const TArray<FAtom>& Atoms);
    
    UFUNCTION(BlueprintCallable)
    void SetGoal(UGOAPGoal* NewGoal);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentWorld(const TArray<FAtom>& NewCurrentWorld);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnReset();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlanValid() const;
    
    UFUNCTION(BlueprintCallable)
    void InvalidatePlan();
    
    UFUNCTION(BlueprintCallable)
    void InvalidateGoalSelection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPlan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGOAPAction*> GetPlanSnapshot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAtom> GetDesiredWorldStateAtoms() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAtom> GetCurrentWorldStateAtoms() const;
    
    UFUNCTION(BlueprintCallable)
    bool GeneratePlan();
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteGOAP(bool bCreatePlan, bool bRemoveActionOnComplete);
    
    UFUNCTION(BlueprintCallable)
    void ClearPlan();
    
};

