#include "HDGOAPGoal_EliminateEnemy.h"

UHDGOAPGoal_EliminateEnemy::UHDGOAPGoal_EliminateEnemy() {
    const FProperty* p_GoalName = GetClass()->FindPropertyByName("GoalName");
    (*p_GoalName->ContainerPtrToValuePtr<FString>(this)) = TEXT("Eliminate Enemy");
}


