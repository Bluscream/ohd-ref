#pragma once
#include "CoreMinimal.h"
#include "TextureLODSettings.h"
#include "DeviceProfile.generated.h"

class UObject;

UCLASS(Blueprintable, Config=Engine)
class ENGINE_API UDeviceProfile : public UTextureLODSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BaseProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Parent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CVars;
    
    UDeviceProfile();

};

