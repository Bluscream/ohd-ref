#include "DFMenuManagerBlueprintFunctions.h"
#include "Templates/SubclassOf.h"

UDFMenuManagerBlueprintFunctions::UDFMenuManagerBlueprintFunctions() {
}

UDFMenuManager* UDFMenuManagerBlueprintFunctions::GetMenuManager(UObject* WorldContextObject) {
    return NULL;
}

UDFBaseMenu* UDFMenuManagerBlueprintFunctions::CreateAndActivate(UObject* WorldContextObject, TSubclassOf<UDFBaseMenu> MenuWidgetType, APlayerController* OwningPlayer, const EMenuActivationMode ActivationMode, const bool bShowMouseCursor, const bool bUIOnlyInput) {
    return NULL;
}


