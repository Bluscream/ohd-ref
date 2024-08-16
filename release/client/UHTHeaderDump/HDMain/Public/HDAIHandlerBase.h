#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFHandlerInterface -FallbackName=DFHandlerInterface
#include "HDAIHandlerBase.generated.h"

class AHDAIController;
class UHDAIHandlerBase;
class UHDGOAPComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UHDAIHandlerBase : public UObject, public IDFHandlerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDAIController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHDGOAPComponent* GOAPComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAIHandlerBase* HandlerDuplicate;
    
public:
    UHDAIHandlerBase();


    // Fix for true pure virtual functions not being implemented
};

