#include "DFGenericObject.h"

FDFGenericObject::FDFGenericObject() {
    this->Object = NULL;
    this->bPendingRemoval = false;
    this->bPredictivelyRemoved = false;
}

