#ifndef UE4SS_SDK_MovieSceneTracks_HPP
#define UE4SS_SDK_MovieSceneTracks_HPP

#include "MovieSceneTracks_enums.hpp"

struct FBoolParameterNameAndCurve
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneBoolChannel ParameterCurve;                                            // 0x0008 (size: 0x90)

}; // Size: 0x98

struct FColorParameterNameAndCurves
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneFloatChannel RedCurve;                                                 // 0x0008 (size: 0xA0)
    FMovieSceneFloatChannel GreenCurve;                                               // 0x00A8 (size: 0xA0)
    FMovieSceneFloatChannel BlueCurve;                                                // 0x0148 (size: 0xA0)
    FMovieSceneFloatChannel AlphaCurve;                                               // 0x01E8 (size: 0xA0)

}; // Size: 0x288

struct FEventPayload
{
    FName EventName;                                                                  // 0x0000 (size: 0x8)
    FMovieSceneEventParameters Parameters;                                            // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneObjectBindingID AttachBindingID;                                       // 0x0020 (size: 0x18)
    FName AttachSocketName;                                                           // 0x0038 (size: 0x8)
    FName AttachComponentName;                                                        // 0x0040 (size: 0x8)
    EAttachmentRule AttachmentLocationRule;                                           // 0x0048 (size: 0x1)
    EAttachmentRule AttachmentRotationRule;                                           // 0x0049 (size: 0x1)
    EAttachmentRule AttachmentScaleRule;                                              // 0x004A (size: 0x1)
    EDetachmentRule DetachmentLocationRule;                                           // 0x004B (size: 0x1)
    EDetachmentRule DetachmentRotationRule;                                           // 0x004C (size: 0x1)
    EDetachmentRule DetachmentScaleRule;                                              // 0x004D (size: 0x1)

}; // Size: 0x50

struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
    FVector Location;                                                                 // 0x0008 (size: 0xC)
    FFrameNumber Time;                                                                // 0x0014 (size: 0x4)

}; // Size: 0x30

struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneObjectBindingID PathBindingID;                                         // 0x0020 (size: 0x18)
    FMovieSceneFloatChannel TimingCurve;                                              // 0x0038 (size: 0xA0)
    MovieScene3DPathSection_Axis FrontAxisEnum;                                       // 0x00D8 (size: 0x1)
    MovieScene3DPathSection_Axis UpAxisEnum;                                          // 0x00D9 (size: 0x1)
    char padding_0[0x2];                                                              // 0x00DA (size: 0x2)
    uint8 bFollow;                                                                    // 0x00DC (size: 0x1)
    uint8 bReverse;                                                                   // 0x00DC (size: 0x1)
    uint8 bForceUpright;                                                              // 0x00DC (size: 0x1)

}; // Size: 0xE0

struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
    FRotator Rotation;                                                                // 0x0008 (size: 0xC)
    FFrameNumber Time;                                                                // 0x0014 (size: 0x4)

}; // Size: 0x30

struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
    FVector Scale;                                                                    // 0x0008 (size: 0xC)
    FFrameNumber Time;                                                                // 0x0014 (size: 0x4)

}; // Size: 0x30

struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
    FVector Location;                                                                 // 0x0008 (size: 0xC)
    FRotator Rotation;                                                                // 0x0014 (size: 0xC)
    FVector Scale;                                                                    // 0x0020 (size: 0xC)
    FFrameNumber Time;                                                                // 0x002C (size: 0x4)

}; // Size: 0x48

struct FMovieScene3DTransformTemplateData
{
    FMovieSceneFloatChannel TranslationCurve;                                         // 0x0000 (size: 0x1E0)
    FMovieSceneFloatChannel RotationCurve;                                            // 0x01E0 (size: 0x1E0)
    FMovieSceneFloatChannel ScaleCurve;                                               // 0x03C0 (size: 0x1E0)
    FMovieSceneFloatChannel ManualWeight;                                             // 0x05A0 (size: 0xA0)
    EMovieSceneBlendType BlendType;                                                   // 0x0640 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0641 (size: 0x3)
    FMovieSceneTransformMask Mask;                                                    // 0x0644 (size: 0x4)
    bool bUseQuaternionInterpolation;                                                 // 0x0648 (size: 0x1)

}; // Size: 0x650

struct FMovieSceneActorReferenceData : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;                                                    // 0x0008 (size: 0x10)
    char padding_0[0x28];                                                             // 0x0018 (size: 0x28)
    TArray<FMovieSceneActorReferenceKey> KeyValues;                                   // 0x0040 (size: 0x10)

}; // Size: 0xB0

struct FMovieSceneActorReferenceKey
{
    FMovieSceneObjectBindingID Object;                                                // 0x0000 (size: 0x18)
    FName ComponentName;                                                              // 0x0018 (size: 0x8)
    FName SocketName;                                                                 // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieScenePropertySectionData PropertyData;                                      // 0x0020 (size: 0x28)
    FMovieSceneActorReferenceData ActorReferenceData;                                 // 0x0048 (size: 0xB0)

}; // Size: 0xF8

struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate
{
    char padding_0[0x20];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x20

struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
    class UMovieSceneAudioSection* AudioSection;                                      // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneBoolChannel BoolCurve;                                                 // 0x0048 (size: 0x90)

}; // Size: 0xD8

struct FMovieSceneBytePropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneByteChannel ByteCurve;                                                 // 0x0048 (size: 0x98)

}; // Size: 0xE0

struct FMovieSceneCameraAnimSectionData
{
    class UCameraAnim* CameraAnim;                                                    // 0x0000 (size: 0x8)
    float PlayRate;                                                                   // 0x0008 (size: 0x4)
    float PlayScale;                                                                  // 0x000C (size: 0x4)
    float BlendInTime;                                                                // 0x0010 (size: 0x4)
    float BlendOutTime;                                                               // 0x0014 (size: 0x4)
    bool bLooping;                                                                    // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
    FMovieSceneCameraAnimSectionData SourceData;                                      // 0x0020 (size: 0x20)
    FFrameNumber SectionStartTime;                                                    // 0x0040 (size: 0x4)

}; // Size: 0x48

struct FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneObjectBindingID CameraBindingID;                                       // 0x0020 (size: 0x18)
    char padding_0[0x8];                                                              // 0x0038 (size: 0x8)
    FTransform CutTransform;                                                          // 0x0040 (size: 0x30)
    bool bHasCutTransform;                                                            // 0x0070 (size: 0x1)
    bool bIsFinalSection;                                                             // 0x0071 (size: 0x1)

}; // Size: 0x80

struct FMovieSceneCameraShakeSectionData
{
    TSubclassOf<class UCameraShake> ShakeClass;                                       // 0x0000 (size: 0x8)
    float PlayScale;                                                                  // 0x0008 (size: 0x4)
    TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace;                                // 0x000C (size: 0x1)
    char padding_0[0x3];                                                              // 0x000D (size: 0x3)
    FRotator UserDefinedPlaySpace;                                                    // 0x0010 (size: 0xC)

}; // Size: 0x20

struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
    FMovieSceneCameraShakeSectionData SourceData;                                     // 0x0020 (size: 0x20)
    FFrameNumber SectionStartTime;                                                    // 0x0040 (size: 0x4)

}; // Size: 0x48

struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
    FLinearColor Color;                                                               // 0x0008 (size: 0x10)
    FFrameNumber Time;                                                                // 0x0018 (size: 0x4)

}; // Size: 0x38

struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneFloatChannel Curves;                                                   // 0x0048 (size: 0x280)
    EMovieSceneBlendType BlendType;                                                   // 0x02C8 (size: 0x1)

}; // Size: 0x2D0

struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
    int32 MaterialIndex;                                                              // 0x0080 (size: 0x4)

}; // Size: 0x88

struct FMovieSceneComponentTransformSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieScene3DTransformTemplateData TemplateData;                                  // 0x0020 (size: 0x650)

}; // Size: 0x670

struct FMovieSceneEnumPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneByteChannel EnumCurve;                                                 // 0x0048 (size: 0x98)

}; // Size: 0xE0

struct FMovieSceneEulerTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieScene3DTransformTemplateData TemplateData;                                  // 0x0048 (size: 0x650)

}; // Size: 0x698

struct FMovieSceneEvent
{
    FMovieSceneEventPtrs Ptrs;                                                        // 0x0000 (size: 0x28)

}; // Size: 0x28

struct FMovieSceneEventChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;                                                    // 0x0008 (size: 0x10)
    TArray<FMovieSceneEvent> KeyValues;                                               // 0x0018 (size: 0x10)

}; // Size: 0x88

struct FMovieSceneEventParameters
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

struct FMovieSceneEventPayloadVariable
{
    FString Value;                                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMovieSceneEventPtrs
{
    class UFunction* Function;                                                        // 0x0000 (size: 0x8)
    TFieldPath<FProperty> BoundObjectProperty;                                        // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FMovieSceneEventRepeaterTemplate : public FMovieSceneEventTemplateBase
{
    FMovieSceneEventPtrs EventToTrigger;                                              // 0x0038 (size: 0x28)

}; // Size: 0x60

struct FMovieSceneEventSectionData : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;                                                       // 0x0008 (size: 0x10)
    TArray<FEventPayload> KeyValues;                                                  // 0x0018 (size: 0x10)

}; // Size: 0x88

struct FMovieSceneEventSectionTemplate : public FMovieSceneEventTemplateBase
{
    FMovieSceneEventSectionData EventData;                                            // 0x0038 (size: 0x88)

}; // Size: 0xC0

struct FMovieSceneEventTemplateBase : public FMovieSceneEvalTemplate
{
    TArray<FMovieSceneObjectBindingID> EventReceivers;                                // 0x0020 (size: 0x10)
    uint8 bFireEventsWhenForwards;                                                    // 0x0030 (size: 0x1)
    uint8 bFireEventsWhenBackwards;                                                   // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FMovieSceneEventTriggerTemplate : public FMovieSceneEventTemplateBase
{
    TArray<FFrameNumber> EventTimes;                                                  // 0x0038 (size: 0x10)
    TArray<FMovieSceneEventPtrs> Events;                                              // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneFloatChannel FadeCurve;                                                // 0x0020 (size: 0xA0)
    FLinearColor FadeColor;                                                           // 0x00C0 (size: 0x10)
    uint8 bFadeAudio;                                                                 // 0x00D0 (size: 0x1)

}; // Size: 0xD8

struct FMovieSceneFloatPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneFloatChannel FloatFunction;                                            // 0x0048 (size: 0xA0)
    EMovieSceneBlendType BlendType;                                                   // 0x00E8 (size: 0x1)

}; // Size: 0xF0

struct FMovieSceneIntegerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneIntegerChannel IntegerCurve;                                           // 0x0048 (size: 0x90)
    EMovieSceneBlendType BlendType;                                                   // 0x00D8 (size: 0x1)

}; // Size: 0xE0

struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate
{
    ELevelVisibility Visibility;                                                      // 0x0020 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0021 (size: 0x7)
    TArray<FName> LevelNames;                                                         // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate
{
    class UMaterialParameterCollection* MPC;                                          // 0x0080 (size: 0x8)

}; // Size: 0x88

struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneObjectPathChannel ObjectChannel;                                       // 0x0048 (size: 0xC0)

}; // Size: 0x108

struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
    TArray<FScalarParameterNameAndCurve> Scalars;                                     // 0x0020 (size: 0x10)
    TArray<FBoolParameterNameAndCurve> Bools;                                         // 0x0030 (size: 0x10)
    TArray<FVector2DParameterNameAndCurves> Vector2Ds;                                // 0x0040 (size: 0x10)
    TArray<FVectorParameterNameAndCurves> Vectors;                                    // 0x0050 (size: 0x10)
    TArray<FColorParameterNameAndCurves> Colors;                                      // 0x0060 (size: 0x10)
    TArray<FTransformParameterNameAndCurves> Transforms;                              // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FMovieSceneParticleChannel : public FMovieSceneByteChannel
{
    char padding_0[0x98];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x98

struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{
    char padding_0[0x80];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x80

struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneParticleChannel ParticleKeys;                                          // 0x0020 (size: 0x98)

}; // Size: 0xB8

struct FMovieScenePrimitiveMaterialTemplate : public FMovieSceneEvalTemplate
{
    int32 MaterialIndex;                                                              // 0x0020 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0024 (size: 0x4)
    FMovieSceneObjectPathChannel MaterialChannel;                                     // 0x0028 (size: 0xC0)

}; // Size: 0xE8

struct FMovieSceneSkeletalAnimationParams
{
    class UAnimSequenceBase* Animation;                                               // 0x0000 (size: 0x8)
    FFrameNumber FirstLoopStartFrameOffset;                                           // 0x0008 (size: 0x4)
    FFrameNumber StartFrameOffset;                                                    // 0x000C (size: 0x4)
    FFrameNumber EndFrameOffset;                                                      // 0x0010 (size: 0x4)
    float PlayRate;                                                                   // 0x0014 (size: 0x4)
    uint8 bReverse;                                                                   // 0x0018 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0019 (size: 0x3)
    FName SlotName;                                                                   // 0x001C (size: 0x8)
    char padding_1[0x4];                                                              // 0x0024 (size: 0x4)
    FMovieSceneFloatChannel Weight;                                                   // 0x0028 (size: 0xA0)
    bool bSkipAnimNotifiers;                                                          // 0x00C8 (size: 0x1)
    bool bForceCustomMode;                                                            // 0x00C9 (size: 0x1)
    char padding_2[0x2];                                                              // 0x00CA (size: 0x2)
    float StartOffset;                                                                // 0x00CC (size: 0x4)
    float EndOffset;                                                                  // 0x00D0 (size: 0x4)

}; // Size: 0xD8

struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneSkeletalAnimationSectionTemplateParameters Params;                     // 0x0020 (size: 0xE0)

}; // Size: 0x100

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
    FFrameNumber SectionStartTime;                                                    // 0x00D8 (size: 0x4)
    FFrameNumber SectionEndTime;                                                      // 0x00DC (size: 0x4)

}; // Size: 0xE0

struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneFloatChannel SlomoCurve;                                               // 0x0020 (size: 0xA0)

}; // Size: 0xC0

struct FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneBoolChannel Curve;                                                     // 0x0020 (size: 0x90)

}; // Size: 0xB0

struct FMovieSceneStringChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;                                                       // 0x0008 (size: 0x10)
    TArray<FString> Values;                                                           // 0x0018 (size: 0x10)
    FString DefaultValue;                                                             // 0x0028 (size: 0x10)
    bool bHasDefaultValue;                                                            // 0x0038 (size: 0x1)

}; // Size: 0xA0

struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneStringChannel StringCurve;                                             // 0x0048 (size: 0xA0)

}; // Size: 0xE8

struct FMovieSceneTransformMask
{
    uint32 Mask;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieScene3DTransformTemplateData TemplateData;                                  // 0x0048 (size: 0x650)

}; // Size: 0x698

struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{
    FVector2D Vector;                                                                 // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{
    FVector4 Vector;                                                                  // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{
    FVector Vector;                                                                   // 0x0028 (size: 0xC)

}; // Size: 0x38

struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
    FFrameNumber Time;                                                                // 0x0008 (size: 0x4)

}; // Size: 0x28

struct FMovieSceneVectorPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneFloatChannel ComponentCurves;                                          // 0x0048 (size: 0x280)
    int32 NumChannelsUsed;                                                            // 0x02C8 (size: 0x4)
    EMovieSceneBlendType BlendType;                                                   // 0x02CC (size: 0x1)

}; // Size: 0x2D0

struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{
    char padding_0[0xD8];                                                             // 0x0000 (size: 0x0)
}; // Size: 0xD8

struct FScalarParameterNameAndCurve
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneFloatChannel ParameterCurve;                                           // 0x0008 (size: 0xA0)

}; // Size: 0xA8

struct FTransformParameterNameAndCurves
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneFloatChannel Translation;                                              // 0x0008 (size: 0x1E0)
    FMovieSceneFloatChannel Rotation;                                                 // 0x01E8 (size: 0x1E0)
    FMovieSceneFloatChannel Scale;                                                    // 0x03C8 (size: 0x1E0)

}; // Size: 0x5A8

struct FVector2DParameterNameAndCurves
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneFloatChannel XCurve;                                                   // 0x0008 (size: 0xA0)
    FMovieSceneFloatChannel YCurve;                                                   // 0x00A8 (size: 0xA0)

}; // Size: 0x148

struct FVectorParameterNameAndCurves
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneFloatChannel XCurve;                                                   // 0x0008 (size: 0xA0)
    FMovieSceneFloatChannel YCurve;                                                   // 0x00A8 (size: 0xA0)
    FMovieSceneFloatChannel ZCurve;                                                   // 0x0148 (size: 0xA0)

}; // Size: 0x1E8

class IMovieSceneTransformOrigin : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    FTransform BP_GetTransformOrigin();
}; // Size: 0x28

class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
    FName AttachSocketName;                                                           // 0x0108 (size: 0x8)
    FName AttachComponentName;                                                        // 0x0110 (size: 0x8)
    EAttachmentRule AttachmentLocationRule;                                           // 0x0118 (size: 0x1)
    EAttachmentRule AttachmentRotationRule;                                           // 0x0119 (size: 0x1)
    EAttachmentRule AttachmentScaleRule;                                              // 0x011A (size: 0x1)
    EDetachmentRule DetachmentLocationRule;                                           // 0x011B (size: 0x1)
    EDetachmentRule DetachmentRotationRule;                                           // 0x011C (size: 0x1)
    EDetachmentRule DetachmentScaleRule;                                              // 0x011D (size: 0x1)

}; // Size: 0x120

class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
    char padding_0[0x68];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x68

class UMovieScene3DConstraintSection : public UMovieSceneSection
{
    FGuid ConstraintId;                                                               // 0x00E0 (size: 0x10)
    FMovieSceneObjectBindingID ConstraintBindingID;                                   // 0x00F0 (size: 0x18)

    void SetConstraintBindingID(const FMovieSceneObjectBindingID& InConstraintBindingID);
    FMovieSceneObjectBindingID GetConstraintBindingID();
}; // Size: 0x108

class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> ConstraintSections;                             // 0x0058 (size: 0x10)

}; // Size: 0x68

class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
    FMovieSceneFloatChannel TimingCurve;                                              // 0x0108 (size: 0xA0)
    MovieScene3DPathSection_Axis FrontAxisEnum;                                       // 0x01A8 (size: 0x1)
    MovieScene3DPathSection_Axis UpAxisEnum;                                          // 0x01A9 (size: 0x1)
    char padding_0[0x2];                                                              // 0x01AA (size: 0x2)
    uint8 bFollow;                                                                    // 0x01AC (size: 0x1)
    uint8 bReverse;                                                                   // 0x01AC (size: 0x1)
    uint8 bForceUpright;                                                              // 0x01AC (size: 0x1)

}; // Size: 0x1B0

class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
    char padding_0[0x68];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x68

class UMovieScene3DTransformSection : public UMovieSceneSection
{
    FMovieSceneTransformMask TransformMask;                                           // 0x00E0 (size: 0x4)
    char padding_0[0x4];                                                              // 0x00E4 (size: 0x4)
    FMovieSceneFloatChannel Translation;                                              // 0x00E8 (size: 0x1E0)
    FMovieSceneFloatChannel Rotation;                                                 // 0x02C8 (size: 0x1E0)
    FMovieSceneFloatChannel Scale;                                                    // 0x04A8 (size: 0x1E0)
    FMovieSceneFloatChannel ManualWeight;                                             // 0x0688 (size: 0xA0)
    char padding_1[0x4];                                                              // 0x0728 (size: 0x4)
    bool bUseQuaternionInterpolation;                                                 // 0x072C (size: 0x1)

}; // Size: 0x730

class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
    char padding_0[0x88];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x88

class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
    FMovieSceneActorReferenceData ActorReferenceData;                                 // 0x00E0 (size: 0xB0)
    FIntegralCurve ActorGuidIndexCurve;                                               // 0x0190 (size: 0x80)
    TArray<FString> ActorGuidStrings;                                                 // 0x0210 (size: 0x10)

}; // Size: 0x220

class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
    char padding_0[0x88];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x88

class UMovieSceneAudioSection : public UMovieSceneSection
{
    class USoundBase* Sound;                                                          // 0x00E0 (size: 0x8)
    FFrameNumber StartFrameOffset;                                                    // 0x00E8 (size: 0x4)
    float StartOffset;                                                                // 0x00EC (size: 0x4)
    float AudioStartTime;                                                             // 0x00F0 (size: 0x4)
    float AudioDilationFactor;                                                        // 0x00F4 (size: 0x4)
    float AudioVolume;                                                                // 0x00F8 (size: 0x4)
    char padding_0[0x4];                                                              // 0x00FC (size: 0x4)
    FMovieSceneFloatChannel SoundVolume;                                              // 0x0100 (size: 0xA0)
    FMovieSceneFloatChannel PitchMultiplier;                                          // 0x01A0 (size: 0xA0)
    FMovieSceneActorReferenceData AttachActorData;                                    // 0x0240 (size: 0xB0)
    bool bSuppressSubtitles;                                                          // 0x02F0 (size: 0x1)
    bool bOverrideAttenuation;                                                        // 0x02F1 (size: 0x1)
    char padding_1[0x6];                                                              // 0x02F2 (size: 0x6)
    class USoundAttenuation* AttenuationSettings;                                     // 0x02F8 (size: 0x8)
    FMovieSceneAudioSectionOnQueueSubtitles OnQueueSubtitles;                         // 0x0300 (size: 0x10)
    void OnQueueSubtitles(const TArray<FSubtitleCue>& Subtitles, float CueDuration);
    FMovieSceneAudioSectionOnAudioFinished OnAudioFinished;                           // 0x0310 (size: 0x10)
    void OnAudioFinished();
    FMovieSceneAudioSectionOnAudioPlaybackPercent OnAudioPlaybackPercent;             // 0x0320 (size: 0x10)
    void OnAudioPlaybackPercent(const class USoundWave* PlayingSoundWave, const float PlaybackPercent);

    void SetStartOffset(FFrameNumber InStartOffset);
    void SetSound(class USoundBase* InSound);
    FFrameNumber GetStartOffset();
    class USoundBase* GetSound();
}; // Size: 0x330

class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AudioSections;                                  // 0x0058 (size: 0x10)

}; // Size: 0x68

class UMovieSceneBoolSection : public UMovieSceneSection
{
    bool DefaultValue;                                                                // 0x00E0 (size: 0x1)
    char padding_0[0x7];                                                              // 0x00E1 (size: 0x7)
    FMovieSceneBoolChannel BoolCurve;                                                 // 0x00E8 (size: 0x90)

}; // Size: 0x178

class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
    char padding_0[0x88];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x88

class UMovieSceneByteSection : public UMovieSceneSection
{
    FMovieSceneByteChannel ByteCurve;                                                 // 0x00E0 (size: 0x98)

}; // Size: 0x178

class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
    class UEnum* Enum;                                                                // 0x0088 (size: 0x8)

}; // Size: 0x90

class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
    FMovieSceneCameraAnimSectionData AnimData;                                        // 0x00E0 (size: 0x20)
    class UCameraAnim* CameraAnim;                                                    // 0x0100 (size: 0x8)
    float PlayRate;                                                                   // 0x0108 (size: 0x4)
    float PlayScale;                                                                  // 0x010C (size: 0x4)
    float BlendInTime;                                                                // 0x0110 (size: 0x4)
    float BlendOutTime;                                                               // 0x0114 (size: 0x4)
    bool bLooping;                                                                    // 0x0118 (size: 0x1)

}; // Size: 0x120

class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> CameraAnimSections;                             // 0x0058 (size: 0x10)

}; // Size: 0x68

class UMovieSceneCameraCutSection : public UMovieSceneSection
{
    FGuid CameraGuid;                                                                 // 0x00E0 (size: 0x10)
    FMovieSceneObjectBindingID CameraBindingID;                                       // 0x00F0 (size: 0x18)

    void SetCameraBindingID(const FMovieSceneObjectBindingID& InCameraBindingID);
    FMovieSceneObjectBindingID GetCameraBindingID();
}; // Size: 0x108

class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
    bool bCanBlend;                                                                   // 0x0058 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0059 (size: 0x7)
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0060 (size: 0x10)

}; // Size: 0x70

class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
    FMovieSceneCameraShakeSectionData ShakeData;                                      // 0x00E0 (size: 0x20)
    TSubclassOf<class UCameraShake> ShakeClass;                                       // 0x0100 (size: 0x8)
    float PlayScale;                                                                  // 0x0108 (size: 0x4)
    TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace;                                // 0x010C (size: 0x1)
    char padding_0[0x3];                                                              // 0x010D (size: 0x3)
    FRotator UserDefinedPlaySpace;                                                    // 0x0110 (size: 0xC)

}; // Size: 0x120

class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> CameraShakeSections;                            // 0x0058 (size: 0x10)

}; // Size: 0x68

class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
    FString ShotDisplayName;                                                          // 0x0158 (size: 0x10)
    FText DisplayName;                                                                // 0x0168 (size: 0x18)

    void SetShotDisplayName(FString InShotDisplayName);
    FString GetShotDisplayName();
}; // Size: 0x180

class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
    char padding_0[0x68];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x68

class UMovieSceneColorSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel RedCurve;                                                 // 0x00E0 (size: 0xA0)
    FMovieSceneFloatChannel GreenCurve;                                               // 0x0180 (size: 0xA0)
    FMovieSceneFloatChannel BlueCurve;                                                // 0x0220 (size: 0xA0)
    FMovieSceneFloatChannel AlphaCurve;                                               // 0x02C0 (size: 0xA0)

}; // Size: 0x360

class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
    bool bIsSlateColor;                                                               // 0x0088 (size: 0x1)

}; // Size: 0x90

class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
    int32 MaterialIndex;                                                              // 0x0068 (size: 0x4)

}; // Size: 0x70

class UMovieSceneEnumSection : public UMovieSceneSection
{
    FMovieSceneByteChannel EnumCurve;                                                 // 0x00E0 (size: 0x98)

}; // Size: 0x178

class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
    class UEnum* Enum;                                                                // 0x0088 (size: 0x8)

}; // Size: 0x90

class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{
    char padding_0[0x88];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x88

class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{
    FMovieSceneEvent Event;                                                           // 0x00E0 (size: 0x28)

}; // Size: 0x108

class UMovieSceneEventSection : public UMovieSceneSection
{
    FNameCurve Events;                                                                // 0x00E0 (size: 0x78)
    FMovieSceneEventSectionData EventData;                                            // 0x0158 (size: 0x88)

}; // Size: 0x1E0

class UMovieSceneEventSectionBase : public UMovieSceneSection
{
    char padding_0[0xE0];                                                             // 0x0000 (size: 0x0)
}; // Size: 0xE0

class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
    uint8 bFireEventsWhenForwards;                                                    // 0x0058 (size: 0x1)
    uint8 bFireEventsWhenBackwards;                                                   // 0x0058 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0059 (size: 0x3)
    EFireEventsAtPosition EventPosition;                                              // 0x005C (size: 0x1)
    char padding_1[0x3];                                                              // 0x005D (size: 0x3)
    TArray<FMovieSceneObjectBindingID> EventReceivers;                                // 0x0060 (size: 0x10)
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0070 (size: 0x10)

}; // Size: 0x80

class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{
    FMovieSceneEventChannel EventChannel;                                             // 0x00E0 (size: 0x88)

}; // Size: 0x168

class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
    FLinearColor FadeColor;                                                           // 0x0180 (size: 0x10)
    uint8 bFadeAudio;                                                                 // 0x0190 (size: 0x1)

}; // Size: 0x198

class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
    char padding_0[0x88];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x88

class UMovieSceneFloatSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel FloatCurve;                                               // 0x00E0 (size: 0xA0)

}; // Size: 0x180

class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
    char padding_0[0x88];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x88

class UMovieSceneIntegerSection : public UMovieSceneSection
{
    FMovieSceneIntegerChannel IntegerCurve;                                           // 0x00E0 (size: 0x90)

}; // Size: 0x170

class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
    char padding_0[0x88];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x88

class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
    ELevelVisibility Visibility;                                                      // 0x00E0 (size: 0x1)
    char padding_0[0x7];                                                              // 0x00E1 (size: 0x7)
    TArray<FName> LevelNames;                                                         // 0x00E8 (size: 0x10)

    void SetVisibility(ELevelVisibility InVisibility);
    void SetLevelNames(const TArray<FName>& InLevelNames);
    ELevelVisibility GetVisibility();
    TArray<FName> GetLevelNames();
}; // Size: 0xF8

class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0058 (size: 0x10)

}; // Size: 0x68

class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
    class UMaterialParameterCollection* MPC;                                          // 0x0068 (size: 0x8)

}; // Size: 0x70

class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0058 (size: 0x10)

}; // Size: 0x68

class UMovieSceneObjectPropertySection : public UMovieSceneSection
{
    FMovieSceneObjectPathChannel ObjectChannel;                                       // 0x00E0 (size: 0xC0)

}; // Size: 0x1A0

class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{
    UClass* PropertyClass;                                                            // 0x0088 (size: 0x8)

}; // Size: 0x90

class UMovieSceneParameterSection : public UMovieSceneSection
{
    TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves;                   // 0x00E0 (size: 0x10)
    TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;               // 0x00F0 (size: 0x10)
    TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves;          // 0x0100 (size: 0x10)
    TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;              // 0x0110 (size: 0x10)
    TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves;                // 0x0120 (size: 0x10)
    TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves;        // 0x0130 (size: 0x10)

}; // Size: 0x140

class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0058 (size: 0x10)

}; // Size: 0x68

class UMovieSceneParticleSection : public UMovieSceneSection
{
    FMovieSceneParticleChannel ParticleKeys;                                          // 0x00E0 (size: 0x98)

}; // Size: 0x178

class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> ParticleSections;                               // 0x0058 (size: 0x10)

}; // Size: 0x68

class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{
    FMovieSceneObjectPathChannel MaterialChannel;                                     // 0x00E0 (size: 0xC0)

}; // Size: 0x1A0

class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{
    int32 MaterialIndex;                                                              // 0x0088 (size: 0x4)

}; // Size: 0x90

class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
    class UMovieSceneSection* SectionToKey;                                           // 0x0058 (size: 0x8)
    FName PropertyName;                                                               // 0x0060 (size: 0x8)
    FString PropertyPath;                                                             // 0x0068 (size: 0x10)
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0078 (size: 0x10)

}; // Size: 0x88

class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
    FMovieSceneSkeletalAnimationParams Params;                                        // 0x00E0 (size: 0xD8)
    class UAnimSequence* AnimSequence;                                                // 0x01B8 (size: 0x8)
    class UAnimSequenceBase* Animation;                                               // 0x01C0 (size: 0x8)
    float StartOffset;                                                                // 0x01C8 (size: 0x4)
    float EndOffset;                                                                  // 0x01CC (size: 0x4)
    float PlayRate;                                                                   // 0x01D0 (size: 0x4)
    uint8 bReverse;                                                                   // 0x01D4 (size: 0x1)
    char padding_0[0x3];                                                              // 0x01D5 (size: 0x3)
    FName SlotName;                                                                   // 0x01D8 (size: 0x8)

}; // Size: 0x1E0

class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AnimationSections;                              // 0x0058 (size: 0x10)
    bool bUseLegacySectionIndexBlend;                                                 // 0x0068 (size: 0x1)

}; // Size: 0x70

class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
    char padding_0[0x180];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x180

class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
    char padding_0[0x88];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x88

class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
    char padding_0[0x178];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x178

class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0058 (size: 0x10)
    FGuid ObjectGuid;                                                                 // 0x0068 (size: 0x10)

}; // Size: 0x78

class UMovieSceneStringSection : public UMovieSceneSection
{
    FMovieSceneStringChannel StringCurve;                                             // 0x00E0 (size: 0xA0)

}; // Size: 0x180

class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
    char padding_0[0x88];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x88

class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
    char padding_0[0x88];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x88

class UMovieSceneVectorSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel Curves;                                                   // 0x00E0 (size: 0x280)
    int32 ChannelsUsed;                                                               // 0x0360 (size: 0x4)

}; // Size: 0x368

class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
    int32 NumChannelsUsed;                                                            // 0x0088 (size: 0x4)

}; // Size: 0x90

class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
    char padding_0[0x88];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x88

#endif
