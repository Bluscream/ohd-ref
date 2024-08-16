#pragma once
#include "CoreMinimal.h"
#include "InventoryOnItemRemovedSignatureDelegate.generated.h"

class ADFBaseItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryOnItemRemovedSignature, ADFBaseItem*, RemovedItem);

