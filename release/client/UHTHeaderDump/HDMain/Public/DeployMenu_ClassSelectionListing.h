#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DeployMenu_ClassSelectionListing.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UDeployMenu_ClassSelectionListing : public UUserWidget {
    GENERATED_BODY()
public:
    UDeployMenu_ClassSelectionListing();

};

