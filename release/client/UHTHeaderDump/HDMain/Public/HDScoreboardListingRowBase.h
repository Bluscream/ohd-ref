#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=EPlayerVoiceState -FallbackName=EPlayerVoiceState
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "HDScoreboardListingRowBase.generated.h"

class ADFBasePlayerState;
class UButton;
class UHDScoreboardBase;
class UTextBlock;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UHDScoreboardListingRowBase : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHDScoreboardBase* ParentMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADFBasePlayerState* PlayerState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRefreshListingOnTick: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* MutePlayerBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Kills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Deaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Ping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> NotTalkingVoiceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TalkingVoiceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> MutedVoiceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PlayerNumber;
    
public:
    UHDScoreboardListingRowBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SetVoiceStateIcon(UTexture2D* NewIcon);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshListing();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRefreshListing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlayerVoiceStateChanged(EPlayerVoiceState NewVoiceState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMutePlayer();
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(UHDScoreboardBase* InParentMenu, ADFBasePlayerState* InPlayerState, bool bInRefreshListingOnTick);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInitialized() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIconForVoiceState(EPlayerVoiceState VoiceState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPing() const;
    
};

