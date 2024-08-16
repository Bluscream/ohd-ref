#ifndef UE4SS_SDK_BPFL_HDCore_HPP
#define UE4SS_SDK_BPFL_HDCore_HPP

class UBPFL_HDCore_C : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void CheckEntitlement(TArray<FFEntitlementDefinition>& Entitlements, class UObject* __WorldContext, bool& bEntitled);
    void FindMapIdByDisplayName(FText& MapDisplayName, TArray<FPrimaryAssetId>& MapIds, class UObject* __WorldContext, FPrimaryAssetId& FoundMapId);
    void GetPackageShortName(FString& LongName, class UObject* __WorldContext, bool& bSuccess, FString& ShortName);
    void GetPluginDisplayNameFromPath(FString& AssetPath, class UObject* __WorldContext, FString& ModName);
    void GetContentRootFromPackageName(FString& PackageName, class UObject* __WorldContext, bool& bSuccess, FString& ContentRootName);
    void GetContentRootPathFromPackageName(FString& PackageName, class UObject* __WorldContext, bool& bSuccess, FString& ContentRootPath);
    void AddOption(FString& Options, FString& StrToAdd, class UObject* __WorldContext);
    void SplitLoadedPrimaryAssetClassIds(TArray<FPrimaryAssetId>& AssetIds, class UObject* __WorldContext, TArray<FPrimaryAssetId>& UnloadedAssetIds, TArray<class UClass*>& LoadedAssetClasses);
    void SplitLoadedPrimaryAssetIds(TArray<FPrimaryAssetId>& AssetIds, class UObject* __WorldContext, TArray<FPrimaryAssetId>& UnloadedAssetIds, TArray<class UObject*>& LoadedAssets);
    void GetAllMapAssets(class UObject* __WorldContext, bool& bSuccess, TArray<FAssetData>& LevelAssets);
    void GetPlayerControllerFromPlayerState(class APlayerState* PlayerState, class UObject* __WorldContext, class APlayerController*& OwnerPC);
    void GetControllerFromPlayerState(class APlayerState* PlayerState, class UObject* __WorldContext, class AController*& OwnerC);
    void GetBluforOpforTeamStateForTeam(EHDTeam Team, class UObject* __WorldContext, class AHDTeamState*& HDTeamState);
    void GetHDFactionInfoForTeam(EHDTeam Team, class UObject* __WorldContext, TSubclassOf<class UBP_HDFactionInfoBase_C>& HDFactionInfoClass);
    void GetIndexForPhoneticCodeWord(FString CodeWord, class UObject* __WorldContext, int32& LetterIdx);
    void GetIndexForPredefinedSquadName(FText SquadName, class UObject* __WorldContext, int32& SquadNameIdx);
    void GetPhoneticCodeWordByIndex(int32 LetterIdx, class UObject* __WorldContext, FString& CodeWord);
    void GetPhoneticCodeWordByCharacter(FString LetterChar, class UObject* __WorldContext, FString& CodeWord);
    void AbbreviateString(FString SourceString, int32 MaxStartLength, int32 MaxEndLength, FString Separator, class UObject* __WorldContext, FString& AbbrevString);
    void GetPredefinedSquadNameByIndex(int32 SquadCreationIdx, class UObject* __WorldContext, FText& SquadName);
    void GetHDTeamStateForTeam(EHDTeam Team, class UObject* __WorldContext, class AHDTeamState*& HDTeamState);
    void GetHDHUDBP(int32 PlayerIndex, class UObject* __WorldContext, class ABP_HDHUDBase_C*& HDHUD);
    void GetHDGameUserSettings(class UObject* __WorldContext, class UTBGameUserSettings*& HDGameUserSettings);
    void GetHDGameState(class UObject* __WorldContext, class AHDGameState*& HDGameState);
    void GetHDGameMode(class UObject* __WorldContext, class AHDBaseGameMode*& HDGame);
    void GetHDGameInstance(class UObject* __WorldContext, class UHDGameInstance*& HDGI);
    void GetHDPlayerCharacterBP(int32 PlayerIndex, class UObject* __WorldContext, class ABP_HDPlayerCharacterBase_C*& HDPlayerChar);
    void GetHDPlayerControllerBP(int32 PlayerIndex, class UObject* __WorldContext, class ABP_HDPlayerControllerBase_C*& HDPC);
}; // Size: 0x28

#endif
