#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EFantasticPerspectiveStereoscopicPass.h"
#include "FantasticPerspectiveSettings.h"
#include "FantasticPerspectiveActor.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class FANTASTICPERSPECTIVEPLUGIN_API AFantasticPerspectiveActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFantasticPerspectiveSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Cache;
    
    AFantasticPerspectiveActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Apply(APlayerController* PlayerController, const EFantasticPerspectiveStereoscopicPass StereoPass, FVector ViewOrigin, FMatrix ViewRotationMatrix, FMatrix ProjectionMatrix, FVector& OutViewOrigin, FMatrix& OutViewRotationMatrix, FMatrix& OutProjectionMatrix);
    
};

