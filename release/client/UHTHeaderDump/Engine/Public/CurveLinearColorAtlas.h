#pragma once
#include "CoreMinimal.h"
#include "Texture2D.h"
#include "CurveLinearColorAtlas.generated.h"

class UCurveLinearColor;

UCLASS(Blueprintable)
class ENGINE_API UCurveLinearColorAtlas : public UTexture2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TextureSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveLinearColor*> GradientCurves;
    
    UCurveLinearColorAtlas();

    UFUNCTION(BlueprintCallable)
    bool GetCurvePosition(UCurveLinearColor* InCurve, float& Position);
    
};

