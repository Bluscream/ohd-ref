#pragma once
#include "CoreMinimal.h"
#include "DFBaseItem.h"
#include "Templates/SubclassOf.h"
#include "DFBaseAmmoClip.generated.h"

class ADFBaseAmmoClip;
class ADFBaseGun;
class UDFInventoryComponent;

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORK_API ADFBaseAmmoClip : public ADFBaseItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ADFBaseGun* GunOwner;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentClipAmmo, meta=(AllowPrivateAccess=true))
    int32 CurrentClipAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReloadCounter, meta=(AllowPrivateAccess=true))
    uint8 ReloadCounter;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SimulatedCurrentClipAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingClipAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxClipAmmo;
    
public:
    ADFBaseAmmoClip(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static int32 StoreAmmoInInventory(UDFInventoryComponent* AmmoStore, int32 AmmoAmt, const TSubclassOf<ADFBaseAmmoClip>& AmmoType);
    
    UFUNCTION(BlueprintCallable)
    void StoreAmmo(int32 AmmoToStore);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOwningGun(ADFBaseGun* NewOwner);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentClipAmmo(int32 NewClipAmmo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReloadCounter();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentClipAmmo();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStartingClipAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxClipAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADFBaseGun* GetGunOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentClipAmmo() const;
    
    UFUNCTION(BlueprintCallable)
    void ConsumeAmmo(int32 AmmoToConsume);
    
};

