#ifndef UE4SS_SDK_BPI_RadialInput_HPP
#define UE4SS_SDK_BPI_RadialInput_HPP

class IBPI_RadialInput_C : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void GetJoystickDirection(TEnumAsByte<EJoystickTypes::Type> Stick, FVector2D& StickInput);
}; // Size: 0x28

#endif
