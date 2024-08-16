#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HDAIBehaviorDecisionBase.generated.h"

class AHDAIController;
class UHDGOAPComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UHDAIBehaviorDecisionBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDAIController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHDGOAPComponent* GOAPComponent;
    
public:
    UHDAIBehaviorDecisionBase();

};

