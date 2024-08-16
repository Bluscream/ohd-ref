#include "RuntimeVirtualTexture.h"

URuntimeVirtualTexture::URuntimeVirtualTexture() {
    this->MaterialType = ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular;
    this->bCompressTextures = true;
    this->bEnable = true;
    this->bClearTextures = true;
    this->bSinglePhysicalSpace = true;
    this->bPrivateSpace = true;
    this->bEnableScalability = false;
    this->Size = -1;
    this->TileCount = 8;
    this->TileSize = 2;
    this->TileBorderSize = 2;
    this->StreamLowMips = 0;
    this->StreamingTexture = NULL;
    this->bEnableCompressCrunch = false;
    this->RemoveLowMips = 0;
}

int32 URuntimeVirtualTexture::GetTileSize() const {
    return 0;
}

int32 URuntimeVirtualTexture::GetTileCount() const {
    return 0;
}

int32 URuntimeVirtualTexture::GetTileBorderSize() const {
    return 0;
}

int32 URuntimeVirtualTexture::GetSize() const {
    return 0;
}


