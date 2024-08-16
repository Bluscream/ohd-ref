---@meta

---@class AFantasticPerspectiveActor : AActor
---@field Settings FFantasticPerspectiveSettings
---@field Cache boolean
AFantasticPerspectiveActor = {}

---@param PlayerController APlayerController
---@param StereoPass EFantasticPerspectiveStereoscopicPass
---@param ViewOrigin FVector
---@param ViewRotationMatrix FMatrix
---@param ProjectionMatrix FMatrix
---@param OutViewOrigin FVector
---@param OutViewRotationMatrix FMatrix
---@param OutProjectionMatrix FMatrix
---@return boolean
function AFantasticPerspectiveActor:Apply(PlayerController, StereoPass, ViewOrigin, ViewRotationMatrix, ProjectionMatrix, OutViewOrigin, OutViewRotationMatrix, OutProjectionMatrix) end


---@class FFantasticPerspectiveDebug
---@field DrawOriginalFrustum boolean
---@field OriginalFrustumColor FColor
---@field DrawAdjustedFrustum boolean
---@field AdjustedFrustumColor FColor
---@field LineThickness float
---@field FrustumDepth float
FFantasticPerspectiveDebug = {}



---@class FFantasticPerspectiveDollyZoom
---@field DollyZoom float
---@field FocalDistance float
FFantasticPerspectiveDollyZoom = {}



---@class FFantasticPerspectiveFrustum
---@field LensShift FVector2D
---@field LensTilt FVector2D
---@field PositionShift FVector2D
---@field Skew FVector2D
---@field PreAspectScale FVector2D
---@field PostAspectScale FVector2D
---@field ClippingPlaneSkew FVector2D
---@field DollyZoom FFantasticPerspectiveDollyZoom
---@field CompensateAspectRatio boolean
---@field CompensateFOV boolean
---@field SeamlessLensTilt boolean
FFantasticPerspectiveFrustum = {}



---@class FFantasticPerspectivePoints
---@field OverrideViewTransform boolean
---@field ViewOrigin FVector
---@field NearClipPlane float
---@field OrthoFrustumDepth float
---@field LeftBottom FVector
---@field LeftTop FVector
---@field RightTop FVector
---@field RightBottom FVector
FFantasticPerspectivePoints = {}



---@class FFantasticPerspectiveSettings
---@field Type EFantasticPerspectiveType
---@field Frustum FFantasticPerspectiveFrustum
---@field Points FFantasticPerspectivePoints
---@field Transform FFantasticPerspectiveTransform
---@field Debug FFantasticPerspectiveDebug
FFantasticPerspectiveSettings = {}



---@class FFantasticPerspectiveTransform
---@field ViewOriginWorldOffset FVector
---@field WorldTranslation FVector
---@field WorldRotation FRotator
---@field LocalTranslation FVector
---@field LocalRotation FRotator
FFantasticPerspectiveTransform = {}



---@class UFantasticPerspectiveComponent : UActorComponent
---@field Settings FFantasticPerspectiveSettings
---@field Cache boolean
UFantasticPerspectiveComponent = {}

---@param PlayerController APlayerController
---@param StereoPass EFantasticPerspectiveStereoscopicPass
---@param ViewOrigin FVector
---@param ViewRotationMatrix FMatrix
---@param ProjectionMatrix FMatrix
---@param OutViewOrigin FVector
---@param OutViewRotationMatrix FMatrix
---@param OutProjectionMatrix FMatrix
---@return boolean
function UFantasticPerspectiveComponent:Apply(PlayerController, StereoPass, ViewOrigin, ViewRotationMatrix, ProjectionMatrix, OutViewOrigin, OutViewRotationMatrix, OutProjectionMatrix) end


---@class UFantasticPerspectiveFunctions : UBlueprintFunctionLibrary
UFantasticPerspectiveFunctions = {}

---@return FRotator
function UFantasticPerspectiveFunctions:WorldToScreenConversionRotator() end
---@return FMatrix
function UFantasticPerspectiveFunctions:WorldToScreenConversionMatrix() end
---@param Target FFantasticPerspectiveSettings
---@param Transform FFantasticPerspectiveTransform
function UFantasticPerspectiveFunctions:SetTransformSettings(Target, Transform) end
---@param Target FFantasticPerspectiveSettings
---@param Frustum FFantasticPerspectiveFrustum
function UFantasticPerspectiveFunctions:SetFrustumSettings(Target, Frustum) end
---@param Target FFantasticPerspectiveSettings
---@param Debug FFantasticPerspectiveDebug
function UFantasticPerspectiveFunctions:SetDebugSettings(Target, Debug) end
---@return FRotator
function UFantasticPerspectiveFunctions:ScreenToWorldConversionRotator() end
---@return FMatrix
function UFantasticPerspectiveFunctions:ScreenToWorldConversionMatrix() end
---@param Target FFantasticPerspectiveSettings
function UFantasticPerspectiveFunctions:ResetSettings(Target) end
function UFantasticPerspectiveFunctions:ResetCache() end
---@param Target FFantasticPerspectiveSettings
---@return FFantasticPerspectiveTransform
function UFantasticPerspectiveFunctions:GetTransformSettings(Target) end
---@param Target FFantasticPerspectiveSettings
---@return FFantasticPerspectiveFrustum
function UFantasticPerspectiveFunctions:GetFrustumSettings(Target) end
---@param Target FFantasticPerspectiveSettings
---@return FFantasticPerspectiveDebug
function UFantasticPerspectiveFunctions:GetDebugSettings(Target) end
---@param WorldContextObject UObject
---@param ViewOrigin FVector
---@param ViewRotationMatrix FMatrix
---@param ProjectionMatrix FMatrix
---@param Color FLinearColor
---@param PerspectiveFrustumDepth float
---@param bPersistentLines boolean
---@param LifeTime float
---@param DepthPriority uint8
---@param Thickness float
function UFantasticPerspectiveFunctions:DrawDebugPositionedFrustum(WorldContextObject, ViewOrigin, ViewRotationMatrix, ProjectionMatrix, Color, PerspectiveFrustumDepth, bPersistentLines, LifeTime, DepthPriority, Thickness) end
---@param Transform FFantasticPerspectiveTransform
---@param ViewOrigin FVector
---@param ViewRotationMatrix FMatrix
---@param OutViewOrigin FVector
---@param OutViewRotationMatrix FMatrix
function UFantasticPerspectiveFunctions:ApplyTransformEffects(Transform, ViewOrigin, ViewRotationMatrix, OutViewOrigin, OutViewRotationMatrix) end
---@param SceneCapture USceneCaptureComponent2D
---@param ViewOrigin FVector
---@param ViewRotationMatrix FMatrix
---@param ProjectionMatrix FMatrix
function UFantasticPerspectiveFunctions:ApplyToSceneCapture2D(SceneCapture, ViewOrigin, ViewRotationMatrix, ProjectionMatrix) end
---@param WorldContextObject UObject
---@param Settings FFantasticPerspectiveSettings
---@param ViewOrigin FVector
---@param ViewRotationMatrix FMatrix
---@param ProjectionMatrix FMatrix
---@param OutViewOrigin FVector
---@param OutViewRotationMatrix FMatrix
---@param OutProjectionMatrix FMatrix
function UFantasticPerspectiveFunctions:ApplySettingsAndDrawDebug(WorldContextObject, Settings, ViewOrigin, ViewRotationMatrix, ProjectionMatrix, OutViewOrigin, OutViewRotationMatrix, OutProjectionMatrix) end
---@param Settings FFantasticPerspectiveSettings
---@param ViewOrigin FVector
---@param ViewRotationMatrix FMatrix
---@param ProjectionMatrix FMatrix
---@param OutViewOrigin FVector
---@param OutViewRotationMatrix FMatrix
---@param OutProjectionMatrix FMatrix
function UFantasticPerspectiveFunctions:ApplySettings(Settings, ViewOrigin, ViewRotationMatrix, ProjectionMatrix, OutViewOrigin, OutViewRotationMatrix, OutProjectionMatrix) end
---@param Settings FFantasticPerspectivePoints
---@param ViewOrigin FVector
---@param ViewRotationMatrix FMatrix
---@param OutViewOrigin FVector
---@param OutViewRotationMatrix FMatrix
---@param OutProjectionMatrix FMatrix
function UFantasticPerspectiveFunctions:ApplyPointsBasing(Settings, ViewOrigin, ViewRotationMatrix, OutViewOrigin, OutViewRotationMatrix, OutProjectionMatrix) end
---@param Frustum FFantasticPerspectiveFrustum
---@param ViewOrigin FVector
---@param ViewRotationMatrix FMatrix
---@param ProjectionMatrix FMatrix
---@param OutViewOrigin FVector
---@param OutViewRotationMatrix FMatrix
---@param OutProjectionMatrix FMatrix
function UFantasticPerspectiveFunctions:ApplyFrustumEffects(Frustum, ViewOrigin, ViewRotationMatrix, ProjectionMatrix, OutViewOrigin, OutViewRotationMatrix, OutProjectionMatrix) end


---@class UFantasticPerspectiveLocalPlayer : ULocalPlayer
UFantasticPerspectiveLocalPlayer = {}


