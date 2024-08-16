#include "TextureLODGroup.h"

FTextureLODGroup::FTextureLODGroup() {
    this->Group = TEXTUREGROUP_World;
    this->LODBias = 0;
    this->LODBias_Smaller = 0;
    this->LODBias_Smallest = 0;
    this->NumStreamedMips = 0;
    this->MipGenSettings = TMGS_FromTextureGroup;
    this->MinLODSize = 0;
    this->MaxLODSize = 0;
    this->MaxLODSize_Smaller = 0;
    this->MaxLODSize_Smallest = 0;
    this->OptionalLODBias = 0;
    this->OptionalMaxLODSize = 0;
    this->MipLoadOptions = ETextureMipLoadOptions::Default;
    this->DuplicateNonOptionalMips = false;
}

