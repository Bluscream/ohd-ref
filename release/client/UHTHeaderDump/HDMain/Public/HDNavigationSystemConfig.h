#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFNavigationSystemConfig -FallbackName=DFNavigationSystemConfig
#include "HDNavigationSystemConfig.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HDMAIN_API UHDNavigationSystemConfig : public UDFNavigationSystemConfig {
    GENERATED_BODY()
public:
    UHDNavigationSystemConfig();

};

