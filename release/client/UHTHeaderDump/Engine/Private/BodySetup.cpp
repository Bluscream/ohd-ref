#include "BodySetup.h"

UBodySetup::UBodySetup() {
    this->PhysicsType = PhysType_Default;
    this->bAlwaysFullAnimWeight = false;
    this->bConsiderForBounds = true;
    this->bMeshCollideAll = false;
    this->bDoubleSidedGeometry = false;
    this->bGenerateNonMirroredCollision = true;
    this->bSharedCookedData = false;
    this->bGenerateMirroredCollision = true;
    this->bSupportUVsAndFaceRemap = false;
    this->CollisionReponse = EBodyCollisionResponse::BodyCollision_Enabled;
    this->CollisionTraceFlag = CTF_UseDefault;
    this->PhysMaterial = NULL;
}


