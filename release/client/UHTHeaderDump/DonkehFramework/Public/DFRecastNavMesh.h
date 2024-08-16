#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=RecastNavMesh -FallbackName=RecastNavMesh
#include "DFRecastNavMesh.generated.h"

UCLASS(Blueprintable)
class DONKEHFRAMEWORK_API ADFRecastNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    ADFRecastNavMesh(const FObjectInitializer& ObjectInitializer);

};

