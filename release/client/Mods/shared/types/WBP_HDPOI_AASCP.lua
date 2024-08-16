---@meta

---@class UWBP_HDPOI_AASCP_C : UDFPOIWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FlagIcon UImage
---@field FlagPoleIcon UImage
---@field IconOverlay UOverlay
---@field ObjIcon UImage
---@field RecaptureIcon UImage
---@field SpawnPointIcon UImage
---@field POIWidgetInitialized boolean
---@field bClearSelectionOnWidgetDestruct boolean
---@field OwningPC ABP_HDPlayerControllerBase_C
---@field OwningPlayerState AHDPlayerState
---@field POIActorCP ABP_HDCapturePointBase_C
---@field POISelectionIndicatorClass TSubclassOf<UWBP_SpawnMap_POISelectionIndicator_C>
---@field POISelectionIndicator UWBP_SpawnMap_POISelectionIndicator_C
---@field IndicatorSelectedBrush FSlateBrush
---@field IndicatorDeselectedBrush FSlateBrush
---@field FlagIconBrush FSlateBrush
---@field ObjIconBrush FSlateBrush
---@field FlagTexBlufor UTexture2D
---@field FlagTexOpfor UTexture2D
---@field FlagTexNeutral UTexture2D
---@field NeutralFlagTex TSoftObjectPtr<UTexture2D>
---@field OwningDeployMenu UWBP_DeployMenu_C
---@field BluforFactionInfo UBP_HDFactionInfoBase_C
---@field OpforFactionInfo UBP_HDFactionInfoBase_C
---@field IndicatorPadding FMargin
---@field OffensiveObjIconPos FVector2D
---@field DefensiveObjIconPos FVector2D
---@field PreviewObjectiveType EHDControlPointObjectiveType
---@field bPreviewRestricted boolean
---@field bPreviewSpawnable boolean
UWBP_HDPOI_AASCP_C = {}

---@param ObjType EHDControlPointObjectiveType
---@param ObjPos FVector2D
function UWBP_HDPOI_AASCP_C:GetObjPosByType(ObjType, ObjPos) end
---@param bSpawnable boolean
function UWBP_HDPOI_AASCP_C:UpdateSpawnPointSymbol(bSpawnable) end
---@param bRestricted boolean
function UWBP_HDPOI_AASCP_C:UpdateRestrictedSymbol(bRestricted) end
---@param NewObjBrush FSlateBrush
function UWBP_HDPOI_AASCP_C:UpdateObjIconBrush(NewObjBrush) end
---@param NewFlagBrush FSlateBrush
function UWBP_HDPOI_AASCP_C:UpdateFlagIconBrush(NewFlagBrush) end
---@param ObjType EHDControlPointObjectiveType
---@param ObjImg UObject
function UWBP_HDPOI_AASCP_C:GetObjImageByType(ObjType, ObjImg) end
---@param BrushToModify FSlateBrush
---@param NewBrushImg UObject
function UWBP_HDPOI_AASCP_C:SetBrushImageInPlace(BrushToModify, NewBrushImg) end
---@param Team EHDTeam
---@param TeamFlagImg UObject
function UWBP_HDPOI_AASCP_C:GetFlagImageByTeam(Team, TeamFlagImg) end
---@param ObjectiveType EHDControlPointObjectiveType
function UWBP_HDPOI_AASCP_C:UpdateObjectiveSymbol(ObjectiveType) end
---@param OwningTeam EHDTeam
function UWBP_HDPOI_AASCP_C:UpdateFlagSymbol(OwningTeam) end
---@param TextToUse FText
function UWBP_HDPOI_AASCP_C:UpdateToolTipText(TextToUse) end
---@return FSlateBrush
function UWBP_HDPOI_AASCP_C:GetIconBrush() end
---@param PlayerTeam EHDTeam
function UWBP_HDPOI_AASCP_C:GetOwningPlayerTeam(PlayerTeam) end
function UWBP_HDPOI_AASCP_C:UpdateWidgetVisuals() end
function UWBP_HDPOI_AASCP_C:HandlePlayerOrCPTeamUpdate() end
function UWBP_HDPOI_AASCP_C:InitControlPointListeners() end
function UWBP_HDPOI_AASCP_C:InitOwningPlayerListeners() end
---@return boolean
function UWBP_HDPOI_AASCP_C:ReceiveCanSelect() end
function UWBP_HDPOI_AASCP_C:SetOwningPlayerRefs() end
---@param Loaded UObject
function UWBP_HDPOI_AASCP_C:OnLoaded_5CAFEAE1478BEEFAA7C958AC31FEFBB2(Loaded) end
---@param Loaded UObject
function UWBP_HDPOI_AASCP_C:OnLoaded_DA523F1F44AD85D87E676986278348D2(Loaded) end
---@param Loaded UObject
function UWBP_HDPOI_AASCP_C:OnLoaded_9607A58E4C66E7AD82487995A3A1E7B7(Loaded) end
function UWBP_HDPOI_AASCP_C:Destruct() end
function UWBP_HDPOI_AASCP_C:ReceivePOIInitialized() end
---@param NewIconBrush FSlateBrush
function UWBP_HDPOI_AASCP_C:SetIconBrush(NewIconBrush) end
function UWBP_HDPOI_AASCP_C:ReceivePOISelected() end
function UWBP_HDPOI_AASCP_C:ReceivePOIDeselected() end
function UWBP_HDPOI_AASCP_C:Construct() end
---@param LastTeamNum uint8
---@param NewTeamNum uint8
function UWBP_HDPOI_AASCP_C:OnOwningPlayerTeamNumUpdated(LastTeamNum, NewTeamNum) end
function UWBP_HDPOI_AASCP_C:OnOwningPlayerRepPlayerState() end
---@param ControlPoint AHDBaseCapturePoint
---@param PrevTeam EHDTeam
---@param NewTeam EHDTeam
---@param bCaptured boolean
function UWBP_HDPOI_AASCP_C:OnControlPointTeamUpdated(ControlPoint, PrevTeam, NewTeam, bCaptured) end
---@param ControlPoint AHDBaseCapturePoint
function UWBP_HDPOI_AASCP_C:OnControlPointCaptureStatusUpdated(ControlPoint) end
function UWBP_HDPOI_AASCP_C:LoadFlagImgs() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_HDPOI_AASCP_C:Tick(MyGeometry, InDeltaTime) end
---@param IsDesignTime boolean
function UWBP_HDPOI_AASCP_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_HDPOI_AASCP_C:ExecuteUbergraph_WBP_HDPOI_AASCP(EntryPoint) end


