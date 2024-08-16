#include "DFInventoryComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UDFInventoryComponent::UDFInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

int32 UDFInventoryComponent::Size() const {
    return 0;
}

bool UDFInventoryComponent::RemoveItemAt(const int32 Index, ADFBaseItem*& OutRemovedItem, bool bDestroyItem) {
    return false;
}

bool UDFInventoryComponent::Remove(const ADFBaseItem* Item, bool bDestroyItem) {
    return false;
}

bool UDFInventoryComponent::IsValidIndex(int32 Index) const {
    return false;
}

bool UDFInventoryComponent::GetItem(const int32 Index, ADFBaseItem*& OutItem) const {
    return false;
}

bool UDFInventoryComponent::FindItemByClass(const TSubclassOf<ADFBaseItem>& ItemClass, ADFBaseItem*& OutItem) const {
    return false;
}

bool UDFInventoryComponent::Find(const ADFBaseItem* ItemToCompare, int32& OutIndex) const {
    return false;
}

void UDFInventoryComponent::Clear(bool bDestroyItems) {
}

void UDFInventoryComponent::AddDefaultInventoryItems() {
}

bool UDFInventoryComponent::Add(const ADFBaseItem* Item) {
    return false;
}

void UDFInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDFInventoryComponent, Items);
}


