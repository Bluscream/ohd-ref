#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "ArcVehicleSampleCharacter.generated.h"

UCLASS(Blueprintable)
class ARCVEHICLESEXTRA_API AArcVehicleSampleCharacter : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAttachedVehicleRelevancy;
    
    AArcVehicleSampleCharacter(const FObjectInitializer& ObjectInitializer);

};

