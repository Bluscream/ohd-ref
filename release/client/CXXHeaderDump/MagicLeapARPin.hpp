#ifndef UE4SS_SDK_MagicLeapARPin_HPP
#define UE4SS_SDK_MagicLeapARPin_HPP

#include "MagicLeapARPin_enums.hpp"

struct FMagicLeapARPinState
{
    float Confidence;                                                                 // 0x0000 (size: 0x4)
    float ValidRadius;                                                                // 0x0004 (size: 0x4)
    float RotationError;                                                              // 0x0008 (size: 0x4)
    float TranslationError;                                                           // 0x000C (size: 0x4)

}; // Size: 0x10

class UMagicLeapARPinComponent : public USceneComponent
{
    FString ObjectUID;                                                                // 0x01F0 (size: 0x10)
    int32 UserIndex;                                                                  // 0x0200 (size: 0x4)
    EMagicLeapAutoPinType AutoPinType;                                                // 0x0204 (size: 0x1)
    bool bShouldPinActor;                                                             // 0x0205 (size: 0x1)
    char padding_0[0x2];                                                              // 0x0206 (size: 0x2)
    TSubclassOf<class UMagicLeapARPinSaveGame> PinDataClass;                          // 0x0208 (size: 0x8)
    FMagicLeapARPinComponentOnPersistentEntityPinned OnPersistentEntityPinned;        // 0x0210 (size: 0x10)
    void PersistentEntityPinned(bool bRestoredOrSynced);
    FMagicLeapARPinComponentOnPersistentEntityPinLost OnPersistentEntityPinLost;      // 0x0220 (size: 0x10)
    void PersistentEntityPinLost();
    FGuid PinnedCFUID;                                                                // 0x0230 (size: 0x10)
    class USceneComponent* PinnedSceneComponent;                                      // 0x0240 (size: 0x8)
    class UMagicLeapARPinSaveGame* PinData;                                           // 0x0248 (size: 0x8)

    void UnPin();
    bool PinSceneComponent(class USceneComponent* ComponentToPin);
    bool PinRestoredOrSynced();
    bool PinActor(class AActor* ActorToPin);
    void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
    void PersistentEntityPinLost__DelegateSignature();
    bool IsPinned();
    bool GetPinState(FMagicLeapARPinState& State);
    bool GetPinnedPinID(FGuid& PinID);
    class UMagicLeapARPinSaveGame* GetPinData(TSubclassOf<class UMagicLeapARPinSaveGame> PinDataClass);
}; // Size: 0x320

class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void UnBindToOnMagicLeapARPinUpdatedDelegate(const FUnBindToOnMagicLeapARPinUpdatedDelegateDelegate& Delegate);
    bool IsTrackerValid();
    EMagicLeapPassableWorldError GetNumAvailableARPins(int32& Count);
    EMagicLeapPassableWorldError GetClosestARPin(const FVector& SearchPoint, FGuid& PinID);
    EMagicLeapPassableWorldError GetAvailableARPins(int32 NumRequested, TArray<FGuid>& Pins);
    FString GetARPinStateToString(const FMagicLeapARPinState& State);
    EMagicLeapPassableWorldError GetARPinState(const FGuid& PinID, FMagicLeapARPinState& State);
    bool GetARPinPositionAndOrientation_TrackingSpace(const FGuid& PinID, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment);
    bool GetARPinPositionAndOrientation(const FGuid& PinID, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment);
    EMagicLeapPassableWorldError DestroyTracker();
    EMagicLeapPassableWorldError CreateTracker();
    void BindToOnMagicLeapARPinUpdatedDelegate(const FBindToOnMagicLeapARPinUpdatedDelegateDelegate& Delegate);
}; // Size: 0x28

class UMagicLeapARPinSaveGame : public USaveGame
{
    FGuid PinnedID;                                                                   // 0x0028 (size: 0x10)
    char padding_0[0x8];                                                              // 0x0038 (size: 0x8)
    FTransform ComponentWorldTransform;                                               // 0x0040 (size: 0x30)
    FTransform PinTransform;                                                          // 0x0070 (size: 0x30)

}; // Size: 0xA0

class UMagicLeapARPinSettings : public UObject
{
    float UpdateCheckFrequency;                                                       // 0x0028 (size: 0x4)
    FMagicLeapARPinState OnUpdatedEventTriggerDelta;                                  // 0x002C (size: 0x10)

}; // Size: 0x40

#endif
