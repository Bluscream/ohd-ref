---@meta

---@class UBPFL_HDCore_C : UBlueprintFunctionLibrary
UBPFL_HDCore_C = {}

---@param Entitlements TArray<FFEntitlementDefinition>
---@param __WorldContext UObject
---@param bEntitled boolean
function UBPFL_HDCore_C:CheckEntitlement(Entitlements, __WorldContext, bEntitled) end
---@param MapDisplayName FText
---@param MapIds TArray<FPrimaryAssetId>
---@param __WorldContext UObject
---@param FoundMapId FPrimaryAssetId
function UBPFL_HDCore_C:FindMapIdByDisplayName(MapDisplayName, MapIds, __WorldContext, FoundMapId) end
---@param LongName FString
---@param __WorldContext UObject
---@param bSuccess boolean
---@param ShortName FString
function UBPFL_HDCore_C:GetPackageShortName(LongName, __WorldContext, bSuccess, ShortName) end
---@param AssetPath FString
---@param __WorldContext UObject
---@param ModName FString
function UBPFL_HDCore_C:GetPluginDisplayNameFromPath(AssetPath, __WorldContext, ModName) end
---@param PackageName FString
---@param __WorldContext UObject
---@param bSuccess boolean
---@param ContentRootName FString
function UBPFL_HDCore_C:GetContentRootFromPackageName(PackageName, __WorldContext, bSuccess, ContentRootName) end
---@param PackageName FString
---@param __WorldContext UObject
---@param bSuccess boolean
---@param ContentRootPath FString
function UBPFL_HDCore_C:GetContentRootPathFromPackageName(PackageName, __WorldContext, bSuccess, ContentRootPath) end
---@param Options FString
---@param StrToAdd FString
---@param __WorldContext UObject
function UBPFL_HDCore_C:AddOption(Options, StrToAdd, __WorldContext) end
---@param AssetIds TArray<FPrimaryAssetId>
---@param __WorldContext UObject
---@param UnloadedAssetIds TArray<FPrimaryAssetId>
---@param LoadedAssetClasses TArray<UClass>
function UBPFL_HDCore_C:SplitLoadedPrimaryAssetClassIds(AssetIds, __WorldContext, UnloadedAssetIds, LoadedAssetClasses) end
---@param AssetIds TArray<FPrimaryAssetId>
---@param __WorldContext UObject
---@param UnloadedAssetIds TArray<FPrimaryAssetId>
---@param LoadedAssets TArray<UObject>
function UBPFL_HDCore_C:SplitLoadedPrimaryAssetIds(AssetIds, __WorldContext, UnloadedAssetIds, LoadedAssets) end
---@param __WorldContext UObject
---@param bSuccess boolean
---@param LevelAssets TArray<FAssetData>
function UBPFL_HDCore_C:GetAllMapAssets(__WorldContext, bSuccess, LevelAssets) end
---@param PlayerState APlayerState
---@param __WorldContext UObject
---@param OwnerPC APlayerController
function UBPFL_HDCore_C:GetPlayerControllerFromPlayerState(PlayerState, __WorldContext, OwnerPC) end
---@param PlayerState APlayerState
---@param __WorldContext UObject
---@param OwnerC AController
function UBPFL_HDCore_C:GetControllerFromPlayerState(PlayerState, __WorldContext, OwnerC) end
---@param Team EHDTeam
---@param __WorldContext UObject
---@param HDTeamState AHDTeamState
function UBPFL_HDCore_C:GetBluforOpforTeamStateForTeam(Team, __WorldContext, HDTeamState) end
---@param Team EHDTeam
---@param __WorldContext UObject
---@param HDFactionInfoClass TSubclassOf<UBP_HDFactionInfoBase_C>
function UBPFL_HDCore_C:GetHDFactionInfoForTeam(Team, __WorldContext, HDFactionInfoClass) end
---@param CodeWord FString
---@param __WorldContext UObject
---@param LetterIdx int32
function UBPFL_HDCore_C:GetIndexForPhoneticCodeWord(CodeWord, __WorldContext, LetterIdx) end
---@param SquadName FText
---@param __WorldContext UObject
---@param SquadNameIdx int32
function UBPFL_HDCore_C:GetIndexForPredefinedSquadName(SquadName, __WorldContext, SquadNameIdx) end
---@param LetterIdx int32
---@param __WorldContext UObject
---@param CodeWord FString
function UBPFL_HDCore_C:GetPhoneticCodeWordByIndex(LetterIdx, __WorldContext, CodeWord) end
---@param LetterChar FString
---@param __WorldContext UObject
---@param CodeWord FString
function UBPFL_HDCore_C:GetPhoneticCodeWordByCharacter(LetterChar, __WorldContext, CodeWord) end
---@param SourceString FString
---@param MaxStartLength int32
---@param MaxEndLength int32
---@param Separator FString
---@param __WorldContext UObject
---@param AbbrevString FString
function UBPFL_HDCore_C:AbbreviateString(SourceString, MaxStartLength, MaxEndLength, Separator, __WorldContext, AbbrevString) end
---@param SquadCreationIdx int32
---@param __WorldContext UObject
---@param SquadName FText
function UBPFL_HDCore_C:GetPredefinedSquadNameByIndex(SquadCreationIdx, __WorldContext, SquadName) end
---@param Team EHDTeam
---@param __WorldContext UObject
---@param HDTeamState AHDTeamState
function UBPFL_HDCore_C:GetHDTeamStateForTeam(Team, __WorldContext, HDTeamState) end
---@param PlayerIndex int32
---@param __WorldContext UObject
---@param HDHUD ABP_HDHUDBase_C
function UBPFL_HDCore_C:GetHDHUDBP(PlayerIndex, __WorldContext, HDHUD) end
---@param __WorldContext UObject
---@param HDGameUserSettings UTBGameUserSettings
function UBPFL_HDCore_C:GetHDGameUserSettings(__WorldContext, HDGameUserSettings) end
---@param __WorldContext UObject
---@param HDGameState AHDGameState
function UBPFL_HDCore_C:GetHDGameState(__WorldContext, HDGameState) end
---@param __WorldContext UObject
---@param HDGame AHDBaseGameMode
function UBPFL_HDCore_C:GetHDGameMode(__WorldContext, HDGame) end
---@param __WorldContext UObject
---@param HDGI UHDGameInstance
function UBPFL_HDCore_C:GetHDGameInstance(__WorldContext, HDGI) end
---@param PlayerIndex int32
---@param __WorldContext UObject
---@param HDPlayerChar ABP_HDPlayerCharacterBase_C
function UBPFL_HDCore_C:GetHDPlayerCharacterBP(PlayerIndex, __WorldContext, HDPlayerChar) end
---@param PlayerIndex int32
---@param __WorldContext UObject
---@param HDPC ABP_HDPlayerControllerBase_C
function UBPFL_HDCore_C:GetHDPlayerControllerBP(PlayerIndex, __WorldContext, HDPC) end


