#pragma once
#include "CoreMinimal.h"
#include "BoneModifier.generated.h"

USTRUCT(BlueprintType)
struct FBoneModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Bone;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
    DONKEHFRAMEWORKANIM_API FBoneModifier();
};

