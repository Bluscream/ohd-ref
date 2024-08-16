#include "MaterialExpressionRuntimeVirtualTextureSample.h"

UMaterialExpressionRuntimeVirtualTextureSample::UMaterialExpressionRuntimeVirtualTextureSample() {
    this->VirtualTexture = NULL;
    this->MaterialType = ERuntimeVirtualTextureMaterialType::BaseColor;
    this->bSinglePhysicalSpace = true;
    this->MipValueMode = RVTMVM_None;
}


