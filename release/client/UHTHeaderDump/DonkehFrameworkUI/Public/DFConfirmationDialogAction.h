#pragma once
#include "CoreMinimal.h"
#include "EDFUIMessagingResult.h"
#include "DFConfirmationDialogAction.generated.h"

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORKUI_API FDFConfirmationDialogAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDFUIMessagingResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionalDisplayText;
    
    FDFConfirmationDialogAction();
};

