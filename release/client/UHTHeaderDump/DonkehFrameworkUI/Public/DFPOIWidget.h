#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MinimapPOITableRow.h"
#include "POISelectionStateSignatureDelegate.h"
#include "POIWidgetSlotInterface.h"
#include "DFPOIWidget.generated.h"

class AActor;
class UDFMinimap;
class UNamedSlot;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DONKEHFRAMEWORKUI_API UDFPOIWidget : public UUserWidget, public IPOIWidgetSlotInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* POIActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMinimapPOITableRow POIActorData;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPOISelectionStateSignature OnSelectionStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSelected: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* IconSlot;
    
public:
    UDFPOIWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateRotation();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePosition();
    
    UFUNCTION(BlueprintCallable)
    void SetPOISelectionState(const bool bNewSelected);
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectPOI();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePOISelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePOIInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePOIDeselected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnPOIActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReceiveCanSelect() const;
    
    UFUNCTION(BlueprintCallable)
    void OnPOIActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOwningMapDirty();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPOIActorValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDynamic() const;
    
    UFUNCTION(BlueprintCallable)
    void InitPOI(UDFMinimap* OwningMapWidget, AActor* ActorToTrack, FMinimapPOITableRow& ActorPOIData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFixedRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetDefaultIconBrush() const;
    
    UFUNCTION(BlueprintCallable)
    void DeselectPOI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSelect() const;
    

    // Fix for true pure virtual functions not being implemented
};

