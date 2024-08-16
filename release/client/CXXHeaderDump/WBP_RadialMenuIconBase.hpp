#ifndef UE4SS_SDK_WBP_RadialMenuIconBase_HPP
#define UE4SS_SDK_WBP_RadialMenuIconBase_HPP

class UWBP_RadialMenuIconBase_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWidgetAnimation* Shake;                                                    // 0x0238 (size: 0x8)
    class UWidgetAnimation* Grow;                                                     // 0x0240 (size: 0x8)
    class UImage* Icon;                                                               // 0x0248 (size: 0x8)
    class USizeBox* Sizer;                                                            // 0x0250 (size: 0x8)
    class UTexture2D* IconImage;                                                      // 0x0258 (size: 0x8)
    float IconSize;                                                                   // 0x0260 (size: 0x4)
    FSRadialMenuIconSettings Settings;                                                // 0x0264 (size: 0x28)
    FLinearColor CurrentColor;                                                        // 0x028C (size: 0x10)
    bool highlighted;                                                                 // 0x029C (size: 0x1)
    char padding_0[0x3];                                                              // 0x029D (size: 0x3)
    float Alpha;                                                                      // 0x02A0 (size: 0x4)

    FLinearColor Get_Icon_ColorAndOpacity_0();
    void PreConstruct(bool IsDesignTime);
    void OnHighlight();
    void OnUnhighlight();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_RadialMenuIconBase(int32 EntryPoint);
}; // Size: 0x2A4

#endif
