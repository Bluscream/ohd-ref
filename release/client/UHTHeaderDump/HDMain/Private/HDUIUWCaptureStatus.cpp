#include "HDUIUWCaptureStatus.h"

UHDUIUWCaptureStatus::UHDUIUWCaptureStatus() {
    this->bListenForPlayerCharacterEvents = true;
}



void UHDUIUWCaptureStatus::OwnerEndOverlap(AActor* OverlappedOwnerChar, AActor* OtherActor) {
}

void UHDUIUWCaptureStatus::OwnerBeginOverlap(AActor* OverlappedOwnerChar, AActor* OtherActor) {
}

void UHDUIUWCaptureStatus::CPOwnershipUpdate(AHDBaseCapturePoint* ControlPoint, EHDTeam PrevOwningTeam, EHDTeam NewOwningTeam, bool bCaptured) {
}

void UHDUIUWCaptureStatus::CPCaptureProgressUpdate(AHDBaseCapturePoint* ControlPoint, bool bInCaptureContested, int32 InCaptureProgress) {
}

void UHDUIUWCaptureStatus::CPBeginEndOverlap(AActor* OverlappedControlPointActor, AActor* OtherActor) {
}





