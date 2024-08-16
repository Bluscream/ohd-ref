#include "CollisionProfile.h"

UCollisionProfile::UCollisionProfile() {
    this->Profiles.AddDefaulted(21);
    this->DefaultChannelResponses.AddDefaulted(5);
    this->EditProfiles.AddDefaulted(15);
    this->ProfileRedirects.AddDefaulted(5);
    this->CollisionChannelRedirects.AddDefaulted(4);
}


