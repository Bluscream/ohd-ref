#include "GeneralProjectSettings.h"

UGeneralProjectSettings::UGeneralProjectSettings() {
    this->CompanyName = TEXT("Drakeling Labs");
    this->CopyrightNotice = TEXT("Copyright Drakeling Labs. All Rights Reserved.");
    this->Homepage = TEXT("bluedrake42.com");
    this->ProjectName = TEXT("Operation: Harsh Doorstop");
    this->ProjectVersion = TEXT("0.13.0.1");
    this->ProjectDisplayedTitle = FText::FromString(TEXT("Operation: Harsh Doorstop"));
    this->bShouldWindowPreserveAspectRatio = true;
    this->bUseBorderlessWindow = false;
    this->bStartInVR = false;
    this->bStartInAR = false;
    this->bSupportAR = false;
    this->bAllowWindowResize = false;
    this->bAllowClose = true;
    this->bAllowMaximize = false;
    this->bAllowMinimize = true;
}


