#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFGenericObjectContainer -FallbackName=DFGenericObjectContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFReplInfo -FallbackName=DFReplInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFTeamAgentInterface -FallbackName=DFTeamAgentInterface
#include "OnPlatoonSquadChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "HDPlatoonState.generated.h"

class AHDPlayerState;
class AHDSquadState;
class AHDTeamState;
class UHDPlatoonInfo;

UCLASS(Blueprintable, NonTransient)
class HDMAIN_API AHDPlatoonState : public ADFReplInfo, public IDFTeamAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlatoonSquadChanged OnSquadAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlatoonSquadChanged OnSquadPreRemove;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHDSquadState> SquadStateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDFGenericObjectContainer Squads;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInitialized: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UHDPlatoonInfo* Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AHDTeamState* OwnerTeam;
    
public:
    AHDPlatoonState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SquadExists(const AHDSquadState* Squad, bool bIgnorePendingRemoval) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveSquadAt(int32 RemoveIdx);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveSquad(AHDSquadState* SquadToRemove);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveFromOwner();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSquadPreRemove(AHDSquadState* Squad);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSquadAdded(AHDSquadState* Squad);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSquadPendingRemovalFromPlatoon(const AHDSquadState* Squad) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReachedMaxSquadLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHDSquadState* GetSquadAt(int32 Index, bool bIgnorePendingRemoval) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSquads(bool bValidSquadsOnly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSquadLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindSquadByName(const FText& SquadDisplayName, AHDSquadState*& OutFoundSquad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DumpSquadState() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AHDSquadState* AddSquad(const FText& SquadDisplayName, AHDPlayerState* SquadLeader, bool bStartLocked);
    

    // Fix for true pure virtual functions not being implemented
};

