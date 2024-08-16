#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFPlayerComponent -FallbackName=DFPlayerComponent
#include "EHDTeam.h"
#include "HDPlayerComponent.generated.h"

class AActor;
class UDFLoadout;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HDMAIN_API UHDPlayerComponent : public UDFPlayerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDFLoadout* StartLoadout;
    
public:
    UHDPlayerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void SwitchTeam();
    
    UFUNCTION(BlueprintCallable)
    void RestartPlayerAtStartSpot(AActor* DesiredStartSpot, UDFLoadout* DesiredStartLoadout);
    
    UFUNCTION(BlueprintCallable)
    void PickTeam(const EHDTeam DesiredTeam);
    
};

