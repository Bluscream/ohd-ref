#ifndef UE4SS_SDK_WBP_HUDElement_Compass_HPP
#define UE4SS_SDK_WBP_HUDElement_Compass_HPP

class UWBP_HUDElement_Compass_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UOverlay* CompassClips;                                                     // 0x0238 (size: 0x8)
    class URetainerBox* FadeEffectMask;                                               // 0x0240 (size: 0x8)
    class UInvalidationBox* MarkerContainer;                                          // 0x0248 (size: 0x8)
    FVector2D CompassClippedRegion;                                                   // 0x0250 (size: 0x8)
    FVector2D CompassSizeAbsolute;                                                    // 0x0258 (size: 0x8)
    float CompassPosFactor;                                                           // 0x0260 (size: 0x4)
    float CompassHalfWidth;                                                           // 0x0264 (size: 0x4)
    float CompassHalfHeightNeg;                                                       // 0x0268 (size: 0x4)

    void SetWidgetCanvasSlotSize(class UWidget* Widget, FVector2D NewLayoutSize);
    void UpdateDirection();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_HUDElement_Compass(int32 EntryPoint);
}; // Size: 0x26C

#endif
