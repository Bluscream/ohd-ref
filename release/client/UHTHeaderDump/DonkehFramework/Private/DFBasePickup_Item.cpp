#include "DFBasePickup_Item.h"
#include "DFInventoryComponent.h"

ADFBasePickup_Item::ADFBasePickup_Item(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Inventory = CreateDefaultSubobject<UDFInventoryComponent>(TEXT("Inventory"));
}


