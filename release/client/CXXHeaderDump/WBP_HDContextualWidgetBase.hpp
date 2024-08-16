#ifndef UE4SS_SDK_WBP_HDContextualWidgetBase_HPP
#define UE4SS_SDK_WBP_HDContextualWidgetBase_HPP

class UWBP_HDContextualWidgetBase_C : public UDFContextualWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    ESlateVisibility VisibilitySatisfiedPrereqs;                                      // 0x0248 (size: 0x1)
    bool bIsEnabledSatisfiedPrereqs;                                                  // 0x0249 (size: 0x1)
    ESlateVisibility VisibilityUnsatisfiedPrereqs;                                    // 0x024A (size: 0x1)
    bool bIsEnabledUnsatisfiedPrereqs;                                                // 0x024B (size: 0x1)

    void PrerequisitesMet();
    void PrerequisiteNotMet(const class UDFContextualWidgetPrerequisiteBase* FailedPrereq);
    void ExecuteUbergraph_WBP_HDContextualWidgetBase(int32 EntryPoint);
}; // Size: 0x24C

#endif
