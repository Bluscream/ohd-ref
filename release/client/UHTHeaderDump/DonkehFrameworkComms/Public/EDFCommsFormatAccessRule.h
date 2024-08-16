#pragma once
#include "CoreMinimal.h"
#include "EDFCommsFormatAccessRule.generated.h"

UENUM(BlueprintType)
enum class EDFCommsFormatAccessRule : uint8 {
    None,
    ReadWrite,
    ReadOnly,
    WriteOnly,
};

