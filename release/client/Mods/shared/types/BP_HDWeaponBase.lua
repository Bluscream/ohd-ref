---@meta

---@class ABP_HDWeaponBase_C : AHDBaseWeapon
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Muzzle USceneComponent
---@field DefaultBipod USceneComponent
---@field DefaultGrip USceneComponent
---@field DefaultBarrel USceneComponent
---@field DefaultSight USceneComponent
---@field LocoAnimSet TMap<FName, UAnimSequenceBase>
---@field LocoTPPAnimSet TMap<FName, UAnimSequenceBase>
---@field bUseMirroredLowerBodyLocomotion boolean
---@field FirstPersonPositionOffset FVector
---@field bHasGrip boolean
---@field bHasBipod boolean
---@field BracedAimPosition FVector
---@field CurrentSight USceneComponent
---@field CurrentBarrel USceneComponent
---@field CurrentGrip USceneComponent
---@field CurrentBipod USceneComponent
---@field Sights TArray<USceneComponent>
---@field OnUpdateAttachments FBP_HDWeaponBase_COnUpdateAttachments
---@field ADSOffset float
---@field BipodPlayerDistance float
---@field BipodCameraHeight float
---@field FiringScreenShake TSubclassOf<UCameraShake>
---@field BracedAimTilt float
---@field ThirdPersonPositionOffset FVector
---@field ThirdPersonAimOffset FVector
---@field KickAmount float
---@field KickNoiseAmount float
---@field BasePoseBonesToHide TArray<FName>
---@field SecondMagBoneName FName
---@field BulletBoneName FName
---@field LowReadyRotationOffset FRotator
---@field LowReadyPositionOffset FVector
---@field OnUpdateSights FBP_HDWeaponBase_COnUpdateSights
---@field ThirdPersonMatArray TArray<UMaterialInstanceDynamic>
---@field AmmoPercent float
---@field FirstPersonMatArray TArray<UMaterialInstanceDynamic>
---@field ResetAmmoPercentTime float
ABP_HDWeaponBase_C = {}

---@param bOutUseMirrored boolean
function ABP_HDWeaponBase_C:ShouldUseMirroredLowerBodyLoco(bOutUseMirrored) end
---@param OutAnimSet TMap<FName, UAnimSequenceBase>
function ABP_HDWeaponBase_C:GetLocoTPPAnimSet(OutAnimSet) end
---@param OutAnimSet TMap<FName, UAnimSequenceBase>
function ABP_HDWeaponBase_C:GetLocoAnimSet(OutAnimSet) end
---@param CurrentClipAmmo int32
---@param MaxClipAmmo int32
function ABP_HDWeaponBase_C:SetAmmoPercent(CurrentClipAmmo, MaxClipAmmo) end
---@param FromAmmoClip ADFBaseAmmoClip
function ABP_HDWeaponBase_C:SetAmmoPercentFromClip(FromAmmoClip) end
function ABP_HDWeaponBase_C:InternalAmmoPercentUpdate() end
function ABP_HDWeaponBase_C:OnRep_AmmoPercent() end
---@param NextClip ADFBaseAmmoClip
function ABP_HDWeaponBase_C:FindNextMagazine(NextClip) end
---@return boolean
function ABP_HDWeaponBase_C:CanFire() end
---@param Attachment USceneComponent
---@param bFirstPerson boolean
function ABP_HDWeaponBase_C:InternalSetVisibilityForAttachment(Attachment, bFirstPerson) end
---@param bFirstPerson boolean
function ABP_HDWeaponBase_C:UpdateAttachmentVisibility(bFirstPerson) end
---@param bFPP boolean
---@return boolean
function ABP_HDWeaponBase_C:RemoveLegacyLocomotionAnims(bFPP) end
---@param bFPP boolean
---@return TMap<FName, UAnimSequenceBase>
function ABP_HDWeaponBase_C:GetLegacyLocomotionAnims(bFPP) end
function ABP_HDWeaponBase_C:UserConstructionScript() end
function ABP_HDWeaponBase_C:CycleSight() end
---@param Sight USceneComponent
function ABP_HDWeaponBase_C:SetCurrentSight(Sight) end
function ABP_HDWeaponBase_C:ReceiveFire() end
---@param bFirstPerson boolean
function ABP_HDWeaponBase_C:ReceiveVisibilityChanged(bFirstPerson) end
---@param LastItem ADFBaseItem
function ABP_HDWeaponBase_C:ReceiveOnEquip(LastItem) end
function ABP_HDWeaponBase_C:ResetBullets() end
function ABP_HDWeaponBase_C:ReceiveReloadFinished() end
function ABP_HDWeaponBase_C:ServerResetAmmoPercent() end
---@param NewFireMode EFireMode
---@param PrevFireMode EFireMode
---@param bFromPlayerInput boolean
function ABP_HDWeaponBase_C:ReceiveFireModeChanged(NewFireMode, PrevFireMode, bFromPlayerInput) end
---@param EntryPoint int32
function ABP_HDWeaponBase_C:ExecuteUbergraph_BP_HDWeaponBase(EntryPoint) end
function ABP_HDWeaponBase_C:OnUpdateSights__DelegateSignature() end
function ABP_HDWeaponBase_C:OnUpdateAttachments__DelegateSignature() end


