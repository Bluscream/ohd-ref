#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DeployMenu_SquadMemberListingBase.generated.h"

class AHDPlatoonState;
class AHDPlayerState;
class AHDSquadState;
class APlayerState;
class USquadMemberInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UDeployMenu_SquadMemberListingBase : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USquadMemberInfo* MemberData;
    
public:
    UDeployMenu_SquadMemberListingBase();

    UFUNCTION(BlueprintCallable)
    void SetupMember(USquadMemberInfo* InMemberData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMemberSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMemberPlayerNameUpdated(const FString& NewPlayerName);
    
private:
    UFUNCTION(BlueprintCallable)
    void MemberPlayerNameChanged(APlayerState* PlayerState, const FString& NewPlayerName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHDPlayerState* GetPlayerStateFromData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHDSquadState* GetParentSquadStateFromData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHDPlatoonState* GetParentPlatoonStateFromData() const;
    
};

