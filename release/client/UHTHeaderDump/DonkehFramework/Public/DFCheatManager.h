#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CheatManager -FallbackName=CheatManager
#include "DFCheatManager.generated.h"

UCLASS(Blueprintable, Within=DFBasePlayerController)
class DONKEHFRAMEWORK_API UDFCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UDFCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void ToggleItemDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGunRecoil();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGunInfiniteClipAmmo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGunInfiniteAmmo();
    
};

