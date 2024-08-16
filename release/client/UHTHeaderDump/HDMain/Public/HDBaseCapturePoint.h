#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=SpawnPointProviderInterface -FallbackName=SpawnPointProviderInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "CaptureProgressSignatureDelegate.h"
#include "EHDControlPointObjectiveType.h"
#include "EHDTeam.h"
#include "OwningTeamUpdateSignatureDelegate.h"
#include "TeamCaptureStatusUpdateSignatureDelegate.h"
#include "HDBaseCapturePoint.generated.h"

class AController;
class ADFBaseCharacter;
class AHDPlayerController;
class UChildActorComponent;
class UDFPOIComponent;
class UNavigationInvokerComponent;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class USphereComponent;

UCLASS(Abstract, Blueprintable, Config=Game)
class HDMAIN_API AHDBaseCapturePoint : public AActor, public ISpawnPointProviderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollision;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDFPOIComponent* POI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNavigationInvokerComponent* NavigationInvoker;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Active, meta=(AllowPrivateAccess=true))
    uint8 bActive: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Locked, meta=(AllowPrivateAccess=true))
    uint8 bLocked: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Contested, meta=(AllowPrivateAccess=true))
    uint8 bContested: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCaptured: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCapturedOnce: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CaptureProgress, meta=(AllowPrivateAccess=true))
    int32 CaptureProgress;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveRoute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UChildActorComponent*> SpawnPoints;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCaptureProgressSignature OnCaptureProgressUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHDTeam StartingTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CaptureDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CaptureTimerRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CaptureSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CaptureRadius;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MinPlayersToCapture;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bEnforceMinPlayersToCaptureWithSmallerPlayerCount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bScaleCaptureSpeed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRecapturable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWinOnCapture: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProvideSpawnPoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProvideSpawnPointWhenUnderAttack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<int32> PossibleRoutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Tier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> SpawnPointTransforms;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OwningTeam, meta=(AllowPrivateAccess=true))
    EHDTeam OwningTeam;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHDTeam PrevNonNeutralOwningTeam;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOwningTeamUpdateSignature OnOwningTeamUpdate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CapturableByTeam, meta=(AllowPrivateAccess=true))
    uint8 bCapturableByTeamRed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CapturableByTeam, meta=(AllowPrivateAccess=true))
    uint8 bCapturableByTeamBlue: 1;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamCaptureStatusUpdateSignature OnTeamCaptureStatusUpdate;
    
    AHDBaseCapturePoint(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Unlock();
    
    UFUNCTION(BlueprintCallable)
    void SetActiveRoute(const int32 NewActiveRoute);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(const bool bNewActive);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnTeamCaptureStatusUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnOwningTeamUpdated(EHDTeam LastOwningTeam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnLocked(bool bNewLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnCaptureProgress(bool bNewContested);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnActive(bool bNewActive);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OwningTeam(EHDTeam LastOwningTeam);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Locked();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Contested();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CaptureProgress();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CapturableByTeam();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Active();
    
    UFUNCTION(BlueprintCallable)
    void OnOwningTeamUpdated(EHDTeam LastOwningTeam);
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void Lock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCapturableByTeam(EHDTeam CaptureTeam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOverlappingCharactersByTeam(TArray<ADFBaseCharacter*>& OverlappingCharsRed, TArray<ADFBaseCharacter*>& OverlappingCharsBlue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHDControlPointObjectiveType GetObjectiveTypeForTeam(EHDTeam ObjTeam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinPlayersRequiredForCaptureTeam(EHDTeam CaptureTeam) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    AActor* ChoosePlayerStart(AHDPlayerController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRestartPlayer(AController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCapture() const;
    

    // Fix for true pure virtual functions not being implemented
};

