---@meta

---@class UWBP_CreditsListEntry_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field EntryBodyText UTextBlock
---@field EntryHeader UWBP_CreditsListHeader_C
---@field Header FFGameCreditsEntry
---@field HeaderPadding FMargin
---@field BodyEntries TArray<FFGameCreditsEntry>
UWBP_CreditsListEntry_C = {}

---@param BodyCombinedStr FString
function UWBP_CreditsListEntry_C:CombineBodyText(BodyCombinedStr) end
---@param IsDesignTime boolean
function UWBP_CreditsListEntry_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_CreditsListEntry_C:ExecuteUbergraph_WBP_CreditsListEntry(EntryPoint) end


