#pragma once
#include "CoreMinimal.h"
#include "PlayerToggleFirstPersonDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerToggleFirstPerson, bool, bFirstPerson);

