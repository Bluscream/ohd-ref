#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Plane -FallbackName=Plane
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetId -FallbackName=PrimaryAssetId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetType -FallbackName=PrimaryAssetType
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BlueprintFunctionLibrary.h"
#include "CollisionProfileName.h"
#include "DebugFloatHistory.h"
#include "EDrawDebugTrace.h"
#include "EMoveComponentAction.h"
#include "EObjectTypeQuery.h"
#include "EQuitPreference.h"
#include "ETraceTypeQuery.h"
#include "GenericStruct.h"
#include "HitResult.h"
#include "LatentActionInfo.h"
#include "Templates/SubclassOf.h"
#include "TimerDynamicDelegateDelegate.h"
#include "TimerHandle.h"
#include "UserActivity.h"
#include "KismetSystemLibrary.generated.h"

class AActor;
class ACameraActor;
class APlayerController;
class IInterface;
class UInterface;
class UObject;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ENGINE_API UKismetSystemLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAssetLoaded, UObject*, Loaded);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAssetClassLoaded, UClass*, Loaded);
    
    UKismetSystemLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnregisterForRemoteNotifications();
    
    UFUNCTION(BlueprintCallable)
    static void UnloadPrimaryAssetList(const TArray<FPrimaryAssetId>& PrimaryAssetIdList);
    
    UFUNCTION(BlueprintCallable)
    static void UnloadPrimaryAsset(FPrimaryAssetId PrimaryAssetId);
    
    UFUNCTION(BlueprintCallable)
    static void TransactObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void StackTrace();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SphereTraceSingleForObjects(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SphereTraceSingleByProfile(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SphereTraceSingle(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SphereTraceMultiForObjects(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SphereTraceMultiByProfile(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SphereTraceMulti(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SphereOverlapComponents(UObject* WorldContextObject, const FVector SpherePos, float SphereRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SphereOverlapActors(UObject* WorldContextObject, const FVector SpherePos, float SphereRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static void SnapshotObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void ShowPlatformSpecificLeaderboardScreen(const FString& CategoryName);
    
    UFUNCTION(BlueprintCallable)
    static void ShowPlatformSpecificAchievementsScreen(APlayerController* SpecificPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void ShowInterstitialAd();
    
    UFUNCTION(BlueprintCallable)
    static void ShowAdBanner(int32 AdIdIndex, bool bShowOnBottomOfScreen);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowTitle(const FText& Title);
    
    UFUNCTION(BlueprintCallable)
    static void SetVolumeButtonsHandledBySystem(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetVectorPropertyByName(UObject* Object, FName PropertyName, const FVector& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetUserActivity(const FUserActivity& UserActivity);
    
    UFUNCTION(BlueprintCallable)
    static void SetTransformPropertyByName(UObject* Object, FName PropertyName, const FTransform& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextPropertyByName(UObject* Object, FName PropertyName, const FText& Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSuppressViewportTransitionMessage(UObject* WorldContextObject, bool bState);
    
    UFUNCTION(BlueprintCallable)
    static void SetStructurePropertyByName(UObject* Object, FName PropertyName, const FGenericStruct& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetStringPropertyByName(UObject* Object, FName PropertyName, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSoftObjectPropertyByName(UObject* Object, FName PropertyName, const TSoftObjectPtr<UObject>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSoftClassPropertyByName(UObject* Object, FName PropertyName, const TSoftClassPtr<UObject>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetRotatorPropertyByName(UObject* Object, FName PropertyName, const FRotator& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetObjectPropertyByName(UObject* Object, FName PropertyName, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetNamePropertyByName(UObject* Object, FName PropertyName, const FName& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetLinearColorPropertyByName(UObject* Object, FName PropertyName, const FLinearColor& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetIntPropertyByName(UObject* Object, FName PropertyName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInterfacePropertyByName(UObject* Object, FName PropertyName, const FScriptInterface& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInt64PropertyByName(UObject* Object, FName PropertyName, int64 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetGamepadsBlockDeviceFeedback(bool bBlock);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatPropertyByName(UObject* Object, FName PropertyName, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFieldPathPropertyByName(UObject* Object, FName PropertyName, const TFieldPath<FField>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetCollisionProfileNameProperty(UObject* Object, FName PropertyName, const FCollisionProfileName& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetClassPropertyByName(UObject* Object, FName PropertyName, UClass* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBytePropertyByName(UObject* Object, FName PropertyName, uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoolPropertyByName(UObject* Object, FName PropertyName, bool Value);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void RetriggerableDelay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void ResetGamepadAssignmentToController(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable)
    static void ResetGamepadAssignments();
    
    UFUNCTION(BlueprintCallable)
    static void RegisterForRemoteNotifications();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void QuitGame(UObject* WorldContextObject, APlayerController* SpecificPlayer, TEnumAsByte<EQuitPreference::Type> QuitPreference, bool bIgnorePlatformRestrictions);
    
    UFUNCTION(BlueprintCallable)
    static void PrintWarning(const FString& inString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintText(UObject* WorldContextObject, const FText InText, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintString(UObject* WorldContextObject, const FString& inString, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_SoftObjectReference(const TSoftObjectPtr<UObject>& A, const TSoftObjectPtr<UObject>& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_SoftClassReference(const TSoftClassPtr<UObject>& A, const TSoftClassPtr<UObject>& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_PrimaryAssetType(FPrimaryAssetType A, FPrimaryAssetType B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_PrimaryAssetId(FPrimaryAssetId A, FPrimaryAssetId B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString NormalizeFilename(const FString& InFilename);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void MoveComponentTo(USceneComponent* Component, FVector TargetRelativeLocation, FRotator TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<EMoveComponentAction::Type> MoveAction, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSoftObjectPath MakeSoftObjectPath(const FString& PathString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSoftClassPath MakeSoftClassPath(const FString& PathString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText MakeLiteralText(FText Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString MakeLiteralString(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MakeLiteralName(FName Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 MakeLiteralInt(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float MakeLiteralFloat(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 MakeLiteralByte(uint8 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MakeLiteralBool(bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void LoadInterstitialAd(int32 AdIdIndex);
    
    UFUNCTION(BlueprintCallable)
    static UClass* LoadClassAsset_Blocking(TSoftClassPtr<UObject> AssetClass);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadAssetClass(UObject* WorldContextObject, TSoftClassPtr<UObject> AssetClass, UKismetSystemLibrary::FOnAssetClassLoaded OnLoaded, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static UObject* LoadAsset_Blocking(TSoftObjectPtr<UObject> Asset);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadAsset(UObject* WorldContextObject, TSoftObjectPtr<UObject> Asset, UKismetSystemLibrary::FOnAssetLoaded OnLoaded, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LineTraceSingleForObjects(UObject* WorldContextObject, const FVector Start, const FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LineTraceSingleByProfile(UObject* WorldContextObject, const FVector Start, const FVector End, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LineTraceSingle(UObject* WorldContextObject, const FVector Start, const FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LineTraceMultiForObjects(UObject* WorldContextObject, const FVector Start, const FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LineTraceMultiByProfile(UObject* WorldContextObject, const FVector Start, const FVector End, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LineTraceMulti(UObject* WorldContextObject, const FVector Start, const FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static void LaunchURL(const FString& URL);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_UnPauseTimerHandle(UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void K2_UnPauseTimerDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void K2_UnPauseTimer(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool K2_TimerExistsHandle(UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_TimerExistsDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_TimerExists(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable)
    static FTimerHandle K2_SetTimerDelegate(FTimerDynamicDelegate Delegate, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);
    
    UFUNCTION(BlueprintCallable)
    static FTimerHandle K2_SetTimer(UObject* Object, const FString& FunctionName, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_PauseTimerHandle(UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void K2_PauseTimerDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void K2_PauseTimer(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_IsValidTimerHandle(FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool K2_IsTimerPausedHandle(UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_IsTimerPausedDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_IsTimerPaused(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool K2_IsTimerActiveHandle(UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_IsTimerActiveDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_IsTimerActive(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable)
    static FTimerHandle K2_InvalidateTimerHandle(UPARAM(Ref) FTimerHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float K2_GetTimerRemainingTimeHandle(UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float K2_GetTimerRemainingTimeDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float K2_GetTimerRemainingTime(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float K2_GetTimerElapsedTimeHandle(UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float K2_GetTimerElapsedTimeDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float K2_GetTimerElapsedTime(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_ClearTimerHandle(UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void K2_ClearTimerDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void K2_ClearTimer(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_ClearAndInvalidateTimerHandle(UObject* WorldContextObject, UPARAM(Ref) FTimerHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidSoftObjectReference(const TSoftObjectPtr<UObject>& SoftObjectReference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidSoftClassReference(const TSoftClassPtr<UObject>& SoftClassReference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidPrimaryAssetType(FPrimaryAssetType PrimaryAssetType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidClass(UClass* Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUnattended();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsStandalone(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSplitScreen(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsServer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsScreensaverEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPackagedForDistribution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLoggedIn(APlayerController* SpecificPlayer);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInterstitialAdRequested();
    
    UFUNCTION(BlueprintCallable)
    static bool IsInterstitialAdAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDedicatedServer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsControllerAssignedToGamepad(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable)
    static void HideAdBanner();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetVolumeButtonsHandledBySystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetUniqueDeviceId();
    
    UFUNCTION(BlueprintCallable)
    static bool GetSupportedFullscreenResolutions(TArray<FIntPoint>& Resolutions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<UObject> GetSoftObjectReferenceFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftClassPtr<UObject> GetSoftClassReferenceFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRenderingMaterialQualityLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRenderingDetailMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectSavedDirectory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectDirectory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectContentDirectory();
    
    UFUNCTION(BlueprintCallable)
    static void GetPrimaryAssetsWithBundleState(const TArray<FName>& RequiredBundles, const TArray<FName>& ExcludedBundles, const TArray<FPrimaryAssetType>& ValidTypes, bool bForceCurrentState, TArray<FPrimaryAssetId>& OutPrimaryAssetIdList);
    
    UFUNCTION(BlueprintCallable)
    static void GetPrimaryAssetIdList(FPrimaryAssetType PrimaryAssetType, TArray<FPrimaryAssetId>& OutPrimaryAssetIdList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPrimaryAssetId GetPrimaryAssetIdFromSoftObjectReference(TSoftObjectPtr<UObject> SoftObjectReference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPrimaryAssetId GetPrimaryAssetIdFromSoftClassReference(TSoftClassPtr<UObject> SoftClassReference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPrimaryAssetId GetPrimaryAssetIdFromObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPrimaryAssetId GetPrimaryAssetIdFromClass(UClass* Class);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetPreferredLanguages();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlatformUserName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlatformUserDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPathName(const UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetOuterObject(const UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetObjectName(const UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetObjectFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMinYResolutionForUI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMinYResolutionFor3DView();
    
    UFUNCTION(BlueprintCallable)
    static FString GetLocalCurrencySymbol();
    
    UFUNCTION(BlueprintCallable)
    static FString GetLocalCurrencyCode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetGameTimeInSeconds(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGamepadControllerName(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGameName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGameBundleId();
    
    UFUNCTION(BlueprintPure)
    static int64 GetFrameCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetEngineVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDisplayName(const UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDeviceId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDefaultLocale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDefaultLanguage();
    
    UFUNCTION(BlueprintCallable)
    static bool GetCurrentBundleState(FPrimaryAssetId PrimaryAssetId, bool bForceCurrentState, TArray<FName>& OutBundles);
    
    UFUNCTION(BlueprintCallable)
    static bool GetConvenientWindowedResolutions(TArray<FIntPoint>& Resolutions);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetConsoleVariableIntValue(const FString& VariableName);
    
    UFUNCTION(BlueprintCallable)
    static float GetConsoleVariableFloatValue(const FString& VariableName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetConsoleVariableBoolValue(const FString& VariableName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetComponentBounds(const USceneComponent* Component, FVector& Origin, FVector& BoxExtent, float& SphereRadius);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCommandLine();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* GetClassFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetClassDisplayName(UClass* Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAdIDCount();
    
    UFUNCTION(BlueprintCallable)
    static void GetActorListFromComponentList(const TArray<UPrimitiveComponent*>& ComponentList, UClass* ActorClassFilter, TArray<AActor*>& OutActorList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetActorBounds(const AActor* Actor, FVector& Origin, FVector& BoxExtent);
    
    UFUNCTION(BlueprintCallable)
    static void ForceCloseAdBanner();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FlushPersistentDebugLines(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FlushDebugStrings(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ExecuteConsoleCommand(UObject* WorldContextObject, const FString& Command, APlayerController* SpecificPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_SoftObjectReference(const TSoftObjectPtr<UObject>& A, const TSoftObjectPtr<UObject>& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_SoftClassReference(const TSoftClassPtr<UObject>& A, const TSoftClassPtr<UObject>& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_PrimaryAssetType(FPrimaryAssetType A, FPrimaryAssetType B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_PrimaryAssetId(FPrimaryAssetId A, FPrimaryAssetId B);
    
    UFUNCTION(BlueprintCallable)
    static int32 EndTransaction();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugString(UObject* WorldContextObject, const FVector TextLocation, const FString& Text, AActor* TestBaseActor, FLinearColor TextColor, float Duration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugSphere(UObject* WorldContextObject, const FVector Center, float Radius, int32 Segments, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugPoint(UObject* WorldContextObject, const FVector Position, float Size, FLinearColor PointColor, float Duration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugPlane(UObject* WorldContextObject, const FPlane& PlaneCoordinates, const FVector Location, float Size, FLinearColor PlaneColor, float Duration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugLine(UObject* WorldContextObject, const FVector LineStart, const FVector LineEnd, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugFrustum(UObject* WorldContextObject, const FTransform& FrustumTransform, FLinearColor FrustumColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugFloatHistoryTransform(UObject* WorldContextObject, const FDebugFloatHistory& FloatHistory, const FTransform& DrawTransform, FVector2D DrawSize, FLinearColor DrawColor, float Duration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugFloatHistoryLocation(UObject* WorldContextObject, const FDebugFloatHistory& FloatHistory, FVector DrawLocation, FVector2D DrawSize, FLinearColor DrawColor, float Duration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugCylinder(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, int32 Segments, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugCoordinateSystem(UObject* WorldContextObject, const FVector AxisLoc, const FRotator AxisRot, float Scale, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugConeInDegrees(UObject* WorldContextObject, const FVector Origin, const FVector Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugCone(UObject* WorldContextObject, const FVector Origin, const FVector Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugCircle(UObject* WorldContextObject, FVector Center, float Radius, int32 NumSegments, FLinearColor LineColor, float Duration, float Thickness, FVector YAxis, FVector ZAxis, bool bDrawAxis);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugCapsule(UObject* WorldContextObject, const FVector Center, float HalfHeight, float Radius, const FRotator Rotation, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugCamera(const ACameraActor* CameraActor, FLinearColor CameraColor, float Duration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugBox(UObject* WorldContextObject, const FVector Center, FVector Extent, FLinearColor LineColor, const FRotator Rotation, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugArrow(UObject* WorldContextObject, const FVector LineStart, const FVector LineEnd, float ArrowSize, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesImplementInterface(UObject* TestObject, TSubclassOf<UInterface> Interface);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void Delay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void CreateCopyForUndoBuffer(UObject* ObjectToModify);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertToRelativePath(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertToAbsolutePath(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<UObject> Conv_SoftObjPathToSoftObjRef(const FSoftObjectPath& SoftObjectPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_SoftObjectReferenceToString(const TSoftObjectPtr<UObject>& SoftObjectReference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* Conv_SoftObjectReferenceToObject(const TSoftObjectPtr<UObject>& SoftObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_SoftClassReferenceToString(const TSoftClassPtr<UObject>& SoftClassReference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* Conv_SoftClassReferenceToClass(const TSoftClassPtr<UObject>& SoftClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftClassPtr<UObject> Conv_SoftClassPathToSoftClassRef(const FSoftClassPath& SoftClassPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_PrimaryAssetTypeToString(FPrimaryAssetType PrimaryAssetType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_PrimaryAssetIdToString(FPrimaryAssetId PrimaryAssetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<UObject> Conv_ObjectToSoftObjectReference(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* Conv_InterfaceToObject(const FScriptInterface& Interface);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftClassPtr<UObject> Conv_ClassToSoftClassReference(const UClass*& Class);
    
    UFUNCTION(BlueprintCallable)
    static void ControlScreensaver(bool bAllowScreenSaver);
    
    UFUNCTION(BlueprintCallable)
    static bool ComponentOverlapComponents(UPrimitiveComponent* Component, const FTransform& ComponentTransform, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable)
    static bool ComponentOverlapActors(UPrimitiveComponent* Component, const FTransform& ComponentTransform, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static void CollectGarbage();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CapsuleTraceSingleForObjects(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CapsuleTraceSingleByProfile(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CapsuleTraceSingle(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CapsuleTraceMultiForObjects(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CapsuleTraceMultiByProfile(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CapsuleTraceMulti(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CapsuleOverlapComponents(UObject* WorldContextObject, const FVector CapsulePos, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CapsuleOverlapActors(UObject* WorldContextObject, const FVector CapsulePos, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static bool CanLaunchURL(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    static void CancelTransaction(const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakSoftObjectPath(FSoftObjectPath InSoftObjectPath, FString& PathString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakSoftClassPath(FSoftClassPath InSoftClassPath, FString& PathString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxTraceSingleForObjects(UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxTraceSingleByProfile(UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxTraceSingle(UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxTraceMultiForObjects(UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxTraceMultiByProfile(UObject* WorldContextObject, const FVector Start, const FVector End, FVector HalfSize, const FRotator Orientation, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxTraceMulti(UObject* WorldContextObject, const FVector Start, const FVector End, FVector HalfSize, const FRotator Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxOverlapComponents(UObject* WorldContextObject, const FVector BoxPos, FVector Extent, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxOverlapActors(UObject* WorldContextObject, const FVector BoxPos, FVector BoxExtent, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static int32 BeginTransaction(const FString& Context, FText Description, UObject* PrimaryObject);
    
    UFUNCTION(BlueprintCallable)
    static FDebugFloatHistory AddFloatHistorySample(float Value, const FDebugFloatHistory& FloatHistory);
    
};

