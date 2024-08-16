#ifndef UE4SS_SDK_AssetRegistry_HPP
#define UE4SS_SDK_AssetRegistry_HPP

struct FARFilter
{
    TArray<FName> PackageNames;                                                       // 0x0000 (size: 0x10)
    TArray<FName> PackagePaths;                                                       // 0x0010 (size: 0x10)
    TArray<FName> ObjectPaths;                                                        // 0x0020 (size: 0x10)
    TArray<FName> ClassNames;                                                         // 0x0030 (size: 0x10)
    char padding_0[0x50];                                                             // 0x0040 (size: 0x50)
    TSet<FName> RecursiveClassesExclusionSet;                                         // 0x0090 (size: 0x50)
    bool bRecursivePaths;                                                             // 0x00E0 (size: 0x1)
    bool bRecursiveClasses;                                                           // 0x00E1 (size: 0x1)
    bool bIncludeOnlyOnDiskAssets;                                                    // 0x00E2 (size: 0x1)

}; // Size: 0xE8

struct FAssetBundleData
{
    TArray<FAssetBundleEntry> Bundles;                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAssetBundleEntry
{
    FPrimaryAssetId BundleScope;                                                      // 0x0000 (size: 0x10)
    FName BundleName;                                                                 // 0x0010 (size: 0x8)
    TArray<FSoftObjectPath> BundleAssets;                                             // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FAssetData
{
    FName ObjectPath;                                                                 // 0x0000 (size: 0x8)
    FName PackageName;                                                                // 0x0008 (size: 0x8)
    FName PackagePath;                                                                // 0x0010 (size: 0x8)
    FName AssetName;                                                                  // 0x0018 (size: 0x8)
    FName AssetClass;                                                                 // 0x0020 (size: 0x8)

}; // Size: 0x50

struct FAssetRegistryDependencyOptions
{
    bool bIncludeSoftPackageReferences;                                               // 0x0000 (size: 0x1)
    bool bIncludeHardPackageReferences;                                               // 0x0001 (size: 0x1)
    bool bIncludeSearchableNames;                                                     // 0x0002 (size: 0x1)
    bool bIncludeSoftManagementReferences;                                            // 0x0003 (size: 0x1)
    bool bIncludeHardManagementReferences;                                            // 0x0004 (size: 0x1)

}; // Size: 0x5

struct FTagAndValue
{
    FName Tag;                                                                        // 0x0000 (size: 0x8)
    FString Value;                                                                    // 0x0008 (size: 0x10)

}; // Size: 0x18

class IAssetRegistry : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void UseFilterToExcludeAssets(TArray<FAssetData>& AssetDataList, const FARFilter& Filter);
    void SearchAllAssets(bool bSynchronousSearch);
    void ScanPathsSynchronous(const TArray<FString>& InPaths, bool bForceRescan);
    void ScanModifiedAssetFiles(const TArray<FString>& InFilePaths);
    void ScanFilesSynchronous(const TArray<FString>& InFilePaths, bool bForceRescan);
    void RunAssetsThroughFilter(TArray<FAssetData>& AssetDataList, const FARFilter& Filter);
    void PrioritizeSearchPath(FString PathToPrioritize);
    bool K2_GetReferencers(FName PackageName, const FAssetRegistryDependencyOptions& ReferenceOptions, TArray<FName>& OutReferencers);
    bool K2_GetDependencies(FName PackageName, const FAssetRegistryDependencyOptions& DependencyOptions, TArray<FName>& OutDependencies);
    bool IsLoadingAssets();
    bool HasAssets(const FName PackagePath, const bool bRecursive);
    void GetSubPaths(FString InBasePath, TArray<FString>& OutPathList, bool bInRecurse);
    bool GetAssetsByPath(FName PackagePath, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
    bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);
    bool GetAssetsByClass(FName ClassName, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses);
    bool GetAssets(const FARFilter& Filter, TArray<FAssetData>& OutAssetData);
    FAssetData GetAssetByObjectPath(const FName ObjectPath, bool bIncludeOnlyOnDiskAssets);
    void GetAllCachedPaths(TArray<FString>& OutPathList);
    bool GetAllAssets(TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);
}; // Size: 0x28

class UAssetRegistryHelpers : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    FSoftObjectPath ToSoftObjectPath(const FAssetData& InAssetData);
    FARFilter SetFilterTagsAndValues(const FARFilter& InFilter, const TArray<FTagAndValue>& InTagsAndValues);
    bool IsValid(const FAssetData& InAssetData);
    bool IsUAsset(const FAssetData& InAssetData);
    bool IsRedirector(const FAssetData& InAssetData);
    bool IsAssetLoaded(const FAssetData& InAssetData);
    bool GetTagValue(const FAssetData& InAssetData, const FName& InTagName, FString& OutTagValue);
    FString GetFullName(const FAssetData& InAssetData);
    FString GetExportTextName(const FAssetData& InAssetData);
    UClass* GetClass(const FAssetData& InAssetData);
    TScriptInterface<class IAssetRegistry> GetAssetRegistry();
    class UObject* GetAsset(const FAssetData& InAssetData);
    FAssetData CreateAssetData(const class UObject* InAsset, bool bAllowBlueprintClass);
}; // Size: 0x28

class UAssetRegistryImpl : public UObject
{
    char padding_0[0x778];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x778

#endif
