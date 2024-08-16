#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DFConfirmationDialogAction.h"
#include "DFGameDialogDescriptor.generated.h"

UCLASS(Blueprintable)
class DONKEHFRAMEWORKUI_API UDFGameDialogDescriptor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDFConfirmationDialogAction> ButtonActions;
    
    UDFGameDialogDescriptor();

};

