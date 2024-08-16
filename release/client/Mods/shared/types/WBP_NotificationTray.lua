---@meta

---@class UWBP_NotificationTray_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Tray UVerticalBox
---@field TrayCycler UVerticalBox
---@field StickyArray TArray<UWidget>
---@field PriorityArray TArray<int32>
---@field WidgetArray TArray<UWidget>
---@field WidgetSlotArray TArray<UCanvasPanelSlot>
---@field PassedPosition float
---@field WidgetArrayTEMP TArray<UWidget>
---@field WidgetSlotArrayTEMP TArray<UCanvasPanelSlot>
---@field bFlipper boolean
---@field HighestPriority int32
---@field HighestIndex int32
---@field HighestWidget UWidget
---@field ['2ndHighestWidget'] UWidget
---@field Loops int32
UWBP_NotificationTray_C = {}

---@param Info FFUINotificationInfo
UWBP_NotificationTray_C['Add Notification'] = function(Info) end
---@param Widget_Object_Reference UWidget
UWBP_NotificationTray_C['Add Custom Notification'] = function(Widget_Object_Reference) end
UWBP_NotificationTray_C['Process Notification Order'] = function() end
UWBP_NotificationTray_C['Set Next Top'] = function() end
UWBP_NotificationTray_C['Positive Vote'] = function() end
UWBP_NotificationTray_C['Negative Vote'] = function() end
---@param EntryPoint int32
function UWBP_NotificationTray_C:ExecuteUbergraph_WBP_NotificationTray(EntryPoint) end


