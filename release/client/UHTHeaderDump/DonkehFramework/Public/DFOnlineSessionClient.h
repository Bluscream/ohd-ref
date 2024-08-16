#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineSessionClient -FallbackName=OnlineSessionClient
#include "DFOnlineSessionClient.generated.h"

UCLASS(Blueprintable)
class DONKEHFRAMEWORK_API UDFOnlineSessionClient : public UOnlineSessionClient {
    GENERATED_BODY()
public:
    UDFOnlineSessionClient();

};

