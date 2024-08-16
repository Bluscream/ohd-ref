#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationSystemModuleConfig -FallbackName=NavigationSystemModuleConfig
#include "DFNavigationSystemConfig.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DONKEHFRAMEWORK_API UDFNavigationSystemConfig : public UNavigationSystemModuleConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGenerateNavigationOnlyAroundNavigationInvokers: 1;
    
public:
    UDFNavigationSystemConfig();

};

