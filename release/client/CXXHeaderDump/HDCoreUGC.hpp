#ifndef UE4SS_SDK_HDCoreUGC_HPP
#define UE4SS_SDK_HDCoreUGC_HPP

#include "HDCoreUGC_enums.hpp"

struct FHDCoreUGCPluginStateMachineProperties
{
    class UHDCoreUGCData* UGCData;                                                    // 0x0090 (size: 0x8)

}; // Size: 0xF8

struct FUGCPrimaryAssetSearchInfo
{
    FPrimaryAssetType AssetType;                                                      // 0x0000 (size: 0x8)
    FString Directory;                                                                // 0x0008 (size: 0x10)

}; // Size: 0x18

class UHDCoreDefaultUGCProjectPolicies : public UHDCoreUGCProjectPolicies
{
    char padding_0[0x30];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x30

class UHDCoreUGCData : public UPrimaryDataAsset
{
    char padding_0[0x30];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x30

class UHDCoreUGCPluginStateMachine : public UObject
{
    FHDCoreUGCPluginStateMachineProperties StateProperties;                           // 0x0048 (size: 0xF8)

}; // Size: 0x218

class UHDCoreUGCProjectPolicies : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UHDCoreUGCSubsystem : public UEngineSubsystem
{
    TMap<class FString, class UHDCoreUGCPluginStateMachine*> UGCPluginStateMachines;  // 0x0060 (size: 0x50)
    char padding_0[0xA0];                                                             // 0x00B0 (size: 0xA0)
    class UHDCoreUGCProjectPolicies* GameSpecificPolicies;                            // 0x0150 (size: 0x8)

}; // Size: 0x160

class UHDCoreUGCSubsystemSettings : public UDeveloperSettings
{
    FSoftClassPath UGCManagerClassName;                                               // 0x0038 (size: 0x18)
    TArray<FString> DisabledPlugins;                                                  // 0x0050 (size: 0x10)
    TArray<FString> AdditionalPluginMetadataKeys;                                     // 0x0060 (size: 0x10)

}; // Size: 0x80

#endif
