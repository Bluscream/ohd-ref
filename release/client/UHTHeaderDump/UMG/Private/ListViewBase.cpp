#include "ListViewBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EWidgetClipping -FallbackName=EWidgetClipping

UListViewBase::UListViewBase() {
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->EntryWidgetClass = NULL;
    this->WheelScrollMultiplier = 1.00f;
    this->bEnableScrollAnimation = false;
    this->bEnableFixedLineOffset = false;
    this->FixedLineScrollOffset = 0.00f;
}

void UListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier) {
}

void UListViewBase::SetScrollOffset(const float InScrollOffset) {
}

void UListViewBase::SetScrollbarVisibility(ESlateVisibility InVisibility) {
}

void UListViewBase::ScrollToTop() {
}

void UListViewBase::ScrollToBottom() {
}

void UListViewBase::RequestRefresh() {
}

void UListViewBase::RegenerateAllEntries() {
}

TArray<UUserWidget*> UListViewBase::GetDisplayedEntryWidgets() const {
    return TArray<UUserWidget*>();
}


