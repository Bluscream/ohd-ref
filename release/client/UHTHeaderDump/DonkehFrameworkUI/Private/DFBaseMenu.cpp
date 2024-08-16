#include "DFBaseMenu.h"

UDFBaseMenu::UDFBaseMenu() : UUserWidget(FObjectInitializer::Get()) {
    this->bMenuConstructedInDesigner = false;
    this->bMenuPopped = false;
    this->bFlushPlayerInputUponConstruction = false;
}

void UDFBaseMenu::RemoveFromMenuStack() {
}





bool UDFBaseMenu::IsTopOfMenuStack() const {
    return false;
}


