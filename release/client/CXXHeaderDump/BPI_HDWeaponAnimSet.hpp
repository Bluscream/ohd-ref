#ifndef UE4SS_SDK_BPI_HDWeaponAnimSet_HPP
#define UE4SS_SDK_BPI_HDWeaponAnimSet_HPP

class IBPI_HDWeaponAnimSet_C : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void ShouldUseMirroredLowerBodyLoco(bool& bOutUseMirrored);
    void GetLocoTPPAnimSet(TMap<class FName, class UAnimSequenceBase*>& OutAnimSet);
    void GetLocoAnimSet(TMap<class FName, class UAnimSequenceBase*>& OutAnimSet);
}; // Size: 0x28

#endif
