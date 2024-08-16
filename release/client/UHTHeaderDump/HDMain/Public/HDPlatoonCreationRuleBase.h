#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HDPlatoonCreationRuleBase.generated.h"

class UHDTeamDefinition;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class HDMAIN_API UHDPlatoonCreationRuleBase : public UObject {
    GENERATED_BODY()
public:
    UHDPlatoonCreationRuleBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SatisfiesRule(const UHDTeamDefinition* TeamDef) const;
    
};

