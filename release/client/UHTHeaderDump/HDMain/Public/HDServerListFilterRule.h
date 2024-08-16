#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HDServerListFilterRule.generated.h"

class UHDServerListItemData;

UCLASS(Abstract, Blueprintable, Const)
class HDMAIN_API UHDServerListFilterRule : public UObject {
    GENERATED_BODY()
public:
    UHDServerListFilterRule();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MatchesServer(const UHDServerListItemData* ListItem) const;
    
};

