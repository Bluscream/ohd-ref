#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "TBVoiceIndicatorListing.generated.h"

class UTBVoiceIndicator;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TINKERBOX_API UTBVoiceIndicatorListing : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PlayerName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTBVoiceIndicator* ParentMenu;
    
public:
    UTBVoiceIndicatorListing();

    UFUNCTION(BlueprintCallable)
    void Init(UTBVoiceIndicator* InParentMenu, const FUniqueNetIdRepl& InUniqueNetId, FString& InPlayerName);
    
};

