#pragma once
#include "CoreMinimal.h"
#include "ENiagaraParameterScope.h"
#include "NiagaraParameterScopeInfo.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraParameterScopeInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraParameterScope Scope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NamespaceString;
    
public:
    FNiagaraParameterScopeInfo();
};

