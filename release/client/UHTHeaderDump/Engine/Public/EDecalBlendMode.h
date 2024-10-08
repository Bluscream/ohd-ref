#pragma once
#include "CoreMinimal.h"
#include "EDecalBlendMode.generated.h"

UENUM(BlueprintType)
enum EDecalBlendMode {
    DBM_Translucent,
    DBM_Stain,
    DBM_Normal,
    DBM_Emissive,
    DBM_DBuffer_ColorNormalRoughness,
    DBM_DBuffer_Color,
    DBM_DBuffer_ColorNormal,
    DBM_DBuffer_ColorRoughness,
    DBM_DBuffer_Normal,
    DBM_DBuffer_NormalRoughness,
    DBM_DBuffer_Roughness,
    DBM_DBuffer_Emissive,
    DBM_DBuffer_AlphaComposite,
    DBM_DBuffer_EmissiveAlphaComposite,
    DBM_Volumetric_DistanceFunction,
    DBM_AlphaComposite,
    DBM_AmbientOcclusion,
};

