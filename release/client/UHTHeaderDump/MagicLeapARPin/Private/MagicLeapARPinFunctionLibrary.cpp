#include "MagicLeapARPinFunctionLibrary.h"

UMagicLeapARPinFunctionLibrary::UMagicLeapARPinFunctionLibrary() {
}

void UMagicLeapARPinFunctionLibrary::UnBindToOnMagicLeapARPinUpdatedDelegate(const FMagicLeapARPinUpdatedDelegate& Delegate) {
}

bool UMagicLeapARPinFunctionLibrary::IsTrackerValid() {
    return false;
}

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetNumAvailableARPins(int32& Count) {
    return EMagicLeapPassableWorldError::None;
}

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetClosestARPin(const FVector& SearchPoint, FGuid& PinID) {
    return EMagicLeapPassableWorldError::None;
}

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetAvailableARPins(int32 NumRequested, TArray<FGuid>& Pins) {
    return EMagicLeapPassableWorldError::None;
}

FString UMagicLeapARPinFunctionLibrary::GetARPinStateToString(const FMagicLeapARPinState& State) {
    return TEXT("");
}

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetARPinState(const FGuid& PinID, FMagicLeapARPinState& State) {
    return EMagicLeapPassableWorldError::None;
}

bool UMagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation_TrackingSpace(const FGuid& PinID, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment) {
    return false;
}

bool UMagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation(const FGuid& PinID, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment) {
    return false;
}

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::DestroyTracker() {
    return EMagicLeapPassableWorldError::None;
}

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::CreateTracker() {
    return EMagicLeapPassableWorldError::None;
}

void UMagicLeapARPinFunctionLibrary::BindToOnMagicLeapARPinUpdatedDelegate(const FMagicLeapARPinUpdatedDelegate& Delegate) {
}


