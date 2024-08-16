#pragma once
#include "CoreMinimal.h"
#include "CollisionResponseTemplate.h"
#include "CustomChannelSetup.h"
#include "CustomProfile.h"
#include "DeveloperSettings.h"
#include "Redirector.h"
#include "CollisionProfile.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=Engine)
class UCollisionProfile : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FCollisionResponseTemplate> Profiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FCustomChannelSetup> DefaultChannelResponses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FCustomProfile> EditProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FRedirector> ProfileRedirects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FRedirector> CollisionChannelRedirects;
    
public:
    UCollisionProfile();

};

