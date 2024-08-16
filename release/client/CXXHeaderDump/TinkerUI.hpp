#ifndef UE4SS_SDK_TinkerUI_HPP
#define UE4SS_SDK_TinkerUI_HPP

class UTBButton : public UButton
{
    FTBButtonOnDoubleClicked OnDoubleClicked;                                         // 0x0428 (size: 0x10)
    void OnButtonClickedEvent();
    char padding_0[0x10];                                                             // 0x0438 (size: 0x10)
    uint8 bStopDoubleClickPropagation;                                                // 0x0448 (size: 0x1)

    void StopDoubleClickPropagation();
    void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
    void SetIsFocusable(bool bInIsFocusable);
    bool IsInteractionEnabled();
    bool GetIsFocusable();
}; // Size: 0x460

class UTBListView : public UListView
{
    FTBListViewBP_OnPreviewItemCreated BP_OnPreviewItemCreated;                       // 0x0368 (size: 0x10)
    void SimpleListItemEventDynamic(class UObject* Item);

}; // Size: 0x378

class UTBSlider : public USlider
{
    FLinearColor SliderFgBarColor;                                                    // 0x04F8 (size: 0x10)

    void SetSliderFgBarColor(FLinearColor InValue);
    void SetMouseUsesStep(bool bInValue);
}; // Size: 0x508

class UTBSliderWidgetStyle : public USlateWidgetStyleContainerBase
{
    FSliderStyle SliderStyle;                                                         // 0x0030 (size: 0x340)

}; // Size: 0x370

#endif
