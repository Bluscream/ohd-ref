#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstDirector.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI)
class UInterpTrackInstDirector : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OldViewTarget;
    
    UInterpTrackInstDirector();

};

