#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraVariableAttributeBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraVariableAttributeBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariable BoundVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariable DataSetVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariable DefaultValueIfNonExistent;
    
    NIAGARA_API FNiagaraVariableAttributeBinding();
};

