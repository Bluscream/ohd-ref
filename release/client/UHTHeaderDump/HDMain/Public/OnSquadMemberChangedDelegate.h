#pragma once
#include "CoreMinimal.h"
#include "OnSquadMemberChangedDelegate.generated.h"

class AHDPlayerState;
class AHDSquadState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSquadMemberChanged, AHDSquadState*, Squad, AHDPlayerState*, MemberPS);

