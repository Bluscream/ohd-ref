#pragma once
#include "CoreMinimal.h"
#include "AnimClassInterface.h"
#include "AnimGraphBlendOptions.h"
#include "AnimNotifyEvent.h"
#include "BakedAnimationStateMachine.h"
#include "BlueprintGeneratedClass.h"
#include "CachedPoseIndices.h"
#include "ExposedValueHandler.h"
#include "GraphAssetPlayerInformation.h"
#include "AnimBlueprintGeneratedClass.generated.h"

class USkeleton;

UCLASS(Blueprintable)
class ENGINE_API UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass, public IAnimClassInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBakedAnimationStateMachine> BakedStateMachines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* TargetSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimNotifyEvent> AnimNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCachedPoseIndices> OrderedSavedPoseIndicesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SyncGroupNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExposedValueHandler> EvaluateGraphExposedInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGraphAssetPlayerInformation> GraphAssetPlayerInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FAnimGraphBlendOptions> GraphBlendOptions;
    
    UAnimBlueprintGeneratedClass();


    // Fix for true pure virtual functions not being implemented
};

