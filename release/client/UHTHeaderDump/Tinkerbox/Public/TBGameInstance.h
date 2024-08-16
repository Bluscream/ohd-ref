#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFBaseGameInstance -FallbackName=DFBaseGameInstance
#include "Templates/SubclassOf.h"
#include "TBGameInstance.generated.h"

class UDFBaseMenu;
class URCONServerSystem;

UCLASS(Blueprintable, NonTransient)
class TINKERBOX_API UTBGameInstance : public UDFBaseGameInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDFBaseMenu* MainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDFBaseMenu> MainMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath MenuGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHidePlayerHUDInMainMenu: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseMenuBackgroundMaps: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> MenuBackgroundMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URCONServerSystem* RCONServerSystem;
    
public:
    UTBGameInstance();

    UFUNCTION(BlueprintCallable)
    void UnloadMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void LoadMainMenu(bool bExclusive);
    
    UFUNCTION(BlueprintCallable)
    void HandleGoToMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void GoToMainMenu();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void GetGameBuildInfo();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentSessionHostAddressStr(FString& OutHostAddrStr, bool bPreferSteamP2PAddr, bool bAppendPort) const;
    
};

