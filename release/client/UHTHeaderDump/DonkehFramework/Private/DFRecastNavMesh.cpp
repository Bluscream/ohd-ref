#include "DFRecastNavMesh.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=ERuntimeGenerationType -FallbackName=ERuntimeGenerationType

ADFRecastNavMesh::ADFRecastNavMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RuntimeGeneration = ERuntimeGenerationType::Static;
}


