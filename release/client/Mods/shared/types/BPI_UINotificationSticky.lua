---@meta

---@class IBPI_UINotificationSticky_C : IInterface
IBPI_UINotificationSticky_C = {}

IBPI_UINotificationSticky_C['Negative Vote'] = function() end
IBPI_UINotificationSticky_C['Positive Vote'] = function() end
---@param Notification_Tray UWBP_NotificationTray_C
IBPI_UINotificationSticky_C['Set Tray'] = function(Notification_Tray) end
---@param bTop boolean
IBPI_UINotificationSticky_C['Set Top'] = function(bTop) end
---@param bIsSticky boolean
---@param StickyPriority int32
IBPI_UINotificationSticky_C['Get Is Sticky?'] = function(bIsSticky, StickyPriority) end


