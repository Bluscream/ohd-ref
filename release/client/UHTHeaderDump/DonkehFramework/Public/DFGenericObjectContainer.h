#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "DFGenericObject.h"
#include "DFGenericObjectContainer.generated.h"

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FDFGenericObjectContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDFGenericObject> GenericObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UClass* RequiredClass;
    
public:
    FDFGenericObjectContainer();
};

