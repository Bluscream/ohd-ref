#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFOnlineSessionClient -FallbackName=DFOnlineSessionClient
#include "HDOnlineSessionClient.generated.h"

UCLASS(Blueprintable)
class HDMAIN_API UHDOnlineSessionClient : public UDFOnlineSessionClient {
    GENERATED_BODY()
public:
    UHDOnlineSessionClient();

};

