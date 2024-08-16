#ifndef UE4SS_SDK_ProceduralMeshComponent_HPP
#define UE4SS_SDK_ProceduralMeshComponent_HPP

#include "ProceduralMeshComponent_enums.hpp"

struct FProcMeshSection
{
    TArray<FProcMeshVertex> ProcVertexBuffer;                                         // 0x0000 (size: 0x10)
    TArray<uint32> ProcIndexBuffer;                                                   // 0x0010 (size: 0x10)
    FBox SectionLocalBox;                                                             // 0x0020 (size: 0x1C)
    bool bEnableCollision;                                                            // 0x003C (size: 0x1)
    bool bSectionVisible;                                                             // 0x003D (size: 0x1)

}; // Size: 0x40

struct FProcMeshTangent
{
    FVector TangentX;                                                                 // 0x0000 (size: 0xC)
    bool bFlipTangentY;                                                               // 0x000C (size: 0x1)

}; // Size: 0x10

struct FProcMeshVertex
{
    FVector Position;                                                                 // 0x0000 (size: 0xC)
    FVector Normal;                                                                   // 0x000C (size: 0xC)
    FProcMeshTangent Tangent;                                                         // 0x0018 (size: 0x10)
    FColor Color;                                                                     // 0x0028 (size: 0x4)
    FVector2D UV0;                                                                    // 0x002C (size: 0x8)
    FVector2D UV1;                                                                    // 0x0034 (size: 0x8)
    FVector2D UV2;                                                                    // 0x003C (size: 0x8)
    FVector2D UV3;                                                                    // 0x0044 (size: 0x8)

}; // Size: 0x4C

class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent*& OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial);
    void GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32 LODIndex, int32 SectionIndex, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents);
    void GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32 SectionIndex, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents);
    void GenerateBoxMesh(FVector BoxRadius, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents);
    void CreateGridMeshWelded(int32 NumX, int32 NumY, TArray<int32>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, float GridSpacing);
    void CreateGridMeshTriangles(int32 NumX, int32 NumY, bool bWinding, TArray<int32>& Triangles);
    void CreateGridMeshSplit(int32 NumX, int32 NumY, TArray<int32>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, TArray<FVector2D>& UV1s, float GridSpacing);
    void CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int32 LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);
    void ConvertQuadToTriangles(TArray<int32>& Triangles, int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3);
    void CalculateTangentsForMesh(const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector2D>& UVs, TArray<FVector>& Normals, TArray<FProcMeshTangent>& Tangents);
}; // Size: 0x28

class UProceduralMeshComponent : public UMeshComponent
{
    bool bUseComplexAsSimpleCollision;                                                // 0x0438 (size: 0x1)
    bool bUseAsyncCooking;                                                            // 0x0439 (size: 0x1)
    char padding_0[0x6];                                                              // 0x043A (size: 0x6)
    class UBodySetup* ProcMeshBodySetup;                                              // 0x0440 (size: 0x8)
    TArray<FProcMeshSection> ProcMeshSections;                                        // 0x0448 (size: 0x10)
    TArray<FKConvexElem> CollisionConvexElems;                                        // 0x0458 (size: 0x10)
    FBoxSphereBounds LocalBounds;                                                     // 0x0468 (size: 0x1C)
    char padding_1[0x4];                                                              // 0x0484 (size: 0x4)
    TArray<class UBodySetup*> AsyncBodySetupQueue;                                    // 0x0488 (size: 0x10)

    void UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents);
    void UpdateMeshSection(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents);
    void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);
    bool IsMeshSectionVisible(int32 SectionIndex);
    int32 GetNumSections();
    void CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents, bool bCreateCollision);
    void CreateMeshSection(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents, bool bCreateCollision);
    void ClearMeshSection(int32 SectionIndex);
    void ClearCollisionConvexMeshes();
    void ClearAllMeshSections();
    void AddCollisionConvexMesh(TArray<FVector> ConvexVerts);
}; // Size: 0x4A0

#endif
