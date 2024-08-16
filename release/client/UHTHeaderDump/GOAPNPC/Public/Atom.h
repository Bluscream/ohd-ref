#pragma once
#include "CoreMinimal.h"
#include "Atom.generated.h"

USTRUCT(BlueprintType)
struct GOAPNPC_API FAtom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValue;
    
    FAtom();
};

