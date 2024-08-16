#ifndef UE4SS_SDK_WBP_MenuBackground_Movie_HPP
#define UE4SS_SDK_WBP_MenuBackground_Movie_HPP

class UWBP_MenuBackground_Movie_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UImage* BgFilterImg;                                                        // 0x0238 (size: 0x8)
    class UImage* BgMovieImg;                                                         // 0x0240 (size: 0x8)
    class UMediaPlayer* MoviePlayer;                                                  // 0x0248 (size: 0x8)
    class UMediaPlaylist* MoviePlaylist;                                              // 0x0250 (size: 0x8)
    FSlateBrush FilterImgBrush;                                                       // 0x0258 (size: 0x88)
    FLinearColor FilterImgColor;                                                      // 0x02E0 (size: 0x10)

    void OnInitialized();
    void PreConstruct(bool IsDesignTime);
    void Destruct();
    void ExecuteUbergraph_WBP_MenuBackground_Movie(int32 EntryPoint);
}; // Size: 0x2F0

#endif
