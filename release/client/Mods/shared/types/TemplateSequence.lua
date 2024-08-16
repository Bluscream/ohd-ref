---@meta

---@class ATemplateSequenceActor : AActor
---@field PlaybackSettings FMovieSceneSequencePlaybackSettings
---@field SequencePlayer UTemplateSequencePlayer
---@field TemplateSequence FSoftObjectPath
---@field BindingOverride FTemplateSequenceBindingOverrideData
ATemplateSequenceActor = {}

---@param InSequence UTemplateSequence
function ATemplateSequenceActor:SetSequence(InSequence) end
---@param Actor AActor
function ATemplateSequenceActor:SetBinding(Actor) end
---@return UTemplateSequence
function ATemplateSequenceActor:LoadSequence() end
---@return UTemplateSequencePlayer
function ATemplateSequenceActor:GetSequencePlayer() end
---@return UTemplateSequence
function ATemplateSequenceActor:GetSequence() end


---@class FTemplateSequenceBindingOverrideData
---@field Object TWeakObjectPtr<UObject>
---@field bOverridesDefault boolean
FTemplateSequenceBindingOverrideData = {}



---@class FTemplateSequenceInstanceData : FMovieSceneSequenceInstanceData
---@field Operand FMovieSceneEvaluationOperand
FTemplateSequenceInstanceData = {}



---@class FTemplateSequenceSectionTemplate : FMovieSceneEvalTemplate
---@field SectionStartTime FFrameNumber
---@field OuterBindingId FGuid
---@field InnerOperand FMovieSceneEvaluationOperand
FTemplateSequenceSectionTemplate = {}



---@class UCameraAnimationSequence : UTemplateSequence
UCameraAnimationSequence = {}


---@class UTemplateSequence : UMovieSceneSequence
---@field MovieScene UMovieScene
---@field BoundActorClass TSoftClassPtr<AActor>
---@field BoundPreviewActor TSoftObjectPtr<AActor>
---@field BoundActorComponents TMap<FGuid, FName>
UTemplateSequence = {}



---@class UTemplateSequencePlayer : UMovieSceneSequencePlayer
UTemplateSequencePlayer = {}

---@param WorldContextObject UObject
---@param TemplateSequence UTemplateSequence
---@param Settings FMovieSceneSequencePlaybackSettings
---@param OutActor ATemplateSequenceActor
---@return UTemplateSequencePlayer
function UTemplateSequencePlayer:CreateTemplateSequencePlayer(WorldContextObject, TemplateSequence, Settings, OutActor) end


---@class UTemplateSequenceSection : UMovieSceneSubSection
UTemplateSequenceSection = {}


---@class UTemplateSequenceTrack : UMovieSceneSubTrack
UTemplateSequenceTrack = {}


