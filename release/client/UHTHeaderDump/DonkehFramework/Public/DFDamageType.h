#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageType -FallbackName=DamageType
#include "Templates/SubclassOf.h"
#include "DFDamageType.generated.h"

class ADFBaseImpactEffect;

UCLASS(Blueprintable)
class DONKEHFRAMEWORK_API UDFDamageType : public UDamageType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADFBaseImpactEffect> ImpactFXClass;
    
    UDFDamageType();

};

