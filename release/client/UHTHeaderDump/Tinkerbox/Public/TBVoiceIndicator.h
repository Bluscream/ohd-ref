#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "TBVoiceIndicator.generated.h"

class APlayerState;
class UPanelSlot;
class UPanelWidget;
class UTBVoiceIndicatorListing;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TINKERBOX_API UTBVoiceIndicator : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTBVoiceIndicatorListing> VoiceListingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ActiveVoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActiveVoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveVoices;
    
public:
    UTBVoiceIndicator();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActiveVoiceRemoved(APlayerState* PlayerState, UPanelSlot* NewVoiceWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActiveVoiceAdded(APlayerState* PlayerState, UPanelSlot* NewVoiceWidget);
    
};

