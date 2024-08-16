#ifndef UE4SS_SDK_BPI_GameModifierSettings_HPP
#define UE4SS_SDK_BPI_GameModifierSettings_HPP

class IBPI_GameModifierSettings_C : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void GetTravelURLOptions(FString& Options);
    void IsEnabled(bool& bEnabled);
    void SetupModifier(class UWBP_OptionMenu_CreateGame_C* ParentMenu);
}; // Size: 0x28

#endif
