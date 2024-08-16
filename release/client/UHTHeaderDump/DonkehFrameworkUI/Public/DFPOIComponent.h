#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DFPOIComponent.generated.h"

class UDFMinimap;
class UDFPOIWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DONKEHFRAMEWORKUI_API UDFPOIComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoRegisterPOI: 1;
    
    UDFPOIComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterPOI();
    
    UFUNCTION(BlueprintCallable)
    void RegisterPOI(UDFMinimap* MinimapWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMinimapLateInit(UDFMinimap* NewMinimap);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPOIRegistered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDFPOIWidget* GetPOIWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDFMinimap* GetMinimap() const;
    
};

