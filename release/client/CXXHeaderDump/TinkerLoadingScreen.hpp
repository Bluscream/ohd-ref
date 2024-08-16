#ifndef UE4SS_SDK_TinkerLoadingScreen_HPP
#define UE4SS_SDK_TinkerLoadingScreen_HPP

struct FLoadScreenLevelData
{
    FText MapFriendlyName;                                                            // 0x0000 (size: 0x18)
    FText GameModeFriendlyName;                                                       // 0x0018 (size: 0x18)
    TSoftObjectPtr<UTexture2D> MapLoadingImage;                                       // 0x0030 (size: 0x28)
    uint8 bMainMenuMap;                                                               // 0x0058 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0059 (size: 0x3)
    int32 StartingTicketsBlufor;                                                      // 0x005C (size: 0x4)
    int32 StartingTicketsOpfor;                                                       // 0x0060 (size: 0x4)

}; // Size: 0x68

struct FLoadingScreenDescription
{
    float MinimumLoadingScreenDisplayTime;                                            // 0x0000 (size: 0x4)
    bool bAutoCompleteWhenLoadingCompletes;                                           // 0x0004 (size: 0x1)
    bool bMoviesAreSkippable;                                                         // 0x0005 (size: 0x1)
    bool bWaitForManualStop;                                                          // 0x0006 (size: 0x1)
    char padding_0[0x1];                                                              // 0x0007 (size: 0x1)
    TArray<FString> MoviePaths;                                                       // 0x0008 (size: 0x10)
    TEnumAsByte<EMoviePlaybackType> PlaybackType;                                     // 0x0018 (size: 0x1)
    bool bShowOverlayWidget;                                                          // 0x0019 (size: 0x1)
    char padding_1[0x6];                                                              // 0x001A (size: 0x6)
    FSoftClassPath OverlayWidgetClass;                                                // 0x0020 (size: 0x18)

}; // Size: 0x38

class ILoadingScreenWidgetInterface : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void SetLoadingScreenDescription(const FLoadingScreenDescription& Description);
    void SetLevelLoadData(const FLoadScreenLevelData& LevelData);
}; // Size: 0x28

class ULoadingScreenSettings : public UDeveloperSettings
{
    uint8 bUseStartupScreen;                                                          // 0x0038 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0039 (size: 0x7)
    FLoadingScreenDescription StartupScreen;                                          // 0x0040 (size: 0x38)
    FLoadingScreenDescription DefaultScreen;                                          // 0x0078 (size: 0x38)

}; // Size: 0xB0

#endif
