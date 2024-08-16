---@meta

---@class UWBP_NotificationType1_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Remove UWidgetAnimation
---@field Boot UWidgetAnimation
---@field BlindImageLeft UImage
---@field BlindImageRight UImage
---@field BlindLeftHighlight UBorder
---@field BlindRightHighlight UBorder
---@field BlindVote UHorizontalBox
---@field DisableImage UImage
---@field Overall USizeBox
---@field ParityImageLeft UImage
---@field ParityImageRight UImage
---@field ParityLeftHighlight UBorder
---@field ParityRightHighlight UBorder
---@field ParityTallyLeft UTextBlock
---@field ParityTallyRight UTextBlock
---@field ParityVote UHorizontalBox
---@field Plain_Text UTextBlock
---@field RemainingTime URichTextBlock
---@field Rich_Text URichTextBlock
---@field ThresholdHighlight UBorder
---@field ThresholdImage UImage
---@field ThresholdTally UTextBlock
---@field ThresholdVote UCanvasPanel
---@field TimerBar UProgressBar
---@field ['Display Time'] float
---@field Text FText
---@field TimerStyle FText
---@field CreationTime float
---@field NotificationType EUINotificationType::Type
---@field bUseRichText boolean
---@field ['No Image'] UTexture2D
---@field ['Yes Image'] UTexture2D
---@field VotesInFavor int32
---@field VotesAgainst int32
---@field bIsTopOfEvents boolean
---@field ['Tray Ref (Automated)'] UWBP_NotificationTray_C
---@field SquashLerp float
---@field bDestroying boolean
---@field bSticky boolean
---@field StickyPriority int32
---@field Threshold int32
---@field bShrinking boolean
UWBP_NotificationType1_C = {}

---@param bIsSticky boolean
---@param StickyPriority int32
UWBP_NotificationType1_C['Get Is Sticky?'] = function(bIsSticky, StickyPriority) end
---@param Float float
function UWBP_NotificationType1_C:GetRemainingTime(Float) end
function UWBP_NotificationType1_C:Construct() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_NotificationType1_C:Tick(MyGeometry, InDeltaTime) end
---@param IsDesignTime boolean
function UWBP_NotificationType1_C:PreConstruct(IsDesignTime) end
UWBP_NotificationType1_C['Begin Destroy'] = function() end
UWBP_NotificationType1_C['Destroy For Real'] = function() end
---@param Add_Votes_In_Favor int32
---@param Add_Votes_Against int32
UWBP_NotificationType1_C['Change Vote Tally'] = function(Add_Votes_In_Favor, Add_Votes_Against) end
---@param bTop boolean
UWBP_NotificationType1_C['Set Top'] = function(bTop) end
UWBP_NotificationType1_C['Refreshed Position'] = function() end
---@param Notification_Tray UWBP_NotificationTray_C
UWBP_NotificationType1_C['Set Tray'] = function(Notification_Tray) end
UWBP_NotificationType1_C['Positive Vote'] = function() end
UWBP_NotificationType1_C['Negative Vote'] = function() end
---@param Threshold int32
UWBP_NotificationType1_C['Set Threshold'] = function(Threshold) end
function UWBP_NotificationType1_C:Shrink() end
UWBP_NotificationType1_C['Begin Shrink'] = function() end
---@param VotesInFavor int32
---@param VotesAgainst int32
UWBP_NotificationType1_C['Set Vote Tally'] = function(VotesInFavor, VotesAgainst) end
---@param EntryPoint int32
function UWBP_NotificationType1_C:ExecuteUbergraph_WBP_NotificationType1(EntryPoint) end


