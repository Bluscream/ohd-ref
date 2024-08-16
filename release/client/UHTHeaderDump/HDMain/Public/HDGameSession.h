#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFGameSession -FallbackName=DFGameSession
#include "HDGameSession.generated.h"

UCLASS(Blueprintable, Config=Engine)
class HDMAIN_API AHDGameSession : public ADFGameSession {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bSupportersOnlyWhitelist;
    
public:
    AHDGameSession(const FObjectInitializer& ObjectInitializer);

};

