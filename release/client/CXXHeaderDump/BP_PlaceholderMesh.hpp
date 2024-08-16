#ifndef UE4SS_SDK_BP_PlaceholderMesh_HPP
#define UE4SS_SDK_BP_PlaceholderMesh_HPP

class ABP_PlaceholderMesh_C : public AActor
{
    class UStaticMeshComponent* Mesh;                                                 // 0x0220 (size: 0x8)
    FLinearColor MeshColor;                                                           // 0x0228 (size: 0x10)

    void UserConstructionScript();
}; // Size: 0x238

#endif
