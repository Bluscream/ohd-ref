#ifndef UE4SS_SDK_AssetTags_HPP
#define UE4SS_SDK_AssetTags_HPP

#include "AssetTags_enums.hpp"

class UAssetTagsSubsystem : public UEngineSubsystem
{
    char padding_0[0x30];                                                             // 0x0000 (size: 0x0)

    TArray<FName> GetCollectionsContainingAssetPtr(const class UObject* AssetPtr);
    TArray<FName> GetCollectionsContainingAssetData(const FAssetData& AssetData);
    TArray<FName> GetCollectionsContainingAsset(const FName AssetPathName);
    TArray<FName> GetCollections();
    TArray<FAssetData> GetAssetsInCollection(const FName Name);
    bool CollectionExists(const FName Name);
}; // Size: 0x30

#endif
