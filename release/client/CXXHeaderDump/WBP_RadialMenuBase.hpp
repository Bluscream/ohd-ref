#ifndef UE4SS_SDK_WBP_RadialMenuBase_HPP
#define UE4SS_SDK_WBP_RadialMenuBase_HPP

class UWBP_RadialMenuBase_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UImage* RadialBackground;                                                   // 0x0238 (size: 0x8)
    class UImage* RadiusDebug;                                                        // 0x0240 (size: 0x8)
    class UOverlay* RootOverlay;                                                      // 0x0248 (size: 0x8)
    int32 Segments;                                                                   // 0x0250 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0254 (size: 0x4)
    class UMaterialInterface* MaterialBase;                                           // 0x0258 (size: 0x8)
    float IndexRaw;                                                                   // 0x0260 (size: 0x4)
    int32 Index;                                                                      // 0x0264 (size: 0x4)
    class UMaterialInstanceDynamic* dynaMat;                                          // 0x0268 (size: 0x8)
    TArray<class UUserWidget*> Children;                                              // 0x0270 (size: 0x10)
    bool AllowResizing;                                                               // 0x0280 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0281 (size: 0x3)
    float ItemOffsetRadius;                                                           // 0x0284 (size: 0x4)
    FWBP_RadialMenuBase_CSelectionChanged SelectionChanged;                           // 0x0288 (size: 0x10)
    void SelectionChanged(int32 NewSelection, int32 OldSelection);
    class APlayerController* InputController;                                         // 0x0298 (size: 0x8)
    TEnumAsByte<EJoystickTypes::Type> JoystickToUse;                                  // 0x02A0 (size: 0x1)
    char padding_2[0x3];                                                              // 0x02A1 (size: 0x3)
    float MouseDeadzone;                                                              // 0x02A4 (size: 0x4)
    bool bInDeadzone;                                                                 // 0x02A8 (size: 0x1)
    char padding_3[0x7];                                                              // 0x02A9 (size: 0x7)
    FWBP_RadialMenuBase_CEnteredDeadzone EnteredDeadzone;                             // 0x02B0 (size: 0x10)
    void EnteredDeadzone();
    FWBP_RadialMenuBase_CExitedDeadzone ExitedDeadzone;                               // 0x02C0 (size: 0x10)
    void ExitedDeadzone();
    FVector2D CurrentInput;                                                           // 0x02D0 (size: 0x8)
    float JoystickDeadzone;                                                           // 0x02D8 (size: 0x4)
    bool DefaultToMouseIfNoJoystick;                                                  // 0x02DC (size: 0x1)
    char padding_4[0x3];                                                              // 0x02DD (size: 0x3)
    int32 DefaultPlayerIndex;                                                         // 0x02E0 (size: 0x4)
    bool UseDeadzoneEvents;                                                           // 0x02E4 (size: 0x1)
    char padding_5[0x3];                                                              // 0x02E5 (size: 0x3)
    class USoundBase* SelectionChangedSound;                                          // 0x02E8 (size: 0x8)
    bool AutoCenterMouse;                                                             // 0x02F0 (size: 0x1)
    bool AutoRotateForUp;                                                             // 0x02F1 (size: 0x1)
    bool bUseCustomInput;                                                             // 0x02F2 (size: 0x1)
    char padding_6[0x1];                                                              // 0x02F3 (size: 0x1)
    FVector2D CustomInput;                                                            // 0x02F4 (size: 0x8)
    bool UseCustomTexture;                                                            // 0x02FC (size: 0x1)
    char padding_7[0x3];                                                              // 0x02FD (size: 0x3)
    class UTexture* RadialTexture;                                                    // 0x0300 (size: 0x8)
    bool UseCustomColors;                                                             // 0x0308 (size: 0x1)
    char padding_8[0x3];                                                              // 0x0309 (size: 0x3)
    FLinearColor InnterRingColor;                                                     // 0x030C (size: 0x10)
    FLinearColor OuterRingColor;                                                      // 0x031C (size: 0x10)
    FLinearColor RingMainColor;                                                       // 0x032C (size: 0x10)
    FLinearColor UnhighlightColor;                                                    // 0x033C (size: 0x10)

    void UpdateMaterialVisuals();
    void GetCustomInput(FVector2D& Input, bool& Valid);
    void SetCustomInput(FVector2D CustomInput);
    void UpdateDirectionWithCustomInput();
    void RemoveChildIndexFromRadialMenu(int32 IndexToRemove);
    void RemoveChildWidgetFromRadialMenu(const class UUserWidget*& ItemToFind);
    FText DebugIndex();
    FVector2D FixInputRotation(FVector2D Input);
    void FixMainRotation();
    void AutoRegisterToInput();
    void UpdateInput();
    void RegisterPlayerInput(class APlayerController* Controller, bool& Success);
    void UpdateDirectionWithJoystick();
    void GetCurrentIndex(int32& Index, bool& Valid);
    void GetChild(int32 Index, class UUserWidget*& Output, bool& Success);
    void SetIndex(int32 Index);
    void UpdateAllChildrenPositions();
    void UpdateChildPosition(int32 Index);
    void ClearChildren();
    void GetSelectedWidget(class UUserWidget*& Output);
    void AddChildToRadialMenu(class UUserWidget* Content, bool& Success);
    void UpdateDirectionWithMouseCursor();
    float GetSectionDegreeSize();
    void SetInputDirection(FVector2D Direction);
    void Construct();
    void UpdateSegments(int32 Segments);
    void InDeadzone(bool InDeadzone);
    void UpdateMaterials();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_RadialMenuBase(int32 EntryPoint);
    void ExitedDeadzone__DelegateSignature();
    void EnteredDeadzone__DelegateSignature();
    void SelectionChanged__DelegateSignature(int32 NewSelection, int32 OldSelection);
}; // Size: 0x34C

#endif
