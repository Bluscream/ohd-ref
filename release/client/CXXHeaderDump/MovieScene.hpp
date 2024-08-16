#ifndef UE4SS_SDK_MovieScene_HPP
#define UE4SS_SDK_MovieScene_HPP

#include "MovieScene_enums.hpp"

struct FGeneratedMovieSceneKeyStruct
{
    char padding_0[0x50];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x50

struct FMovieSceneBinding
{
    FGuid ObjectGuid;                                                                 // 0x0000 (size: 0x10)
    FString BindingName;                                                              // 0x0010 (size: 0x10)
    TArray<class UMovieSceneTrack*> Tracks;                                           // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FMovieSceneBindingOverrideData
{
    FMovieSceneObjectBindingID ObjectBindingID;                                       // 0x0000 (size: 0x18)
    TWeakObjectPtr<class UObject> Object;                                             // 0x0018 (size: 0x8)
    bool bOverridesDefault;                                                           // 0x0020 (size: 0x1)

}; // Size: 0x24

struct FMovieSceneBoolChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;                                                       // 0x0008 (size: 0x10)
    bool DefaultValue;                                                                // 0x0018 (size: 0x1)
    bool bHasDefaultValue;                                                            // 0x0019 (size: 0x1)
    char padding_0[0x6];                                                              // 0x001A (size: 0x6)
    TArray<bool> Values;                                                              // 0x0020 (size: 0x10)

}; // Size: 0x90

struct FMovieSceneByteChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;                                                       // 0x0008 (size: 0x10)
    uint8 DefaultValue;                                                               // 0x0018 (size: 0x1)
    bool bHasDefaultValue;                                                            // 0x0019 (size: 0x1)
    char padding_0[0x6];                                                              // 0x001A (size: 0x6)
    TArray<uint8> Values;                                                             // 0x0020 (size: 0x10)
    class UEnum* Enum;                                                                // 0x0030 (size: 0x8)

}; // Size: 0x98

struct FMovieSceneChannel
{
    char padding_0[0x8];                                                              // 0x0000 (size: 0x0)
}; // Size: 0x8

struct FMovieSceneEasingSettings
{
    int32 AutoEaseInDuration;                                                         // 0x0000 (size: 0x4)
    int32 AutoEaseOutDuration;                                                        // 0x0004 (size: 0x4)
    TScriptInterface<class IMovieSceneEasingFunction> EaseIn;                         // 0x0008 (size: 0x10)
    bool bManualEaseIn;                                                               // 0x0018 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0019 (size: 0x3)
    int32 ManualEaseInDuration;                                                       // 0x001C (size: 0x4)
    TScriptInterface<class IMovieSceneEasingFunction> EaseOut;                        // 0x0020 (size: 0x10)
    bool bManualEaseOut;                                                              // 0x0030 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0031 (size: 0x3)
    int32 ManualEaseOutDuration;                                                      // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FMovieSceneEditorData
{
    TMap<class FString, class FMovieSceneExpansionState> ExpansionStates;             // 0x0000 (size: 0x50)
    TArray<FString> PinnedNodes;                                                      // 0x0050 (size: 0x10)
    double ViewStart;                                                                 // 0x0060 (size: 0x8)
    double ViewEnd;                                                                   // 0x0068 (size: 0x8)
    double WorkStart;                                                                 // 0x0070 (size: 0x8)
    double WorkEnd;                                                                   // 0x0078 (size: 0x8)
    TSet<FFrameNumber> MarkedFrames;                                                  // 0x0080 (size: 0x50)
    FFloatRange WorkingRange;                                                         // 0x00D0 (size: 0x10)
    FFloatRange ViewRange;                                                            // 0x00E0 (size: 0x10)

}; // Size: 0xF0

struct FMovieSceneEmptyStruct
{
    char padding_0[0x1];                                                              // 0x0000 (size: 0x0)
}; // Size: 0x1

struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
    EMovieSceneCompletionMode CompletionMode;                                         // 0x0010 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0011 (size: 0x3)
    TWeakObjectPtr<class UMovieSceneSection> SourceSectionPtr;                        // 0x0014 (size: 0x8)

}; // Size: 0x20

struct FMovieSceneEvalTemplateBase
{
    char padding_0[0x10];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x10

struct FMovieSceneEvalTemplatePtr
{
    char padding_0[0x88];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x88

struct FMovieSceneEvaluationField
{
    TArray<FMovieSceneFrameRange> Ranges;                                             // 0x0000 (size: 0x10)
    TArray<FMovieSceneEvaluationGroup> Groups;                                        // 0x0010 (size: 0x10)
    TArray<FMovieSceneEvaluationMetaData> MetaData;                                   // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
    FMovieSceneSegmentIdentifier SegmentID;                                           // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FMovieSceneEvaluationFieldTrackPtr
{
    FMovieSceneSequenceID SequenceID;                                                 // 0x0000 (size: 0x4)
    FMovieSceneTrackIdentifier TrackIdentifier;                                       // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMovieSceneEvaluationGroup
{
    TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices;                            // 0x0000 (size: 0x10)
    TArray<FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT;                       // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMovieSceneEvaluationGroupLUTIndex
{
    int32 LUTOffset;                                                                  // 0x0000 (size: 0x4)
    int32 NumInitPtrs;                                                                // 0x0004 (size: 0x4)
    int32 NumEvalPtrs;                                                                // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FMovieSceneEvaluationKey
{
    FMovieSceneSequenceID SequenceID;                                                 // 0x0000 (size: 0x4)
    FMovieSceneTrackIdentifier TrackIdentifier;                                       // 0x0004 (size: 0x4)
    uint32 SectionIndex;                                                              // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FMovieSceneEvaluationMetaData
{
    TArray<FMovieSceneSequenceID> ActiveSequences;                                    // 0x0000 (size: 0x10)
    TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities;                           // 0x0010 (size: 0x10)
    TMap<FMovieSceneSequenceID, uint32> SubTemplateSerialNumbers;                     // 0x0020 (size: 0x50)

}; // Size: 0x70

struct FMovieSceneEvaluationOperand
{
    FGuid ObjectBindingID;                                                            // 0x0000 (size: 0x10)
    FMovieSceneSequenceID SequenceID;                                                 // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FMovieSceneEvaluationTemplate
{
    TMap<class FMovieSceneTrackIdentifier, class FMovieSceneEvaluationTrack> Tracks;  // 0x0000 (size: 0x50)
    char padding_0[0x50];                                                             // 0x0050 (size: 0x50)
    FMovieSceneEvaluationField EvaluationField;                                       // 0x00A0 (size: 0x30)
    FMovieSceneSequenceHierarchy Hierarchy;                                           // 0x00D0 (size: 0xA0)
    FGuid SequenceSignature;                                                          // 0x0170 (size: 0x10)
    FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;                   // 0x0180 (size: 0x4)
    char padding_1[0x4];                                                              // 0x0184 (size: 0x4)
    FMovieSceneTemplateGenerationLedger TemplateLedger;                               // 0x0188 (size: 0xA8)
    FMovieSceneTrackFieldData TrackFieldData;                                         // 0x0230 (size: 0x60)
    FMovieSceneSubSectionFieldData SubSectionFieldData;                               // 0x0290 (size: 0x60)

}; // Size: 0x2F0

struct FMovieSceneEvaluationTemplateSerialNumber
{
    uint32 Value;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneEvaluationTrack
{
    FGuid ObjectBindingID;                                                            // 0x0000 (size: 0x10)
    uint16 EvaluationPriority;                                                        // 0x0010 (size: 0x2)
    EEvaluationMethod EvaluationMethod;                                               // 0x0012 (size: 0x1)
    char padding_0[0x5];                                                              // 0x0013 (size: 0x5)
    FMovieSceneEvaluationTrackSegments Segments;                                      // 0x0018 (size: 0x20)
    class UMovieSceneTrack* SourceTrack;                                              // 0x0038 (size: 0x8)
    FSectionEvaluationDataTree EvaluationTree;                                        // 0x0040 (size: 0x60)
    TArray<FMovieSceneEvalTemplatePtr> ChildTemplates;                                // 0x00A0 (size: 0x10)
    FMovieSceneTrackImplementationPtr TrackTemplate;                                  // 0x00B0 (size: 0x38)
    FName EvaluationGroup;                                                            // 0x00E8 (size: 0x8)
    uint8 bEvaluateInPreroll;                                                         // 0x00F0 (size: 0x1)
    uint8 bEvaluateInPostroll;                                                        // 0x00F0 (size: 0x1)
    uint8 bTearDownPriority;                                                          // 0x00F0 (size: 0x1)

}; // Size: 0xF8

struct FMovieSceneEvaluationTrackSegments
{
    TArray<int32> SegmentIdentifierToIndex;                                           // 0x0000 (size: 0x10)
    TArray<FMovieSceneSegment> SortedSegments;                                        // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMovieSceneExpansionState
{
    bool bExpanded;                                                                   // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FMovieSceneFloatChannel : public FMovieSceneChannel
{
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;                           // 0x0008 (size: 0x1)
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;                          // 0x0009 (size: 0x1)
    char padding_0[0x6];                                                              // 0x000A (size: 0x6)
    TArray<FFrameNumber> Times;                                                       // 0x0010 (size: 0x10)
    TArray<FMovieSceneFloatValue> Values;                                             // 0x0020 (size: 0x10)
    float DefaultValue;                                                               // 0x0030 (size: 0x4)
    bool bHasDefaultValue;                                                            // 0x0034 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0035 (size: 0x3)
    FMovieSceneKeyHandleMap KeyHandles;                                               // 0x0038 (size: 0x60)
    FFrameRate TickResolution;                                                        // 0x0098 (size: 0x8)

}; // Size: 0xA0

struct FMovieSceneFloatValue
{
    float Value;                                                                      // 0x0000 (size: 0x4)
    FMovieSceneTangentData Tangent;                                                   // 0x0004 (size: 0x14)
    TEnumAsByte<ERichCurveInterpMode> InterpMode;                                     // 0x0018 (size: 0x1)
    TEnumAsByte<ERichCurveTangentMode> TangentMode;                                   // 0x0019 (size: 0x1)
    uint8 PaddingByte;                                                                // 0x001A (size: 0x1)

}; // Size: 0x1C

struct FMovieSceneFrameRange
{
    char padding_0[0x10];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x10

struct FMovieSceneIntegerChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;                                                       // 0x0008 (size: 0x10)
    int32 DefaultValue;                                                               // 0x0018 (size: 0x4)
    bool bHasDefaultValue;                                                            // 0x001C (size: 0x1)
    char padding_0[0x3];                                                              // 0x001D (size: 0x3)
    TArray<int32> Values;                                                             // 0x0020 (size: 0x10)

}; // Size: 0x90

struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
{
    char padding_0[0x60];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x60

struct FMovieSceneKeyStruct
{
    char padding_0[0x8];                                                              // 0x0000 (size: 0x0)
}; // Size: 0x8

struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
{
    FFrameNumber Time;                                                                // 0x0008 (size: 0x4)

}; // Size: 0x28

struct FMovieSceneMarkedFrame
{
    FFrameNumber FrameNumber;                                                         // 0x0000 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0004 (size: 0x4)
    FString Label;                                                                    // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMovieSceneNestedSequenceTransform
{
    FMovieSceneTimeTransform LinearTransform;                                         // 0x0000 (size: 0xC)
    FMovieSceneTimeWarping Warping;                                                   // 0x000C (size: 0x8)

}; // Size: 0x14

struct FMovieSceneObjectBindingID
{
    int32 SequenceID;                                                                 // 0x0000 (size: 0x4)
    EMovieSceneObjectBindingSpace Space;                                              // 0x0004 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0005 (size: 0x3)
    FGuid Guid;                                                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMovieSceneObjectBindingIDs
{
    TArray<FMovieSceneObjectBindingID> IDs;                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMovieSceneObjectPathChannel : public FMovieSceneChannel
{
    UClass* PropertyClass;                                                            // 0x0008 (size: 0x8)
    TArray<FFrameNumber> Times;                                                       // 0x0010 (size: 0x10)
    TArray<FMovieSceneObjectPathChannelKeyValue> Values;                              // 0x0020 (size: 0x10)
    FMovieSceneObjectPathChannelKeyValue DefaultValue;                                // 0x0030 (size: 0x30)

}; // Size: 0xC0

struct FMovieSceneObjectPathChannelKeyValue
{
    TSoftObjectPtr<UObject> SoftPtr;                                                  // 0x0000 (size: 0x28)
    class UObject* HardPtr;                                                           // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FMovieSceneOrderedEvaluationKey
{
    FMovieSceneEvaluationKey Key;                                                     // 0x0000 (size: 0xC)
    uint16 SetupIndex;                                                                // 0x000C (size: 0x2)
    uint16 TearDownIndex;                                                             // 0x000E (size: 0x2)

}; // Size: 0x10

struct FMovieScenePossessable
{
    TArray<FName> Tags;                                                               // 0x0000 (size: 0x10)
    FGuid Guid;                                                                       // 0x0010 (size: 0x10)
    FString Name;                                                                     // 0x0020 (size: 0x10)
    UClass* PossessedObjectClass;                                                     // 0x0030 (size: 0x8)
    FGuid ParentGuid;                                                                 // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FMovieScenePropertySectionData
{
    FName PropertyName;                                                               // 0x0000 (size: 0x8)
    FString PropertyPath;                                                             // 0x0008 (size: 0x10)
    FName FunctionName;                                                               // 0x0018 (size: 0x8)
    FName NotifyFunctionName;                                                         // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieScenePropertySectionData PropertyData;                                      // 0x0020 (size: 0x28)

}; // Size: 0x48

struct FMovieSceneRootEvaluationTemplateInstance
{
    TMap<class FMovieSceneSequenceID, class UObject*> DirectorInstances;              // 0x0018 (size: 0x50)

}; // Size: 0x320

struct FMovieSceneSectionEvalOptions
{
    bool bCanEditCompletionMode;                                                      // 0x0000 (size: 0x1)
    EMovieSceneCompletionMode CompletionMode;                                         // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FMovieSceneSectionGroup
{
    TArray<TWeakObjectPtr<UMovieSceneSection>> Sections;                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMovieSceneSectionParameters
{
    FFrameNumber StartFrameOffset;                                                    // 0x0000 (size: 0x4)
    bool bCanLoop;                                                                    // 0x0004 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0005 (size: 0x3)
    FFrameNumber EndFrameOffset;                                                      // 0x0008 (size: 0x4)
    FFrameNumber FirstLoopStartFrameOffset;                                           // 0x000C (size: 0x4)
    float TimeScale;                                                                  // 0x0010 (size: 0x4)
    int32 HierarchicalBias;                                                           // 0x0014 (size: 0x4)
    float StartOffset;                                                                // 0x0018 (size: 0x4)
    float PrerollTime;                                                                // 0x001C (size: 0x4)
    float PostrollTime;                                                               // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FMovieSceneSegment
{
    char padding_0[0x58];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x58

struct FMovieSceneSegmentIdentifier
{
    int32 IdentifierIndex;                                                            // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneSequenceHierarchy
{
    TMap<class FMovieSceneSequenceID, class FMovieSceneSubSequenceData> SubSequences; // 0x0000 (size: 0x50)
    TMap<class FMovieSceneSequenceID, class FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x0050 (size: 0x50)

}; // Size: 0xA0

struct FMovieSceneSequenceHierarchyNode
{
    FMovieSceneSequenceID ParentID;                                                   // 0x0000 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0004 (size: 0x4)
    TArray<FMovieSceneSequenceID> Children;                                           // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMovieSceneSequenceID
{
    uint32 Value;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneSequenceInstanceData
{
    char padding_0[0x8];                                                              // 0x0000 (size: 0x0)
}; // Size: 0x8

struct FMovieSceneSequenceInstanceDataPtr
{
    char padding_0[0x18];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x18

struct FMovieSceneSequenceLoopCount
{
    int32 Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneSequencePlaybackSettings
{
    uint8 bAutoPlay;                                                                  // 0x0000 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0001 (size: 0x3)
    FMovieSceneSequenceLoopCount LoopCount;                                           // 0x0004 (size: 0x4)
    float PlayRate;                                                                   // 0x0008 (size: 0x4)
    float StartTime;                                                                  // 0x000C (size: 0x4)
    uint8 bRandomStartTime;                                                           // 0x0010 (size: 0x1)
    uint8 bRestoreState;                                                              // 0x0010 (size: 0x1)
    uint8 bDisableMovementInput;                                                      // 0x0010 (size: 0x1)
    uint8 bDisableLookAtInput;                                                        // 0x0010 (size: 0x1)
    uint8 bHidePlayer;                                                                // 0x0010 (size: 0x1)
    uint8 bHideHud;                                                                   // 0x0010 (size: 0x1)
    uint8 bDisableCameraCuts;                                                         // 0x0010 (size: 0x1)
    uint8 bPauseAtEnd;                                                                // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FMovieSceneSequenceReplProperties
{
    FFrameTime LastKnownPosition;                                                     // 0x0000 (size: 0x8)
    TEnumAsByte<EMovieScenePlayerStatus::Type> LastKnownStatus;                       // 0x0008 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0009 (size: 0x3)
    int32 LastKnownNumLoops;                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

struct FMovieSceneSequenceTransform
{
    FMovieSceneTimeTransform LinearTransform;                                         // 0x0000 (size: 0xC)
    char padding_0[0x4];                                                              // 0x000C (size: 0x4)
    TArray<FMovieSceneNestedSequenceTransform> NestedTransforms;                      // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMovieSceneSpawnable
{
    FTransform SpawnTransform;                                                        // 0x0000 (size: 0x30)
    TArray<FName> Tags;                                                               // 0x0030 (size: 0x10)
    bool bContinuouslyRespawn;                                                        // 0x0040 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0041 (size: 0x3)
    FGuid Guid;                                                                       // 0x0044 (size: 0x10)
    char padding_1[0x4];                                                              // 0x0054 (size: 0x4)
    FString Name;                                                                     // 0x0058 (size: 0x10)
    class UObject* ObjectTemplate;                                                    // 0x0068 (size: 0x8)
    TArray<FGuid> ChildPossessables;                                                  // 0x0070 (size: 0x10)
    ESpawnOwnership Ownership;                                                        // 0x0080 (size: 0x1)
    char padding_2[0x3];                                                              // 0x0081 (size: 0x3)
    FName LevelName;                                                                  // 0x0084 (size: 0x8)

}; // Size: 0x90

struct FMovieSceneSubSectionData
{
    TWeakObjectPtr<class UMovieSceneSubSection> Section;                              // 0x0000 (size: 0x8)
    FGuid ObjectBindingID;                                                            // 0x0008 (size: 0x10)
    ESectionEvaluationFlags Flags;                                                    // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FMovieSceneSubSectionFieldData
{
    char padding_0[0x60];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x60

struct FMovieSceneSubSequenceData
{
    FSoftObjectPath Sequence;                                                         // 0x0000 (size: 0x18)
    FMovieSceneSequenceTransform RootToSequenceTransform;                             // 0x0018 (size: 0x20)
    FFrameRate TickResolution;                                                        // 0x0038 (size: 0x8)
    FMovieSceneSequenceID DeterministicSequenceID;                                    // 0x0040 (size: 0x4)
    FMovieSceneFrameRange PlayRange;                                                  // 0x0044 (size: 0x10)
    FMovieSceneFrameRange FullPlayRange;                                              // 0x0054 (size: 0x10)
    FMovieSceneFrameRange UnwarpedPlayRange;                                          // 0x0064 (size: 0x10)
    FMovieSceneFrameRange PreRollRange;                                               // 0x0074 (size: 0x10)
    FMovieSceneFrameRange PostRollRange;                                              // 0x0084 (size: 0x10)
    int32 HierarchicalBias;                                                           // 0x0094 (size: 0x4)
    FMovieSceneSequenceInstanceDataPtr InstanceData;                                  // 0x0098 (size: 0x18)
    char padding_0[0x8];                                                              // 0x00B0 (size: 0x8)
    FGuid SubSectionSignature;                                                        // 0x00B8 (size: 0x10)
    FMovieSceneSequenceTransform OuterToInnerTransform;                               // 0x00C8 (size: 0x20)

}; // Size: 0xE8

struct FMovieSceneTangentData
{
    float ArriveTangent;                                                              // 0x0000 (size: 0x4)
    float LeaveTangent;                                                               // 0x0004 (size: 0x4)
    float ArriveTangentWeight;                                                        // 0x0008 (size: 0x4)
    float LeaveTangentWeight;                                                         // 0x000C (size: 0x4)
    TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;                       // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FMovieSceneTemplateGenerationLedger
{
    FMovieSceneTrackIdentifier LastTrackIdentifier;                                   // 0x0000 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0004 (size: 0x4)
    TMap<class FGuid, class FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x0008 (size: 0x50)
    TMap<class FGuid, class FMovieSceneFrameRange> SubSectionRanges;                  // 0x0058 (size: 0x50)

}; // Size: 0xA8

struct FMovieSceneTimeTransform
{
    float TimeScale;                                                                  // 0x0000 (size: 0x4)
    FFrameTime Offset;                                                                // 0x0004 (size: 0x8)

}; // Size: 0xC

struct FMovieSceneTimeWarping
{
    FFrameNumber Start;                                                               // 0x0000 (size: 0x4)
    FFrameNumber End;                                                                 // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMovieSceneTimecodeSource
{
    FTimecode Timecode;                                                               // 0x0000 (size: 0x14)
    FFrameNumber DeltaFrame;                                                          // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FMovieSceneTrackDisplayOptions
{
    uint8 bShowVerticalFrames;                                                        // 0x0000 (size: 0x1)

}; // Size: 0x4

struct FMovieSceneTrackEvalOptions
{
    uint8 bCanEvaluateNearestSection;                                                 // 0x0000 (size: 0x1)
    uint8 bEvalNearestSection;                                                        // 0x0000 (size: 0x1)
    uint8 bEvaluateInPreroll;                                                         // 0x0000 (size: 0x1)
    uint8 bEvaluateInPostroll;                                                        // 0x0000 (size: 0x1)
    uint8 bEvaluateNearestSection;                                                    // 0x0000 (size: 0x1)

}; // Size: 0x4

struct FMovieSceneTrackFieldData
{
    char padding_0[0x60];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x60

struct FMovieSceneTrackIdentifier
{
    uint32 Value;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{
    char padding_0[0x10];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x10

struct FMovieSceneTrackImplementationPtr
{
    char padding_0[0x38];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x38

struct FMovieSceneTrackLabels
{
    TArray<FString> Strings;                                                          // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMovieSceneWarpCounter
{
    TArray<uint32> WarpCounts;                                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FOptionalMovieSceneBlendType
{
    EMovieSceneBlendType BlendType;                                                   // 0x0000 (size: 0x1)
    bool bIsValid;                                                                    // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FSectionEvaluationData
{
    int32 ImplIndex;                                                                  // 0x0000 (size: 0x4)
    FFrameNumber ForcedTime;                                                          // 0x0004 (size: 0x4)
    ESectionEvaluationFlags Flags;                                                    // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FSectionEvaluationDataTree
{
    char padding_0[0x60];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x60

struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{
    char padding_0[0x20];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x20

class IMovieSceneBindingOwnerInterface : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class IMovieSceneCustomClockSource : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void OnTick(float DeltaSeconds, float InPlayRate);
    void OnStopPlaying(const FQualifiedFrameTime& InStopTime);
    void OnStartPlaying(const FQualifiedFrameTime& InStartTime);
    FFrameTime OnRequestCurrentTime(const FQualifiedFrameTime& InCurrentTime, float InPlayRate);
}; // Size: 0x28

class IMovieSceneEasingFunction : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    float OnEvaluate(float Interp);
}; // Size: 0x28

class IMovieSceneKeyProxy : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class IMovieScenePlaybackClient : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UMovieScene : public UMovieSceneSignedObject
{
    TArray<FMovieSceneSpawnable> Spawnables;                                          // 0x0050 (size: 0x10)
    TArray<FMovieScenePossessable> Possessables;                                      // 0x0060 (size: 0x10)
    TArray<FMovieSceneBinding> ObjectBindings;                                        // 0x0070 (size: 0x10)
    TMap<class FName, class FMovieSceneObjectBindingIDs> BindingGroups;               // 0x0080 (size: 0x50)
    TArray<class UMovieSceneTrack*> MasterTracks;                                     // 0x00D0 (size: 0x10)
    class UMovieSceneTrack* CameraCutTrack;                                           // 0x00E0 (size: 0x8)
    FMovieSceneFrameRange SelectionRange;                                             // 0x00E8 (size: 0x10)
    FMovieSceneFrameRange PlaybackRange;                                              // 0x00F8 (size: 0x10)
    FFrameRate TickResolution;                                                        // 0x0108 (size: 0x8)
    FFrameRate DisplayRate;                                                           // 0x0110 (size: 0x8)
    EMovieSceneEvaluationType EvaluationType;                                         // 0x0118 (size: 0x1)
    EUpdateClockSource ClockSource;                                                   // 0x0119 (size: 0x1)
    char padding_0[0x6];                                                              // 0x011A (size: 0x6)
    FSoftObjectPath CustomClockSourcePath;                                            // 0x0120 (size: 0x18)
    TArray<FMovieSceneMarkedFrame> MarkedFrames;                                      // 0x0138 (size: 0x10)

}; // Size: 0x148

class UMovieSceneBindingOverrides : public UObject
{
    TArray<FMovieSceneBindingOverrideData> BindingData;                               // 0x0028 (size: 0x10)

}; // Size: 0x90

class UMovieSceneBuiltInEasingFunction : public UObject
{
    EMovieSceneBuiltInEasing Type;                                                    // 0x0030 (size: 0x1)

}; // Size: 0x38

class UMovieSceneEasingExternalCurve : public UObject
{
    class UCurveFloat* Curve;                                                         // 0x0030 (size: 0x8)

}; // Size: 0x38

class UMovieSceneFolder : public UObject
{
    FName FolderName;                                                                 // 0x0028 (size: 0x8)
    TArray<class UMovieSceneFolder*> ChildFolders;                                    // 0x0030 (size: 0x10)
    TArray<class UMovieSceneTrack*> ChildMasterTracks;                                // 0x0040 (size: 0x10)
    TArray<FString> ChildObjectBindingStrings;                                        // 0x0050 (size: 0x10)

}; // Size: 0x70

class UMovieSceneNameableTrack : public UMovieSceneTrack
{
    char padding_0[0x58];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x58

class UMovieSceneSection : public UMovieSceneSignedObject
{
    FMovieSceneSectionEvalOptions EvalOptions;                                        // 0x0050 (size: 0x2)
    char padding_0[0x6];                                                              // 0x0052 (size: 0x6)
    FMovieSceneEasingSettings Easing;                                                 // 0x0058 (size: 0x38)
    FMovieSceneFrameRange SectionRange;                                               // 0x0090 (size: 0x10)
    FFrameNumber PreRollFrames;                                                       // 0x00A0 (size: 0x4)
    FFrameNumber PostRollFrames;                                                      // 0x00A4 (size: 0x4)
    int32 RowIndex;                                                                   // 0x00A8 (size: 0x4)
    int32 OverlapPriority;                                                            // 0x00AC (size: 0x4)
    uint8 bIsActive;                                                                  // 0x00B0 (size: 0x1)
    uint8 bIsLocked;                                                                  // 0x00B0 (size: 0x1)
    char padding_1[0x3];                                                              // 0x00B1 (size: 0x3)
    float StartTime;                                                                  // 0x00B4 (size: 0x4)
    float EndTime;                                                                    // 0x00B8 (size: 0x4)
    float PrerollTime;                                                                // 0x00BC (size: 0x4)
    float PostrollTime;                                                               // 0x00C0 (size: 0x4)
    uint8 bIsInfinite;                                                                // 0x00C4 (size: 0x1)
    char padding_2[0x3];                                                              // 0x00C5 (size: 0x3)
    bool bSupportsInfiniteRange;                                                      // 0x00C8 (size: 0x1)
    FOptionalMovieSceneBlendType BlendType;                                           // 0x00C9 (size: 0x2)

    void SetRowIndex(int32 NewRowIndex);
    void SetPreRollFrames(int32 InPreRollFrames);
    void SetPostRollFrames(int32 InPostRollFrames);
    void SetOverlapPriority(int32 NewPriority);
    void SetIsLocked(bool bInIsLocked);
    void SetIsActive(bool bInIsActive);
    void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);
    void SetBlendType(EMovieSceneBlendType InBlendType);
    bool IsLocked();
    bool IsActive();
    int32 GetRowIndex();
    int32 GetPreRollFrames();
    int32 GetPostRollFrames();
    int32 GetOverlapPriority();
    EMovieSceneCompletionMode GetCompletionMode();
    FOptionalMovieSceneBlendType GetBlendType();
}; // Size: 0xE0

class UMovieSceneSequence : public UMovieSceneSignedObject
{
    FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate;                      // 0x0050 (size: 0x2F0)
    EMovieSceneCompletionMode DefaultCompletionMode;                                  // 0x0340 (size: 0x1)
    bool bParentContextsAreSignificant;                                               // 0x0341 (size: 0x1)
    bool bPlayableDirectly;                                                           // 0x0342 (size: 0x1)

    TArray<FMovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName);
    FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName);
}; // Size: 0x348

class UMovieSceneSequencePlayer : public UObject
{
    FMovieSceneSequencePlayerOnPlay OnPlay;                                           // 0x0408 (size: 0x10)
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnPlayReverse OnPlayReverse;                             // 0x0418 (size: 0x10)
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnStop OnStop;                                           // 0x0428 (size: 0x10)
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnPause OnPause;                                         // 0x0438 (size: 0x10)
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnFinished OnFinished;                                   // 0x0448 (size: 0x10)
    void OnMovieSceneSequencePlayerEvent();
    TEnumAsByte<EMovieScenePlayerStatus::Type> Status;                                // 0x0458 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0459 (size: 0x3)
    uint8 bReversePlayback;                                                           // 0x045C (size: 0x1)
    char padding_1[0x3];                                                              // 0x045D (size: 0x3)
    class UMovieSceneSequence* Sequence;                                              // 0x0460 (size: 0x8)
    FFrameNumber StartTime;                                                           // 0x0468 (size: 0x4)
    int32 DurationFrames;                                                             // 0x046C (size: 0x4)
    int32 CurrentNumLoops;                                                            // 0x0470 (size: 0x4)
    char padding_2[0x14];                                                             // 0x0474 (size: 0x14)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;                             // 0x0488 (size: 0x14)
    char padding_3[0x4];                                                              // 0x049C (size: 0x4)
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                   // 0x04A0 (size: 0x320)
    char padding_4[0x68];                                                             // 0x07C0 (size: 0x68)
    FMovieSceneSequenceReplProperties NetSyncProps;                                   // 0x0828 (size: 0x10)
    TScriptInterface<class IMovieScenePlaybackClient> PlaybackClient;                 // 0x0838 (size: 0x10)

    void StopAtCurrentTime();
    void Stop();
    void SetTimeRange(float StartTime, float Duration);
    void SetPlayRate(float PlayRate);
    void SetPlaybackRange(const float NewStartTime, const float NewEndTime);
    void SetPlaybackPosition(float NewPlaybackPosition);
    void SetFrameRate(FFrameRate FrameRate);
    void SetFrameRange(int32 StartFrame, int32 Duration);
    void SetDisableCameraCuts(bool bInDisableCameraCuts);
    void ScrubToSeconds(float TimeInSeconds);
    bool ScrubToMarkedFrame(FString InLabel);
    void ScrubToFrame(FFrameTime NewPosition);
    void Scrub();
    void RPC_OnStopEvent(FFrameTime StoppedTime);
    void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, FFrameTime RelevantTime);
    void PlayToSeconds(float TimeInSeconds);
    bool PlayToMarkedFrame(FString InLabel);
    void PlayToFrame(FFrameTime NewPosition);
    void PlayReverse();
    void PlayLooping(int32 NumLoops);
    void Play();
    void Pause();
    void JumpToSeconds(float TimeInSeconds);
    void JumpToPosition(float NewPlaybackPosition);
    bool JumpToMarkedFrame(FString InLabel);
    void JumpToFrame(FFrameTime NewPosition);
    bool IsReversed();
    bool IsPlaying();
    bool IsPaused();
    void GoToEndAndStop();
    FQualifiedFrameTime GetStartTime();
    float GetPlayRate();
    float GetPlaybackStart();
    float GetPlaybackPosition();
    float GetPlaybackEnd();
    TArray<FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
    float GetLength();
    FFrameRate GetFrameRate();
    int32 GetFrameDuration();
    FQualifiedFrameTime GetEndTime();
    FQualifiedFrameTime GetDuration();
    bool GetDisableCameraCuts();
    FQualifiedFrameTime GetCurrentTime();
    TArray<class UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);
    void ChangePlaybackDirection();
}; // Size: 0x888

class UMovieSceneSignedObject : public UObject
{
    FGuid Signature;                                                                  // 0x0028 (size: 0x10)

}; // Size: 0x50

class UMovieSceneSubSection : public UMovieSceneSection
{
    FMovieSceneSectionParameters Parameters;                                          // 0x00E0 (size: 0x24)
    float StartOffset;                                                                // 0x0104 (size: 0x4)
    float TimeScale;                                                                  // 0x0108 (size: 0x4)
    float PrerollTime;                                                                // 0x010C (size: 0x4)
    class UMovieSceneSequence* SubSequence;                                           // 0x0110 (size: 0x8)
    TLazyObjectPtr<class AActor> ActorToRecord;                                       // 0x0118 (size: 0x1C)
    char padding_0[0x4];                                                              // 0x0134 (size: 0x4)
    FString TargetSequenceName;                                                       // 0x0138 (size: 0x10)
    FDirectoryPath TargetPathToRecordTo;                                              // 0x0148 (size: 0x10)

    void SetSequence(class UMovieSceneSequence* Sequence);
    class UMovieSceneSequence* GetSequence();
}; // Size: 0x158

class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0058 (size: 0x10)

}; // Size: 0x68

class UMovieSceneTrack : public UMovieSceneSignedObject
{
    FMovieSceneTrackEvalOptions EvalOptions;                                          // 0x0050 (size: 0x4)
    char padding_0[0x1];                                                              // 0x0054 (size: 0x1)
    bool bIsEvalDisabled;                                                             // 0x0055 (size: 0x1)

}; // Size: 0x58

class UTestMovieSceneSection : public UMovieSceneSection
{
    char padding_0[0xE0];                                                             // 0x0000 (size: 0x0)
}; // Size: 0xE0

class UTestMovieSceneSequence : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;                                                    // 0x0348 (size: 0x8)

}; // Size: 0x350

class UTestMovieSceneSubSection : public UMovieSceneSubSection
{
    char padding_0[0x158];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x158

class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{
    TArray<class UMovieSceneSection*> SectionArray;                                   // 0x0068 (size: 0x10)

}; // Size: 0x78

class UTestMovieSceneTrack : public UMovieSceneTrack
{
    bool bHighPassFilter;                                                             // 0x0058 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0059 (size: 0x7)
    TArray<class UMovieSceneSection*> SectionArray;                                   // 0x0060 (size: 0x10)

}; // Size: 0x70

#endif
