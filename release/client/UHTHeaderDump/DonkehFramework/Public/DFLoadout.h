#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Templates/SubclassOf.h"
#include "DFLoadout.generated.h"

class ADFBaseItem;

UCLASS(Blueprintable)
class DONKEHFRAMEWORK_API UDFLoadout : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ADFBaseItem>> ItemClasses;
    
    UDFLoadout();

};

