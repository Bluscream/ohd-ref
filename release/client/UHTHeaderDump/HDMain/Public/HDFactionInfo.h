#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFFactionInfo -FallbackName=DFFactionInfo
#include "HDFactionInfo.generated.h"

class UHDKit;

UCLASS(Abstract, Blueprintable)
class HDMAIN_API UHDFactionInfo : public UDFFactionInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<UHDKit>> Kits;
    
public:
    UHDFactionInfo();

};

