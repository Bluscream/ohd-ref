#include "TransformGizmoActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

ATransformGizmoActor::ATransformGizmoActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("GizmoCenter"));
    this->TranslateX = NULL;
    this->TranslateY = NULL;
    this->TranslateZ = NULL;
    this->TranslateYZ = NULL;
    this->TranslateXZ = NULL;
    this->TranslateXY = NULL;
    this->RotateX = NULL;
    this->RotateY = NULL;
    this->RotateZ = NULL;
    this->UniformScale = NULL;
    this->AxisScaleX = NULL;
    this->AxisScaleY = NULL;
    this->AxisScaleZ = NULL;
    this->PlaneScaleYZ = NULL;
    this->PlaneScaleXZ = NULL;
    this->PlaneScaleXY = NULL;
}


