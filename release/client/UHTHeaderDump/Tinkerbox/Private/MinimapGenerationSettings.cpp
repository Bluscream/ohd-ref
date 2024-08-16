#include "MinimapGenerationSettings.h"

FMinimapGenerationSettings::FMinimapGenerationSettings() {
    this->BoundaryMarkerA = NULL;
    this->BoundaryMarkerB = NULL;
    this->CaptureResolution = (EMinimapCaptureResolution)0;
    this->PlayableBoundaryLength = 0.00f;
}

