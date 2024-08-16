#pragma once
#include "CoreMinimal.h"
#include "NCPoolElement.h"
#include "NCPool.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FNCPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FNCPoolElement> FreeElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> InUseComponents_Auto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> InUseComponents_Manual;
    
    NIAGARA_API FNCPool();
};

