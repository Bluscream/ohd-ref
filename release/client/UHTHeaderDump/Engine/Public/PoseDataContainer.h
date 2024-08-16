#pragma once
#include "CoreMinimal.h"
#include "AnimCurveBase.h"
#include "PoseData.h"
#include "SmartName.h"
#include "PoseDataContainer.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FPoseDataContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmartName> PoseNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> TrackMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseData> Poses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimCurveBase> Curves;
    
public:
    FPoseDataContainer();
};

