#pragma once
#include "CoreMinimal.h"
#include "FilePath.h"
#include "BlueprintEditorPromotionSettings.generated.h"

USTRUCT(BlueprintType)
struct FBlueprintEditorPromotionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath FirstMeshPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath SecondMeshPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath DefaultParticleAsset;
    
    ENGINE_API FBlueprintEditorPromotionSettings();
};

