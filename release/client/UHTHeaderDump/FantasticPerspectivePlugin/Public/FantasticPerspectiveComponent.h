#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EFantasticPerspectiveStereoscopicPass.h"
#include "FantasticPerspectiveSettings.h"
#include "FantasticPerspectiveComponent.generated.h"

class APlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FANTASTICPERSPECTIVEPLUGIN_API UFantasticPerspectiveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFantasticPerspectiveSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Cache;
    
    UFantasticPerspectiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Apply(APlayerController* PlayerController, const EFantasticPerspectiveStereoscopicPass StereoPass, FVector ViewOrigin, FMatrix ViewRotationMatrix, FMatrix ProjectionMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix, FMatrix& OutProjectionMatrix);
    
};

