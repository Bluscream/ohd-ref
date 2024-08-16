#include "HDServerInfoFlags.h"

FHDServerInfoFlags::FHDServerInfoFlags() {
    this->bPasswordProtected = false;
    this->WhitelistType = EDFPlayerWhitelistType::None;
    this->bSupportersOnlyWhitelist = false;
    this->bUtilizesUGC = false;
}

