#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleEventBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UParticleModuleEventBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleEventBase();

};

