#ifndef UE4SS_SDK_BPFL_HDWeapon_HPP
#define UE4SS_SDK_BPFL_HDWeapon_HPP

class UBPFL_HDWeapon_C : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void AimStyleToDisplayText(EHDWeaponAimStyle AimStyle, class UObject* __WorldContext, FText& StyleText);
    void FireModeToDisplayText(EFireMode FireMode, class UObject* __WorldContext, FText& ModeText);
    void FireModeToString(EFireMode FireMode, class UObject* __WorldContext, FString& ModeString);
}; // Size: 0x28

#endif
