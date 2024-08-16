#include "PhysicsSettings.h"

UPhysicsSettings::UPhysicsSettings() {
    this->DefaultGravityZ = -980.00f;
    this->DefaultTerminalVelocity = 4000.00f;
    this->DefaultFluidFriction = 0.30f;
    this->SimulateScratchMemorySize = 262144;
    this->RagdollAggregateThreshold = 4;
    this->TriangleMeshTriangleMinAreaThreshold = 5.00f;
    this->bEnableShapeSharing = false;
    this->bEnablePCM = true;
    this->bEnableStabilization = false;
    this->bWarnMissingLocks = true;
    this->bEnable2DPhysics = false;
    this->LockedAxis = ESettingsLockedAxis::Invalid;
    this->DefaultDegreesOfFreedom = ESettingsDOF::Full3D;
    this->BounceThresholdVelocity = 200.00f;
    this->FrictionCombineMode = EFrictionCombineMode::Average;
    this->RestitutionCombineMode = EFrictionCombineMode::Average;
    this->MaxAngularVelocity = 3600.00f;
    this->MaxDepenetrationVelocity = 0.00f;
    this->ContactOffsetMultiplier = 0.01f;
    this->MinContactOffset = 0.00f;
    this->MaxContactOffset = 1.00f;
    this->bSimulateSkeletalMeshOnDedicatedServer = true;
    this->DefaultShapeComplexity = CTF_UseSimpleAndComplex;
    this->bDefaultHasComplexCollision = true;
    this->bSuppressFaceRemapTable = false;
    this->bSupportUVFromHitResults = false;
    this->bDisableActiveActors = false;
    this->bDisableKinematicStaticPairs = false;
    this->bDisableKinematicKinematicPairs = false;
    this->bDisableCCD = false;
    this->bEnableEnhancedDeterminism = false;
    this->AnimPhysicsMinDeltaTime = 0.00f;
    this->bSimulateAnimPhysicsAfterReset = false;
    this->MaxPhysicsDeltaTime = 0.03f;
    this->bSubstepping = true;
    this->bSubsteppingAsync = false;
    this->MaxSubstepDeltaTime = 0.02f;
    this->MaxSubsteps = 6;
    this->SyncSceneSmoothingFactor = 0.00f;
    this->InitialAverageFrameRate = 0.02f;
    this->PhysXTreeRebuildRate = 10;
    this->PhysicalSurfaces.AddDefaulted(22);
}


