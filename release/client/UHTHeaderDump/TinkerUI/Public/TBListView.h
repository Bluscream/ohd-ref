#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ListView -FallbackName=ListView
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=SimpleListItemEventDynamic__DelegateSignature -FallbackName=SimpleListItemEventDynamicDelegate
#include "TBListView.generated.h"

UCLASS(Blueprintable)
class TINKERUI_API UTBListView : public UListView {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleListItemEventDynamic BP_OnPreviewItemCreated;
    
public:
    UTBListView();

};

