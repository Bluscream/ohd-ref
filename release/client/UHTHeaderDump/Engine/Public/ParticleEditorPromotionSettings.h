#pragma once
#include "CoreMinimal.h"
#include "FilePath.h"
#include "ParticleEditorPromotionSettings.generated.h"

USTRUCT(BlueprintType)
struct FParticleEditorPromotionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath DefaultParticleAsset;
    
    ENGINE_API FParticleEditorPromotionSettings();
};

