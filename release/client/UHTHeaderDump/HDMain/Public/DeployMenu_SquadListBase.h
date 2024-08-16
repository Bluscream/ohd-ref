#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "HDSquadAssignmentInfo.h"
#include "DeployMenu_SquadListBase.generated.h"

class AHDPlatoonState;
class AHDPlayerState;
class AHDSquadState;
class USquadListEntry;
class USquadMemberInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UDeployMenu_SquadListBase : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USquadListEntry* SquadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSortSquadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USquadMemberInfo*> CurrentSquadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USquadMemberInfo*> MemberEntryWidgetsPendingRemoval;
    
public:
    UDeployMenu_SquadListBase();

private:
    UFUNCTION(BlueprintCallable)
    void SquadNameChanged(AHDSquadState* SourceSquad, const FText& NewName, const FText& PrevName);
    
    UFUNCTION(BlueprintCallable)
    void SquadLockStateUpdated(AHDSquadState* SourceSquad, bool bNewLocked);
    
    UFUNCTION(BlueprintCallable)
    void SquadLeaderChanged(AHDSquadState* SourceSquad, AHDPlayerState* NewLeaderPS, AHDPlayerState* PrevLeaderPS);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupSquad(USquadListEntry* InSquadData);
    
    UFUNCTION(BlueprintCallable)
    void RepopulateSquad();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadNameUpdated(const FText& NewSquadName, const FText& PreviousSquadName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadLockStateUpdated(bool bNewLockedState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadLeaderUpdated(AHDPlayerState* NewLeaderPS, AHDPlayerState* PrevLeaderPS);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnListRefresh();
    
    UFUNCTION(BlueprintCallable)
    void MemberSquadInfoUpdated(AHDSquadState* SourceSquad, AHDPlayerState* MemberPS, const FHDSquadAssignmentInfo& MemberSQInfo);
    
    UFUNCTION(BlueprintCallable)
    void MemberPreRemoveFromSquad(AHDSquadState* SourceSquad, AHDPlayerState* MemberPSToBeRemoved);
    
    UFUNCTION(BlueprintCallable)
    void MemberAddedToSquad(AHDSquadState* SourceSquad, AHDPlayerState* NewMemberPS);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHDSquadState* GetSquadStateFromData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHDPlatoonState* GetParentPlatoonStateFromData() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GenerateSquadMember(USquadMemberInfo* MemberData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeconstructSquadMember(USquadMemberInfo* RemovedMemberData);
    
};

