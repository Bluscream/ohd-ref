#ifndef UE4SS_SDK_NiagaraShader_HPP
#define UE4SS_SDK_NiagaraShader_HPP

#include "NiagaraShader_enums.hpp"

struct FNiagaraCompileEvent
{
    FNiagaraCompileEventSeverity Severity;                                            // 0x0000 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0001 (size: 0x7)
    FString Message;                                                                  // 0x0008 (size: 0x10)
    FGuid NodeGuid;                                                                   // 0x0018 (size: 0x10)
    FGuid PinGuid;                                                                    // 0x0028 (size: 0x10)
    TArray<FGuid> StackGuids;                                                         // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FNiagaraDataInterfaceGPUParamInfo
{
    FString DataInterfaceHLSLSymbol;                                                  // 0x0000 (size: 0x10)
    FString DIClassName;                                                              // 0x0010 (size: 0x10)
    TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;                // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FNiagaraDataInterfaceGeneratedFunction
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

#endif
