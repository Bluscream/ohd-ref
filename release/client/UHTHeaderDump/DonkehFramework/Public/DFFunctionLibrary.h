#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DFFunctionLibrary.generated.h"

class UAnimMontage;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class DONKEHFRAMEWORK_API UDFFunctionLibrary : public UObject {
    GENERATED_BODY()
public:
    UDFFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetEnableAutoBlendOutForActiveMontage(const UAnimMontage* AnimMontage, const USkeletalMeshComponent* AnimSourceMesh, bool bNewEnableAutoBlendOut);
    
    UFUNCTION(BlueprintCallable)
    static void ClearMeshAnimInstance(USkeletalMeshComponent* MeshToClear);
    
};

