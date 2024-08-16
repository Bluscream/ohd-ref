#pragma once
#include "CoreMinimal.h"
#include "HDGOAPGoalBase.h"
#include "HDGOAPGoal_CaptureControlPoint.generated.h"

class AHDBaseCapturePoint;

UCLASS(Blueprintable)
class HDMAIN_API UHDGOAPGoal_CaptureControlPoint : public UHDGOAPGoalBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDBaseCapturePoint* CPToCaptureCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDBaseCapturePoint* CPToCapturePending;
    
public:
    UHDGOAPGoal_CaptureControlPoint();

};

