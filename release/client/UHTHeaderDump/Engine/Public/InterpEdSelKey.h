#pragma once
#include "CoreMinimal.h"
#include "InterpEdSelKey.generated.h"

class UInterpGroup;
class UInterpTrack;

USTRUCT(BlueprintType)
struct FInterpEdSelKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterpGroup* Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterpTrack* Track;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnsnappedPosition;
    
    ENGINE_API FInterpEdSelKey();
};

