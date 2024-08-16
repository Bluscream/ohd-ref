#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PrefabricatorConstructionSnap.generated.h"

class UPrefabricatorConstructionSnapComponent;

UCLASS(Blueprintable)
class CONSTRUCTIONSYSTEMRUNTIME_API APrefabricatorConstructionSnap : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrefabricatorConstructionSnapComponent* ConstructionSnapComponent;
    
public:
    APrefabricatorConstructionSnap(const FObjectInitializer& ObjectInitializer);

};

