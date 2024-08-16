#include "ParticleModuleLight.h"

UParticleModuleLight::UParticleModuleLight() {
    this->bSpawnModule = true;
    this->bUpdateModule = true;
    this->bCurvesAsColor = true;
    this->b3DDrawMode = true;
    this->bSupported3DDrawMode = true;
    this->bUseInverseSquaredFalloff = true;
    this->bAffectsTranslucency = false;
    this->bPreviewLightRadius = false;
    this->SpawnFraction = 1.00f;
    this->VolumetricScatteringIntensity = 0.00f;
    this->bHighQualityLights = false;
    this->bShadowCastingLights = false;
}


