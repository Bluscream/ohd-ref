#ifndef UE4SS_SDK_InputCore_HPP
#define UE4SS_SDK_InputCore_HPP

#include "InputCore_enums.hpp"

struct FKey
{
    FName KeyName;                                                                    // 0x0000 (size: 0x8)

}; // Size: 0x18

class UInputCoreTypes : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

#endif
