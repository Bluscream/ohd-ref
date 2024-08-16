#include "MaterialExpressionMaterialAttributeLayers.h"

UMaterialExpressionMaterialAttributeLayers::UMaterialExpressionMaterialAttributeLayers() {
    this->bIsParameterExpression = true;
    this->NumActiveLayerCallers = 0;
    this->NumActiveBlendCallers = 0;
    this->bIsLayerGraphBuilt = false;
}


