#include "DFBaseImpactEffect.h"

ADFBaseImpactEffect::ADFBaseImpactEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SnowFX = NULL;
    this->WaterFX = NULL;
    this->ConcreteFX = NULL;
    this->DirtFX = NULL;
    this->MetalSolidFX = NULL;
    this->WoodFX = NULL;
    this->GlassBPFX = NULL;
    this->GlassFX = NULL;
    this->GlassWHFX = NULL;
    this->GrassFX = NULL;
    this->MetalThinFX = NULL;
    this->SandbagFX = NULL;
    this->BrickWallFX = NULL;
    this->RubberFX = NULL;
    this->DrywallFX = NULL;
    this->ElectricDevicesFX = NULL;
    this->OilBarrelFX = NULL;
    this->SandFX = NULL;
    this->SoftFX = NULL;
    this->GroundFX = NULL;
    this->RockFX = NULL;
    this->FleshFX = NULL;
    this->ConcreteSound = NULL;
    this->DirtSound = NULL;
    this->SnowSound = NULL;
    this->SandbagSound = NULL;
    this->BrickWallSound = NULL;
    this->WaterSound = NULL;
    this->MetalSolidSound = NULL;
    this->MetalThinSound = NULL;
    this->WoodSound = NULL;
    this->GlassSound = NULL;
    this->GlassBPSound = NULL;
    this->GlassWHSound = NULL;
    this->GrassSound = NULL;
    this->RubberSound = NULL;
    this->DrywallSound = NULL;
    this->GroundSound = NULL;
    this->ElectricDevicesSound = NULL;
    this->OilBarrelSound = NULL;
    this->RockSound = NULL;
    this->FleshSound = NULL;
    this->DefaultFX = NULL;
    this->DefaultSound = NULL;
}

USoundCue* ADFBaseImpactEffect::GetImpactSound(TEnumAsByte<EPhysicalSurface> SurfaceType) const {
    return NULL;
}

UParticleSystem* ADFBaseImpactEffect::GetImpactFX(TEnumAsByte<EPhysicalSurface> SurfaceType) const {
    return NULL;
}


