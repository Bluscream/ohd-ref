#include "DFBlueprintFunctions.h"
#include "Templates/SubclassOf.h"

UDFBlueprintFunctions::UDFBlueprintFunctions() {
}

bool UDFBlueprintFunctions::WasShotFired(const FRepShotInfo& Counter, const FRepShotInfo& OtherCounter) {
    return false;
}

void UDFBlueprintFunctions::TransferInventoryItems(UDFInventoryComponent* FromInv, UDFInventoryComponent* ToInv, bool bKeepLoadedAmmo) {
}

bool UDFBlueprintFunctions::TextIsEmptyOrWhitespace(const FText& InText) {
    return false;
}

ADFBaseImpactEffect* UDFBlueprintFunctions::SpawnImpactFXFromHitResult(UObject* WorldContextObject, TSubclassOf<ADFBaseImpactEffect> ImpactClass, const FHitResult& Impact) {
    return NULL;
}

ADFBaseImpactEffect* UDFBlueprintFunctions::SpawnImpactFXFromDamageEvent(UObject* WorldContextObject, TSubclassOf<ADFBaseImpactEffect> ImpactClass, float DamageTaken, const FDamageEvent& DamageEvent, const AActor* HitActor, const AActor* HitInstigator, const AActor* DamageCauser) {
    return NULL;
}

void UDFBlueprintFunctions::SetTeamNum(AActor* Target, const uint8 NewTeamNum) {
}

void UDFBlueprintFunctions::SetStartSpot(AController* Controller, AActor* NewStartSpot) {
}

void UDFBlueprintFunctions::SetNetAddressable(UActorComponent* ActorComp) {
}

void UDFBlueprintFunctions::SetCastStaticShadow(UPrimitiveComponent* PrimitiveComponent, bool bCastStaticShadow) {
}

void UDFBlueprintFunctions::ResetPlayerVoiceTalker(APlayerState* InPlayerState) {
}

void UDFBlueprintFunctions::ResetAllPlayerVoiceTalkers() {
}

void UDFBlueprintFunctions::PrintTextToLog(UObject* WorldContextObject, const FText InText, ELogVerbosityBP InLogVerbosity, bool bPrintStackTrace) {
}

void UDFBlueprintFunctions::PrintStringToLog(UObject* WorldContextObject, const FString& inString, ELogVerbosityBP InLogVerbosity, bool bPrintStackTrace) {
}

bool UDFBlueprintFunctions::IsVOIPTalkerStillAlive(UVOIPTalker* InTalker) {
    return false;
}

bool UDFBlueprintFunctions::IsValidActor(const AActor* Actor) {
    return false;
}

bool UDFBlueprintFunctions::IsPlayInEditor(UObject* WorldContextObject) {
    return false;
}

bool UDFBlueprintFunctions::IsPlayerTalking(APlayerState* PlayerPS) {
    return false;
}

bool UDFBlueprintFunctions::IsPlayerMuted(APlayerController* PC, APlayerState* PSToCheck) {
    return false;
}

bool UDFBlueprintFunctions::IsPendingKillPending(const AActor* Actor) {
    return false;
}

bool UDFBlueprintFunctions::IsLocallyPlayerControlled(const APawn* Pawn) {
    return false;
}

bool UDFBlueprintFunctions::IsEmptyOrWhitespace(const FString& inString) {
    return false;
}

bool UDFBlueprintFunctions::HasOptions(const FString& Options, const TArray<FString>& Keys, bool bMatchAll) {
    return false;
}

bool UDFBlueprintFunctions::HasFiringStopped(const FRepShotInfo& Counter) {
    return false;
}

AWorldSettings* UDFBlueprintFunctions::GetWorldSettings(UObject* WorldContextObject) {
    return NULL;
}

UVOIPTalker* UDFBlueprintFunctions::GetVOIPTalkerForPlayer(APlayerState* InPlayerState) {
    return NULL;
}

ESlateVisibility UDFBlueprintFunctions::GetVisibilityDefault(UWidget* Widget) {
    return ESlateVisibility::Visible;
}

ADFTeamState* UDFBlueprintFunctions::GetTeamStateFromTeamId(UObject* WorldContextObject, const uint8 TeamIdNum) {
    return NULL;
}

uint8 UDFBlueprintFunctions::GetTeamNum(const AActor* Target) {
    return 0;
}

FVector UDFBlueprintFunctions::GetTargetLocation(const AActor* Actor, AActor* RequestedBy) {
    return FVector{};
}

FName UDFBlueprintFunctions::GetSurfaceName(TEnumAsByte<EPhysicalSurface> SurfaceType) {
    return NAME_None;
}

AActor* UDFBlueprintFunctions::GetStartSpot(AController* Controller) {
    return NULL;
}

int32 UDFBlueprintFunctions::GetShotCounterBPCompat(const FRepShotInfo& Counter) {
    return 0;
}

FString UDFBlueprintFunctions::GetPluginFriendlyName(const FString& PluginName) {
    return TEXT("");
}

int32 UDFBlueprintFunctions::GetNumShotsFiredBPCompat(const FRepShotInfo& Counter, const FRepShotInfo& PreviousCounter) {
    return 0;
}

FText UDFBlueprintFunctions::GetMapNameForDisplay(UObject* WorldContextObject) {
    return FText::GetEmpty();
}

FString UDFBlueprintFunctions::GetMapName(UObject* WorldContextObject) {
    return TEXT("");
}

bool UDFBlueprintFunctions::GetMapAssetVisibleInMapSelectUI(const FPrimaryAssetId& WorldAssetId, bool& bOutVisibleInMapSelectUI) {
    return false;
}

bool UDFBlueprintFunctions::GetMapAssetSupportedGameModes(const FPrimaryAssetId& WorldAssetId, TSet<TSoftClassPtr<AGameModeBase>>& OutSupportedGameModes) {
    return false;
}

bool UDFBlueprintFunctions::GetMapAssetPreviewImg(const FPrimaryAssetId& WorldAssetId, TSoftObjectPtr<UTexture2D>& OutMapPreviewImgRef) {
    return false;
}

bool UDFBlueprintFunctions::GetMapAssetPreviewBannerImg(const FPrimaryAssetId& WorldAssetId, TSoftObjectPtr<UTexture2D>& OutMapPreviewBannerImgRef) {
    return false;
}

FText UDFBlueprintFunctions::GetMapAssetNameForDisplay(const FPrimaryAssetId& WorldAssetId) {
    return FText::GetEmpty();
}

bool UDFBlueprintFunctions::GetMapAssetGameRulesetClasses(const FPrimaryAssetId& WorldAssetId, TSet<TSoftClassPtr<UDFGameRulesetBase>>& OutGameRulesetClasses) {
    return false;
}

bool UDFBlueprintFunctions::GetMapAssetDescription(const FPrimaryAssetId& WorldAssetId, FString& OutMapDescription) {
    return false;
}

bool UDFBlueprintFunctions::GetMapAssetDefaultGameMode(const FPrimaryAssetId& WorldAssetId, TSoftClassPtr<AGameModeBase>& OutDefaultGameModeRef) {
    return false;
}

bool UDFBlueprintFunctions::GetMapAssetDataSupportedGameModes(const FAssetData& WorldAsset, TSet<TSoftClassPtr<AGameModeBase>>& OutSupportedGameModes) {
    return false;
}

bool UDFBlueprintFunctions::GetMapAssetDataPreviewImg(const FAssetData& WorldAsset, TSoftObjectPtr<UTexture2D>& OutMapPreviewImgRef) {
    return false;
}

bool UDFBlueprintFunctions::GetMapAssetDataPreviewBannerImg(const FAssetData& WorldAsset, TSoftObjectPtr<UTexture2D>& OutMapPreviewBannerImgRef) {
    return false;
}

FText UDFBlueprintFunctions::GetMapAssetDataNameForDisplay(const FAssetData& WorldAsset) {
    return FText::GetEmpty();
}

bool UDFBlueprintFunctions::GetMapAssetDataGameRulesetClasses(const FAssetData& WorldAsset, TSet<TSoftClassPtr<UDFGameRulesetBase>>& OutGameRulesetClasses) {
    return false;
}

bool UDFBlueprintFunctions::GetMapAssetDataDisplayName(const FAssetData& WorldAsset, FText& OutMapDisplayName) {
    return false;
}

bool UDFBlueprintFunctions::GetMapAssetDataDescription(const FAssetData& WorldAsset, FString& OutMapDescription) {
    return false;
}

bool UDFBlueprintFunctions::GetMapAssetDataDefaultGameMode(const FAssetData& WorldAsset, TSoftClassPtr<AGameModeBase>& OutDefaultGameModeRef) {
    return false;
}

FString UDFBlueprintFunctions::GetGlobalDefaultGameMode() {
    return TEXT("");
}

FString UDFBlueprintFunctions::GetGameVersion() {
    return TEXT("");
}

FText UDFBlueprintFunctions::GetGameNameForDisplay(UObject* WorldContextObject) {
    return FText::GetEmpty();
}

FString UDFBlueprintFunctions::GetGameModeForName(const FString& GameModeName) {
    return TEXT("");
}

FString UDFBlueprintFunctions::GetGameModeForMapName(const FString& MapName) {
    return TEXT("");
}

FString UDFBlueprintFunctions::GetGameDefaultMap() {
    return TEXT("");
}

FString UDFBlueprintFunctions::GetGameBuildInfo() {
    return TEXT("");
}

FVector UDFBlueprintFunctions::GetFocalPoint(const AActor* Actor) {
    return FVector{};
}

void UDFBlueprintFunctions::GetDefaultBoundingCylinder(const AActor* Actor, float& CylinderRadius, float& CylinderHalfHeight) {
}

FString UDFBlueprintFunctions::GetCopyrightNotice() {
    return TEXT("");
}

TArray<FString> UDFBlueprintFunctions::GetAllMapNames() {
    return TArray<FString>();
}

void UDFBlueprintFunctions::GameHasEnded(AController* Controller, AActor* EndGameFocus, bool bIsWinner) {
}

void UDFBlueprintFunctions::FlushPressedKeys(APlayerController* PC) {
}

FPrimaryAssetId UDFBlueprintFunctions::FindMapIdByDisplayName(const FText& MapDisplayName, const TArray<FPrimaryAssetId>& MapIds) {
    return FPrimaryAssetId{};
}

bool UDFBlueprintFunctions::EqualEqual_WeaponSoundCollection(const FWeaponSoundCollection& A, const FWeaponSoundCollection& B) {
    return false;
}

bool UDFBlueprintFunctions::EqualEqual_WeaponAnimSequence(const FWeaponAnimSequence& A, const FWeaponAnimSequence& B) {
    return false;
}

bool UDFBlueprintFunctions::EqualEqual_WeaponAnimMontage(const FWeaponAnimMontage& A, const FWeaponAnimMontage& B) {
    return false;
}

bool UDFBlueprintFunctions::EqualEqual_WeaponAnimCollection(const FWeaponAnimCollection& A, const FWeaponAnimCollection& B) {
    return false;
}

bool UDFBlueprintFunctions::EqualEqual_WeaponAnim(const FWeaponAnim& A, const FWeaponAnim& B) {
    return false;
}

bool UDFBlueprintFunctions::EqualEqual_PerspectiveSound(const FPerspectiveSound& A, const FPerspectiveSound& B) {
    return false;
}

bool UDFBlueprintFunctions::EqualEqual_PerspectiveAnimSequence(const FPerspectiveAnimSequence& A, const FPerspectiveAnimSequence& B) {
    return false;
}

bool UDFBlueprintFunctions::EqualEqual_PerspectiveAnim(const FPerspectiveAnim& A, const FPerspectiveAnim& B) {
    return false;
}

bool UDFBlueprintFunctions::EqualEqual_CharacterSoundCollection(const FCharacterSoundCollection& A, const FCharacterSoundCollection& B) {
    return false;
}

bool UDFBlueprintFunctions::EqualEqual_CharacterAnimCollection(const FCharacterAnimCollection& A, const FCharacterAnimCollection& B) {
    return false;
}

bool UDFBlueprintFunctions::DoesMapIDSupportGMDefinition(const FPrimaryAssetId& MapId, const UDFGameModeDefinition* GMDef) {
    return false;
}

bool UDFBlueprintFunctions::CharacterVariationIsValid(FDFCharacterVariationDataHandle VariationData) {
    return false;
}

FDFCharacterVariationData UDFBlueprintFunctions::CharacterVariationGetData(FDFCharacterVariationDataHandle VariationData) {
    return FDFCharacterVariationData{};
}

FDFCharacterVariationDataHandle UDFBlueprintFunctions::CharacterVariationDataFromTableRow(UObject* WorldContextObject, FDataTableRowHandle RowHandle) {
    return FDFCharacterVariationDataHandle{};
}

void UDFBlueprintFunctions::Array_UInt8Sort(TArray<uint8>& ArrayToSort, bool bDescending) {
}

void UDFBlueprintFunctions::Array_TextSort(TArray<FText>& ArrayToSort, bool bDescending) {
}

void UDFBlueprintFunctions::Array_StringSort(TArray<FString>& ArrayToSort, bool bDescending) {
}

void UDFBlueprintFunctions::Array_Reverse(const TArray<int32>& TargetArray) {
}

void UDFBlueprintFunctions::Array_NameSort(TArray<FName>& ArrayToSort, bool bDescending) {
}

void UDFBlueprintFunctions::Array_Int64Sort(TArray<int64>& ArrayToSort, bool bDescending) {
}

void UDFBlueprintFunctions::Array_Int32Sort(TArray<int32>& ArrayToSort, bool bDescending) {
}

void UDFBlueprintFunctions::Array_FloatSort(TArray<float>& ArrayToSort, bool bDescending) {
}

void UDFBlueprintFunctions::Array_AssetDescriptorSort(TArray<FAssetDescriptor>& ArrayToSort, bool bDescending, bool bCompareDisplayText) {
}


