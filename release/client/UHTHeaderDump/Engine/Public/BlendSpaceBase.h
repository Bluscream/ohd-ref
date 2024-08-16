#pragma once
#include "CoreMinimal.h"
#include "AnimationAsset.h"
#include "BlendParameter.h"
#include "BlendSample.h"
#include "ENotifyTriggerMode.h"
#include "EditorElement.h"
#include "InterpolationParameter.h"
#include "PerBoneInterpolation.h"
#include "BlendSpaceBase.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBlendSpaceBase : public UAnimationAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotationBlendInMeshSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimLength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpolationParameter InterpolationParam[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetWeightInterpolationSpeedPerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENotifyTriggerMode::Type> NotifyTriggerMode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerBoneInterpolation> PerBoneBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleIndexWithMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlendSample> SampleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEditorElement> GridSamples;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlendParameter BlendParameters[3];
    
public:
    UBlendSpaceBase();

};

