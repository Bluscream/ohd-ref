#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AssetRegistry -ObjectName=AssetData -FallbackName=AssetData
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetId -FallbackName=PrimaryAssetId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "AssetDescriptor.h"
#include "CharacterAnimCollection.h"
#include "CharacterSoundCollection.h"
#include "DFCharacterVariationData.h"
#include "DFCharacterVariationDataHandle.h"
#include "ELogVerbosityBP.h"
#include "PerspectiveAnim.h"
#include "PerspectiveAnimSequence.h"
#include "PerspectiveSound.h"
#include "RepShotInfo.h"
#include "Templates/SubclassOf.h"
#include "WeaponAnim.h"
#include "WeaponAnimCollection.h"
#include "WeaponAnimMontage.h"
#include "WeaponAnimSequence.h"
#include "WeaponSoundCollection.h"
#include "DFBlueprintFunctions.generated.h"

class AActor;
class AController;
class ADFBaseImpactEffect;
class ADFTeamState;
class AGameModeBase;
class APawn;
class APlayerController;
class APlayerState;
class AWorldSettings;
class UActorComponent;
class UDFGameModeDefinition;
class UDFGameRulesetBase;
class UDFInventoryComponent;
class UObject;
class UPrimitiveComponent;
class UTexture2D;
class UVOIPTalker;
class UWidget;

UCLASS(Blueprintable)
class DONKEHFRAMEWORK_API UDFBlueprintFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDFBlueprintFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool WasShotFired(const FRepShotInfo& Counter, const FRepShotInfo& OtherCounter);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void TransferInventoryItems(UDFInventoryComponent* FromInv, UDFInventoryComponent* ToInv, bool bKeepLoadedAmmo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TextIsEmptyOrWhitespace(const FText& InText);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ADFBaseImpactEffect* SpawnImpactFXFromHitResult(UObject* WorldContextObject, TSubclassOf<ADFBaseImpactEffect> ImpactClass, const FHitResult& Impact);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ADFBaseImpactEffect* SpawnImpactFXFromDamageEvent(UObject* WorldContextObject, TSubclassOf<ADFBaseImpactEffect> ImpactClass, float DamageTaken, const FDamageEvent& DamageEvent, const AActor* HitActor, const AActor* HitInstigator, const AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    static void SetTeamNum(AActor* Target, const uint8 NewTeamNum);
    
    UFUNCTION(BlueprintCallable)
    static void SetStartSpot(AController* Controller, AActor* NewStartSpot);
    
    UFUNCTION(BlueprintCallable)
    static void SetNetAddressable(UActorComponent* ActorComp);
    
    UFUNCTION(BlueprintCallable)
    static void SetCastStaticShadow(UPrimitiveComponent* PrimitiveComponent, bool bCastStaticShadow);
    
    UFUNCTION(BlueprintCallable)
    static void ResetPlayerVoiceTalker(APlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAllPlayerVoiceTalkers();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintTextToLog(UObject* WorldContextObject, const FText InText, ELogVerbosityBP InLogVerbosity, bool bPrintStackTrace);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintStringToLog(UObject* WorldContextObject, const FString& inString, ELogVerbosityBP InLogVerbosity, bool bPrintStackTrace);
    
    UFUNCTION(BlueprintCallable)
    static bool IsVOIPTalkerStillAlive(UVOIPTalker* InTalker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayInEditor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerTalking(APlayerState* PlayerPS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerMuted(APlayerController* PC, APlayerState* PSToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPendingKillPending(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLocallyPlayerControlled(const APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEmptyOrWhitespace(const FString& inString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasOptions(const FString& Options, const TArray<FString>& Keys, bool bMatchAll);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasFiringStopped(const FRepShotInfo& Counter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AWorldSettings* GetWorldSettings(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UVOIPTalker* GetVOIPTalkerForPlayer(APlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESlateVisibility GetVisibilityDefault(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ADFTeamState* GetTeamStateFromTeamId(UObject* WorldContextObject, const uint8 TeamIdNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetTeamNum(const AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetTargetLocation(const AActor* Actor, AActor* RequestedBy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetSurfaceName(TEnumAsByte<EPhysicalSurface> SurfaceType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetStartSpot(AController* Controller);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShotCounterBPCompat(const FRepShotInfo& Counter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPluginFriendlyName(const FString& PluginName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumShotsFiredBPCompat(const FRepShotInfo& Counter, const FRepShotInfo& PreviousCounter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetMapNameForDisplay(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetMapName(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMapAssetVisibleInMapSelectUI(const FPrimaryAssetId& WorldAssetId, bool& bOutVisibleInMapSelectUI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMapAssetSupportedGameModes(const FPrimaryAssetId& WorldAssetId, TSet<TSoftClassPtr<AGameModeBase>>& OutSupportedGameModes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMapAssetPreviewImg(const FPrimaryAssetId& WorldAssetId, TSoftObjectPtr<UTexture2D>& OutMapPreviewImgRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMapAssetPreviewBannerImg(const FPrimaryAssetId& WorldAssetId, TSoftObjectPtr<UTexture2D>& OutMapPreviewBannerImgRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetMapAssetNameForDisplay(const FPrimaryAssetId& WorldAssetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMapAssetGameRulesetClasses(const FPrimaryAssetId& WorldAssetId, TSet<TSoftClassPtr<UDFGameRulesetBase>>& OutGameRulesetClasses);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMapAssetDescription(const FPrimaryAssetId& WorldAssetId, FString& OutMapDescription);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMapAssetDefaultGameMode(const FPrimaryAssetId& WorldAssetId, TSoftClassPtr<AGameModeBase>& OutDefaultGameModeRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMapAssetDataSupportedGameModes(const FAssetData& WorldAsset, TSet<TSoftClassPtr<AGameModeBase>>& OutSupportedGameModes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMapAssetDataPreviewImg(const FAssetData& WorldAsset, TSoftObjectPtr<UTexture2D>& OutMapPreviewImgRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMapAssetDataPreviewBannerImg(const FAssetData& WorldAsset, TSoftObjectPtr<UTexture2D>& OutMapPreviewBannerImgRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetMapAssetDataNameForDisplay(const FAssetData& WorldAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMapAssetDataGameRulesetClasses(const FAssetData& WorldAsset, TSet<TSoftClassPtr<UDFGameRulesetBase>>& OutGameRulesetClasses);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMapAssetDataDisplayName(const FAssetData& WorldAsset, FText& OutMapDisplayName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMapAssetDataDescription(const FAssetData& WorldAsset, FString& OutMapDescription);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMapAssetDataDefaultGameMode(const FAssetData& WorldAsset, TSoftClassPtr<AGameModeBase>& OutDefaultGameModeRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGlobalDefaultGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGameVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetGameNameForDisplay(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGameModeForName(const FString& GameModeName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGameModeForMapName(const FString& MapName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGameDefaultMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGameBuildInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetFocalPoint(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDefaultBoundingCylinder(const AActor* Actor, float& CylinderRadius, float& CylinderHalfHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCopyrightNotice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetAllMapNames();
    
    UFUNCTION(BlueprintCallable)
    static void GameHasEnded(AController* Controller, AActor* EndGameFocus, bool bIsWinner);
    
    UFUNCTION(BlueprintCallable)
    static void FlushPressedKeys(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPrimaryAssetId FindMapIdByDisplayName(const FText& MapDisplayName, const TArray<FPrimaryAssetId>& MapIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_WeaponSoundCollection(const FWeaponSoundCollection& A, const FWeaponSoundCollection& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_WeaponAnimSequence(const FWeaponAnimSequence& A, const FWeaponAnimSequence& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_WeaponAnimMontage(const FWeaponAnimMontage& A, const FWeaponAnimMontage& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_WeaponAnimCollection(const FWeaponAnimCollection& A, const FWeaponAnimCollection& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_WeaponAnim(const FWeaponAnim& A, const FWeaponAnim& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_PerspectiveSound(const FPerspectiveSound& A, const FPerspectiveSound& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_PerspectiveAnimSequence(const FPerspectiveAnimSequence& A, const FPerspectiveAnimSequence& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_PerspectiveAnim(const FPerspectiveAnim& A, const FPerspectiveAnim& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_CharacterSoundCollection(const FCharacterSoundCollection& A, const FCharacterSoundCollection& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_CharacterAnimCollection(const FCharacterAnimCollection& A, const FCharacterAnimCollection& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesMapIDSupportGMDefinition(const FPrimaryAssetId& MapId, const UDFGameModeDefinition* GMDef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CharacterVariationIsValid(FDFCharacterVariationDataHandle VariationData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDFCharacterVariationData CharacterVariationGetData(FDFCharacterVariationDataHandle VariationData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FDFCharacterVariationDataHandle CharacterVariationDataFromTableRow(UObject* WorldContextObject, FDataTableRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void Array_UInt8Sort(UPARAM(Ref) TArray<uint8>& ArrayToSort, bool bDescending);
    
    UFUNCTION(BlueprintCallable)
    static void Array_TextSort(UPARAM(Ref) TArray<FText>& ArrayToSort, bool bDescending);
    
    UFUNCTION(BlueprintCallable)
    static void Array_StringSort(UPARAM(Ref) TArray<FString>& ArrayToSort, bool bDescending);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Reverse(const TArray<int32>& TargetArray);
    
    UFUNCTION(BlueprintCallable)
    static void Array_NameSort(UPARAM(Ref) TArray<FName>& ArrayToSort, bool bDescending);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Int64Sort(UPARAM(Ref) TArray<int64>& ArrayToSort, bool bDescending);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Int32Sort(UPARAM(Ref) TArray<int32>& ArrayToSort, bool bDescending);
    
    UFUNCTION(BlueprintCallable)
    static void Array_FloatSort(UPARAM(Ref) TArray<float>& ArrayToSort, bool bDescending);
    
    UFUNCTION(BlueprintCallable)
    static void Array_AssetDescriptorSort(UPARAM(Ref) TArray<FAssetDescriptor>& ArrayToSort, bool bDescending, bool bCompareDisplayText);
    
};

