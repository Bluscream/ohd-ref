#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFAssetManager -FallbackName=DFAssetManager
#include "HDAssetManager.generated.h"

UCLASS(Blueprintable)
class HDMAIN_API UHDAssetManager : public UDFAssetManager {
    GENERATED_BODY()
public:
    UHDAssetManager();

};

