#pragma once
#include "CoreMinimal.h"
#include "InventoryOnItemAddedSignatureDelegate.generated.h"

class ADFBaseItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryOnItemAddedSignature, ADFBaseItem*, AddedItem);

