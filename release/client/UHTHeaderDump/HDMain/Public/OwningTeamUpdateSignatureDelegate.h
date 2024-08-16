#pragma once
#include "CoreMinimal.h"
#include "EHDTeam.h"
#include "OwningTeamUpdateSignatureDelegate.generated.h"

class AHDBaseCapturePoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOwningTeamUpdateSignature, AHDBaseCapturePoint*, ControlPoint, EHDTeam, PrevTeam, EHDTeam, NewTeam, bool, bCaptured);

