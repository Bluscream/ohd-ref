---@meta

---@class FARFilter
---@field PackageNames TArray<FName>
---@field PackagePaths TArray<FName>
---@field ObjectPaths TArray<FName>
---@field ClassNames TArray<FName>
---@field RecursiveClassesExclusionSet TSet<FName>
---@field bRecursivePaths boolean
---@field bRecursiveClasses boolean
---@field bIncludeOnlyOnDiskAssets boolean
FARFilter = {}



---@class FAssetBundleData
---@field Bundles TArray<FAssetBundleEntry>
FAssetBundleData = {}



---@class FAssetBundleEntry
---@field BundleScope FPrimaryAssetId
---@field BundleName FName
---@field BundleAssets TArray<FSoftObjectPath>
FAssetBundleEntry = {}



---@class FAssetData
---@field ObjectPath FName
---@field PackageName FName
---@field PackagePath FName
---@field AssetName FName
---@field AssetClass FName
FAssetData = {}



---@class FAssetRegistryDependencyOptions
---@field bIncludeSoftPackageReferences boolean
---@field bIncludeHardPackageReferences boolean
---@field bIncludeSearchableNames boolean
---@field bIncludeSoftManagementReferences boolean
---@field bIncludeHardManagementReferences boolean
FAssetRegistryDependencyOptions = {}



---@class FTagAndValue
---@field Tag FName
---@field Value FString
FTagAndValue = {}



---@class IAssetRegistry : IInterface
IAssetRegistry = {}

---@param AssetDataList TArray<FAssetData>
---@param Filter FARFilter
function IAssetRegistry:UseFilterToExcludeAssets(AssetDataList, Filter) end
---@param bSynchronousSearch boolean
function IAssetRegistry:SearchAllAssets(bSynchronousSearch) end
---@param InPaths TArray<FString>
---@param bForceRescan boolean
function IAssetRegistry:ScanPathsSynchronous(InPaths, bForceRescan) end
---@param InFilePaths TArray<FString>
function IAssetRegistry:ScanModifiedAssetFiles(InFilePaths) end
---@param InFilePaths TArray<FString>
---@param bForceRescan boolean
function IAssetRegistry:ScanFilesSynchronous(InFilePaths, bForceRescan) end
---@param AssetDataList TArray<FAssetData>
---@param Filter FARFilter
function IAssetRegistry:RunAssetsThroughFilter(AssetDataList, Filter) end
---@param PathToPrioritize FString
function IAssetRegistry:PrioritizeSearchPath(PathToPrioritize) end
---@param PackageName FName
---@param ReferenceOptions FAssetRegistryDependencyOptions
---@param OutReferencers TArray<FName>
---@return boolean
function IAssetRegistry:K2_GetReferencers(PackageName, ReferenceOptions, OutReferencers) end
---@param PackageName FName
---@param DependencyOptions FAssetRegistryDependencyOptions
---@param OutDependencies TArray<FName>
---@return boolean
function IAssetRegistry:K2_GetDependencies(PackageName, DependencyOptions, OutDependencies) end
---@return boolean
function IAssetRegistry:IsLoadingAssets() end
---@param PackagePath FName
---@param bRecursive boolean
---@return boolean
function IAssetRegistry:HasAssets(PackagePath, bRecursive) end
---@param InBasePath FString
---@param OutPathList TArray<FString>
---@param bInRecurse boolean
function IAssetRegistry:GetSubPaths(InBasePath, OutPathList, bInRecurse) end
---@param PackagePath FName
---@param OutAssetData TArray<FAssetData>
---@param bRecursive boolean
---@param bIncludeOnlyOnDiskAssets boolean
---@return boolean
function IAssetRegistry:GetAssetsByPath(PackagePath, OutAssetData, bRecursive, bIncludeOnlyOnDiskAssets) end
---@param PackageName FName
---@param OutAssetData TArray<FAssetData>
---@param bIncludeOnlyOnDiskAssets boolean
---@return boolean
function IAssetRegistry:GetAssetsByPackageName(PackageName, OutAssetData, bIncludeOnlyOnDiskAssets) end
---@param ClassName FName
---@param OutAssetData TArray<FAssetData>
---@param bSearchSubClasses boolean
---@return boolean
function IAssetRegistry:GetAssetsByClass(ClassName, OutAssetData, bSearchSubClasses) end
---@param Filter FARFilter
---@param OutAssetData TArray<FAssetData>
---@return boolean
function IAssetRegistry:GetAssets(Filter, OutAssetData) end
---@param ObjectPath FName
---@param bIncludeOnlyOnDiskAssets boolean
---@return FAssetData
function IAssetRegistry:GetAssetByObjectPath(ObjectPath, bIncludeOnlyOnDiskAssets) end
---@param OutPathList TArray<FString>
function IAssetRegistry:GetAllCachedPaths(OutPathList) end
---@param OutAssetData TArray<FAssetData>
---@param bIncludeOnlyOnDiskAssets boolean
---@return boolean
function IAssetRegistry:GetAllAssets(OutAssetData, bIncludeOnlyOnDiskAssets) end


---@class UAssetRegistryHelpers : UObject
UAssetRegistryHelpers = {}

---@param InAssetData FAssetData
---@return FSoftObjectPath
function UAssetRegistryHelpers:ToSoftObjectPath(InAssetData) end
---@param InFilter FARFilter
---@param InTagsAndValues TArray<FTagAndValue>
---@return FARFilter
function UAssetRegistryHelpers:SetFilterTagsAndValues(InFilter, InTagsAndValues) end
---@param InAssetData FAssetData
---@return boolean
function UAssetRegistryHelpers:IsValid(InAssetData) end
---@param InAssetData FAssetData
---@return boolean
function UAssetRegistryHelpers:IsUAsset(InAssetData) end
---@param InAssetData FAssetData
---@return boolean
function UAssetRegistryHelpers:IsRedirector(InAssetData) end
---@param InAssetData FAssetData
---@return boolean
function UAssetRegistryHelpers:IsAssetLoaded(InAssetData) end
---@param InAssetData FAssetData
---@param InTagName FName
---@param OutTagValue FString
---@return boolean
function UAssetRegistryHelpers:GetTagValue(InAssetData, InTagName, OutTagValue) end
---@param InAssetData FAssetData
---@return FString
function UAssetRegistryHelpers:GetFullName(InAssetData) end
---@param InAssetData FAssetData
---@return FString
function UAssetRegistryHelpers:GetExportTextName(InAssetData) end
---@param InAssetData FAssetData
---@return UClass
function UAssetRegistryHelpers:GetClass(InAssetData) end
---@return TScriptInterface<IAssetRegistry>
function UAssetRegistryHelpers:GetAssetRegistry() end
---@param InAssetData FAssetData
---@return UObject
function UAssetRegistryHelpers:GetAsset(InAssetData) end
---@param InAsset UObject
---@param bAllowBlueprintClass boolean
---@return FAssetData
function UAssetRegistryHelpers:CreateAssetData(InAsset, bAllowBlueprintClass) end


---@class UAssetRegistryImpl : UObject
UAssetRegistryImpl = {}


