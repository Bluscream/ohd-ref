#pragma once
#include "CoreMinimal.h"
#include "Texture2D.h"
#include "VirtualTextureBuildSettings.h"
#include "RuntimeVirtualTextureStreamingProxy.generated.h"

UCLASS(Blueprintable)
class URuntimeVirtualTextureStreamingProxy : public UTexture2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVirtualTextureBuildSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSinglePhysicalSpace;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BuildHash;
    
    URuntimeVirtualTextureStreamingProxy();

};

