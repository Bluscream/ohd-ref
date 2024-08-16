#pragma once
#include "CoreMinimal.h"
#include "SoftObjectPath.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FSoftObjectPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssetPathName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubPathString;
    
    COREUOBJECT_API FSoftObjectPath();
};

