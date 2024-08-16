#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "DFMinimap.generated.h"

class AActor;
class UCanvasPanel;
class UDFPOIWidget;
class UDataTable;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DONKEHFRAMEWORKUI_API UDFMinimap : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDFPOIWidget*> MapPOIs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D CurrentMapPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MapOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* POIDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* OuterCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MapCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MapImg;
    
public:
    UDFMinimap();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateZoomValue(const float NewZoomValue);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMapPos(const FVector2D& NewMapPos);
    
    UFUNCTION(BlueprintCallable)
    void SetMapDirty();
    
public:
    UFUNCTION(BlueprintCallable)
    bool RemovePOIByActorClass(const TSubclassOf<AActor>& POIActorClass);
    
    UFUNCTION(BlueprintCallable)
    bool RemovePOIByActor(const AActor* POIActorToRemove);
    
    UFUNCTION(BlueprintCallable)
    bool RemovePOIAt(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool RemovePOI(UDFPOIWidget* POIToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnPOISelectionStateChanged(UDFPOIWidget* POI, bool bSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ProjectWorldLocationToMap(FVector WorldLocation, FVector2D& MapLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void OnPOISelectionStateChanged(UDFPOIWidget* POI, bool bSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPOI(UDFPOIWidget* POI) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyPOIs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPOIIndex(UDFPOIWidget* POI) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPOICount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDFPOIWidget* GetPOIAt(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMapSizeLocal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMapSizeAbsolute() const;
    
    UFUNCTION(BlueprintCallable)
    bool FindPOIByActor(const AActor* POIActor, UDFPOIWidget*& OutFoundPOI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DeprojectMapLocationToWorld(FVector2D MapLocation, FVector& WorldLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ConvertMapLocationToLocalWidgetLocation(FVector2D MapLocation, FVector2D& WidgetLocation) const;
    
    UFUNCTION(BlueprintCallable)
    int32 ClearPOIs();
    
    UFUNCTION(BlueprintCallable)
    UDFPOIWidget* AddNewPOI(AActor* POIActor);
    
};

