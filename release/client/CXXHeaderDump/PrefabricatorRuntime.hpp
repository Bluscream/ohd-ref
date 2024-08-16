#ifndef UE4SS_SDK_PrefabricatorRuntime_HPP
#define UE4SS_SDK_PrefabricatorRuntime_HPP

#include "PrefabricatorRuntime_enums.hpp"

struct FPrefabricatorActorData
{
    FGuid PrefabItemID;                                                               // 0x0000 (size: 0x10)
    FTransform RelativeTransform;                                                     // 0x0010 (size: 0x30)
    FString ClassPath;                                                                // 0x0040 (size: 0x10)
    FSoftClassPath ClassPathRef;                                                      // 0x0050 (size: 0x18)
    TArray<class UPrefabricatorProperty*> Properties;                                 // 0x0068 (size: 0x10)
    TArray<FPrefabricatorComponentData> Components;                                   // 0x0078 (size: 0x10)

}; // Size: 0x90

struct FPrefabricatorAssetCollectionItem
{
    TSoftObjectPtr<UPrefabricatorAsset> PrefabAsset;                                  // 0x0000 (size: 0x28)
    float Weight;                                                                     // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FPrefabricatorComponentData
{
    FTransform RelativeTransform;                                                     // 0x0000 (size: 0x30)
    FString ComponentName;                                                            // 0x0030 (size: 0x10)
    TArray<class UPrefabricatorProperty*> Properties;                                 // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FPrefabricatorPropertyAssetMapping
{
    FSoftObjectPath AssetReference;                                                   // 0x0000 (size: 0x18)
    FString AssetClassName;                                                           // 0x0018 (size: 0x10)
    FName AssetObjectPath;                                                            // 0x0028 (size: 0x8)
    bool bUseQuotes;                                                                  // 0x0030 (size: 0x1)

}; // Size: 0x38

class APrefabActor : public AActor
{
    class UPrefabComponent* PrefabComponent;                                          // 0x0220 (size: 0x8)
    FGuid LastUpdateID;                                                               // 0x0228 (size: 0x10)
    int32 Seed;                                                                       // 0x0238 (size: 0x4)

    void SavePrefab();
    void RandomizeSeed(const FRandomStream& InRandom, bool bRecursive);
    void LoadPrefab();
    bool IsPrefabOutdated();
    class UPrefabricatorAsset* GetPrefabAsset();
}; // Size: 0x240

class APrefabDebugActor : public AActor
{
    class AActor* Actor;                                                              // 0x0220 (size: 0x8)
    TArray<uint8> ActorData;                                                          // 0x0228 (size: 0x10)

}; // Size: 0x238

class APrefabRandomizer : public AActor
{
    bool bRandomizeOnBeginPlay;                                                       // 0x0220 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0221 (size: 0x3)
    int32 SeedOffset;                                                                 // 0x0224 (size: 0x4)
    float MaxBuildTimePerFrame;                                                       // 0x0228 (size: 0x4)
    char padding_1[0x4];                                                              // 0x022C (size: 0x4)
    FPrefabRandomizerOnRandomizationComplete OnRandomizationComplete;                 // 0x0230 (size: 0x10)
    void PrefabRandomizerCompleteBindableEvent();
    bool bFastSyncBuild;                                                              // 0x0240 (size: 0x1)
    char padding_2[0x7];                                                              // 0x0241 (size: 0x7)
    TArray<class APrefabActor*> ActorsToRandomize;                                    // 0x0248 (size: 0x10)

    void Randomize(int32 InSeed);
}; // Size: 0x270

class APrefabSeedLinker : public AActor
{
    TArray<TWeakObjectPtr<APrefabActor>> LinkedActors;                                // 0x0220 (size: 0x10)
    class UPrefabSeedLinkerComponent* SeedLinkerComponent;                            // 0x0230 (size: 0x8)

}; // Size: 0x238

class AReplicablePrefabActor : public APrefabActor
{
    char padding_0[0x240];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x240

class UPrefabComponent : public USceneComponent
{
    TSoftObjectPtr<UPrefabricatorAssetInterface> PrefabAssetInterface;                // 0x01F0 (size: 0x28)

}; // Size: 0x220

class UPrefabSeedLinkerComponent : public USceneComponent
{
    char padding_0[0x1F0];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x1F0

class UPrefabricatorAsset : public UPrefabricatorAssetInterface
{
    TArray<FPrefabricatorActorData> ActorData;                                        // 0x0038 (size: 0x10)
    TEnumAsByte<EComponentMobility::Type> PrefabMobility;                             // 0x0048 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0049 (size: 0x3)
    FGuid LastUpdateID;                                                               // 0x004C (size: 0x10)
    char padding_1[0x4];                                                              // 0x005C (size: 0x4)
    class UThumbnailInfo* ThumbnailInfo;                                              // 0x0060 (size: 0x8)
    uint32 Version;                                                                   // 0x0068 (size: 0x4)

}; // Size: 0x70

class UPrefabricatorAssetCollection : public UPrefabricatorAssetInterface
{
    TArray<FPrefabricatorAssetCollectionItem> Prefabs;                                // 0x0038 (size: 0x10)
    uint32 Version;                                                                   // 0x0048 (size: 0x4)

}; // Size: 0x50

class UPrefabricatorAssetInterface : public UObject
{
    TSubclassOf<class UPrefabricatorEventListener> EventListener;                     // 0x0028 (size: 0x8)
    bool bReplicates;                                                                 // 0x0030 (size: 0x1)

}; // Size: 0x38

class UPrefabricatorAssetUserData : public UAssetUserData
{
    TWeakObjectPtr<class APrefabActor> PrefabActor;                                   // 0x0028 (size: 0x8)
    FGuid ItemId;                                                                     // 0x0030 (size: 0x10)

}; // Size: 0x40

class UPrefabricatorBlueprintLibrary : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void UnlinkPrefab(class APrefabActor* PrefabActor);
    class APrefabActor* SpawnPrefab(const class UObject* WorldContextObject, class UPrefabricatorAssetInterface* Prefab, const FTransform& Transform, int32 Seed);
    void SetPrefabAsset(class APrefabActor* PrefabActor, class UPrefabricatorAssetInterface* Prefab, bool bReloadPrefab);
    void RandomizePrefab(class APrefabActor* PrefabActor, const FRandomStream& InRandom);
    void GetAllAttachedActors(class AActor* Prefab, TArray<class AActor*>& AttachedActors);
    class APrefabActor* FindTopMostPrefabActor(class AActor* InActor);
}; // Size: 0x28

class UPrefabricatorEventListener : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void PostSpawn(class APrefabActor* Prefab);
}; // Size: 0x28

class UPrefabricatorProperty : public UObject
{
    FString PropertyName;                                                             // 0x0028 (size: 0x10)
    FString ExportedValue;                                                            // 0x0038 (size: 0x10)
    TArray<FPrefabricatorPropertyAssetMapping> AssetSoftReferenceMappings;            // 0x0048 (size: 0x10)
    bool bIsCrossReferencedActor;                                                     // 0x0058 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0059 (size: 0x3)
    FGuid CrossReferencePrefabActorId;                                                // 0x005C (size: 0x10)

}; // Size: 0x70

class UPrefabricatorSettings : public UDeveloperSettings
{
    EPrefabricatorPivotPosition PivotPosition;                                        // 0x0038 (size: 0x1)
    bool bAllowDynamicUpdate;                                                         // 0x0039 (size: 0x1)
    char padding_0[0x6];                                                              // 0x003A (size: 0x6)
    TSet<UClass*> IgnoreBoundingBoxForObjects;                                        // 0x0040 (size: 0x50)
    float DefaultThumbnailPitch;                                                      // 0x0090 (size: 0x4)
    float DefaultThumbnailYaw;                                                        // 0x0094 (size: 0x4)
    float DefaultThumbnailZoom;                                                       // 0x0098 (size: 0x4)

}; // Size: 0xA0

#endif
