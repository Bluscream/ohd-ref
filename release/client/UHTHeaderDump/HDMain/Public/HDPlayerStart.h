#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerStart -FallbackName=PlayerStart
#include "HDPlayerStart.generated.h"

class UCapsuleComponent;

UCLASS(Blueprintable)
class HDMAIN_API AHDPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    AHDPlayerStart(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCapsuleComponent* K2_GetCapsuleComponent() const;
    
};

