#pragma once
#include "CoreMinimal.h"
#include "UniqueNetIdVoipWrapper.generated.h"

USTRUCT(BlueprintType)
struct FUniqueNetIdVoipWrapper {
    GENERATED_BODY()
public:
    HDMAIN_API FUniqueNetIdVoipWrapper();
};
FORCEINLINE uint32 GetTypeHash(const FUniqueNetIdVoipWrapper) { return 0; }

