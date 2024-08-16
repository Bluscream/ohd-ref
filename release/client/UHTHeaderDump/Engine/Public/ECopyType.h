#pragma once
#include "CoreMinimal.h"
#include "ECopyType.generated.h"

UENUM(BlueprintType)
enum class ECopyType : uint8 {
    PlainProperty,
    BoolProperty,
    StructProperty,
    ObjectProperty,
    NameProperty,
};

