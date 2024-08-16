#pragma once
#include "CoreMinimal.h"
#include "EMenuActivationMode.h"
#include "MenuStackEntry.generated.h"

class UDFBaseMenu;

USTRUCT(BlueprintType)
struct FMenuStackEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDFBaseMenu* Menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuActivationMode ActivationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMouseCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUIOnlyInput;
    
    DONKEHFRAMEWORKUI_API FMenuStackEntry();
};

