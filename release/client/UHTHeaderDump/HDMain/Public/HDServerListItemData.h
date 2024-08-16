#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HDServerInfo.h"
#include "HDServerListItemData.generated.h"

UCLASS(Blueprintable, Within=ListView)
class HDMAIN_API UHDServerListItemData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHDServerInfo ServerInfo;
    
public:
    UHDServerListItemData();

};

