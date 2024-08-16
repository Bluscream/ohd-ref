#pragma once
#include "CoreMinimal.h"
#include "MatineeActor.h"
#include "MatineeActorCameraAnim.generated.h"

class UCameraAnim;

UCLASS(Blueprintable, MinimalAPI, NotPlaceable)
class AMatineeActorCameraAnim : public AMatineeActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCameraAnim* CameraAnim;
    
    AMatineeActorCameraAnim(const FObjectInitializer& ObjectInitializer);

};

