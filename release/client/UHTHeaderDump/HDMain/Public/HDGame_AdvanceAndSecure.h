#pragma once
#include "CoreMinimal.h"
#include "HDBaseGameMode.h"
#include "HDGame_AdvanceAndSecure.generated.h"

UCLASS(Blueprintable, NonTransient)
class HDMAIN_API AHDGame_AdvanceAndSecure : public AHDBaseGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StartingBlueTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StartingRedTier;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveRoute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentBlueCaptureTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentRedCaptureTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bBlueIncreasesTier: 1;
    
public:
    AHDGame_AdvanceAndSecure(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRedCaptureTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentBlueCaptureTier() const;
    
};

