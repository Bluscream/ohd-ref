#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFGenericObjectContainer -FallbackName=DFGenericObjectContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFReplInfo -FallbackName=DFReplInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFTeamAgentInterface -FallbackName=DFTeamAgentInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "HDSquadAssignmentInfo.h"
#include "HDSquadCreationParams.h"
#include "OnSquadLeaderAssignedDelegate.h"
#include "OnSquadLockToggledDelegate.h"
#include "OnSquadMemberChangedDelegate.h"
#include "OnSquadMemberInfoUpdatedDelegate.h"
#include "OnSquadRenamedDelegate.h"
#include "Templates/SubclassOf.h"
#include "HDSquadState.generated.h"

class AActor;
class AHDPlatoonState;
class AHDPlayerController;
class AHDPlayerState;
class AHDSquadHiddenState;
class APlayerState;

UCLASS(Blueprintable, DefaultConfig, NonTransient, Config=Game)
class HDMAIN_API AHDSquadState : public ADFReplInfo, public IDFTeamAgentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInitialized: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHDSquadHiddenState> SquadHiddenStateClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AHDPlatoonState* OwnerPlatoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DisplayName, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SquadHiddenState, meta=(AllowPrivateAccess=true))
    AHDSquadHiddenState* SquadHiddenState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SquadLeader, meta=(AllowPrivateAccess=true))
    AHDPlayerState* SquadLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bLocked, meta=(AllowPrivateAccess=true))
    uint8 bLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequiresSquadLeader: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisbandSquadOnEmpty: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSquadLeaderAssigned OnSquadLeaderAssigned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSquadMemberChanged OnSquadMemberRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSquadMemberChanged OnSquadMemberPreUnregister;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSquadMemberInfoUpdated OnSquadMemberInfoUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSquadRenamed OnSquadRenamed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSquadLockToggled OnSquadLockToggled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDFGenericObjectContainer SquadMembers;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSquadMemberLimit;
    
    AHDSquadState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UnregisterSquadMemberAt(int32 RemoveIdx);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UnregisterSquadMember(AHDPlayerState* MemberPSToRemove);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UnregisterPlayerSquadMember(const AHDPlayerController* MemberPCToRemove);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnlockSquad();
    
private:
    UFUNCTION(BlueprintCallable)
    void SquadMemberPSTeamUpdated(APlayerState* MemberPS, uint8 LastTeamNum, uint8 NewTeamNum);
    
    UFUNCTION(BlueprintCallable)
    void SquadMemberPSSquadUpdated(AHDPlayerState* MemberPS, const FHDSquadAssignmentInfo& MemberSQInfo);
    
    UFUNCTION(BlueprintCallable)
    void SquadMemberPSEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RenameSquad(const FText& NewDisplayName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveFromOwner();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RegisterSquadMember(AHDPlayerState* NewMemberPS);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RegisterPlayerSquadMember(const AHDPlayerController* NewMemberPC);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSquadUnlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSquadRenamed(const FText& NewName, const FText& PrevName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSquadMemberRegistered(AHDPlayerState* MemberPS);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSquadMemberPreUnregister(AHDPlayerState* MemberPS);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSquadLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSquadLeaderAssigned(AHDPlayerState* NewLeaderPS, AHDPlayerState* PrevLeaderPS);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInit(const FHDSquadCreationParams& CreationParams);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SquadLeader(AHDPlayerState* PrevSquadLeader);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SquadHiddenState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DisplayName(const FText& PrevDisplayName);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bLocked();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void LockSquad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRegisteredSquadMember(const AHDPlayerState* PS, bool bIgnorePendingRemoval) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerRegisteredSquadMember(const AHDPlayerController* PC, bool bIgnorePendingRemoval) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerPendingRemovalFromSquad(const AHDPlayerController* PC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingRemovalFromSquad(const AHDPlayerState* PS) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReachedMaxSquadMemberLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHDPlayerState* GetSquadMemberAt(int32 Index, bool bIgnorePendingRemoval) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSquadMembersBots(bool bValidMembersOnly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSquadMembers(bool bValidMembersOnly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DumpSquadMemberState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRegisterSquadMember(const AHDPlayerState* NewMemberPS) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRegisterPlayerSquadMember(const AHDPlayerController* NewMemberPC) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool AssignSquadLeader(AHDPlayerState* NewLeaderPS);
    

    // Fix for true pure virtual functions not being implemented
};

