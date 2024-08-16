#pragma once
#include "CoreMinimal.h"
#include "HDBaseProjectile.h"
#include "HDProj_Grenade.generated.h"

UCLASS(Abstract, Blueprintable)
class HDMAIN_API AHDProj_Grenade : public AHDBaseProjectile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuzeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PayloadPostTriggerLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PayloadServerActivationTime, meta=(AllowPrivateAccess=true))
    float PayloadServerActivationTime;
    
public:
    AHDProj_Grenade(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PayloadServerActivationTime();
    
};

