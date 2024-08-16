#pragma once
#include "CoreMinimal.h"
#include "MaterialFunctionInterface.h"
#include "MaterialFunction.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialFunction : public UMaterialFunctionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExposeToLibrary: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPrefixParameterNames: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bReentrantFlag: 1;
    
public:
    UMaterialFunction();

};

