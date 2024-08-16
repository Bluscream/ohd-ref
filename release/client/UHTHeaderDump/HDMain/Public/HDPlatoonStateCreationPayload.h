#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HDPlatoonCreationParams.h"
#include "HDPlatoonStateCreationPayload.generated.h"

UCLASS(Blueprintable)
class UHDPlatoonStateCreationPayload : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHDPlatoonCreationParams CreationParams;
    
    UHDPlatoonStateCreationPayload();

};

