#include "HDServerListFilterRule.h"

UHDServerListFilterRule::UHDServerListFilterRule() {
}

bool UHDServerListFilterRule::MatchesServer_Implementation(const UHDServerListItemData* ListItem) const {
    return false;
}


