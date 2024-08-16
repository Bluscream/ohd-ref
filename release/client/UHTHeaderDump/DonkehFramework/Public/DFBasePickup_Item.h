#pragma once
#include "CoreMinimal.h"
#include "DFBasePickup.h"
#include "DFBasePickup_Item.generated.h"

class UDFInventoryComponent;

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORK_API ADFBasePickup_Item : public ADFBasePickup {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDFInventoryComponent* Inventory;
    
public:
    ADFBasePickup_Item(const FObjectInitializer& ObjectInitializer);

};

