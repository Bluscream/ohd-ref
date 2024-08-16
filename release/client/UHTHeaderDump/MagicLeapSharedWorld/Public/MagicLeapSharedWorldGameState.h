#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameState -FallbackName=GameState
#include "MagicLeapSharedWorldAlignmentTransforms.h"
#include "MagicLeapSharedWorldSharedData.h"
#include "MagicLeapSharedWorldGameState.generated.h"

UCLASS(Blueprintable)
class MAGICLEAPSHAREDWORLD_API AMagicLeapSharedWorldGameState : public AGameState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMagicLeapSharedWorldEvent);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnReplicate_SharedWorldData, meta=(AllowPrivateAccess=true))
    FMagicLeapSharedWorldSharedData SharedWorldData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnReplicate_AlignmentTransforms, meta=(AllowPrivateAccess=true))
    FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagicLeapSharedWorldEvent OnSharedWorldDataUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagicLeapSharedWorldEvent OnAlignmentTransformsUpdated;
    
    AMagicLeapSharedWorldGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnReplicate_SharedWorldData();
    
    UFUNCTION(BlueprintCallable)
    void OnReplicate_AlignmentTransforms();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform CalculateXRCameraRootTransform() const;
    
};

