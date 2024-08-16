#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ClothingSimulationInteractor.generated.h"

UCLASS(Abstract, Blueprintable)
class CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClothingSimulationInteractor : public UObject {
    GENERATED_BODY()
public:
    UClothingSimulationInteractor();

    UFUNCTION(BlueprintCallable)
    void SetAnimDriveSpringStiffness(float InStiffness);
    
    UFUNCTION(BlueprintCallable)
    void PhysicsAssetUpdated();
    
    UFUNCTION(BlueprintCallable)
    void EnableGravityOverride(const FVector& InVector);
    
    UFUNCTION(BlueprintCallable)
    void DisableGravityOverride();
    
    UFUNCTION(BlueprintCallable)
    void ClothConfigUpdated();
    
};

