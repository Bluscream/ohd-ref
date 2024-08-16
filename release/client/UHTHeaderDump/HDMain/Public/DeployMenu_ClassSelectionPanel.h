#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DeployMenu_ClassSelectionPanel.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UDeployMenu_ClassSelectionPanel : public UUserWidget {
    GENERATED_BODY()
public:
    UDeployMenu_ClassSelectionPanel();

};

