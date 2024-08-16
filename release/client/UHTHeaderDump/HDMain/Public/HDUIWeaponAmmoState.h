#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HDUIWeaponAmmoState.generated.h"

class ADFBaseAmmoClip;

USTRUCT(BlueprintType)
struct HDMAIN_API FHDUIWeaponAmmoState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalFreeAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumFreeAmmoClips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentClipAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentClipMaxAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADFBaseAmmoClip> CurrentClipAmmoClass;
    
    FHDUIWeaponAmmoState();
};

