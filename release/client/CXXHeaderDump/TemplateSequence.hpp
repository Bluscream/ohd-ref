#ifndef UE4SS_SDK_TemplateSequence_HPP
#define UE4SS_SDK_TemplateSequence_HPP

struct FTemplateSequenceBindingOverrideData
{
    TWeakObjectPtr<class UObject> Object;                                             // 0x0000 (size: 0x8)
    bool bOverridesDefault;                                                           // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FTemplateSequenceInstanceData : public FMovieSceneSequenceInstanceData
{
    FMovieSceneEvaluationOperand Operand;                                             // 0x0008 (size: 0x14)

}; // Size: 0x20

struct FTemplateSequenceSectionTemplate : public FMovieSceneEvalTemplate
{
    FFrameNumber SectionStartTime;                                                    // 0x0020 (size: 0x4)
    FGuid OuterBindingId;                                                             // 0x0024 (size: 0x10)
    FMovieSceneEvaluationOperand InnerOperand;                                        // 0x0034 (size: 0x14)

}; // Size: 0x48

class ATemplateSequenceActor : public AActor
{
    FMovieSceneSequencePlaybackSettings PlaybackSettings;                             // 0x0228 (size: 0x14)
    char padding_0[0x4];                                                              // 0x023C (size: 0x4)
    class UTemplateSequencePlayer* SequencePlayer;                                    // 0x0240 (size: 0x8)
    FSoftObjectPath TemplateSequence;                                                 // 0x0248 (size: 0x18)
    FTemplateSequenceBindingOverrideData BindingOverride;                             // 0x0260 (size: 0xC)

    void SetSequence(class UTemplateSequence* InSequence);
    void SetBinding(class AActor* Actor);
    class UTemplateSequence* LoadSequence();
    class UTemplateSequencePlayer* GetSequencePlayer();
    class UTemplateSequence* GetSequence();
}; // Size: 0x270

class UCameraAnimationSequence : public UTemplateSequence
{
    char padding_0[0x3F0];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x3F0

class UTemplateSequence : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;                                                    // 0x0348 (size: 0x8)
    TSoftClassPtr<AActor> BoundActorClass;                                            // 0x0350 (size: 0x28)
    TSoftObjectPtr<AActor> BoundPreviewActor;                                         // 0x0378 (size: 0x28)
    TMap<class FGuid, class FName> BoundActorComponents;                              // 0x03A0 (size: 0x50)

}; // Size: 0x3F0

class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{
    char padding_0[0x890];                                                            // 0x0000 (size: 0x0)

    class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor);
}; // Size: 0x890

class UTemplateSequenceSection : public UMovieSceneSubSection
{
    char padding_0[0x158];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x158

class UTemplateSequenceTrack : public UMovieSceneSubTrack
{
    char padding_0[0x68];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x68

#endif
