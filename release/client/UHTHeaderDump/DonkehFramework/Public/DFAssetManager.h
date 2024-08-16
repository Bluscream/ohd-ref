#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetManager -FallbackName=AssetManager
#include "DFAssetManager.generated.h"

UCLASS(Blueprintable)
class DONKEHFRAMEWORK_API UDFAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
    UDFAssetManager();

};

