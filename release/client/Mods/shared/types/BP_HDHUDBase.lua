---@meta

---@class ABP_HDHUDBase_C : AHDHUD
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
---@field bDrawCrosshair boolean
---@field bShowCompass boolean
---@field bShowPlayerStatus boolean
---@field bShowWeaponStatus boolean
---@field bShowCaptureStatus boolean
---@field bShowEquipmentSelect boolean
---@field bShowWatermark boolean
---@field bInitialized boolean
---@field CrosshairWidth float
---@field CrosshairHeight float
---@field HUDContainerUWClass TSubclassOf<UWBP_HUD_C>
---@field HUDContainerUWVisibilityOverride ESlateVisibility
---@field bHUDWidgetShown boolean
---@field LastOwningPawn APawn
---@field OwningHDPC ABP_HDPlayerControllerBase_C
---@field OwningHDPawn ABP_HDPlayerCharacterBase_C
---@field OwningPawnEquippedItem ADFBaseItem
---@field bDrawNametags boolean
---@field DrawNametagDistanceMin float
---@field DrawNametagDistanceMax float
---@field HUDContainerUW UWBP_HUD_C
---@field DrawDotsDistanceMin float
---@field DrawDotsDistanceMax float
---@field NametagFont UFont
---@field NametagTextVerticalOffset float
---@field NametagTextLengthMax int32
---@field bNametagUseTextScaling boolean
---@field NametagTextScaleMin float
---@field NametagTextScaleMax float
---@field bEnableNametagTextFade boolean
---@field NametagTextFadeRangeNear float
---@field NametagDotVerticalOffset float
---@field bNametagUseDotSymbolScaling boolean
---@field NametagDotScaleMin float
---@field NametagDotScaleMax float
---@field bEnableNametagDotFade boolean
---@field NametagDotFadeRangeNear float
---@field NametagDotFadeRangeFar float
---@field NametagTextColorSquad FLinearColor
---@field NametagDotSymbolSquad UTexture2D
---@field NametagDotSymbolSquadColor FLinearColor
---@field NametagDotSymbolSquadWidth float
---@field NametagDotSymbolSquadHeight float
---@field NametagTextColorOther FLinearColor
---@field NametagDotSymbolOther UTexture2D
---@field NametagDotSymbolOtherColor FLinearColor
---@field NametagDotSymbolOtherWidth float
---@field NametagDotSymbolOtherHeight float
---@field NametagTextColorDefault FLinearColor
---@field NametagDotSymbolDefault UTexture2D
---@field NametagDotSymbolDefaultColor FLinearColor
---@field NametagDotSymbolDefaultWidth float
---@field NametagDotSymbolDefaultHeight float
---@field bNametagUseLineTraces boolean
---@field NametagReferenceResolution FVector2D
---@field NametagLineTraceOffsetTop float
---@field bNametagUseAdditionalLineTraces boolean
---@field NametagAdditionalLineTraceOffsetSides float
---@field NametagTextFadeRangeFar float
---@field bEnableNametagTextFrame boolean
---@field NametagTextFrameHorizontalMargin float
---@field NametagTextFrameHorizontalFade float
---@field NametagTextFrameVerticalMargin float
---@field NametagTextFrameVerticalFade float
---@field bEnableNametagDotFrame boolean
---@field NametagDotFrameHorizontalMargin float
---@field NametagDotFrameHorizontalFade float
---@field NametagDotFrameVerticalMargin float
---@field NametagDotFrameVerticalFade float
---@field bVoteListenersInitialized boolean
---@field ActiveVoteInfo FDFActiveVoteInfo
---@field LastVoteStatus EDFVoteStatus
---@field LastYesVoteCount int32
---@field LastNoVoteCount int32
ABP_HDHUDBase_C = {}

---@param VoteInfo FDFActiveVoteInfo
---@param bValid boolean
function ABP_HDHUDBase_C:IsValidVoteInfo(VoteInfo, bValid) end
---@param Widget UUserWidget
function ABP_HDHUDBase_C:AddCustomNotification(Widget) end
---@param Info FFUINotificationInfo
function ABP_HDHUDBase_C:AddBasicNotification(Info) end
---@param Start FVector
---@param End FVector
---@param OtherPlayer ABP_HDPlayerCharacterBase_C
---@return boolean
function ABP_HDHUDBase_C:NametagsSingleLinetrace(Start, End, OtherPlayer) end
---@param InOtherPawn ABP_HDPlayerCharacterBase_C
---@param InVerticalOffset float
---@param InOwnerCameraLocation FVector
---@param bCanDrawNametag boolean
---@param NametagScreenPosition FVector2D
function ABP_HDHUDBase_C:CanDrawNametag(InOtherPawn, InVerticalOffset, InOwnerCameraLocation, bCanDrawNametag, NametagScreenPosition) end
---@param SizeX int32
---@param SizeY int32
function ABP_HDHUDBase_C:DrawNametags(SizeX, SizeY) end
---@param SizeX int32
---@param SizeY int32
function ABP_HDHUDBase_C:DrawCrosshair(SizeX, SizeY) end
---@param bVisible boolean
function ABP_HDHUDBase_C:IsTextChatHistoryVisible(bVisible) end
---@param bVisible boolean
function ABP_HDHUDBase_C:SetTextChatHistoryVisibility(bVisible) end
---@param bVisible boolean
function ABP_HDHUDBase_C:SetMedicHealingEffectVisibility(bVisible) end
---@param bVisible boolean
function ABP_HDHUDBase_C:SetAmmoResupplyEffectVisibility(bVisible) end
function ABP_HDHUDBase_C:ResetPlayerStatusEffectsUI() end
function ABP_HDHUDBase_C:ClearOwningPawnReferences() end
function ABP_HDHUDBase_C:ForceUpdateOwningPawnReferences() end
function ABP_HDHUDBase_C:ClearAllOwningPlayerReferences() end
function ABP_HDHUDBase_C:ForceUpdateAllOwningPlayerReferences() end
---@param PlayerChar ABP_HDPlayerCharacterBase_C
function ABP_HDHUDBase_C:CleanupDelegatesForHDPawn(PlayerChar) end
function ABP_HDHUDBase_C:InitOwningHDPawnDelegates() end
function ABP_HDHUDBase_C:CleanupOwningHDPCDelegates() end
function ABP_HDHUDBase_C:InitOwningHDPCDelegates() end
---@param bDestroyOnHide boolean
function ABP_HDHUDBase_C:UpdateHUDVisibility(bDestroyOnHide) end
---@param bDestroyWidgetOnHide boolean
function ABP_HDHUDBase_C:HideHUDWidget(bDestroyWidgetOnHide) end
function ABP_HDHUDBase_C:ShowHUDWidget() end
---@param CurrentLoadout UHDKit
---@param EquippedItem AHDBaseWeapon
function ABP_HDHUDBase_C:EquipmentSelectEquippedItem(CurrentLoadout, EquippedItem) end
---@param SlotNum int32
---@param bOutNewSelection boolean
function ABP_HDHUDBase_C:EquipmentSelectItemBySlotNum(SlotNum, bOutNewSelection) end
---@param OutSlotNum int32
---@param bFoundItem boolean
function ABP_HDHUDBase_C:EquipmentGetSelectedItemSlotNum(OutSlotNum, bFoundItem) end
---@param OutItemToEquip AHDBaseWeapon
---@param bFoundItem boolean
function ABP_HDHUDBase_C:EquipmentGetSelectedItem(OutItemToEquip, bFoundItem) end
---@param NewLoadout UHDKit
---@param PlayerInventory UDFInventoryComponent
---@param EquippedItem ADFBaseWeapon
function ABP_HDHUDBase_C:EquipmentAddItemsFromLoadout(NewLoadout, PlayerInventory, EquippedItem) end
---@param ItemIndex int32
function ABP_HDHUDBase_C:EquipmentSelectItem(ItemIndex) end
function ABP_HDHUDBase_C:EquipmentSelectPrevItem() end
function ABP_HDHUDBase_C:EquipmentSelectNextItem() end
---@param bShown boolean
function ABP_HDHUDBase_C:ToggleWeaponStatusUI(bShown) end
---@param bShown boolean
function ABP_HDHUDBase_C:ToggleEquipmentUI(bShown) end
---@param SizeX int32
---@param SizeY int32
function ABP_HDHUDBase_C:ReceiveDrawHUD(SizeX, SizeY) end
function ABP_HDHUDBase_C:ReceiveBeginPlay() end
---@param EndPlayReason EEndPlayReason::Type
function ABP_HDHUDBase_C:ReceiveEndPlay(EndPlayReason) end
---@param DeltaSeconds float
function ABP_HDHUDBase_C:ReceiveTick(DeltaSeconds) end
---@param NewOwningPawn APawn
---@param PrevOwningPawn APawn
function ABP_HDHUDBase_C:OwningPawnUpdated(NewOwningPawn, PrevOwningPawn) end
---@param Character ADFBaseCharacter
---@param NewEquippedItem ADFBaseItem
---@param PrevEquippedItem ADFBaseItem
function ABP_HDHUDBase_C:OwningPawnEquipmentItemChanged(Character, NewEquippedItem, PrevEquippedItem) end
---@param Pawn APawn
function ABP_HDHUDBase_C:OwningPlayerPossessPawn(Pawn) end
---@param Pawn APawn
function ABP_HDHUDBase_C:OwningPlayerUnpossessPawn(Pawn) end
---@param GameState AGameStateBase
function ABP_HDHUDBase_C:TeamsUpdated(GameState) end
---@param SourceVotingComponent UDFVotingComponent
function ABP_HDHUDBase_C:PlayerVoteStateUpdated(SourceVotingComponent) end
function ABP_HDHUDBase_C:VoteStarted() end
function ABP_HDHUDBase_C:VoteReset() end
function ABP_HDHUDBase_C:VoteEnded() end
function ABP_HDHUDBase_C:VoteCountUpdated() end
---@param GameState AGameStateBase
function ABP_HDHUDBase_C:PlayersUpdated(GameState) end
---@param EntryPoint int32
function ABP_HDHUDBase_C:ExecuteUbergraph_BP_HDHUDBase(EntryPoint) end


