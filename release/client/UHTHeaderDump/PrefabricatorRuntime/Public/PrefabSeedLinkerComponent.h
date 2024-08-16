#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "PrefabSeedLinkerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PREFABRICATORRUNTIME_API UPrefabSeedLinkerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPrefabSeedLinkerComponent(const FObjectInitializer& ObjectInitializer);

};

