#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "HDWeaponScopeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HDMAIN_API UHDWeaponScopeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UHDWeaponScopeComponent(const FObjectInitializer& ObjectInitializer);

};

