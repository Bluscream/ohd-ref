#ifndef UE4SS_SDK_DonkehFrameworkUI_HPP
#define UE4SS_SDK_DonkehFrameworkUI_HPP

#include "DonkehFrameworkUI_enums.hpp"

struct FDFConfirmationDialogAction
{
    EDFUIMessagingResult Result;                                                      // 0x0000 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0001 (size: 0x7)
    FText OptionalDisplayText;                                                        // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FMenuStackEntry
{
    class UDFBaseMenu* Menu;                                                          // 0x0000 (size: 0x8)
    EMenuActivationMode ActivationMode;                                               // 0x0008 (size: 0x1)
    bool bShowMouseCursor;                                                            // 0x0009 (size: 0x1)
    bool bUIOnlyInput;                                                                // 0x000A (size: 0x1)

}; // Size: 0x10

struct FMinimapPOITableRow : public FTableRowBase
{
    TSoftClassPtr<AActor> ActorClass;                                                 // 0x0008 (size: 0x28)
    uint8 bMatchChildClasses;                                                         // 0x0030 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0031 (size: 0x7)
    TSoftClassPtr<UUserWidget> ToolTipWidgetClass;                                    // 0x0038 (size: 0x28)
    TSoftClassPtr<UDFPOIWidget> WidgetClass;                                          // 0x0060 (size: 0x28)
    FSlateBrush IconBrush;                                                            // 0x0088 (size: 0x88)
    FText ToolTipText;                                                                // 0x0110 (size: 0x18)
    uint8 bSelectable;                                                                // 0x0128 (size: 0x1)
    uint8 bDynamic;                                                                   // 0x0128 (size: 0x1)
    uint8 bFixedRotation;                                                             // 0x0128 (size: 0x1)

}; // Size: 0x130

class IPOIWidgetSlotInterface : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void SetIconBrush(const FSlateBrush& NewIconBrush);
    class UNamedSlot* GetIconSlot();
    FSlateBrush GetIconBrush();
}; // Size: 0x28

class UDFBaseMenu : public UUserWidget
{
    uint8 bMenuConstructedInDesigner;                                                 // 0x0230 (size: 0x1)
    uint8 bMenuPopped;                                                                // 0x0230 (size: 0x1)
    uint8 bFlushPlayerInputUponConstruction;                                          // 0x0230 (size: 0x1)

    void RemoveFromMenuStack();
    void ReceiveOnMenuUncovered();
    void ReceiveOnMenuPush();
    void ReceiveOnMenuPop();
    void ReceiveOnMenuCovered();
    bool IsTopOfMenuStack();
}; // Size: 0x238

class UDFContextualWidgetBase : public UUserWidget
{
    TArray<class UDFContextualWidgetPrerequisiteBase*> Prerequisites;                 // 0x0230 (size: 0x10)

    bool TestPrerequisites(bool bInvokeEvents);
    void PrerequisitesMet();
    void PrerequisiteNotMet(const class UDFContextualWidgetPrerequisiteBase* FailedPrereq);
}; // Size: 0x240

class UDFContextualWidgetPrerequisiteBase : public UObject
{
    uint8 bForceSuccess;                                                              // 0x0028 (size: 0x1)

    bool TestPrerequisite();
    bool SatisfiesPrerequisite();
    class UDFContextualWidgetBase* GetWidgetOuter();
}; // Size: 0x30

class UDFGameDialog : public UDFBaseMenu
{
    char padding_0[0x238];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x238

class UDFGameDialogDescriptor : public UObject
{
    FText Header;                                                                     // 0x0028 (size: 0x18)
    FText Body;                                                                       // 0x0040 (size: 0x18)
    TArray<FDFConfirmationDialogAction> ButtonActions;                                // 0x0058 (size: 0x10)

}; // Size: 0x68

class UDFMenuManager : public UObject
{
    TArray<FMenuStackEntry> MenuStack;                                                // 0x0030 (size: 0x10)
    FSoftClassPath MenuManagerClassName;                                              // 0x0040 (size: 0x18)

    class UDFBaseMenu* Top();
    void RemoveMenu(class UDFBaseMenu* MenuToRemove);
    void PopMenu();
    void ClearMenuStack();
    void ActivateMenu(class UDFBaseMenu* MenuToAdd, EMenuActivationMode ActivationMode, const bool bShowMouseCursor, const bool bUIOnlyInput);
}; // Size: 0x58

class UDFMenuManagerBlueprintFunctions : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    class UDFMenuManager* GetMenuManager(class UObject* WorldContextObject);
    class UDFBaseMenu* CreateAndActivate(class UObject* WorldContextObject, TSubclassOf<class UDFBaseMenu> MenuWidgetType, class APlayerController* OwningPlayer, const EMenuActivationMode ActivationMode, const bool bShowMouseCursor, const bool bUIOnlyInput);
}; // Size: 0x28

class UDFMinimap : public UUserWidget
{
    TArray<class UDFPOIWidget*> MapPOIs;                                              // 0x0230 (size: 0x10)
    char padding_0[0x18];                                                             // 0x0240 (size: 0x18)
    FVector2D CurrentMapPos;                                                          // 0x0258 (size: 0x8)
    float CurrentZoom;                                                                // 0x0260 (size: 0x4)
    float MaxZoom;                                                                    // 0x0264 (size: 0x4)
    float MapLength;                                                                  // 0x0268 (size: 0x4)
    FVector MapOffset;                                                                // 0x026C (size: 0xC)
    class UDataTable* POIDataTable;                                                   // 0x0278 (size: 0x8)
    class UCanvasPanel* OuterCanvas;                                                  // 0x0280 (size: 0x8)
    class UCanvasPanel* MapCanvas;                                                    // 0x0288 (size: 0x8)
    class UImage* MapImg;                                                             // 0x0290 (size: 0x8)

    void UpdateZoomValue(const float NewZoomValue);
    void UpdateMapPos(const FVector2D& NewMapPos);
    void SetMapDirty();
    bool RemovePOIByActorClass(const TSubclassOf<class AActor>& POIActorClass);
    bool RemovePOIByActor(const class AActor* POIActorToRemove);
    bool RemovePOIAt(int32 Index);
    bool RemovePOI(class UDFPOIWidget* POIToRemove);
    void ReceiveOnPOISelectionStateChanged(class UDFPOIWidget* POI, bool bSelected);
    bool ProjectWorldLocationToMap(FVector WorldLocation, FVector2D& MapLocation);
    void OnPOISelectionStateChanged(class UDFPOIWidget* POI, bool bSelected);
    bool HasPOI(class UDFPOIWidget* POI);
    bool HasAnyPOIs();
    int32 GetPOIIndex(class UDFPOIWidget* POI);
    int32 GetPOICount();
    class UDFPOIWidget* GetPOIAt(int32 Index);
    FVector2D GetMapSizeLocal();
    FVector2D GetMapSizeAbsolute();
    bool FindPOIByActor(const class AActor* POIActor, class UDFPOIWidget*& OutFoundPOI);
    bool DeprojectMapLocationToWorld(FVector2D MapLocation, FVector& WorldLocation);
    bool ConvertMapLocationToLocalWidgetLocation(FVector2D MapLocation, FVector2D& WidgetLocation);
    int32 ClearPOIs();
    class UDFPOIWidget* AddNewPOI(class AActor* POIActor);
}; // Size: 0x298

class UDFPOIComponent : public UActorComponent
{
    uint8 bAutoRegisterPOI;                                                           // 0x00C4 (size: 0x1)

    void UnregisterPOI();
    void RegisterPOI(class UDFMinimap* MinimapWidget);
    void OnMinimapLateInit(class UDFMinimap* NewMinimap);
    bool IsPOIRegistered();
    class UDFPOIWidget* GetPOIWidget();
    class UDFMinimap* GetMinimap();
}; // Size: 0xC8

class UDFPOIWidget : public UUserWidget
{
    class AActor* POIActor;                                                           // 0x0240 (size: 0x8)
    FMinimapPOITableRow POIActorData;                                                 // 0x0248 (size: 0x130)
    char padding_0[0x8];                                                              // 0x0378 (size: 0x8)
    FDFPOIWidgetOnSelectionStateChanged OnSelectionStateChanged;                      // 0x0380 (size: 0x10)
    void POISelectionStateSignature(class UDFPOIWidget* POI, bool bSelected);
    uint8 bSelected;                                                                  // 0x0390 (size: 0x1)
    char padding_1[0x7];                                                              // 0x0391 (size: 0x7)
    class UNamedSlot* IconSlot;                                                       // 0x0398 (size: 0x8)

    void UpdateRotation();
    void UpdatePosition();
    void SetPOISelectionState(const bool bNewSelected);
    void SelectPOI();
    void ReceivePOISelected();
    void ReceivePOIInitialized();
    void ReceivePOIDeselected();
    void ReceiveOnPOIActorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    bool ReceiveCanSelect();
    void OnPOIActorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnOwningMapDirty();
    bool IsSelectable();
    bool IsPOIActorValid();
    bool IsInitialized();
    bool IsDynamic();
    void InitPOI(class UDFMinimap* OwningMapWidget, class AActor* ActorToTrack, FMinimapPOITableRow& ActorPOIData);
    bool HasFixedRotation();
    FSlateBrush GetDefaultIconBrush();
    void DeselectPOI();
    bool CanSelect();
}; // Size: 0x3A0

class UDFUIMessagingSubsystem : public ULocalPlayerSubsystem
{
    class UDFGameDialog* TopmostDialog;                                               // 0x0030 (size: 0x8)
    TSubclassOf<class UDFGameDialog> ConfirmationDialogClassPtr;                      // 0x0038 (size: 0x8)
    TSubclassOf<class UDFGameDialog> ErrorDialogClassPtr;                             // 0x0040 (size: 0x8)
    TSoftClassPtr<UDFGameDialog> ConfirmationDialogClass;                             // 0x0048 (size: 0x28)
    TSoftClassPtr<UDFGameDialog> ErrorDialogClass;                                    // 0x0070 (size: 0x28)

}; // Size: 0x98

#endif
