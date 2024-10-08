#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshOptimizationImportance.generated.h"

UENUM(BlueprintType)
enum SkeletalMeshOptimizationImportance {
    SMOI_Off,
    SMOI_Lowest,
    SMOI_Low,
    SMOI_Normal,
    SMOI_High,
    SMOI_Highest,
};

