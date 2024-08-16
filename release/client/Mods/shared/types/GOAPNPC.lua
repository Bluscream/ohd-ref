---@meta

---@class AGOAPAIController : AAIController
---@field GOAPComponent UGOAPComponent
AGOAPAIController = {}



---@class FAtom
---@field Name FString
---@field bValue boolean
FAtom = {}



---@class UGOAPAction : UObject
---@field Name FString
---@field Cost float
---@field TargetClass TSubclassOf<AActor>
---@field Preconditions TArray<FAtom>
---@field Effects TArray<FAtom>
---@field Target AActor
---@field bActivated boolean
UGOAPAction = {}

---@param Pawn APawn
---@return boolean
function UGOAPAction:Validate(Pawn) end
---@param Pawn APawn
---@return boolean
function UGOAPAction:ReceiveIsActionInvalid(Pawn) end
---@param Pawn APawn
---@return boolean
function UGOAPAction:HasCompleted(Pawn) end
---@param Pawn APawn
---@return TArray<AActor>
function UGOAPAction:GetTargetsList(Pawn) end
---@param Pawn APawn
function UGOAPAction:EndAction(Pawn) end
---@param Pawn APawn
---@param FailureReason FString
---@return boolean
function UGOAPAction:DoAction(Pawn, FailureReason) end
---@param Pawn APawn
---@param bPlanning boolean
---@return boolean
function UGOAPAction:CheckProceduralPrecondition(Pawn, bPlanning) end
---@param Pawn APawn
function UGOAPAction:BeginAction(Pawn) end


---@class UGOAPComponent : UActorComponent
---@field CurrentWorldInitial TArray<FAtom>
---@field DesiredWorldInitial TArray<FAtom>
---@field GoalInitial TSubclassOf<UGOAPGoal>
---@field GoalSetInitial TSoftObjectPtr<UGOAPGoalSet>
---@field ActionClasses TArray<TSubclassOf<UGOAPAction>>
---@field MaxDepth int32
---@field AIOwner AAIController
---@field AIPawnOwner APawn
---@field GoalManager UGOAPGoalManager
---@field AuxActions TArray<UGOAPAction>
---@field Plan TArray<UGOAPAction>
UGOAPComponent = {}

---@param Atoms TArray<FAtom>
function UGOAPComponent:UpdateCurrentWorld(Atoms) end
---@param NewGoal UGOAPGoal
function UGOAPComponent:SetGoal(NewGoal) end
---@param NewCurrentWorld TArray<FAtom>
function UGOAPComponent:SetCurrentWorld(NewCurrentWorld) end
function UGOAPComponent:Reset() end
function UGOAPComponent:ReceiveOnReset() end
---@return boolean
function UGOAPComponent:IsPlanValid() end
function UGOAPComponent:InvalidatePlan() end
function UGOAPComponent:InvalidateGoalSelection() end
---@return boolean
function UGOAPComponent:HasPlan() end
---@return TArray<UGOAPAction>
function UGOAPComponent:GetPlanSnapshot() end
---@return TArray<FAtom>
function UGOAPComponent:GetDesiredWorldStateAtoms() end
---@return TArray<FAtom>
function UGOAPComponent:GetCurrentWorldStateAtoms() end
---@return boolean
function UGOAPComponent:GeneratePlan() end
---@param bCreatePlan boolean
---@param bRemoveActionOnComplete boolean
---@return boolean
function UGOAPComponent:ExecuteGOAP(bCreatePlan, bRemoveActionOnComplete) end
function UGOAPComponent:ClearPlan() end


---@class UGOAPGoal : UObject
---@field GoalName FString
---@field DesiredWorldInitial TArray<FAtom>
---@field RelevanceWeightBase float
---@field RelevanceWeight float
---@field AIOwner AAIController
UGOAPGoal = {}

---@return boolean
function UGOAPGoal:RequiresNewPlan() end
---@return UGOAPGoalManager
function UGOAPGoal:GetOuterGoalManager() end
function UGOAPGoal:GeneratePlanFailure() end
function UGOAPGoal:Deactivate() end
function UGOAPGoal:ClearRelevance() end
function UGOAPGoal:CalculateRelevance() end
function UGOAPGoal:Activate() end


---@class UGOAPGoalManager : UObject
---@field GoalSet UGOAPGoalSet
---@field AuxGoals TArray<UGOAPGoal>
---@field CurrentGoal UGOAPGoal
UGOAPGoalManager = {}

---@param InGoalSet UGOAPGoalSet
function UGOAPGoalManager:UpdateGoalSet(InGoalSet) end
---@param InGoalSet UGOAPGoalSet
function UGOAPGoalManager:SetGoalSet(InGoalSet) end
---@param NewGoal UGOAPGoal
---@param bDeactivatePreviousGoal boolean
function UGOAPGoalManager:SetCurrentGoal(NewGoal, bDeactivatePreviousGoal) end
---@param GoalClass TSubclassOf<UGOAPGoal>
function UGOAPGoalManager:RemoveGoal(GoalClass) end
function UGOAPGoalManager:InvalidatePlan() end
function UGOAPGoalManager:InvalidateGoalSelection() end
---@return UGOAPComponent
function UGOAPGoalManager:GetOuterGOAPComp() end
---@return TArray<FAtom>
function UGOAPGoalManager:GetCurrentGoalAtoms() end
---@param GoalClass TSubclassOf<UGOAPGoal>
---@return UGOAPGoal
function UGOAPGoalManager:FindGoal(GoalClass) end
function UGOAPGoalManager:ClearGoals() end
---@param GoalClass TSubclassOf<UGOAPGoal>
---@return UGOAPGoal
function UGOAPGoalManager:AddGoal(GoalClass) end


---@class UGOAPGoalSet : UPrimaryDataAsset
---@field Name FString
---@field Goals TSet<TSubclassOf<UGOAPGoal>>
UGOAPGoalSet = {}



