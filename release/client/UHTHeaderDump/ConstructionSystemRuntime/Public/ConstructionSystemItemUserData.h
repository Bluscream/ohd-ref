#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "ConstructionSystemItemUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class CONSTRUCTIONSYSTEMRUNTIME_API UConstructionSystemItemUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UConstructionSystemItemUserData();

};

