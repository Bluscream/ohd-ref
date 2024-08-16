#ifndef UE4SS_SDK_BPI_RadialSlot_HPP
#define UE4SS_SDK_BPI_RadialSlot_HPP

class IBPI_RadialSlot_C : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void OnUnhighlight();
    void OnHighlight();
}; // Size: 0x28

#endif
