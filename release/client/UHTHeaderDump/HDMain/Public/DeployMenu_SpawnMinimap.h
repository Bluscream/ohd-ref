#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFrameworkUI -ObjectName=DFMinimap -FallbackName=DFMinimap
#include "DeployMenu_SpawnMinimap.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UDeployMenu_SpawnMinimap : public UDFMinimap {
    GENERATED_BODY()
public:
    UDeployMenu_SpawnMinimap();

};

