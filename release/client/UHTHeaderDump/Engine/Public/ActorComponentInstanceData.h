#pragma once
#include "CoreMinimal.h"
#include "ActorComponentDuplicatedObjectData.h"
#include "EComponentCreationMethod.h"
#include "ActorComponentInstanceData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct ENGINE_API FActorComponentInstanceData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SourceComponentTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComponentCreationMethod SourceComponentCreationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceComponentTypeSerializedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> SavedProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ReferencedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ReferencedNames;
    
public:
    FActorComponentInstanceData();
};

