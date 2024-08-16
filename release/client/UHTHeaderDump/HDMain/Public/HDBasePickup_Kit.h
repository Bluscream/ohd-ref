#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFBasePickup -FallbackName=DFBasePickup
#include "HDBasePickup_Kit.generated.h"

class UDFInventoryComponent;
class UHDKit;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class HDMAIN_API AHDBasePickup_Kit : public ADFBasePickup {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDFInventoryComponent* Inventory;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> KitVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDKit* KitLoadout;
    
public:
    AHDBasePickup_Kit(const FObjectInitializer& ObjectInitializer);

};

