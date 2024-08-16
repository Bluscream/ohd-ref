#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFBasePlayerState -FallbackName=DFBasePlayerState
#include "HDSquadAssignmentInfo.h"
#include "PlayerSquadInfoUpdateSignatureDelegate.h"
#include "HDPlayerState.generated.h"

class UHDKit;

UCLASS(Blueprintable)
class HDMAIN_API AHDPlayerState : public ADFBasePlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SpawnLoadout, meta=(AllowPrivateAccess=true))
    UHDKit* SpawnLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentLoadout, meta=(AllowPrivateAccess=true))
    UHDKit* CurrentLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SquadInfo, meta=(AllowPrivateAccess=true))
    FHDSquadAssignmentInfo SquadInfo;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSquadInfoUpdateSignature OnPlayerSquadInfoUpdated;
    
    AHDPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnregisterFromSquad();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SquadInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnLoadout(UHDKit* PrevSpawnLoadout);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentLoadout(UHDKit* PrevLoadout);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AssignSpawnLoadout(UHDKit* NewSpawnLoadout);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AssignCurrentLoadout(UHDKit* NewCurrentLoadout);
    
};

