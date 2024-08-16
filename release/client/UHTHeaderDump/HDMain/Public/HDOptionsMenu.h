#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFrameworkUI -ObjectName=DFBaseMenu -FallbackName=DFBaseMenu
#include "HDOptionsMenu.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UHDOptionsMenu : public UDFBaseMenu {
    GENERATED_BODY()
public:
    UHDOptionsMenu();

};

