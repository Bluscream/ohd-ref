#pragma once
#include "CoreMinimal.h"
#include "OnSquadRenamedDelegate.generated.h"

class AHDSquadState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSquadRenamed, AHDSquadState*, Squad, const FText&, NewName, const FText&, PrevName);

