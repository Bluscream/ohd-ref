#pragma once
#include "CoreMinimal.h"
#include "AnimMontagePlaybackParams.generated.h"

class UAnimMontage;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FAnimMontagePlaybackParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SourceMeshComp;
    
    DONKEHFRAMEWORK_API FAnimMontagePlaybackParams();
};

