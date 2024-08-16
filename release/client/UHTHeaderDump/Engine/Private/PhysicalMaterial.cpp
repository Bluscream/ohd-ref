#include "PhysicalMaterial.h"

UPhysicalMaterial::UPhysicalMaterial() {
    this->Friction = 0.70f;
    this->FrictionCombineMode = EFrictionCombineMode::Average;
    this->bOverrideFrictionCombineMode = false;
    this->Restitution = 0.30f;
    this->RestitutionCombineMode = EFrictionCombineMode::Average;
    this->bOverrideRestitutionCombineMode = false;
    this->Density = 1.00f;
    this->RaiseMassToPower = 0.75f;
    this->DestructibleDamageThresholdScale = 1.00f;
    this->PhysicalMaterialProperty = NULL;
    this->SurfaceType = SurfaceType_Default;
    this->TireFrictionScale = 1.00f;
}


