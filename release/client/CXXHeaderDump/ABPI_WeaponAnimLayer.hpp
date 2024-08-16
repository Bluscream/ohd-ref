#ifndef UE4SS_SDK_ABPI_WeaponAnimLayer_HPP
#define UE4SS_SDK_ABPI_WeaponAnimLayer_HPP

class IABPI_WeaponAnimLayer_C : public IAnimLayerInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void WeaponJumpLoop(FPoseLink LowerJumpLoop, FPoseLink& WeaponJumpLoop);
    void WeaponIdle/Move(FPoseLink LowerIdle/Move, FPoseLink& WeaponIdle/Move);
    void WeaponAdditive(FPoseLink& WeaponAdditive);
    void WeaponUpperBody(FPoseLink UpperBody, FPoseLink& WeaponUpperBody);
}; // Size: 0x28

#endif
