#pragma once
#include "CoreMinimal.h"
#include "ECollisionChannel.generated.h"

UENUM(BlueprintType)
enum ECollisionChannel {
    ECC_WorldStatic,
    ECC_WorldDynamic,
    ECC_Pawn,
    ECC_Visibility,
    ECC_Camera,
    ECC_PhysicsBody,
    ECC_Vehicle,
    ECC_Destructible,
    ECC_EngineTraceChannel1,
    ECC_EngineTraceChannel2,
    ECC_EngineTraceChannel3,
    ECC_EngineTraceChannel4,
    ECC_EngineTraceChannel5,
    ECC_EngineTraceChannel6,
    ECC_GameTraceChannel1,
    ECC_GameTraceChannel2,
    ECC_GameTraceChannel3,
    ECC_GameTraceChannel4,
    ECC_GameTraceChannel5,
    ECC_GameTraceChannel6,
    ECC_GameTraceChannel7,
    ECC_GameTraceChannel8,
    ECC_GameTraceChannel9,
    ECC_GameTraceChannel10,
    ECC_GameTraceChannel11,
    ECC_GameTraceChannel12,
    ECC_GameTraceChannel13,
    ECC_GameTraceChannel14,
    ECC_GameTraceChannel15,
    ECC_GameTraceChannel16,
    ECC_GameTraceChannel17,
    ECC_GameTraceChannel18,
    ECC_OverlapAll_Deprecated,
};

