#include "SkeletalMesh.h"

USkeletalMesh::USkeletalMesh() {
    this->Skeleton = NULL;
    this->SkelMirrorAxis = EAxis::X;
    this->SkelMirrorFlipAxis = EAxis::Z;
    this->bUseFullPrecisionUVs = false;
    this->bUseHighPrecisionTangentBasis = false;
    this->bHasBeenSimplified = false;
    this->bHasVertexColors = false;
    this->bEnablePerPolyCollision = false;
    this->BodySetup = NULL;
    this->PhysicsAsset = NULL;
    this->ShadowPhysicsAsset = NULL;
    this->PostProcessAnimBlueprint = NULL;
}

void USkeletalMesh::SetLODSettings(USkeletalMeshLODSettings* InLODSettings) {
}

int32 USkeletalMesh::NumSockets() const {
    return 0;
}

TArray<FString> USkeletalMesh::K2_GetAllMorphTargetNames() const {
    return TArray<FString>();
}

bool USkeletalMesh::IsSectionUsingCloth(int32 InSectionIndex, bool bCheckCorrespondingSections) const {
    return false;
}

USkeletalMeshSocket* USkeletalMesh::GetSocketByIndex(int32 Index) const {
    return NULL;
}

UNodeMappingContainer* USkeletalMesh::GetNodeMappingContainer(UBlueprint* SourceAsset) const {
    return NULL;
}

FBoxSphereBounds USkeletalMesh::GetImportedBounds() const {
    return FBoxSphereBounds{};
}

FBoxSphereBounds USkeletalMesh::GetBounds() const {
    return FBoxSphereBounds{};
}

USkeletalMeshSocket* USkeletalMesh::FindSocketInfo(FName InSocketName, FTransform& OutTransform, int32& OutBoneIndex, int32& OutIndex) const {
    return NULL;
}

USkeletalMeshSocket* USkeletalMesh::FindSocketAndIndex(FName InSocketName, int32& OutIndex) const {
    return NULL;
}

USkeletalMeshSocket* USkeletalMesh::FindSocket(FName InSocketName) const {
    return NULL;
}


