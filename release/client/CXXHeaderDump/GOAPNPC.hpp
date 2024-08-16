#ifndef UE4SS_SDK_GOAPNPC_HPP
#define UE4SS_SDK_GOAPNPC_HPP

struct FAtom
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    bool bValue;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

class AGOAPAIController : public AAIController
{
    class UGOAPComponent* GOAPComponent;                                              // 0x0328 (size: 0x8)

}; // Size: 0x330

class UGOAPAction : public UObject
{
    FString Name;                                                                     // 0x0028 (size: 0x10)
    float Cost;                                                                       // 0x0038 (size: 0x4)
    char padding_0[0x4];                                                              // 0x003C (size: 0x4)
    TSubclassOf<class AActor> TargetClass;                                            // 0x0040 (size: 0x8)
    TArray<FAtom> Preconditions;                                                      // 0x0048 (size: 0x10)
    TArray<FAtom> Effects;                                                            // 0x0058 (size: 0x10)
    class AActor* Target;                                                             // 0x0068 (size: 0x8)
    bool bActivated;                                                                  // 0x0070 (size: 0x1)

    bool Validate(class APawn* Pawn);
    bool ReceiveIsActionInvalid(class APawn* Pawn);
    bool HasCompleted(class APawn* Pawn);
    TArray<class AActor*> GetTargetsList(const class APawn* Pawn);
    void EndAction(class APawn* Pawn);
    bool DoAction(class APawn* Pawn, FString& FailureReason);
    bool CheckProceduralPrecondition(class APawn* Pawn, bool bPlanning);
    void BeginAction(class APawn* Pawn);
}; // Size: 0x98

class UGOAPComponent : public UActorComponent
{
    TArray<FAtom> CurrentWorldInitial;                                                // 0x00B0 (size: 0x10)
    TArray<FAtom> DesiredWorldInitial;                                                // 0x00C0 (size: 0x10)
    TSubclassOf<class UGOAPGoal> GoalInitial;                                         // 0x00D0 (size: 0x8)
    TSoftObjectPtr<UGOAPGoalSet> GoalSetInitial;                                      // 0x00D8 (size: 0x28)
    TArray<class TSubclassOf<UGOAPAction>> ActionClasses;                             // 0x0100 (size: 0x10)
    int32 MaxDepth;                                                                   // 0x0110 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0114 (size: 0x4)
    class AAIController* AIOwner;                                                     // 0x0118 (size: 0x8)
    class APawn* AIPawnOwner;                                                         // 0x0120 (size: 0x8)
    char padding_1[0x8];                                                              // 0x0128 (size: 0x8)
    class UGOAPGoalManager* GoalManager;                                              // 0x0130 (size: 0x8)
    TArray<class UGOAPAction*> AuxActions;                                            // 0x0138 (size: 0x10)
    TArray<class UGOAPAction*> Plan;                                                  // 0x0148 (size: 0x10)

    void UpdateCurrentWorld(const TArray<FAtom>& Atoms);
    void SetGoal(class UGOAPGoal* NewGoal);
    void SetCurrentWorld(const TArray<FAtom>& NewCurrentWorld);
    void Reset();
    void ReceiveOnReset();
    bool IsPlanValid();
    void InvalidatePlan();
    void InvalidateGoalSelection();
    bool HasPlan();
    TArray<class UGOAPAction*> GetPlanSnapshot();
    TArray<FAtom> GetDesiredWorldStateAtoms();
    TArray<FAtom> GetCurrentWorldStateAtoms();
    bool GeneratePlan();
    bool ExecuteGOAP(bool bCreatePlan, bool bRemoveActionOnComplete);
    void ClearPlan();
}; // Size: 0x168

class UGOAPGoal : public UObject
{
    FString GoalName;                                                                 // 0x0028 (size: 0x10)
    TArray<FAtom> DesiredWorldInitial;                                                // 0x0038 (size: 0x10)
    char padding_0[0x10];                                                             // 0x0048 (size: 0x10)
    float RelevanceWeightBase;                                                        // 0x0058 (size: 0x4)
    float RelevanceWeight;                                                            // 0x005C (size: 0x4)
    class AAIController* AIOwner;                                                     // 0x0060 (size: 0x8)

    bool RequiresNewPlan();
    class UGOAPGoalManager* GetOuterGoalManager();
    void GeneratePlanFailure();
    void Deactivate();
    void ClearRelevance();
    void CalculateRelevance();
    void Activate();
}; // Size: 0x68

class UGOAPGoalManager : public UObject
{
    class UGOAPGoalSet* GoalSet;                                                      // 0x0028 (size: 0x8)
    TArray<class UGOAPGoal*> AuxGoals;                                                // 0x0030 (size: 0x10)
    class UGOAPGoal* CurrentGoal;                                                     // 0x0040 (size: 0x8)

    void UpdateGoalSet(const class UGOAPGoalSet* InGoalSet);
    void SetGoalSet(const class UGOAPGoalSet* InGoalSet);
    void SetCurrentGoal(class UGOAPGoal* NewGoal, bool bDeactivatePreviousGoal);
    void RemoveGoal(const TSubclassOf<class UGOAPGoal>& GoalClass);
    void InvalidatePlan();
    void InvalidateGoalSelection();
    class UGOAPComponent* GetOuterGOAPComp();
    TArray<FAtom> GetCurrentGoalAtoms();
    class UGOAPGoal* FindGoal(const TSubclassOf<class UGOAPGoal>& GoalClass);
    void ClearGoals();
    class UGOAPGoal* AddGoal(const TSubclassOf<class UGOAPGoal>& GoalClass);
}; // Size: 0x60

class UGOAPGoalSet : public UPrimaryDataAsset
{
    FString Name;                                                                     // 0x0030 (size: 0x10)
    TSet<TSubclassOf<UGOAPGoal>> Goals;                                               // 0x0040 (size: 0x50)

}; // Size: 0x90

#endif
