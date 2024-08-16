#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PhysicalMaterial -FallbackName=PhysicalMaterial
#include "DFPhysicalMaterial.generated.h"

class UParticleSystem;
class USoundCue;

UCLASS(Blueprintable, CollapseCategories)
class DONKEHFRAMEWORK_API UDFPhysicalMaterial : public UPhysicalMaterial {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* CollisionFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* CollisionSound;
    
public:
    UDFPhysicalMaterial();

};

