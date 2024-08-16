#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "HDUIUserWidget.generated.h"

class AActor;
class AController;
class ADFBaseCharacter;
class ADFBaseItem;
class AHDBaseWeapon;
class AHDHUD;
class AHDPlayerCharacter;
class AHDPlayerController;
class AHUD;
class APawn;
class UDFCharacterMovementComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UHDUIUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bListenForPlayerCharacterEvents: 1;
    
public:
    UHDUIUserWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OwnerUnpossessPawn(APawn* UnpossessedPawn);
    
    UFUNCTION(BlueprintCallable)
    void OwnerPossessPawn(APawn* NewPawn);
    
    UFUNCTION(BlueprintCallable)
    void OwnerEquippedItemChanged(ADFBaseCharacter* Character, ADFBaseItem* NewEquippedItem, ADFBaseItem* PrevEquippedItem);
    
    UFUNCTION(BlueprintCallable)
    void OwnerDeath(APawn* VictimPawn, AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    AHUD* GetOwningPlayerHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    AHDHUD* GetOwningHDPlayerHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    UDFCharacterMovementComponent* GetOwningHDPlayerCharacterMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    AHDPlayerCharacter* GetOwningHDPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    AHDPlayerController* GetOwningHDPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    AHDBaseWeapon* GetOwnerEquippedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOwnerWeaponChanged(AHDBaseWeapon* NewWeap, AHDBaseWeapon* PrevWeap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOwnerUnpossessPawn(APawn* UnpossessedPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOwnerPossessPawn(APawn* NewPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOwnerDeath(APawn* VictimPawn, AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPInitializeForOwnerWeapon(AHDBaseWeapon* OwnerWeap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPInitializeForOwnerPlayerCharacter(AHDPlayerCharacter* OwnerPlyChar);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPDeinitializeFromOwnerWeapon(AHDBaseWeapon* OwnerWeap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPDeinitializeFromOwnerPlayerCharacter(AHDPlayerCharacter* OwnerPlyChar);
    
};

