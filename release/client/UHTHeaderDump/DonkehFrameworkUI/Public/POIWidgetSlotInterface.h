#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "POIWidgetSlotInterface.generated.h"

class UNamedSlot;

UINTERFACE(Blueprintable)
class DONKEHFRAMEWORKUI_API UPOIWidgetSlotInterface : public UInterface {
    GENERATED_BODY()
};

class DONKEHFRAMEWORKUI_API IPOIWidgetSlotInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIconBrush(const FSlateBrush& NewIconBrush);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UNamedSlot* GetIconSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSlateBrush GetIconBrush() const;
    
};

