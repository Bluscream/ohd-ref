#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundAttenuationSettings.h"
#include "SoundAttenuation.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundAttenuation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundAttenuationSettings Attenuation;
    
    USoundAttenuation();

};

