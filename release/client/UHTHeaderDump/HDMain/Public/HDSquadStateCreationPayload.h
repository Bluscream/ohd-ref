#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HDSquadCreationParams.h"
#include "HDSquadStateCreationPayload.generated.h"

UCLASS(Blueprintable)
class UHDSquadStateCreationPayload : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHDSquadCreationParams CreationParams;
    
    UHDSquadStateCreationPayload();

};

