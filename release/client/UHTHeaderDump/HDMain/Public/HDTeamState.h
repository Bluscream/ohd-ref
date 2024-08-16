#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFGenericObjectContainer -FallbackName=DFGenericObjectContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFTeamState -FallbackName=DFTeamState
#include "EHDTeam.h"
#include "OnTeamPlatoonChangedDelegate.h"
#include "HDTeamState.generated.h"

class AHDPlatoonState;
class UHDKit;
class UHDPlatoonInfo;

UCLASS(Blueprintable, NonTransient)
class HDMAIN_API AHDTeamState : public ADFTeamState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamPlatoonChanged OnPlatoonAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamPlatoonChanged OnPlatoonPreRemove;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDFGenericObjectContainer Platoons;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlatoonLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UHDKit*> Kits;
    
    AHDTeamState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemovePlatoonAt(int32 RemoveIdx);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemovePlatoon(AHDPlatoonState* PlatoonToRemove);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlatoonPreRemove(AHDPlatoonState* Platoon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlatoonAdded(AHDPlatoonState* Platoon);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlatoonExists(const AHDPlatoonState* Platoon, bool bIgnorePendingRemoval) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlatoonPendingRemovalFromTeam(const AHDPlatoonState* Platoon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReachedMaxPlatoonLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHDTeam GetTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHDPlatoonState* GetPlatoonAt(int32 Index, bool bIgnorePendingRemoval) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPlatoons(bool bValidPlatoonsOnly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindPlatoonByName(const FText& PlatoonDisplayName, AHDPlatoonState*& OutFoundPlatoon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindPlatoonByDefinition(const UHDPlatoonInfo* PlatoonDef, AHDPlatoonState*& OutFoundPlatoon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DumpPlatoonState() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AHDPlatoonState* AddPlatoon(const UHDPlatoonInfo* PlatoonInfo);
    
};

