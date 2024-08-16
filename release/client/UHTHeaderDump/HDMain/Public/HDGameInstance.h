#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Tinkerbox -ObjectName=TBGameInstance -FallbackName=TBGameInstance
#include "Templates/SubclassOf.h"
#include "HDGameInstance.generated.h"

class UHDScoreboardBase;
class UHDUGCLoadProgressScreen;

UCLASS(Blueprintable, NonTransient)
class HDMAIN_API UHDGameInstance : public UTBGameInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHDUGCLoadProgressScreen* UGCLoadProgressScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHDScoreboardBase* ScoreboardMenu;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHDUGCLoadProgressScreen> UGCLoadProgressScreenClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHDUGCLoadProgressScreen> UGCLoadProgressScreenClass;
    
public:
    UHDGameInstance();

    UFUNCTION(BlueprintCallable)
    void UnloadScoreboardMenu();
    
    UFUNCTION(BlueprintCallable)
    void ShowErrorDialog(const FText& Title, const FText& Message);
    
    UFUNCTION(BlueprintCallable)
    void ShowConfirmationDialog(const FText& Title, const FText& Message);
    
    UFUNCTION(BlueprintPure)
    static bool OwnsAppBP(int64 AppID);
    
    UFUNCTION(BlueprintCallable)
    void LoadScoreboardMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasModsLoaded();
    
    UFUNCTION(BlueprintPure)
    static bool HasDLCBP(int64 DLCAppID);
    
};

