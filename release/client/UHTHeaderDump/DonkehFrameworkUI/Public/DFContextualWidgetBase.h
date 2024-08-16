#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DFContextualWidgetBase.generated.h"

class UDFContextualWidgetPrerequisiteBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DONKEHFRAMEWORKUI_API UDFContextualWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDFContextualWidgetPrerequisiteBase*> Prerequisites;
    
public:
    UDFContextualWidgetBase();

    UFUNCTION(BlueprintCallable)
    bool TestPrerequisites(bool bInvokeEvents);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrerequisitesMet();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrerequisiteNotMet(const UDFContextualWidgetPrerequisiteBase* FailedPrereq);
    
};

