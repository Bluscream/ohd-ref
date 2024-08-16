#pragma once
#include "CoreMinimal.h"
#include "POISelectionStateSignatureDelegate.generated.h"

class UDFPOIWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPOISelectionStateSignature, UDFPOIWidget*, POI, bool, bSelected);

