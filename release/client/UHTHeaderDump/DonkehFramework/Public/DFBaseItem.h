#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
#include "CharacterAnimCollection.h"
#include "EItemType.h"
#include "ESpecificItemType.h"
#include "Templates/SubclassOf.h"
#include "DFBaseItem.generated.h"

class ADFBaseCharacter;
class ADFBaseItem;
class UAnimInstance;
class UAnimSequenceBase;
class UDFInventoryComponent;
class USkeletalMesh;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORK_API ADFBaseItem : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PawnOwner, meta=(AllowPrivateAccess=true))
    ADFBaseCharacter* PawnOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ItemMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ItemMesh1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* PawnMesh1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> PawnMesh1PAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PawnMesh1PLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PawnMesh1PRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecificItemType SpecificItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanEquip: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanAimWhileEquipped: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableFireInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bEquipped: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPendingEquip: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPendingUnEquip: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWantsToFire: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastFiredShotID;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDebug: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnimCollection CharacterAnimCollection;
    
public:
    ADFBaseItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopFire();
    
    UFUNCTION(BlueprintCallable)
    void StartFire();
    
    UFUNCTION(BlueprintCallable)
    void SetOwningPawn(ADFBaseCharacter* NewOwner);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshVisibility(bool bFirstPerson);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopFire();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartFire(const FVector_NetQuantize& Origin, const FVector_NetQuantizeNormal& ShootDir, int32 RandomSeed, float Timestamp, int32 ShotID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveLegacyLocomotionAnims(bool bFPP);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveVisibilityChanged(bool bFirstPerson);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStopFire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStartFire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnUnEquipFinished(bool bLeavingPawnInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnUnEquip(bool bPlayAnimAndWait, bool bLeavingPawnInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnTurnOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnLeaveInventory(ADFBaseCharacter* LastOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnEquipFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnEquip(const ADFBaseItem* LastItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnEnterInventory(ADFBaseCharacter* NewOwner, ADFBaseCharacter* LastOwner);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OwnerIsSprinting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OwnerIsAiming() const;
    
    UFUNCTION(BlueprintCallable)
    void OnUnEquip(bool bPlayAnimAndWait, bool bLeavingPawnInventory);
    
    UFUNCTION(BlueprintCallable)
    void OnTurnOff();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PawnOwner(ADFBaseCharacter* LastOwner);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLeaveInventory(ADFBaseCharacter* LastOwner);
    
    UFUNCTION(BlueprintCallable)
    void OnEquip(const ADFBaseItem* LastItem);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterInventory(ADFBaseCharacter* NewOwner, ADFBaseCharacter* LastOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnEquipping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClientSimulated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpecificItemType GetSpecificItemType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADFBaseCharacter* GetPawnOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDFInventoryComponent* GetPawnInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetOwnerViewRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOwnerViewPoint(FVector& OutViewLoc, FRotator& OutViewRot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOwnerViewLocation() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TMap<FName, UAnimSequenceBase*> GetLegacyLocomotionAnims(bool bFPP) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EItemType GetItemType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetItemMeshToUse(bool bIgnoreLocalControlOnServer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetItemMesh1P() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetItemMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetAdjustedAimDirection() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceStopFiring();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTriggerFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSprintWhileEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAimWhileEquipped() const;
    
};

