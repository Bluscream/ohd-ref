#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PrefabricatorEventListener.generated.h"

class APrefabActor;

UCLASS(Blueprintable)
class PREFABRICATORRUNTIME_API UPrefabricatorEventListener : public UObject {
    GENERATED_BODY()
public:
    UPrefabricatorEventListener();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostSpawn(APrefabActor* Prefab);
    
};

