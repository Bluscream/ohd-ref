#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "DFBaseCharacter.h"
#include "PlayerToggleFirstPersonDelegate.h"
#include "DFBasePlayerCharacter.generated.h"

class AActor;
class UCameraComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USpringArmComponent;

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORK_API ADFBasePlayerCharacter : public ADFBaseCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseLookUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bFirstPerson: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* CameraBoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStartInFirstPerson: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTrueFirstPerson: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableOrientationOfRotationToMovementInFirstPerson: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableUsageOfControllerRotationYawInThirdPerson: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseFirstPersonMesh: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemAttachPoint1P;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerToggleFirstPerson OnPlayerToggleFirstPerson;
    
    ADFBasePlayerCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Use();
    
    UFUNCTION(BlueprintCallable)
    void TurnAtRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SwitchFireMode();
    
    UFUNCTION(BlueprintCallable)
    void SetMeshVisibility(bool bFirstPersonVisibility);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUse(AActor* UseTarget, const FVector_NetQuantize& UseTraceStart, const FVector_NetQuantize& UseTraceEnd);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnToggleFirstPerson(bool bNewFirstPerson);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USkeletalMesh* ReceiveGetDefaultPawnMesh1P() const;
    
    UFUNCTION(BlueprintCallable)
    void OnToggleFirstPerson(bool bNewFirstPerson);
    
    UFUNCTION(BlueprintCallable)
    void OnFireReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnFirePressed();
    
    UFUNCTION(BlueprintCallable)
    void MoveUp(float Value);
    
    UFUNCTION(BlueprintCallable)
    void MoveRight(float Value);
    
    UFUNCTION(BlueprintCallable)
    void MoveForward(float Value);
    
    UFUNCTION(BlueprintCallable)
    void LookUpAtRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void JumpVaultPressed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingFirstPersonMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrueFirstPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalFirstPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetMesh1P() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetItemAttachPoint1P() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMesh* GetDefaultPawnMesh1P() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USpringArmComponent* GetCameraBoom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponent* GetCamera1P() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponent* GetCamera() const;
    
};

