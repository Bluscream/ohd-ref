---@meta

---@class FDFConfirmationDialogAction
---@field Result EDFUIMessagingResult
---@field OptionalDisplayText FText
FDFConfirmationDialogAction = {}



---@class FMenuStackEntry
---@field Menu UDFBaseMenu
---@field ActivationMode EMenuActivationMode
---@field bShowMouseCursor boolean
---@field bUIOnlyInput boolean
FMenuStackEntry = {}



---@class FMinimapPOITableRow : FTableRowBase
---@field ActorClass TSoftClassPtr<AActor>
---@field bMatchChildClasses boolean
---@field ToolTipWidgetClass TSoftClassPtr<UUserWidget>
---@field WidgetClass TSoftClassPtr<UDFPOIWidget>
---@field IconBrush FSlateBrush
---@field ToolTipText FText
---@field bSelectable boolean
---@field bDynamic boolean
---@field bFixedRotation boolean
FMinimapPOITableRow = {}



---@class IPOIWidgetSlotInterface : IInterface
IPOIWidgetSlotInterface = {}

---@param NewIconBrush FSlateBrush
function IPOIWidgetSlotInterface:SetIconBrush(NewIconBrush) end
---@return UNamedSlot
function IPOIWidgetSlotInterface:GetIconSlot() end
---@return FSlateBrush
function IPOIWidgetSlotInterface:GetIconBrush() end


---@class UDFBaseMenu : UUserWidget
---@field bMenuConstructedInDesigner boolean
---@field bMenuPopped boolean
---@field bFlushPlayerInputUponConstruction boolean
UDFBaseMenu = {}

function UDFBaseMenu:RemoveFromMenuStack() end
function UDFBaseMenu:ReceiveOnMenuUncovered() end
function UDFBaseMenu:ReceiveOnMenuPush() end
function UDFBaseMenu:ReceiveOnMenuPop() end
function UDFBaseMenu:ReceiveOnMenuCovered() end
---@return boolean
function UDFBaseMenu:IsTopOfMenuStack() end


---@class UDFContextualWidgetBase : UUserWidget
---@field Prerequisites TArray<UDFContextualWidgetPrerequisiteBase>
UDFContextualWidgetBase = {}

---@param bInvokeEvents boolean
---@return boolean
function UDFContextualWidgetBase:TestPrerequisites(bInvokeEvents) end
function UDFContextualWidgetBase:PrerequisitesMet() end
---@param FailedPrereq UDFContextualWidgetPrerequisiteBase
function UDFContextualWidgetBase:PrerequisiteNotMet(FailedPrereq) end


---@class UDFContextualWidgetPrerequisiteBase : UObject
---@field bForceSuccess boolean
UDFContextualWidgetPrerequisiteBase = {}

---@return boolean
function UDFContextualWidgetPrerequisiteBase:TestPrerequisite() end
---@return boolean
function UDFContextualWidgetPrerequisiteBase:SatisfiesPrerequisite() end
---@return UDFContextualWidgetBase
function UDFContextualWidgetPrerequisiteBase:GetWidgetOuter() end


---@class UDFGameDialog : UDFBaseMenu
UDFGameDialog = {}


---@class UDFGameDialogDescriptor : UObject
---@field Header FText
---@field Body FText
---@field ButtonActions TArray<FDFConfirmationDialogAction>
UDFGameDialogDescriptor = {}



---@class UDFMenuManager : UObject
---@field MenuStack TArray<FMenuStackEntry>
---@field MenuManagerClassName FSoftClassPath
UDFMenuManager = {}

---@return UDFBaseMenu
function UDFMenuManager:Top() end
---@param MenuToRemove UDFBaseMenu
function UDFMenuManager:RemoveMenu(MenuToRemove) end
function UDFMenuManager:PopMenu() end
function UDFMenuManager:ClearMenuStack() end
---@param MenuToAdd UDFBaseMenu
---@param ActivationMode EMenuActivationMode
---@param bShowMouseCursor boolean
---@param bUIOnlyInput boolean
function UDFMenuManager:ActivateMenu(MenuToAdd, ActivationMode, bShowMouseCursor, bUIOnlyInput) end


---@class UDFMenuManagerBlueprintFunctions : UBlueprintFunctionLibrary
UDFMenuManagerBlueprintFunctions = {}

---@param WorldContextObject UObject
---@return UDFMenuManager
function UDFMenuManagerBlueprintFunctions:GetMenuManager(WorldContextObject) end
---@param WorldContextObject UObject
---@param MenuWidgetType TSubclassOf<UDFBaseMenu>
---@param OwningPlayer APlayerController
---@param ActivationMode EMenuActivationMode
---@param bShowMouseCursor boolean
---@param bUIOnlyInput boolean
---@return UDFBaseMenu
function UDFMenuManagerBlueprintFunctions:CreateAndActivate(WorldContextObject, MenuWidgetType, OwningPlayer, ActivationMode, bShowMouseCursor, bUIOnlyInput) end


---@class UDFMinimap : UUserWidget
---@field MapPOIs TArray<UDFPOIWidget>
---@field CurrentMapPos FVector2D
---@field CurrentZoom float
---@field MaxZoom float
---@field MapLength float
---@field MapOffset FVector
---@field POIDataTable UDataTable
---@field OuterCanvas UCanvasPanel
---@field MapCanvas UCanvasPanel
---@field MapImg UImage
UDFMinimap = {}

---@param NewZoomValue float
function UDFMinimap:UpdateZoomValue(NewZoomValue) end
---@param NewMapPos FVector2D
function UDFMinimap:UpdateMapPos(NewMapPos) end
function UDFMinimap:SetMapDirty() end
---@param POIActorClass TSubclassOf<AActor>
---@return boolean
function UDFMinimap:RemovePOIByActorClass(POIActorClass) end
---@param POIActorToRemove AActor
---@return boolean
function UDFMinimap:RemovePOIByActor(POIActorToRemove) end
---@param Index int32
---@return boolean
function UDFMinimap:RemovePOIAt(Index) end
---@param POIToRemove UDFPOIWidget
---@return boolean
function UDFMinimap:RemovePOI(POIToRemove) end
---@param POI UDFPOIWidget
---@param bSelected boolean
function UDFMinimap:ReceiveOnPOISelectionStateChanged(POI, bSelected) end
---@param WorldLocation FVector
---@param MapLocation FVector2D
---@return boolean
function UDFMinimap:ProjectWorldLocationToMap(WorldLocation, MapLocation) end
---@param POI UDFPOIWidget
---@param bSelected boolean
function UDFMinimap:OnPOISelectionStateChanged(POI, bSelected) end
---@param POI UDFPOIWidget
---@return boolean
function UDFMinimap:HasPOI(POI) end
---@return boolean
function UDFMinimap:HasAnyPOIs() end
---@param POI UDFPOIWidget
---@return int32
function UDFMinimap:GetPOIIndex(POI) end
---@return int32
function UDFMinimap:GetPOICount() end
---@param Index int32
---@return UDFPOIWidget
function UDFMinimap:GetPOIAt(Index) end
---@return FVector2D
function UDFMinimap:GetMapSizeLocal() end
---@return FVector2D
function UDFMinimap:GetMapSizeAbsolute() end
---@param POIActor AActor
---@param OutFoundPOI UDFPOIWidget
---@return boolean
function UDFMinimap:FindPOIByActor(POIActor, OutFoundPOI) end
---@param MapLocation FVector2D
---@param WorldLocation FVector
---@return boolean
function UDFMinimap:DeprojectMapLocationToWorld(MapLocation, WorldLocation) end
---@param MapLocation FVector2D
---@param WidgetLocation FVector2D
---@return boolean
function UDFMinimap:ConvertMapLocationToLocalWidgetLocation(MapLocation, WidgetLocation) end
---@return int32
function UDFMinimap:ClearPOIs() end
---@param POIActor AActor
---@return UDFPOIWidget
function UDFMinimap:AddNewPOI(POIActor) end


---@class UDFPOIComponent : UActorComponent
---@field bAutoRegisterPOI boolean
UDFPOIComponent = {}

function UDFPOIComponent:UnregisterPOI() end
---@param MinimapWidget UDFMinimap
function UDFPOIComponent:RegisterPOI(MinimapWidget) end
---@param NewMinimap UDFMinimap
function UDFPOIComponent:OnMinimapLateInit(NewMinimap) end
---@return boolean
function UDFPOIComponent:IsPOIRegistered() end
---@return UDFPOIWidget
function UDFPOIComponent:GetPOIWidget() end
---@return UDFMinimap
function UDFPOIComponent:GetMinimap() end


---@class UDFPOIWidget : UUserWidget
---@field POIActor AActor
---@field POIActorData FMinimapPOITableRow
---@field OnSelectionStateChanged FDFPOIWidgetOnSelectionStateChanged
---@field bSelected boolean
---@field IconSlot UNamedSlot
UDFPOIWidget = {}

function UDFPOIWidget:UpdateRotation() end
function UDFPOIWidget:UpdatePosition() end
---@param bNewSelected boolean
function UDFPOIWidget:SetPOISelectionState(bNewSelected) end
function UDFPOIWidget:SelectPOI() end
function UDFPOIWidget:ReceivePOISelected() end
function UDFPOIWidget:ReceivePOIInitialized() end
function UDFPOIWidget:ReceivePOIDeselected() end
---@param Actor AActor
---@param EndPlayReason EEndPlayReason::Type
function UDFPOIWidget:ReceiveOnPOIActorEndPlay(Actor, EndPlayReason) end
---@return boolean
function UDFPOIWidget:ReceiveCanSelect() end
---@param Actor AActor
---@param EndPlayReason EEndPlayReason::Type
function UDFPOIWidget:OnPOIActorEndPlay(Actor, EndPlayReason) end
function UDFPOIWidget:OnOwningMapDirty() end
---@return boolean
function UDFPOIWidget:IsSelectable() end
---@return boolean
function UDFPOIWidget:IsPOIActorValid() end
---@return boolean
function UDFPOIWidget:IsInitialized() end
---@return boolean
function UDFPOIWidget:IsDynamic() end
---@param OwningMapWidget UDFMinimap
---@param ActorToTrack AActor
---@param ActorPOIData FMinimapPOITableRow
function UDFPOIWidget:InitPOI(OwningMapWidget, ActorToTrack, ActorPOIData) end
---@return boolean
function UDFPOIWidget:HasFixedRotation() end
---@return FSlateBrush
function UDFPOIWidget:GetDefaultIconBrush() end
function UDFPOIWidget:DeselectPOI() end
---@return boolean
function UDFPOIWidget:CanSelect() end


---@class UDFUIMessagingSubsystem : ULocalPlayerSubsystem
---@field TopmostDialog UDFGameDialog
---@field ConfirmationDialogClassPtr TSubclassOf<UDFGameDialog>
---@field ErrorDialogClassPtr TSubclassOf<UDFGameDialog>
---@field ConfirmationDialogClass TSoftClassPtr<UDFGameDialog>
---@field ErrorDialogClass TSoftClassPtr<UDFGameDialog>
UDFUIMessagingSubsystem = {}



