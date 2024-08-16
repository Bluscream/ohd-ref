#include "IntervalGizmoActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

AIntervalGizmoActor::AIntervalGizmoActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("GizmoCenter"));
    this->UpIntervalComponent = NULL;
    this->DownIntervalComponent = NULL;
    this->ForwardIntervalComponent = NULL;
}


