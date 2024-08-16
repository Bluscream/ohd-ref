#ifndef UE4SS_SDK_BPFL_DebugUtils_HPP
#define UE4SS_SDK_BPFL_DebugUtils_HPP

class UBPFL_DebugUtils_C : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void PrintFloat(FString Name, float InFloat, FLinearColor TextColor, class UObject* __WorldContext);
    void PrintInt(FString Name, int32 InInteger, FLinearColor TextColor, class UObject* __WorldContext);
    void PrintBool(FString Name, bool bInBool, FLinearColor TextColor, class UObject* __WorldContext);
    void PrintStr(FString Name, FString Value, FLinearColor TextColor, class UObject* __WorldContext);
    void PrintProperty(FString PropName, FString Value, FLinearColor TextColor, class UObject* __WorldContext);
}; // Size: 0x28

#endif
