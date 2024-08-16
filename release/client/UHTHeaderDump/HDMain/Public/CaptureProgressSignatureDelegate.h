#pragma once
#include "CoreMinimal.h"
#include "CaptureProgressSignatureDelegate.generated.h"

class AHDBaseCapturePoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCaptureProgressSignature, AHDBaseCapturePoint*, ControlPoint, bool, bContested, int32, Progress);

