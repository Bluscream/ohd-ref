#ifndef UE4SS_SDK_ConstructionSystemRuntime_HPP
#define UE4SS_SDK_ConstructionSystemRuntime_HPP

#include "ConstructionSystemRuntime_enums.hpp"

struct FConstructionSystemSaveConstructedItem
{
    class UPrefabricatorAssetInterface* PrefabAsset;                                  // 0x0000 (size: 0x8)
    int32 Seed;                                                                       // 0x0008 (size: 0x4)
    char padding_0[0x4];                                                              // 0x000C (size: 0x4)
    FTransform Transform;                                                             // 0x0010 (size: 0x30)

}; // Size: 0x40

struct FConstructionSystemSavePlayerInfo
{
    bool bRestorePlayerInfo;                                                          // 0x0000 (size: 0x1)
    char padding_0[0xF];                                                              // 0x0001 (size: 0xF)
    FTransform Transform;                                                             // 0x0010 (size: 0x30)
    FRotator ControlRotation;                                                         // 0x0040 (size: 0xC)

}; // Size: 0x50

struct FConstructionSystemUICategory
{
    FText DisplayName;                                                                // 0x0000 (size: 0x18)
    class UTexture2D* Icon;                                                           // 0x0018 (size: 0x8)
    TArray<FConstructionSystemUIPrefabEntry> PrefabEntries;                           // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FConstructionSystemUIPrefabEntry
{
    FText DisplayName;                                                                // 0x0000 (size: 0x18)
    FText Tooltip;                                                                    // 0x0018 (size: 0x18)
    class UTexture2D* Icon;                                                           // 0x0030 (size: 0x8)
    class UPrefabricatorAssetInterface* Prefab;                                       // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FPCSnapConstraintFloor
{
    bool AttachX;                                                                     // 0x0000 (size: 0x1)
    bool AttachXNegative;                                                             // 0x0001 (size: 0x1)
    bool AttachY;                                                                     // 0x0002 (size: 0x1)
    bool AttachYNegative;                                                             // 0x0003 (size: 0x1)
    bool AttachZ;                                                                     // 0x0004 (size: 0x1)
    bool AttachZNegative;                                                             // 0x0005 (size: 0x1)

}; // Size: 0x6

struct FPCSnapConstraintWall
{
    bool AttachTop;                                                                   // 0x0000 (size: 0x1)
    bool AttachBottom;                                                                // 0x0001 (size: 0x1)
    bool AttachLeft;                                                                  // 0x0002 (size: 0x1)
    bool AttachRight;                                                                 // 0x0003 (size: 0x1)

}; // Size: 0x4

class APrefabricatorConstructionSnap : public AActor
{
    class UPrefabricatorConstructionSnapComponent* ConstructionSnapComponent;         // 0x0220 (size: 0x8)

}; // Size: 0x228

class IConstructionSystemBuildUI : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void SetUIAsset(class UConstructionSystemUIAsset* UIAsset);
    void SetConstructionSystem(class UConstructionSystemComponent* ConstructionSystem);
}; // Size: 0x28

class UConstructionSystemBuildTool : public UConstructionSystemTool
{
    float TraceDistance;                                                              // 0x0030 (size: 0x4)
    float CursorRotationStepAngle;                                                    // 0x0034 (size: 0x4)
    class UConstructionSystemCursor* Cursor;                                          // 0x0038 (size: 0x8)
    class UPrefabricatorAssetInterface* ActivePrefabAsset;                            // 0x0040 (size: 0x8)

    void SetActivePrefab(class UPrefabricatorAssetInterface* InActivePrefabAsset);
    void HandleInput_RotateCursorStep(float NumSteps);
    void HandleInput_CursorMovePrev();
    void HandleInput_CursorMoveNext();
    void HandleInput_ConstructAtCursor();
}; // Size: 0x168

class UConstructionSystemComponent : public UActorComponent
{
    class UMaterialInterface* CursorMaterial;                                         // 0x00B0 (size: 0x8)
    class UMaterialInterface* CursorInvalidMaterial;                                  // 0x00B8 (size: 0x8)
    float TraceStartDistance;                                                         // 0x00C0 (size: 0x4)
    float TraceSweepRadius;                                                           // 0x00C4 (size: 0x4)
    class AActor* ConstructionCameraActor;                                            // 0x00C8 (size: 0x8)
    float ConstructionCameraTransitionTime;                                           // 0x00D0 (size: 0x4)
    float ConstructionCameraTransitionExp;                                            // 0x00D4 (size: 0x4)
    TSubclassOf<class UUserWidget> BuildMenuUI;                                       // 0x00D8 (size: 0x8)
    class UConstructionSystemUIAsset* BuildMenuData;                                  // 0x00E0 (size: 0x8)
    class UUserWidget* BuildMenuUIInstance;                                           // 0x00E8 (size: 0x8)
    EConstructionSystemToolType ActiveToolType;                                       // 0x00F0 (size: 0x1)
    char padding_0[0x7];                                                              // 0x00F1 (size: 0x7)
    TMap<class EConstructionSystemToolType, class UConstructionSystemTool*> Tools;    // 0x00F8 (size: 0x50)

    void ToggleConstructionSystem();
    void ShowBuildMenu();
    void SetActiveTool(EConstructionSystemToolType InToolType);
    void HideBuildMenu();
    class UConstructionSystemTool* GetTool(EConstructionSystemToolType InToolType);
    EConstructionSystemToolType GetActiveToolType();
    class UConstructionSystemTool* GetActiveTool();
    void EnableConstructionSystem(EConstructionSystemToolType InToolType);
    void DisableConstructionSystem();
}; // Size: 0x150

class UConstructionSystemCursor : public UObject
{
    class APrefabActor* CursorGhostActor;                                             // 0x0028 (size: 0x8)
    int32 CursorSeed;                                                                 // 0x0030 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0034 (size: 0x4)
    class UMaterialInterface* CursorMaterial;                                         // 0x0038 (size: 0x8)
    class UMaterialInterface* CursorInvalidMaterial;                                  // 0x0040 (size: 0x8)
    TArray<class UPrefabricatorConstructionSnapComponent*> SnapComponents;            // 0x0048 (size: 0x10)
    int32 ActiveSnapComponentIndex;                                                   // 0x0058 (size: 0x4)

}; // Size: 0x60

class UConstructionSystemItemUserData : public UAssetUserData
{
    int32 Seed;                                                                       // 0x0028 (size: 0x4)

}; // Size: 0x30

class UConstructionSystemRemoveTool : public UConstructionSystemTool
{
    float TraceDistance;                                                              // 0x0030 (size: 0x4)
    TWeakObjectPtr<class APrefabActor> FocusedActor;                                  // 0x0034 (size: 0x8)

    void HandleInput_RemoveAtCursor();
}; // Size: 0x90

class UConstructionSystemSaveGame : public USaveGame
{
    FString SaveSlotName;                                                             // 0x0028 (size: 0x10)
    uint32 UserIndex;                                                                 // 0x0038 (size: 0x4)
    char padding_0[0x4];                                                              // 0x003C (size: 0x4)
    FConstructionSystemSavePlayerInfo PlayerInfo;                                     // 0x0040 (size: 0x50)
    TArray<FConstructionSystemSaveConstructedItem> ConstructedItems;                  // 0x0090 (size: 0x10)

}; // Size: 0xA0

class UConstructionSystemSaveSystem : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void SaveConstructionSystemLevel(const class UObject* WorldContextObject, FString SaveSlotName, int32 UserIndex, bool bSavePlayerState);
    void LoadConstructionSystemLevel(const class UObject* WorldContextObject, const FName& LevelName, bool bAbsolute, FString SaveSlotName, int32 UserIndex);
    void HandleConstructionSystemLevelLoad(const class UObject* WorldContextObject);
}; // Size: 0x28

class UConstructionSystemTool : public UObject
{
    char padding_0[0x30];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x30

class UConstructionSystemUIAsset : public UDataAsset
{
    FText MenuTitle;                                                                  // 0x0030 (size: 0x18)
    TArray<FConstructionSystemUICategory> Categories;                                 // 0x0048 (size: 0x10)

}; // Size: 0x58

class UPrefabricatorConstructionSnapComponent : public UBoxComponent
{
    EPrefabricatorConstructionSnapType SnapType;                                      // 0x0430 (size: 0x1)
    FPCSnapConstraintFloor FloorConstraint;                                           // 0x0431 (size: 0x6)
    FPCSnapConstraintWall WallConstraint;                                             // 0x0437 (size: 0x4)
    bool bAlignToGroundSlope;                                                         // 0x043B (size: 0x1)
    bool bUseMaxGroundSlopeConstraint;                                                // 0x043C (size: 0x1)
    char padding_0[0x3];                                                              // 0x043D (size: 0x3)
    float MaxGroundPlacementSlope;                                                    // 0x0440 (size: 0x4)

}; // Size: 0x450

#endif
