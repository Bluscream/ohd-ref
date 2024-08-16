#ifndef UE4SS_SDK_ABPI_VehicleAnimLayer_HPP
#define UE4SS_SDK_ABPI_VehicleAnimLayer_HPP

class IABPI_VehicleAnimLayer_C : public IAnimLayerInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void VehicleFullBody(FPoseLink FullBody, FPoseLink& VehicleFullBody);
    void VehicleLowerBody(FPoseLink LowerBody, FPoseLink& VehicleLowerBody);
}; // Size: 0x28

#endif
