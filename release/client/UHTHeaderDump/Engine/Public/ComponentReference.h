#pragma once
#include "CoreMinimal.h"
#include "ComponentReference.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ENGINE_API FComponentReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OtherActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathToComponent;
    
    FComponentReference();
};

