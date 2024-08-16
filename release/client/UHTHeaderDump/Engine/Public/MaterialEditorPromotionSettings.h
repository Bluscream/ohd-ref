#pragma once
#include "CoreMinimal.h"
#include "FilePath.h"
#include "MaterialEditorPromotionSettings.generated.h"

USTRUCT(BlueprintType)
struct FMaterialEditorPromotionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath DefaultMaterialAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath DefaultDiffuseTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath DefaultNormalTexture;
    
    ENGINE_API FMaterialEditorPromotionSettings();
};

