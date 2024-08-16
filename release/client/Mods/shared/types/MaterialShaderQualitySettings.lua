---@meta

---@class FMaterialQualityOverrides
---@field bDiscardQualityDuringCook boolean
---@field bEnableOverride boolean
---@field bForceFullyRough boolean
---@field bForceNonMetal boolean
---@field bForceDisableLMDirectionality boolean
---@field bForceLQReflections boolean
---@field bForceDisablePreintegratedGF boolean
---@field bDisableMaterialNormalCalculation boolean
---@field MobileCSMQuality EMobileCSMQuality
FMaterialQualityOverrides = {}



---@class UMaterialShaderQualitySettings : UObject
---@field ForwardSettingMap TMap<FName, UShaderPlatformQualitySettings>
UMaterialShaderQualitySettings = {}



---@class UShaderPlatformQualitySettings : UObject
---@field QualityOverrides FMaterialQualityOverrides
UShaderPlatformQualitySettings = {}



