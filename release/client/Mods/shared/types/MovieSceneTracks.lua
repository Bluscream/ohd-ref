---@meta

---@class FBoolParameterNameAndCurve
---@field ParameterName FName
---@field ParameterCurve FMovieSceneBoolChannel
FBoolParameterNameAndCurve = {}



---@class FColorParameterNameAndCurves
---@field ParameterName FName
---@field RedCurve FMovieSceneFloatChannel
---@field GreenCurve FMovieSceneFloatChannel
---@field BlueCurve FMovieSceneFloatChannel
---@field AlphaCurve FMovieSceneFloatChannel
FColorParameterNameAndCurves = {}



---@class FEventPayload
---@field EventName FName
---@field Parameters FMovieSceneEventParameters
FEventPayload = {}



---@class FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate
---@field AttachBindingID FMovieSceneObjectBindingID
---@field AttachSocketName FName
---@field AttachComponentName FName
---@field AttachmentLocationRule EAttachmentRule
---@field AttachmentRotationRule EAttachmentRule
---@field AttachmentScaleRule EAttachmentRule
---@field DetachmentLocationRule EDetachmentRule
---@field DetachmentRotationRule EDetachmentRule
---@field DetachmentScaleRule EDetachmentRule
FMovieScene3DAttachSectionTemplate = {}



---@class FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct
---@field Location FVector
---@field Time FFrameNumber
FMovieScene3DLocationKeyStruct = {}



---@class FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate
---@field PathBindingID FMovieSceneObjectBindingID
---@field TimingCurve FMovieSceneFloatChannel
---@field FrontAxisEnum MovieScene3DPathSection_Axis
---@field UpAxisEnum MovieScene3DPathSection_Axis
---@field bFollow boolean
---@field bReverse boolean
---@field bForceUpright boolean
FMovieScene3DPathSectionTemplate = {}



---@class FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct
---@field Rotation FRotator
---@field Time FFrameNumber
FMovieScene3DRotationKeyStruct = {}



---@class FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct
---@field Scale FVector
---@field Time FFrameNumber
FMovieScene3DScaleKeyStruct = {}



---@class FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct
---@field Location FVector
---@field Rotation FRotator
---@field Scale FVector
---@field Time FFrameNumber
FMovieScene3DTransformKeyStruct = {}



---@class FMovieScene3DTransformTemplateData
---@field TranslationCurve FMovieSceneFloatChannel
---@field RotationCurve FMovieSceneFloatChannel
---@field ScaleCurve FMovieSceneFloatChannel
---@field ManualWeight FMovieSceneFloatChannel
---@field BlendType EMovieSceneBlendType
---@field Mask FMovieSceneTransformMask
---@field bUseQuaternionInterpolation boolean
FMovieScene3DTransformTemplateData = {}



---@class FMovieSceneActorReferenceData : FMovieSceneChannel
---@field KeyTimes TArray<FFrameNumber>
---@field KeyValues TArray<FMovieSceneActorReferenceKey>
FMovieSceneActorReferenceData = {}



---@class FMovieSceneActorReferenceKey
---@field Object FMovieSceneObjectBindingID
---@field ComponentName FName
---@field SocketName FName
FMovieSceneActorReferenceKey = {}



---@class FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate
---@field PropertyData FMovieScenePropertySectionData
---@field ActorReferenceData FMovieSceneActorReferenceData
FMovieSceneActorReferenceSectionTemplate = {}



---@class FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate
FMovieSceneAdditiveCameraAnimationTemplate = {}


---@class FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate
---@field AudioSection UMovieSceneAudioSection
FMovieSceneAudioSectionTemplate = {}



---@class FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field BoolCurve FMovieSceneBoolChannel
FMovieSceneBoolPropertySectionTemplate = {}



---@class FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field ByteCurve FMovieSceneByteChannel
FMovieSceneBytePropertySectionTemplate = {}



---@class FMovieSceneCameraAnimSectionData
---@field CameraAnim UCameraAnim
---@field PlayRate float
---@field PlayScale float
---@field BlendInTime float
---@field BlendOutTime float
---@field bLooping boolean
FMovieSceneCameraAnimSectionData = {}



---@class FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate
---@field SourceData FMovieSceneCameraAnimSectionData
---@field SectionStartTime FFrameNumber
FMovieSceneCameraAnimSectionTemplate = {}



---@class FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate
---@field CameraBindingID FMovieSceneObjectBindingID
---@field CutTransform FTransform
---@field bHasCutTransform boolean
---@field bIsFinalSection boolean
FMovieSceneCameraCutSectionTemplate = {}



---@class FMovieSceneCameraShakeSectionData
---@field ShakeClass TSubclassOf<UCameraShake>
---@field PlayScale float
---@field PlaySpace ECameraAnimPlaySpace::Type
---@field UserDefinedPlaySpace FRotator
FMovieSceneCameraShakeSectionData = {}



---@class FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate
---@field SourceData FMovieSceneCameraShakeSectionData
---@field SectionStartTime FFrameNumber
FMovieSceneCameraShakeSectionTemplate = {}



---@class FMovieSceneColorKeyStruct : FMovieSceneKeyStruct
---@field Color FLinearColor
---@field Time FFrameNumber
FMovieSceneColorKeyStruct = {}



---@class FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate
---@field Curves FMovieSceneFloatChannel
---@field BlendType EMovieSceneBlendType
FMovieSceneColorSectionTemplate = {}



---@class FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
---@field MaterialIndex int32
FMovieSceneComponentMaterialSectionTemplate = {}



---@class FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate
---@field TemplateData FMovieScene3DTransformTemplateData
FMovieSceneComponentTransformSectionTemplate = {}



---@class FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field EnumCurve FMovieSceneByteChannel
FMovieSceneEnumPropertySectionTemplate = {}



---@class FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field TemplateData FMovieScene3DTransformTemplateData
FMovieSceneEulerTransformPropertySectionTemplate = {}



---@class FMovieSceneEvent
---@field Ptrs FMovieSceneEventPtrs
FMovieSceneEvent = {}



---@class FMovieSceneEventChannel : FMovieSceneChannel
---@field KeyTimes TArray<FFrameNumber>
---@field KeyValues TArray<FMovieSceneEvent>
FMovieSceneEventChannel = {}



---@class FMovieSceneEventParameters
FMovieSceneEventParameters = {}


---@class FMovieSceneEventPayloadVariable
---@field Value FString
FMovieSceneEventPayloadVariable = {}



---@class FMovieSceneEventPtrs
---@field Function UFunction
---@field BoundObjectProperty TFieldPath<FProperty>
FMovieSceneEventPtrs = {}



---@class FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase
---@field EventToTrigger FMovieSceneEventPtrs
FMovieSceneEventRepeaterTemplate = {}



---@class FMovieSceneEventSectionData : FMovieSceneChannel
---@field Times TArray<FFrameNumber>
---@field KeyValues TArray<FEventPayload>
FMovieSceneEventSectionData = {}



---@class FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase
---@field EventData FMovieSceneEventSectionData
FMovieSceneEventSectionTemplate = {}



---@class FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate
---@field EventReceivers TArray<FMovieSceneObjectBindingID>
---@field bFireEventsWhenForwards boolean
---@field bFireEventsWhenBackwards boolean
FMovieSceneEventTemplateBase = {}



---@class FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase
---@field EventTimes TArray<FFrameNumber>
---@field Events TArray<FMovieSceneEventPtrs>
FMovieSceneEventTriggerTemplate = {}



---@class FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate
---@field FadeCurve FMovieSceneFloatChannel
---@field FadeColor FLinearColor
---@field bFadeAudio boolean
FMovieSceneFadeSectionTemplate = {}



---@class FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field FloatFunction FMovieSceneFloatChannel
---@field BlendType EMovieSceneBlendType
FMovieSceneFloatPropertySectionTemplate = {}



---@class FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field IntegerCurve FMovieSceneIntegerChannel
---@field BlendType EMovieSceneBlendType
FMovieSceneIntegerPropertySectionTemplate = {}



---@class FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate
---@field Visibility ELevelVisibility
---@field LevelNames TArray<FName>
FMovieSceneLevelVisibilitySectionTemplate = {}



---@class FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate
---@field MPC UMaterialParameterCollection
FMovieSceneMaterialParameterCollectionTemplate = {}



---@class FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate
---@field ObjectChannel FMovieSceneObjectPathChannel
FMovieSceneObjectPropertyTemplate = {}



---@class FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate
---@field Scalars TArray<FScalarParameterNameAndCurve>
---@field Bools TArray<FBoolParameterNameAndCurve>
---@field Vector2Ds TArray<FVector2DParameterNameAndCurves>
---@field Vectors TArray<FVectorParameterNameAndCurves>
---@field Colors TArray<FColorParameterNameAndCurves>
---@field Transforms TArray<FTransformParameterNameAndCurves>
FMovieSceneParameterSectionTemplate = {}



---@class FMovieSceneParticleChannel : FMovieSceneByteChannel
FMovieSceneParticleChannel = {}


---@class FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate
FMovieSceneParticleParameterSectionTemplate = {}


---@class FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate
---@field ParticleKeys FMovieSceneParticleChannel
FMovieSceneParticleSectionTemplate = {}



---@class FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate
---@field MaterialIndex int32
---@field MaterialChannel FMovieSceneObjectPathChannel
FMovieScenePrimitiveMaterialTemplate = {}



---@class FMovieSceneSkeletalAnimationParams
---@field Animation UAnimSequenceBase
---@field FirstLoopStartFrameOffset FFrameNumber
---@field StartFrameOffset FFrameNumber
---@field EndFrameOffset FFrameNumber
---@field PlayRate float
---@field bReverse boolean
---@field SlotName FName
---@field Weight FMovieSceneFloatChannel
---@field bSkipAnimNotifiers boolean
---@field bForceCustomMode boolean
---@field StartOffset float
---@field EndOffset float
FMovieSceneSkeletalAnimationParams = {}



---@class FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate
---@field Params FMovieSceneSkeletalAnimationSectionTemplateParameters
FMovieSceneSkeletalAnimationSectionTemplate = {}



---@class FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams
---@field SectionStartTime FFrameNumber
---@field SectionEndTime FFrameNumber
FMovieSceneSkeletalAnimationSectionTemplateParameters = {}



---@class FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate
---@field SlomoCurve FMovieSceneFloatChannel
FMovieSceneSlomoSectionTemplate = {}



---@class FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate
---@field Curve FMovieSceneBoolChannel
FMovieSceneSpawnSectionTemplate = {}



---@class FMovieSceneStringChannel : FMovieSceneChannel
---@field Times TArray<FFrameNumber>
---@field Values TArray<FString>
---@field DefaultValue FString
---@field bHasDefaultValue boolean
FMovieSceneStringChannel = {}



---@class FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field StringCurve FMovieSceneStringChannel
FMovieSceneStringPropertySectionTemplate = {}



---@class FMovieSceneTransformMask
---@field Mask uint32
FMovieSceneTransformMask = {}



---@class FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field TemplateData FMovieScene3DTransformTemplateData
FMovieSceneTransformPropertySectionTemplate = {}



---@class FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase
---@field Vector FVector2D
FMovieSceneVector2DKeyStruct = {}



---@class FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase
---@field Vector FVector4
FMovieSceneVector4KeyStruct = {}



---@class FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase
---@field Vector FVector
FMovieSceneVectorKeyStruct = {}



---@class FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct
---@field Time FFrameNumber
FMovieSceneVectorKeyStructBase = {}



---@class FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field ComponentCurves FMovieSceneFloatChannel
---@field NumChannelsUsed int32
---@field BlendType EMovieSceneBlendType
FMovieSceneVectorPropertySectionTemplate = {}



---@class FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate
FMovieSceneVisibilitySectionTemplate = {}


---@class FScalarParameterNameAndCurve
---@field ParameterName FName
---@field ParameterCurve FMovieSceneFloatChannel
FScalarParameterNameAndCurve = {}



---@class FTransformParameterNameAndCurves
---@field ParameterName FName
---@field Translation FMovieSceneFloatChannel
---@field Rotation FMovieSceneFloatChannel
---@field Scale FMovieSceneFloatChannel
FTransformParameterNameAndCurves = {}



---@class FVector2DParameterNameAndCurves
---@field ParameterName FName
---@field XCurve FMovieSceneFloatChannel
---@field YCurve FMovieSceneFloatChannel
FVector2DParameterNameAndCurves = {}



---@class FVectorParameterNameAndCurves
---@field ParameterName FName
---@field XCurve FMovieSceneFloatChannel
---@field YCurve FMovieSceneFloatChannel
---@field ZCurve FMovieSceneFloatChannel
FVectorParameterNameAndCurves = {}



---@class IMovieSceneTransformOrigin : IInterface
IMovieSceneTransformOrigin = {}

---@return FTransform
function IMovieSceneTransformOrigin:BP_GetTransformOrigin() end


---@class UMovieScene3DAttachSection : UMovieScene3DConstraintSection
---@field AttachSocketName FName
---@field AttachComponentName FName
---@field AttachmentLocationRule EAttachmentRule
---@field AttachmentRotationRule EAttachmentRule
---@field AttachmentScaleRule EAttachmentRule
---@field DetachmentLocationRule EDetachmentRule
---@field DetachmentRotationRule EDetachmentRule
---@field DetachmentScaleRule EDetachmentRule
UMovieScene3DAttachSection = {}



---@class UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack
UMovieScene3DAttachTrack = {}


---@class UMovieScene3DConstraintSection : UMovieSceneSection
---@field ConstraintId FGuid
---@field ConstraintBindingID FMovieSceneObjectBindingID
UMovieScene3DConstraintSection = {}

---@param InConstraintBindingID FMovieSceneObjectBindingID
function UMovieScene3DConstraintSection:SetConstraintBindingID(InConstraintBindingID) end
---@return FMovieSceneObjectBindingID
function UMovieScene3DConstraintSection:GetConstraintBindingID() end


---@class UMovieScene3DConstraintTrack : UMovieSceneTrack
---@field ConstraintSections TArray<UMovieSceneSection>
UMovieScene3DConstraintTrack = {}



---@class UMovieScene3DPathSection : UMovieScene3DConstraintSection
---@field TimingCurve FMovieSceneFloatChannel
---@field FrontAxisEnum MovieScene3DPathSection_Axis
---@field UpAxisEnum MovieScene3DPathSection_Axis
---@field bFollow boolean
---@field bReverse boolean
---@field bForceUpright boolean
UMovieScene3DPathSection = {}



---@class UMovieScene3DPathTrack : UMovieScene3DConstraintTrack
UMovieScene3DPathTrack = {}


---@class UMovieScene3DTransformSection : UMovieSceneSection
---@field TransformMask FMovieSceneTransformMask
---@field Translation FMovieSceneFloatChannel
---@field Rotation FMovieSceneFloatChannel
---@field Scale FMovieSceneFloatChannel
---@field ManualWeight FMovieSceneFloatChannel
---@field bUseQuaternionInterpolation boolean
UMovieScene3DTransformSection = {}



---@class UMovieScene3DTransformTrack : UMovieScenePropertyTrack
UMovieScene3DTransformTrack = {}


---@class UMovieSceneActorReferenceSection : UMovieSceneSection
---@field ActorReferenceData FMovieSceneActorReferenceData
---@field ActorGuidIndexCurve FIntegralCurve
---@field ActorGuidStrings TArray<FString>
UMovieSceneActorReferenceSection = {}



---@class UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack
UMovieSceneActorReferenceTrack = {}


---@class UMovieSceneAudioSection : UMovieSceneSection
---@field Sound USoundBase
---@field StartFrameOffset FFrameNumber
---@field StartOffset float
---@field AudioStartTime float
---@field AudioDilationFactor float
---@field AudioVolume float
---@field SoundVolume FMovieSceneFloatChannel
---@field PitchMultiplier FMovieSceneFloatChannel
---@field AttachActorData FMovieSceneActorReferenceData
---@field bSuppressSubtitles boolean
---@field bOverrideAttenuation boolean
---@field AttenuationSettings USoundAttenuation
---@field OnQueueSubtitles FMovieSceneAudioSectionOnQueueSubtitles
---@field OnAudioFinished FMovieSceneAudioSectionOnAudioFinished
---@field OnAudioPlaybackPercent FMovieSceneAudioSectionOnAudioPlaybackPercent
UMovieSceneAudioSection = {}

---@param InStartOffset FFrameNumber
function UMovieSceneAudioSection:SetStartOffset(InStartOffset) end
---@param InSound USoundBase
function UMovieSceneAudioSection:SetSound(InSound) end
---@return FFrameNumber
function UMovieSceneAudioSection:GetStartOffset() end
---@return USoundBase
function UMovieSceneAudioSection:GetSound() end


---@class UMovieSceneAudioTrack : UMovieSceneNameableTrack
---@field AudioSections TArray<UMovieSceneSection>
UMovieSceneAudioTrack = {}



---@class UMovieSceneBoolSection : UMovieSceneSection
---@field DefaultValue boolean
---@field BoolCurve FMovieSceneBoolChannel
UMovieSceneBoolSection = {}



---@class UMovieSceneBoolTrack : UMovieScenePropertyTrack
UMovieSceneBoolTrack = {}


---@class UMovieSceneByteSection : UMovieSceneSection
---@field ByteCurve FMovieSceneByteChannel
UMovieSceneByteSection = {}



---@class UMovieSceneByteTrack : UMovieScenePropertyTrack
---@field Enum UEnum
UMovieSceneByteTrack = {}



---@class UMovieSceneCameraAnimSection : UMovieSceneSection
---@field AnimData FMovieSceneCameraAnimSectionData
---@field CameraAnim UCameraAnim
---@field PlayRate float
---@field PlayScale float
---@field BlendInTime float
---@field BlendOutTime float
---@field bLooping boolean
UMovieSceneCameraAnimSection = {}



---@class UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack
---@field CameraAnimSections TArray<UMovieSceneSection>
UMovieSceneCameraAnimTrack = {}



---@class UMovieSceneCameraCutSection : UMovieSceneSection
---@field CameraGuid FGuid
---@field CameraBindingID FMovieSceneObjectBindingID
UMovieSceneCameraCutSection = {}

---@param InCameraBindingID FMovieSceneObjectBindingID
function UMovieSceneCameraCutSection:SetCameraBindingID(InCameraBindingID) end
---@return FMovieSceneObjectBindingID
function UMovieSceneCameraCutSection:GetCameraBindingID() end


---@class UMovieSceneCameraCutTrack : UMovieSceneNameableTrack
---@field bCanBlend boolean
---@field Sections TArray<UMovieSceneSection>
UMovieSceneCameraCutTrack = {}



---@class UMovieSceneCameraShakeSection : UMovieSceneSection
---@field ShakeData FMovieSceneCameraShakeSectionData
---@field ShakeClass TSubclassOf<UCameraShake>
---@field PlayScale float
---@field PlaySpace ECameraAnimPlaySpace::Type
---@field UserDefinedPlaySpace FRotator
UMovieSceneCameraShakeSection = {}



---@class UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack
---@field CameraShakeSections TArray<UMovieSceneSection>
UMovieSceneCameraShakeTrack = {}



---@class UMovieSceneCinematicShotSection : UMovieSceneSubSection
---@field ShotDisplayName FString
---@field DisplayName FText
UMovieSceneCinematicShotSection = {}

---@param InShotDisplayName FString
function UMovieSceneCinematicShotSection:SetShotDisplayName(InShotDisplayName) end
---@return FString
function UMovieSceneCinematicShotSection:GetShotDisplayName() end


---@class UMovieSceneCinematicShotTrack : UMovieSceneSubTrack
UMovieSceneCinematicShotTrack = {}


---@class UMovieSceneColorSection : UMovieSceneSection
---@field RedCurve FMovieSceneFloatChannel
---@field GreenCurve FMovieSceneFloatChannel
---@field BlueCurve FMovieSceneFloatChannel
---@field AlphaCurve FMovieSceneFloatChannel
UMovieSceneColorSection = {}



---@class UMovieSceneColorTrack : UMovieScenePropertyTrack
---@field bIsSlateColor boolean
UMovieSceneColorTrack = {}



---@class UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack
---@field MaterialIndex int32
UMovieSceneComponentMaterialTrack = {}



---@class UMovieSceneEnumSection : UMovieSceneSection
---@field EnumCurve FMovieSceneByteChannel
UMovieSceneEnumSection = {}



---@class UMovieSceneEnumTrack : UMovieScenePropertyTrack
---@field Enum UEnum
UMovieSceneEnumTrack = {}



---@class UMovieSceneEulerTransformTrack : UMovieScenePropertyTrack
UMovieSceneEulerTransformTrack = {}


---@class UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase
---@field Event FMovieSceneEvent
UMovieSceneEventRepeaterSection = {}



---@class UMovieSceneEventSection : UMovieSceneSection
---@field Events FNameCurve
---@field EventData FMovieSceneEventSectionData
UMovieSceneEventSection = {}



---@class UMovieSceneEventSectionBase : UMovieSceneSection
UMovieSceneEventSectionBase = {}


---@class UMovieSceneEventTrack : UMovieSceneNameableTrack
---@field bFireEventsWhenForwards boolean
---@field bFireEventsWhenBackwards boolean
---@field EventPosition EFireEventsAtPosition
---@field EventReceivers TArray<FMovieSceneObjectBindingID>
---@field Sections TArray<UMovieSceneSection>
UMovieSceneEventTrack = {}



---@class UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase
---@field EventChannel FMovieSceneEventChannel
UMovieSceneEventTriggerSection = {}



---@class UMovieSceneFadeSection : UMovieSceneFloatSection
---@field FadeColor FLinearColor
---@field bFadeAudio boolean
UMovieSceneFadeSection = {}



---@class UMovieSceneFadeTrack : UMovieSceneFloatTrack
UMovieSceneFadeTrack = {}


---@class UMovieSceneFloatSection : UMovieSceneSection
---@field FloatCurve FMovieSceneFloatChannel
UMovieSceneFloatSection = {}



---@class UMovieSceneFloatTrack : UMovieScenePropertyTrack
UMovieSceneFloatTrack = {}


---@class UMovieSceneIntegerSection : UMovieSceneSection
---@field IntegerCurve FMovieSceneIntegerChannel
UMovieSceneIntegerSection = {}



---@class UMovieSceneIntegerTrack : UMovieScenePropertyTrack
UMovieSceneIntegerTrack = {}


---@class UMovieSceneLevelVisibilitySection : UMovieSceneSection
---@field Visibility ELevelVisibility
---@field LevelNames TArray<FName>
UMovieSceneLevelVisibilitySection = {}

---@param InVisibility ELevelVisibility
function UMovieSceneLevelVisibilitySection:SetVisibility(InVisibility) end
---@param InLevelNames TArray<FName>
function UMovieSceneLevelVisibilitySection:SetLevelNames(InLevelNames) end
---@return ELevelVisibility
function UMovieSceneLevelVisibilitySection:GetVisibility() end
---@return TArray<FName>
function UMovieSceneLevelVisibilitySection:GetLevelNames() end


---@class UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack
---@field Sections TArray<UMovieSceneSection>
UMovieSceneLevelVisibilityTrack = {}



---@class UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack
---@field MPC UMaterialParameterCollection
UMovieSceneMaterialParameterCollectionTrack = {}



---@class UMovieSceneMaterialTrack : UMovieSceneNameableTrack
---@field Sections TArray<UMovieSceneSection>
UMovieSceneMaterialTrack = {}



---@class UMovieSceneObjectPropertySection : UMovieSceneSection
---@field ObjectChannel FMovieSceneObjectPathChannel
UMovieSceneObjectPropertySection = {}



---@class UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack
---@field PropertyClass UClass
UMovieSceneObjectPropertyTrack = {}



---@class UMovieSceneParameterSection : UMovieSceneSection
---@field BoolParameterNamesAndCurves TArray<FBoolParameterNameAndCurve>
---@field ScalarParameterNamesAndCurves TArray<FScalarParameterNameAndCurve>
---@field Vector2DParameterNamesAndCurves TArray<FVector2DParameterNameAndCurves>
---@field VectorParameterNamesAndCurves TArray<FVectorParameterNameAndCurves>
---@field ColorParameterNamesAndCurves TArray<FColorParameterNameAndCurves>
---@field TransformParameterNamesAndCurves TArray<FTransformParameterNameAndCurves>
UMovieSceneParameterSection = {}



---@class UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack
---@field Sections TArray<UMovieSceneSection>
UMovieSceneParticleParameterTrack = {}



---@class UMovieSceneParticleSection : UMovieSceneSection
---@field ParticleKeys FMovieSceneParticleChannel
UMovieSceneParticleSection = {}



---@class UMovieSceneParticleTrack : UMovieSceneNameableTrack
---@field ParticleSections TArray<UMovieSceneSection>
UMovieSceneParticleTrack = {}



---@class UMovieScenePrimitiveMaterialSection : UMovieSceneSection
---@field MaterialChannel FMovieSceneObjectPathChannel
UMovieScenePrimitiveMaterialSection = {}



---@class UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack
---@field MaterialIndex int32
UMovieScenePrimitiveMaterialTrack = {}



---@class UMovieScenePropertyTrack : UMovieSceneNameableTrack
---@field SectionToKey UMovieSceneSection
---@field PropertyName FName
---@field PropertyPath FString
---@field Sections TArray<UMovieSceneSection>
UMovieScenePropertyTrack = {}



---@class UMovieSceneSkeletalAnimationSection : UMovieSceneSection
---@field Params FMovieSceneSkeletalAnimationParams
---@field AnimSequence UAnimSequence
---@field Animation UAnimSequenceBase
---@field StartOffset float
---@field EndOffset float
---@field PlayRate float
---@field bReverse boolean
---@field SlotName FName
UMovieSceneSkeletalAnimationSection = {}



---@class UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack
---@field AnimationSections TArray<UMovieSceneSection>
---@field bUseLegacySectionIndexBlend boolean
UMovieSceneSkeletalAnimationTrack = {}



---@class UMovieSceneSlomoSection : UMovieSceneFloatSection
UMovieSceneSlomoSection = {}


---@class UMovieSceneSlomoTrack : UMovieSceneFloatTrack
UMovieSceneSlomoTrack = {}


---@class UMovieSceneSpawnSection : UMovieSceneBoolSection
UMovieSceneSpawnSection = {}


---@class UMovieSceneSpawnTrack : UMovieSceneTrack
---@field Sections TArray<UMovieSceneSection>
---@field ObjectGuid FGuid
UMovieSceneSpawnTrack = {}



---@class UMovieSceneStringSection : UMovieSceneSection
---@field StringCurve FMovieSceneStringChannel
UMovieSceneStringSection = {}



---@class UMovieSceneStringTrack : UMovieScenePropertyTrack
UMovieSceneStringTrack = {}


---@class UMovieSceneTransformTrack : UMovieScenePropertyTrack
UMovieSceneTransformTrack = {}


---@class UMovieSceneVectorSection : UMovieSceneSection
---@field Curves FMovieSceneFloatChannel
---@field ChannelsUsed int32
UMovieSceneVectorSection = {}



---@class UMovieSceneVectorTrack : UMovieScenePropertyTrack
---@field NumChannelsUsed int32
UMovieSceneVectorTrack = {}



---@class UMovieSceneVisibilityTrack : UMovieSceneBoolTrack
UMovieSceneVisibilityTrack = {}


