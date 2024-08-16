#pragma once
#include "CoreMinimal.h"
#include "HDSquadAssignmentInfo.h"
#include "OnSquadMemberInfoUpdatedDelegate.generated.h"

class AHDPlayerState;
class AHDSquadState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSquadMemberInfoUpdated, AHDSquadState*, Squad, AHDPlayerState*, MemberPS, const FHDSquadAssignmentInfo&, MemberSQInfo);

