#include "DFBaseGun_Projectile.h"

ADFBaseGun_Projectile::ADFBaseGun_Projectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileClass = NULL;
    this->ProjectileSpawnDistance = 15.00f;
    this->TargetTraceDistance = 15000.00f;
    this->bUseMuzzleAsTrace = false;
}

void ADFBaseGun_Projectile::ServerNotifyCSHitPredicted_Implementation(const FCSHitInfo& HitInfo, int32 ShotID) {
}
bool ADFBaseGun_Projectile::ServerNotifyCSHitPredicted_Validate(const FCSHitInfo& HitInfo, int32 ShotID) {
    return true;
}

void ADFBaseGun_Projectile::ServerNotifyCSHit_Implementation(ADFBaseProjectile* HitProj, const FCSHitInfo& HitInfo, int32 ShotID) {
}
bool ADFBaseGun_Projectile::ServerNotifyCSHit_Validate(ADFBaseProjectile* HitProj, const FCSHitInfo& HitInfo, int32 ShotID) {
    return true;
}

void ADFBaseGun_Projectile::ClientProjDebugInfo_Implementation(ADFBaseProjectile* Proj, const FVector& NewProjLoc, const FVector& LastProjLoc, const FRotator& NewProjRot, const FVector& NewProjVel) {
}

void ADFBaseGun_Projectile::ClientProjDebugImpactInfo_Implementation(ADFBaseProjectile* Proj, const FVector& ImpactLoc, const FVector_NetQuantizeNormal& ImpactNorm) {
}

void ADFBaseGun_Projectile::ClientDrawDebugFireCone_Implementation(const FVector& ConeOrig, const FVector_NetQuantizeNormal& ConeDir) {
}

void ADFBaseGun_Projectile::CalcShotVector(FVector& OutProjOrigin, FVector& OutProjDir) const {
}


