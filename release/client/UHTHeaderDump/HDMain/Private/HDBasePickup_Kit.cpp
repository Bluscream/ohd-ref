#include "HDBasePickup_Kit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFInventoryComponent -FallbackName=DFInventoryComponent

AHDBasePickup_Kit::AHDBasePickup_Kit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseable = true;
    this->bOverlap = false;
    this->Inventory = CreateDefaultSubobject<UDFInventoryComponent>(TEXT("Inventory"));
    this->KitLoadout = NULL;
}


