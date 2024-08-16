#ifndef UE4SS_SDK_ActorSequence_HPP
#define UE4SS_SDK_ActorSequence_HPP

#include "ActorSequence_enums.hpp"

struct FActorSequenceObjectReference
{
    EActorSequenceObjectReferenceType Type;                                           // 0x0000 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0001 (size: 0x3)
    FGuid ActorId;                                                                    // 0x0004 (size: 0x10)
    char padding_1[0x4];                                                              // 0x0014 (size: 0x4)
    FString PathToComponent;                                                          // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FActorSequenceObjectReferenceMap
{
    TArray<FGuid> BindingIds;                                                         // 0x0000 (size: 0x10)
    TArray<FActorSequenceObjectReferences> References;                                // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FActorSequenceObjectReferences
{
    TArray<FActorSequenceObjectReference> Array;                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

class UActorSequence : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;                                                    // 0x0348 (size: 0x8)
    FActorSequenceObjectReferenceMap ObjectReferences;                                // 0x0350 (size: 0x20)

}; // Size: 0x370

class UActorSequenceComponent : public UActorComponent
{
    FMovieSceneSequencePlaybackSettings PlaybackSettings;                             // 0x00B0 (size: 0x14)
    char padding_0[0x4];                                                              // 0x00C4 (size: 0x4)
    class UActorSequence* Sequence;                                                   // 0x00C8 (size: 0x8)
    class UActorSequencePlayer* SequencePlayer;                                       // 0x00D0 (size: 0x8)

}; // Size: 0xD8

class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
    char padding_0[0x888];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x888

#endif
