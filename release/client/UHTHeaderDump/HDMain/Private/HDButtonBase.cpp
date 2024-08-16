#include "HDButtonBase.h"

UHDButtonBase::UHDButtonBase() : UUserWidget(FObjectInitializer::Get()) {
    this->Button = NULL;
}


void UHDButtonBase::SetButtonText(const FText& InText) {
}

void UHDButtonBase::HandleButtonClicked() {
}


