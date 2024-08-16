---@meta

---@class UWBP_DeployMenu_C : UDeployMenu
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BgImg UImage
---@field ClassSelectionPanel UWBP_DeployMenu_ClassSelectionPanel_C
---@field DeployBtn UWBP_DeployMenu_DeployButton_C
---@field MapNameText UTextBlock
---@field MatchTimeText UTextBlock
---@field SpawnMapView UWBP_DeployMenu_SpawnMapView_C
---@field SquadSelectionPanel UWBP_DeployMenu_SquadSelectionPanel_C
---@field SuicideBtn UButton
---@field Team0CheckmarkImage UImage
---@field Team0CheckmarkImage_Vert UImage
---@field Team0SelectionOverlay UImage
---@field Team0SelectionOverlay_Vert UImage
---@field Team0TicketNumText UTextBlock
---@field Team0TicketNumText_Vert UTextBlock
---@field Team1CheckmarkImage UImage
---@field Team1CheckmarkImage_Vert UImage
---@field Team1SelectionOverlay UImage
---@field Team1SelectionOverlay_Vert UImage
---@field Team1TicketNumText UTextBlock
---@field Team1TicketNumText_Vert UTextBlock
---@field TeamSwitch0Btn UButton
---@field TeamSwitch0Btn_Vert UButton
---@field TeamSwitch0BtnText UTextBlock
---@field TeamSwitch0BtnText_Vert UTextBlock
---@field TeamSwitch1Btn UButton
---@field TeamSwitch1Btn_Vert UButton
---@field TeamSwitch1BtnText UTextBlock
---@field TeamSwitch1BtnText_Vert UTextBlock
---@field TeamSwitchHBox UHorizontalBox
---@field TeamSwitchVBox UVerticalBox
---@field bBlockAllOtherInput boolean
---@field bMenuInitialized boolean
---@field OnPreloadFinished FWBP_DeployMenu_COnPreloadFinished
---@field bDonePreloading boolean
---@field bSpawnPointSelected boolean
---@field bDeploying boolean
---@field bClearPOISelectionOnDeploy boolean
---@field Team0Selected FButtonStyle
---@field Team0Deselected FButtonStyle
---@field Team1Selected FButtonStyle
---@field Team1Deselected FButtonStyle
---@field Team0SelectedOverlayBrush FSlateBrush
---@field Team1SelectedOverlayBrush FSlateBrush
---@field Team0DeselectedOverlayBrush FSlateBrush
---@field Team1DeselectedOverlayBrush FSlateBrush
---@field bUseVerticalTeamLayout boolean
---@field Team1SelectionOverlayToUse UImage
---@field Team1CheckmarkImageToUse UImage
---@field Team1TicketNumTextToUse UTextBlock
---@field bMenuPreInitialized boolean
---@field Team0SelectionOverlayToUse UImage
---@field Team0CheckmarkImageToUse UImage
---@field Team0TicketNumTextToUse UTextBlock
---@field Team0SwitchBtnTextToUse UTextBlock
---@field Team1SwitchBtnTextToUse UTextBlock
---@field Team1SwitchBtnToUse UButton
---@field Team0SwitchBtnToUse UButton
---@field BluforTeamState AHDTeamState
---@field OpforTeamState AHDTeamState
---@field BluforFactionInfo UBP_HDFactionInfoBase_C
---@field OpforFactionInfo UBP_HDFactionInfoBase_C
UWBP_DeployMenu_C = {}

---@param Context FPaintContext
function UWBP_DeployMenu_C:OnPaint(Context) end
function UWBP_DeployMenu_C:UpdateMatchTime() end
---@param bUseVerticalLayout boolean
---@param bUpdateTeam0 boolean
function UWBP_DeployMenu_C:UpdateTeamLayoutElements(bUseVerticalLayout, bUpdateTeam0) end
---@param bUseVerticalLayout boolean
function UWBP_DeployMenu_C:SetTeamSwitchLayout(bUseVerticalLayout) end
function UWBP_DeployMenu_C:InitTeamLayout() end
function UWBP_DeployMenu_C:InitSquadSelectionUI() end
function UWBP_DeployMenu_C:UpdateTicketCounts() end
---@param TeamToUpdate EHDTeam
function UWBP_DeployMenu_C:UpdateTeamSwitchUISettings(TeamToUpdate) end
---@param TeamToUpdate EHDTeam
function UWBP_DeployMenu_C:UpdateTeamSwitchVisuals(TeamToUpdate) end
function UWBP_DeployMenu_C:InitClassSelectionUI() end
function UWBP_DeployMenu_C:DeselectCurrentPOI() end
function UWBP_DeployMenu_C:DeployAtSelectedSpawnPoint() end
function UWBP_DeployMenu_C:UpdateDeployBtnState() end
---@param bForce boolean
function UWBP_DeployMenu_C:CloseDeployMenu(bForce) end
function UWBP_DeployMenu_C:PreloadContent() end
function UWBP_DeployMenu_C:UpdateSuicideBtnState() end
function UWBP_DeployMenu_C:CleanupOwningPlayerDelegates() end
function UWBP_DeployMenu_C:InitOwningPlayerDelegates() end
function UWBP_DeployMenu_C:InitTeamUI() end
function UWBP_DeployMenu_C:InitMapUI() end
function UWBP_DeployMenu_C:RequestSuicide() end
---@param NewTeam EHDTeam
function UWBP_DeployMenu_C:UpdateTeamSwitchBtnState(NewTeam) end
---@param NewTeam EHDTeam
function UWBP_DeployMenu_C:TeamSwitch(NewTeam) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_DeployMenu_C:OnMouseWheel(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_DeployMenu_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
function UWBP_DeployMenu_C:Construct() end
function UWBP_DeployMenu_C:OnDeployMenuInputToggle() end
function UWBP_DeployMenu_C:BndEvt__SuicideBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
function UWBP_DeployMenu_C:Destruct() end
---@param VictimPawn APawn
---@param VictimController AController
---@param KillingDamage float
---@param DamageEvent FDamageEvent
---@param InstigatingPawn APawn
---@param DamageCauser AActor
function UWBP_DeployMenu_C:OnOwningCharDeath(VictimPawn, VictimController, KillingDamage, DamageEvent, InstigatingPawn, DamageCauser) end
---@param UnpossessedPawn APawn
function UWBP_DeployMenu_C:OnUnpossessedPawn(UnpossessedPawn) end
---@param PossessedPawn APawn
function UWBP_DeployMenu_C:OnPossessedPawn(PossessedPawn) end
---@param PrevTeam uint8
---@param NewTeam uint8
function UWBP_DeployMenu_C:OnPlayerTeamUpdated(PrevTeam, NewTeam) end
function UWBP_DeployMenu_C:BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_4_OnPreloadFinished__DelegateSignature() end
---@param POISpawnPointActor AActor
function UWBP_DeployMenu_C:BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_5_OnSpawnPointSelected__DelegateSignature(POISpawnPointActor) end
function UWBP_DeployMenu_C:BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_6_OnSpawnPointDeselected__DelegateSignature() end
---@param bCloseBtn boolean
function UWBP_DeployMenu_C:BndEvt__DeployBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(bCloseBtn) end
function UWBP_DeployMenu_C:OnPlayerSpawnTimerElapsed() end
function UWBP_DeployMenu_C:OnRepPlayerStatePC() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_DeployMenu_C:Tick(MyGeometry, InDeltaTime) end
---@param IsDesignTime boolean
function UWBP_DeployMenu_C:PreConstruct(IsDesignTime) end
UWBP_DeployMenu_C['On Team 1 Switch Btn Clicked'] = function() end
UWBP_DeployMenu_C['On Team 0 Switch Btn Clicked'] = function() end
function UWBP_DeployMenu_C:UpdateTeamStateRefs() end
---@param TeamState ADFTeamState
function UWBP_DeployMenu_C:OnBluforPostInitTeam(TeamState) end
---@param TeamState ADFTeamState
function UWBP_DeployMenu_C:OnOpforPostInitTeam(TeamState) end
---@param LastTeamState ADFTeamState
---@param NewTeamState ADFTeamState
---@param bNewTeamStateInit boolean
function UWBP_DeployMenu_C:OnPlayerTeamStateUpdated(LastTeamState, NewTeamState, bNewTeamStateInit) end
---@param EntryPoint int32
function UWBP_DeployMenu_C:ExecuteUbergraph_WBP_DeployMenu(EntryPoint) end
function UWBP_DeployMenu_C:OnPreloadFinished__DelegateSignature() end


