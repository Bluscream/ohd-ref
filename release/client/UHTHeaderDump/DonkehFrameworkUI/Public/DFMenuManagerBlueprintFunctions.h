#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EMenuActivationMode.h"
#include "Templates/SubclassOf.h"
#include "DFMenuManagerBlueprintFunctions.generated.h"

class APlayerController;
class UDFBaseMenu;
class UDFMenuManager;
class UObject;

UCLASS(Blueprintable)
class DONKEHFRAMEWORKUI_API UDFMenuManagerBlueprintFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDFMenuManagerBlueprintFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDFMenuManager* GetMenuManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UDFBaseMenu* CreateAndActivate(UObject* WorldContextObject, TSubclassOf<UDFBaseMenu> MenuWidgetType, APlayerController* OwningPlayer, const EMenuActivationMode ActivationMode, const bool bShowMouseCursor, const bool bUIOnlyInput);
    
};

