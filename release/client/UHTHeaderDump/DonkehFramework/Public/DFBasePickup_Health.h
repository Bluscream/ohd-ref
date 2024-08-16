#pragma once
#include "CoreMinimal.h"
#include "DFBasePickup.h"
#include "DFBasePickup_Health.generated.h"

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORK_API ADFBasePickup_Health : public ADFBasePickup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
public:
    ADFBasePickup_Health(const FObjectInitializer& ObjectInitializer);

};

