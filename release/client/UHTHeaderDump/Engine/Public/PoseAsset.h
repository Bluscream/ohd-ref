#pragma once
#include "CoreMinimal.h"
#include "AnimationAsset.h"
#include "PoseDataContainer.h"
#include "PoseAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPoseAsset : public UAnimationAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseDataContainer PoseContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdditivePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BasePoseIndex;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RetargetSource;
    
    UPoseAsset();

};

