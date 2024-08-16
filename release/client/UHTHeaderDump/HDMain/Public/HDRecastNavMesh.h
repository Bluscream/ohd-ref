#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFRecastNavMesh -FallbackName=DFRecastNavMesh
#include "HDRecastNavMesh.generated.h"

UCLASS(Blueprintable)
class HDMAIN_API AHDRecastNavMesh : public ADFRecastNavMesh {
    GENERATED_BODY()
public:
    AHDRecastNavMesh(const FObjectInitializer& ObjectInitializer);

};

