#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "HDAIGroupData.h"
#include "HDAIHandlerBase.h"
#include "HDAIGroupBehaviorHandler.generated.h"

class AActor;
class AController;
class AHDAIController;
class AHDPlayerState;
class APawn;
class UHDAICaptureHandler;
class UHDAINavigationHandler;

UCLASS(Blueprintable, EditInlineNew)
class HDMAIN_API UHDAIGroupBehaviorHandler : public UHDAIHandlerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAINavigationHandler* NavigationHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDAICaptureHandler* CaptureHandler;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsGroupLeader: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsGroupMember: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGroupDataIsSet: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGroupDataIsSynchronized: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLeaderIsHuman: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsRespawned: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumValidGroupMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumGroupMembersOnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWaitingForGroupMembers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitingForMembersStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsGroupWaiting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroupWaitTimeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroupWaitTimeEnd;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitingTimePerGroupMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitingRadiusMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinNumGroupMembersOnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdvanceWaitTimeDurationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdvanceWaitTimeDurationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PatrolWaitTimeDurationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PatrolWaitTimeDurationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FormationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FormationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroupFormationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroupFormationSlotRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroupFormationSlotDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> FormationSlots;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowHumanLeaderTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowHumanLeaderPatrolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FollowHumanLeaderLastKnownLocation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableFollowHumanLeader: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowHumanLeaderInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowHumanLeaderVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowHumanLeaderAcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowHumanLeaderRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowHumanLeaderPatrolTimeThreshold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumGroupMembersInCombat;
    
public:
    UHDAIGroupBehaviorHandler();

    UFUNCTION(BlueprintCallable)
    void SyncGroupData(const FHDAIGroupData& InGroupData);
    
    UFUNCTION(BlueprintCallable)
    void StartGroupWaitTime();
    
    UFUNCTION(BlueprintCallable)
    void SetupGroupData();
    
    UFUNCTION(BlueprintCallable)
    void SetGroupParams();
    
    UFUNCTION(BlueprintCallable)
    bool RequestGroupDataSync();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(APawn* VictimPawn, AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsGroupWaitTimeOver();
    
    UFUNCTION(BlueprintCallable)
    void InformLeaderOnContact(FVector InCombatTarget, FVector InNavigationAnchor);
    
    UFUNCTION(BlueprintCallable)
    void InformGroupOnLostContact();
    
    UFUNCTION(BlueprintCallable)
    void InformGroupOnContact(FVector InCombatTarget, FVector InNavigationAnchor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumValidGroupMembers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumGroupMembersInCombat() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AHDAIController*> GetGroupMembers();
    
    UFUNCTION(BlueprintCallable)
    AHDPlayerState* GetGroupLeader();
    
    UFUNCTION(BlueprintCallable)
    FHDAIGroupData GetGroupData();
    
    UFUNCTION(BlueprintCallable)
    void FollowHumanLeader();
    
    UFUNCTION(BlueprintCallable)
    void CountGroupMembers();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastGroupData();
    
    UFUNCTION(BlueprintCallable)
    bool AllGroupMembersAreOnPoint();
    
};

