#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISightTargetInterface -FallbackName=AISightTargetInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFBasePlayerCharacter -FallbackName=DFBasePlayerCharacter
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFCharacterVariationData -FallbackName=DFCharacterVariationData
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFCharacterVariationDataHandle -FallbackName=DFCharacterVariationDataHandle
#include "CharacterAimStyleChangedSignatureDelegate.h"
#include "EHDAIVocalizationType.h"
#include "EHDWeaponAimStyle.h"
#include "Templates/SubclassOf.h"
#include "HDPlayerCharacter.generated.h"

class AHDBasePickup_Kit;
class AHDTeamState;
class APlayerState;
class UAudioComponent;
class UCameraShake;
class UDFCommChannel;
class UHDAIPerceptionComponent;
class UHDKit;
class UHDPlayerComponent;
class USoundBase;
class USpringArmComponent;

UCLASS(Blueprintable)
class HDMAIN_API AHDPlayerCharacter : public ADFBasePlayerCharacter, public IAISightTargetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAttachedVehicleRelevancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkingBobSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDoHeadBob: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowFreeAim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowFreeAimWhileAiming: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDoFreeAim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=VariationDataChangedInternal, meta=(AllowPrivateAccess=true))
    FDFCharacterVariationDataHandle VariationHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* SpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* FreeAimSpringArm;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentLoadout, meta=(AllowPrivateAccess=true))
    UHDKit* CurrentLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHDBasePickup_Kit> KitClassFallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KitDropTraceDistance;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInventoryMenuShown: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAimStyleChangedSignature OnAimStyleChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHDWeaponAimStyle AimStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHDTeamState* HDTeamState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AIVocalAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> WalkingHeadBob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> SprintingHeadBob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCanAddYawInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCanAddPitchInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCanAddRollInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAimDeadzoneCameraSpeedFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAimReturnToCenterInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFreeAimYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFreeAimPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFreeAimYawADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFreeAimPitchADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentFreeAimYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentFreeAimPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FreeAimMouseDeltaX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FreeAimMouseDeltaY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FreeAimExternalDeltaX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FreeAimExternalDeltaY;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHDAIVocalizationType LastAIVocalization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHDAIPerceptionComponent* HDAIPerceptionComponent;
    
public:
    AHDPlayerCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void VariationDataChangedInternal(const FDFCharacterVariationDataHandle PreviousHandle);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetVariationHandle(FDFCharacterVariationDataHandle InVariationHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxFreeAimYawADS(float NewYaw);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxFreeAimYaw(float NewYaw);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxFreeAimPitchADS(float NewPitch);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxFreeAimPitch(float NewPitch);
    
    UFUNCTION(BlueprintCallable)
    void SetFreeAimReturnToCenterInterpSpeed(float NewInterpSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetFreeAimDeadzoneCameraSpeedFactor(float NewSpeedFactor);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowFreeAimADS(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowFreeAim(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAimStyle(EHDWeaponAimStyle InAimStyle, bool bFromPlayerInput);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveVoipTalkerMsgReceived(UDFCommChannel* MsgTalkerChannel, APlayerState* MsgTalkerPS, bool bMsgIsTalking);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveVariationDataChanged(const FDFCharacterVariationData& NewVariation, const FDFCharacterVariationData& PreviousVariation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveFreeAim(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveCurrentLoadout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAimStyleChanged(EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayVocalSoundAI(USoundBase* SoundToUse, EHDAIVocalizationType VocalType, float PitchMultiplier);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentLoadout();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnPickupKit(AHDBasePickup_Kit* Kit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyPlayerStateChanged(APlayerState* NewPlayerState, APlayerState* OldPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInVehicle() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HeadBob();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHDPlayerComponent* GetPlayerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxFreeAimYawToUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxFreeAimPitchToUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AHDBasePickup_Kit> GetKitClassToUse() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FreeAim(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    bool EquipPrimaryItem();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DropKit();
    

    // Fix for true pure virtual functions not being implemented
};

