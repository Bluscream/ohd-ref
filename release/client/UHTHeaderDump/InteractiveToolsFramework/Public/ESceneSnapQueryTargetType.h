#pragma once
#include "CoreMinimal.h"
#include "ESceneSnapQueryTargetType.generated.h"

UENUM(BlueprintType)
enum class ESceneSnapQueryTargetType : uint8 {
    None,
    MeshVertex,
    MeshEdge,
    Grid = 4,
    All = 7,
};

