#include "HDGOAPGoal_CaptureControlPoint.h"

UHDGOAPGoal_CaptureControlPoint::UHDGOAPGoal_CaptureControlPoint() {
    const FProperty* p_GoalName = GetClass()->FindPropertyByName("GoalName");
    (*p_GoalName->ContainerPtrToValuePtr<FString>(this)) = TEXT("Capture Control Point");
    this->CPToCaptureCurrent = NULL;
    this->CPToCapturePending = NULL;
}


