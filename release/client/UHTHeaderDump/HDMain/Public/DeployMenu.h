#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFrameworkUI -ObjectName=DFBaseMenu -FallbackName=DFBaseMenu
#include "DeployMenu.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UDeployMenu : public UDFBaseMenu {
    GENERATED_BODY()
public:
    UDeployMenu();

};

