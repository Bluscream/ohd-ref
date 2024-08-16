#ifndef UE4SS_SDK_ImageWriteQueue_HPP
#define UE4SS_SDK_ImageWriteQueue_HPP

#include "ImageWriteQueue_enums.hpp"

struct FImageWriteOptions
{
    EDesiredImageFormat Format;                                                       // 0x0000 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0001 (size: 0x3)
    FImageWriteOptionsOnComplete OnComplete;                                          // 0x0004 (size: 0x10)
    void OnImageWriteComplete(bool bSuccess);
    int32 CompressionQuality;                                                         // 0x0014 (size: 0x4)
    bool bOverwriteFile;                                                              // 0x0018 (size: 0x1)
    bool bAsync;                                                                      // 0x0019 (size: 0x1)

}; // Size: 0x60

class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void ExportToDisk(class UTexture* Texture, FString Filename, const FImageWriteOptions& Options);
}; // Size: 0x28

#endif
