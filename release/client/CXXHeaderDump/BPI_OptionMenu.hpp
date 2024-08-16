#ifndef UE4SS_SDK_BPI_OptionMenu_HPP
#define UE4SS_SDK_BPI_OptionMenu_HPP

class IBPI_OptionMenu_C : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void GetDesiredVerticalAlignment(TEnumAsByte<EVerticalAlignment>& Alignment);
    void GetDesiredHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>& Alignment);
    void GetSubMenuOptions(TArray<FFSubMenuOption>& SubOptions);
    void SetActiveSubMenuByIndex(int32 SubMenuIndex);
    void HasSubMenus(bool& bSubMenuOptions);
}; // Size: 0x28

#endif
