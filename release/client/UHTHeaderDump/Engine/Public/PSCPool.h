#pragma once
#include "CoreMinimal.h"
#include "PSCPoolElem.h"
#include "PSCPool.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FPSCPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPSCPoolElem> FreeElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> InUseComponents_Auto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> InUseComponents_Manual;
    
    ENGINE_API FPSCPool();
};

