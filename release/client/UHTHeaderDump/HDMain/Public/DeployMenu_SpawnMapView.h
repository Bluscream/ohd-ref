#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DeployMenu_SpawnMapView.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UDeployMenu_SpawnMapView : public UUserWidget {
    GENERATED_BODY()
public:
    UDeployMenu_SpawnMapView();

};

