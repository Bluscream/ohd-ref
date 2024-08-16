#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "DFProjectileSubsystem.generated.h"

class ADFBaseProjectile;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DONKEHFRAMEWORK_API UDFProjectileSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADFBaseProjectile*> PredictedProjectiles;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFiredShots;
    
    UDFProjectileSubsystem();

};

