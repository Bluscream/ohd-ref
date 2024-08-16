#include "Texture.h"

UTexture::UTexture() {
    this->LODBias = 0;
    this->CompressionSettings = TC_Default;
    this->Filter = TF_Default;
    this->MipLoadOptions = ETextureMipLoadOptions::Default;
    this->LODGroup = TEXTUREGROUP_World;
    this->SRGB = true;
    this->bNoTiling = false;
    this->VirtualTextureStreaming = false;
    this->CompressionYCoCg = false;
    this->bAsyncResourceReleaseHasBeenStarted = false;
}


