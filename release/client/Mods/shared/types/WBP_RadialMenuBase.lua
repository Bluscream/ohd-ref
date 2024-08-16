---@meta

---@class UWBP_RadialMenuBase_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialBackground UImage
---@field RadiusDebug UImage
---@field RootOverlay UOverlay
---@field Segments int32
---@field MaterialBase UMaterialInterface
---@field IndexRaw float
---@field Index int32
---@field dynaMat UMaterialInstanceDynamic
---@field Children TArray<UUserWidget>
---@field AllowResizing boolean
---@field ItemOffsetRadius float
---@field SelectionChanged FWBP_RadialMenuBase_CSelectionChanged
---@field InputController APlayerController
---@field JoystickToUse EJoystickTypes::Type
---@field MouseDeadzone float
---@field bInDeadzone boolean
---@field EnteredDeadzone FWBP_RadialMenuBase_CEnteredDeadzone
---@field ExitedDeadzone FWBP_RadialMenuBase_CExitedDeadzone
---@field CurrentInput FVector2D
---@field JoystickDeadzone float
---@field DefaultToMouseIfNoJoystick boolean
---@field DefaultPlayerIndex int32
---@field UseDeadzoneEvents boolean
---@field SelectionChangedSound USoundBase
---@field AutoCenterMouse boolean
---@field AutoRotateForUp boolean
---@field bUseCustomInput boolean
---@field CustomInput FVector2D
---@field UseCustomTexture boolean
---@field RadialTexture UTexture
---@field UseCustomColors boolean
---@field InnterRingColor FLinearColor
---@field OuterRingColor FLinearColor
---@field RingMainColor FLinearColor
---@field UnhighlightColor FLinearColor
UWBP_RadialMenuBase_C = {}

function UWBP_RadialMenuBase_C:UpdateMaterialVisuals() end
---@param Input FVector2D
---@param Valid boolean
function UWBP_RadialMenuBase_C:GetCustomInput(Input, Valid) end
---@param CustomInput FVector2D
function UWBP_RadialMenuBase_C:SetCustomInput(CustomInput) end
function UWBP_RadialMenuBase_C:UpdateDirectionWithCustomInput() end
---@param IndexToRemove int32
function UWBP_RadialMenuBase_C:RemoveChildIndexFromRadialMenu(IndexToRemove) end
---@param ItemToFind UUserWidget
function UWBP_RadialMenuBase_C:RemoveChildWidgetFromRadialMenu(ItemToFind) end
---@return FText
function UWBP_RadialMenuBase_C:DebugIndex() end
---@param Input FVector2D
---@return FVector2D
function UWBP_RadialMenuBase_C:FixInputRotation(Input) end
function UWBP_RadialMenuBase_C:FixMainRotation() end
function UWBP_RadialMenuBase_C:AutoRegisterToInput() end
function UWBP_RadialMenuBase_C:UpdateInput() end
---@param Controller APlayerController
---@param Success boolean
function UWBP_RadialMenuBase_C:RegisterPlayerInput(Controller, Success) end
function UWBP_RadialMenuBase_C:UpdateDirectionWithJoystick() end
---@param Index int32
---@param Valid boolean
function UWBP_RadialMenuBase_C:GetCurrentIndex(Index, Valid) end
---@param Index int32
---@param Output UUserWidget
---@param Success boolean
function UWBP_RadialMenuBase_C:GetChild(Index, Output, Success) end
---@param Index int32
function UWBP_RadialMenuBase_C:SetIndex(Index) end
function UWBP_RadialMenuBase_C:UpdateAllChildrenPositions() end
---@param Index int32
function UWBP_RadialMenuBase_C:UpdateChildPosition(Index) end
function UWBP_RadialMenuBase_C:ClearChildren() end
---@param Output UUserWidget
function UWBP_RadialMenuBase_C:GetSelectedWidget(Output) end
---@param Content UUserWidget
---@param Success boolean
function UWBP_RadialMenuBase_C:AddChildToRadialMenu(Content, Success) end
function UWBP_RadialMenuBase_C:UpdateDirectionWithMouseCursor() end
---@return float
function UWBP_RadialMenuBase_C:GetSectionDegreeSize() end
---@param Direction FVector2D
function UWBP_RadialMenuBase_C:SetInputDirection(Direction) end
function UWBP_RadialMenuBase_C:Construct() end
---@param Segments int32
function UWBP_RadialMenuBase_C:UpdateSegments(Segments) end
---@param InDeadzone boolean
function UWBP_RadialMenuBase_C:InDeadzone(InDeadzone) end
function UWBP_RadialMenuBase_C:UpdateMaterials() end
---@param IsDesignTime boolean
function UWBP_RadialMenuBase_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_RadialMenuBase_C:ExecuteUbergraph_WBP_RadialMenuBase(EntryPoint) end
function UWBP_RadialMenuBase_C:ExitedDeadzone__DelegateSignature() end
function UWBP_RadialMenuBase_C:EnteredDeadzone__DelegateSignature() end
---@param NewSelection int32
---@param OldSelection int32
function UWBP_RadialMenuBase_C:SelectionChanged__DelegateSignature(NewSelection, OldSelection) end


