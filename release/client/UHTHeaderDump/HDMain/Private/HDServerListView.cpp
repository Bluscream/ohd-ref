#include "HDServerListView.h"
#include "Templates/SubclassOf.h"

UHDServerListView::UHDServerListView() : UListView(FObjectInitializer::Get()) {
    this->bItemSortAscending = true;
    this->ItemSortBy = EHDServerListSortBy::None;
}

void UHDServerListView::SortListItems(bool bSortAscending, EHDServerListSortBy SortBy) {
}

void UHDServerListView::SetItemSortBy(EHDServerListSortBy SortBy) {
}

void UHDServerListView::SetItemSortAscending(bool bSortAscending) {
}

void UHDServerListView::SetItemFilterRules(const TMap<TSubclassOf<UHDServerListFilterRule>, FHDFilterRuleParams>& FilterRules) {
}

float UHDServerListView::GetEntrySpacing() const {
    return 0.0f;
}

FMargin UHDServerListView::GetDesiredEntryPaddingForItem(UObject* Item) const {
    return FMargin{};
}

bool UHDServerListView::DoesFilterExcludeListItem(const UObject* Item) const {
    return false;
}


