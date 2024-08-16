#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EMagicLeapPassableWorldError.h"
#include "MagicLeapARPinState.h"
#include "MagicLeapARPinUpdatedDelegateDelegate.h"
#include "MagicLeapARPinFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MAGICLEAPARPIN_API UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapARPinFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnBindToOnMagicLeapARPinUpdatedDelegate(const FMagicLeapARPinUpdatedDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTrackerValid();
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError GetNumAvailableARPins(int32& Count);
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError GetClosestARPin(const FVector& SearchPoint, FGuid& PinID);
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError GetAvailableARPins(int32 NumRequested, TArray<FGuid>& Pins);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetARPinStateToString(const FMagicLeapARPinState& State);
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError GetARPinState(const FGuid& PinID, FMagicLeapARPinState& State);
    
    UFUNCTION(BlueprintCallable)
    static bool GetARPinPositionAndOrientation_TrackingSpace(const FGuid& PinID, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment);
    
    UFUNCTION(BlueprintCallable)
    static bool GetARPinPositionAndOrientation(const FGuid& PinID, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment);
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError DestroyTracker();
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError CreateTracker();
    
    UFUNCTION(BlueprintCallable)
    static void BindToOnMagicLeapARPinUpdatedDelegate(const FMagicLeapARPinUpdatedDelegate& Delegate);
    
};

