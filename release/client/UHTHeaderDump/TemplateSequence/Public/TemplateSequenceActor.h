#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePlaybackClient -FallbackName=MovieScenePlaybackClient
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlaybackSettings -FallbackName=MovieSceneSequencePlaybackSettings
#include "TemplateSequenceBindingOverrideData.h"
#include "TemplateSequenceActor.generated.h"

class UTemplateSequence;
class UTemplateSequencePlayer;

UCLASS(Blueprintable)
class TEMPLATESEQUENCE_API ATemplateSequenceActor : public AActor, public IMovieScenePlaybackClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UTemplateSequencePlayer* SequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TemplateSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTemplateSequenceBindingOverrideData BindingOverride;
    
    ATemplateSequenceActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetSequence(UTemplateSequence* InSequence);
    
    UFUNCTION(BlueprintCallable)
    void SetBinding(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTemplateSequence* LoadSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTemplateSequencePlayer* GetSequencePlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTemplateSequence* GetSequence() const;
    

    // Fix for true pure virtual functions not being implemented
};

