#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HDCoreUGC -ObjectName=HDCoreDefaultUGCProjectPolicies -FallbackName=HDCoreDefaultUGCProjectPolicies
#include "HDGameModsProjectPolicies.generated.h"

UCLASS(Blueprintable)
class HDMAIN_API UHDGameModsProjectPolicies : public UHDCoreDefaultUGCProjectPolicies {
    GENERATED_BODY()
public:
    UHDGameModsProjectPolicies();

};

