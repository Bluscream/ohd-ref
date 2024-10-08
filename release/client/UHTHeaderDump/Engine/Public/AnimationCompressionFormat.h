#pragma once
#include "CoreMinimal.h"
#include "AnimationCompressionFormat.generated.h"

UENUM(BlueprintType)
enum AnimationCompressionFormat {
    ACF_None,
    ACF_Float96NoW,
    ACF_Fixed48NoW,
    ACF_IntervalFixed32NoW,
    ACF_Fixed32NoW,
    ACF_Float32NoW,
    ACF_Identity,
};

