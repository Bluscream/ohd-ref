#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
#include "CSHitInfo.h"
#include "DFBaseGun.h"
#include "GunProjProcessCSHitSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "DFBaseGun_Projectile.generated.h"

class ADFBaseProjectile;

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORK_API ADFBaseGun_Projectile : public ADFBaseGun {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADFBaseProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileSpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMuzzleAsTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MuzzleSightOffset;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGunProjProcessCSHitSignature OnProcessValidProjCSHit;
    
    ADFBaseGun_Projectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyCSHitPredicted(const FCSHitInfo& HitInfo, int32 ShotID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyCSHit(ADFBaseProjectile* HitProj, const FCSHitInfo& HitInfo, int32 ShotID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientProjDebugInfo(ADFBaseProjectile* Proj, const FVector& NewProjLoc, const FVector& LastProjLoc, const FRotator& NewProjRot, const FVector& NewProjVel);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientProjDebugImpactInfo(ADFBaseProjectile* Proj, const FVector& ImpactLoc, const FVector_NetQuantizeNormal& ImpactNorm);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDrawDebugFireCone(const FVector& ConeOrig, const FVector_NetQuantizeNormal& ConeDir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcShotVector(FVector& OutProjOrigin, FVector& OutProjDir) const;
    
};

