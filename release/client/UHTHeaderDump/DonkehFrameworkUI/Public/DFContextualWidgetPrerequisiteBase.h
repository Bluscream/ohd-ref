#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DFContextualWidgetPrerequisiteBase.generated.h"

class UDFContextualWidgetBase;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class DONKEHFRAMEWORKUI_API UDFContextualWidgetPrerequisiteBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bForceSuccess: 1;
    
    UDFContextualWidgetPrerequisiteBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TestPrerequisite() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SatisfiesPrerequisite() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDFContextualWidgetBase* GetWidgetOuter() const;
    
};

