#ifndef UE4SS_SDK_WBP_OptionMenu_Options_HPP
#define UE4SS_SDK_WBP_OptionMenu_Options_HPP

class UWBP_OptionMenu_Options_C : public UHDOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UWBP_OptionsMenuItem_Arrow_C* AAOption;                                     // 0x0240 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* AimDownSights_IKS;                 // 0x0248 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* AimDownSightsToggle_IKS;           // 0x0250 (size: 0x8)
    class UWBP_OptionsMenuItem_Checkbox_C* AllowSoundInBgOption;                      // 0x0258 (size: 0x8)
    class UWBP_TextButton_C* ApplyBtn;                                                // 0x0260 (size: 0x8)
    class UWBP_TextButton_C* AudioBtn;                                                // 0x0268 (size: 0x8)
    class UWBP_OptionsMenuItem_Arrow_C* AudioQualityOption;                           // 0x0270 (size: 0x8)
    class UScrollBox* AudioSBox;                                                      // 0x0278 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* CameraToggle_IKS;                  // 0x0280 (size: 0x8)
    class UVerticalBox* CameraVideoVBox;                                              // 0x0288 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* ChatHistory_IKS;                   // 0x0290 (size: 0x8)
    class UVerticalBox* CommunicationKeyRemappingVBox;                                // 0x0298 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* Console_IKS;                       // 0x02A0 (size: 0x8)
    class UWBP_TextButton_C* ControlsBtn;                                             // 0x02A8 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* Crouch_IKS;                        // 0x02B0 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* CrouchToggle_IKS;                  // 0x02B8 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* CycleWeaponSights_IKS;             // 0x02C0 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* DeployMenu_IKS;                    // 0x02C8 (size: 0x8)
    class UWBP_TextButton_C* DiscardChangesBtn;                                       // 0x02D0 (size: 0x8)
    class UWBP_OptionsMenuItem_Slider_C* DisplayGammaOption;                          // 0x02D8 (size: 0x8)
    class UWBP_OptionsMenuItem_Arrow_C* DisplayModeOption;                            // 0x02E0 (size: 0x8)
    class UImage* DividerM;                                                           // 0x02E8 (size: 0x8)
    class UImage* DividerM_1;                                                         // 0x02F0 (size: 0x8)
    class UImage* DividerM_2;                                                         // 0x02F8 (size: 0x8)
    class UImage* DividerM_3;                                                         // 0x0300 (size: 0x8)
    class UImage* DividerM_4;                                                         // 0x0308 (size: 0x8)
    class UImage* DividerM_5;                                                         // 0x0310 (size: 0x8)
    class UImage* DividerM_6;                                                         // 0x0318 (size: 0x8)
    class UImage* DividerM_7;                                                         // 0x0320 (size: 0x8)
    class UImage* DividerM_8;                                                         // 0x0328 (size: 0x8)
    class UImage* DividerM_9;                                                         // 0x0330 (size: 0x8)
    class UImage* DividerM_10;                                                        // 0x0338 (size: 0x8)
    class UImage* DividerM_11;                                                        // 0x0340 (size: 0x8)
    class UImage* DividerM_12;                                                        // 0x0348 (size: 0x8)
    class UImage* DividerM_13;                                                        // 0x0350 (size: 0x8)
    class UImage* DividerM_14;                                                        // 0x0358 (size: 0x8)
    class UImage* DividerM_15;                                                        // 0x0360 (size: 0x8)
    class UImage* DividerM_16;                                                        // 0x0368 (size: 0x8)
    class UWBP_OptionsMenuItem_Slider_C* FieldOfViewOption;                           // 0x0370 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* Fire_IKS;                          // 0x0378 (size: 0x8)
    class UWBP_OptionsMenuItem_Arrow_C* FoliageOption;                                // 0x0380 (size: 0x8)
    class UWBP_OptionsMenuItem_Slider_C* FrameRateLimitOption;                        // 0x0388 (size: 0x8)
    class UVerticalBox* FrameRateVideoVBox;                                           // 0x0390 (size: 0x8)
    class UWBP_TextButton_C* GameplayBtn;                                             // 0x0398 (size: 0x8)
    class UScrollBox* GameplaySBox;                                                   // 0x03A0 (size: 0x8)
    class UVerticalBox* GeneralAudioVBox;                                             // 0x03A8 (size: 0x8)
    class UVerticalBox* GeneralGameplayVBox;                                          // 0x03B0 (size: 0x8)
    class UVerticalBox* GeneralVideoVBox;                                             // 0x03B8 (size: 0x8)
    class UWBP_OptionsMenuItem_Slider_C* GlobalMouseSensitivityOption;                // 0x03C0 (size: 0x8)
    class UImage* HeaderDivider;                                                      // 0x03C8 (size: 0x8)
    class UImage* HeaderDivider_1;                                                    // 0x03D0 (size: 0x8)
    class UImage* HeaderDivider_2;                                                    // 0x03D8 (size: 0x8)
    class UImage* HeaderDivider_3;                                                    // 0x03E0 (size: 0x8)
    class UImage* HeaderDivider_4;                                                    // 0x03E8 (size: 0x8)
    class UImage* HeaderDivider10;                                                    // 0x03F0 (size: 0x8)
    class UImage* HeaderDivider11;                                                    // 0x03F8 (size: 0x8)
    class UImage* HeaderDivider12;                                                    // 0x0400 (size: 0x8)
    class UImage* HeaderDivider13;                                                    // 0x0408 (size: 0x8)
    class UImage* HeaderDivider14;                                                    // 0x0410 (size: 0x8)
    class UImage* HeaderDivider15;                                                    // 0x0418 (size: 0x8)
    class UImage* HeaderDivider15_1;                                                  // 0x0420 (size: 0x8)
    class UImage* HeaderDivider2;                                                     // 0x0428 (size: 0x8)
    class UImage* HeaderDivider2_1;                                                   // 0x0430 (size: 0x8)
    class UImage* HeaderDivider2_2;                                                   // 0x0438 (size: 0x8)
    class UImage* HeaderDivider2_3;                                                   // 0x0440 (size: 0x8)
    class UImage* HeaderDivider2_4;                                                   // 0x0448 (size: 0x8)
    class UImage* HeaderDivider2_5;                                                   // 0x0450 (size: 0x8)
    class UImage* HeaderDivider2_6;                                                   // 0x0458 (size: 0x8)
    class UImage* HeaderDivider2_7;                                                   // 0x0460 (size: 0x8)
    class UImage* HeaderDivider2_8;                                                   // 0x0468 (size: 0x8)
    class UImage* HeaderDivider2_9;                                                   // 0x0470 (size: 0x8)
    class UImage* HeaderDivider2_10;                                                  // 0x0478 (size: 0x8)
    class UImage* HeaderDivider2_11;                                                  // 0x0480 (size: 0x8)
    class UImage* HeaderDivider2_12;                                                  // 0x0488 (size: 0x8)
    class UImage* HeaderDivider2_13;                                                  // 0x0490 (size: 0x8)
    class UImage* HeaderDivider2_14;                                                  // 0x0498 (size: 0x8)
    class UImage* HeaderDivider2_15;                                                  // 0x04A0 (size: 0x8)
    class UImage* HeaderDivider2_16;                                                  // 0x04A8 (size: 0x8)
    class UImage* HeaderDivider2_17;                                                  // 0x04B0 (size: 0x8)
    class UImage* HeaderDivider2_18;                                                  // 0x04B8 (size: 0x8)
    class UImage* HeaderDivider2_19;                                                  // 0x04C0 (size: 0x8)
    class UImage* HeaderDivider2_20;                                                  // 0x04C8 (size: 0x8)
    class UImage* HeaderDivider2_21;                                                  // 0x04D0 (size: 0x8)
    class UImage* HeaderDivider2_22;                                                  // 0x04D8 (size: 0x8)
    class UImage* HeaderDivider2_23;                                                  // 0x04E0 (size: 0x8)
    class UImage* HeaderDivider2_24;                                                  // 0x04E8 (size: 0x8)
    class UImage* HeaderDivider2_25;                                                  // 0x04F0 (size: 0x8)
    class UImage* HeaderDivider2_26;                                                  // 0x04F8 (size: 0x8)
    class UImage* HeaderDivider2_27;                                                  // 0x0500 (size: 0x8)
    class UImage* HeaderDivider2_28;                                                  // 0x0508 (size: 0x8)
    class UImage* HeaderDivider2_29;                                                  // 0x0510 (size: 0x8)
    class UImage* HeaderDivider2_30;                                                  // 0x0518 (size: 0x8)
    class UImage* HeaderDivider2_31;                                                  // 0x0520 (size: 0x8)
    class UImage* HeaderDivider2_32;                                                  // 0x0528 (size: 0x8)
    class UImage* HeaderDivider2_33;                                                  // 0x0530 (size: 0x8)
    class UImage* HeaderDivider2_34;                                                  // 0x0538 (size: 0x8)
    class UImage* HeaderDivider2_35;                                                  // 0x0540 (size: 0x8)
    class UImage* HeaderDivider3;                                                     // 0x0548 (size: 0x8)
    class UImage* HeaderDivider3_1;                                                   // 0x0550 (size: 0x8)
    class UImage* HeaderDivider3_2;                                                   // 0x0558 (size: 0x8)
    class UImage* HeaderDivider4;                                                     // 0x0560 (size: 0x8)
    class UImage* HeaderDivider5;                                                     // 0x0568 (size: 0x8)
    class UImage* HeaderDivider6;                                                     // 0x0570 (size: 0x8)
    class UImage* HeaderDivider6_1;                                                   // 0x0578 (size: 0x8)
    class UImage* HeaderDivider6_2;                                                   // 0x0580 (size: 0x8)
    class UImage* HeaderDivider6_3;                                                   // 0x0588 (size: 0x8)
    class UImage* HeaderDivider6_4;                                                   // 0x0590 (size: 0x8)
    class UImage* HeaderDivider7;                                                     // 0x0598 (size: 0x8)
    class UImage* HeaderDivider7_1;                                                   // 0x05A0 (size: 0x8)
    class UImage* HeaderDivider7_2;                                                   // 0x05A8 (size: 0x8)
    class UImage* HeaderDivider8;                                                     // 0x05B0 (size: 0x8)
    class UImage* HeaderDivider8_1;                                                   // 0x05B8 (size: 0x8)
    class UImage* HeaderDivider8_2;                                                   // 0x05C0 (size: 0x8)
    class UImage* HeaderDivider8_3;                                                   // 0x05C8 (size: 0x8)
    class UImage* HeaderDivider8_4;                                                   // 0x05D0 (size: 0x8)
    class UImage* HeaderDivider8_5;                                                   // 0x05D8 (size: 0x8)
    class UImage* HeaderDivider8_6;                                                   // 0x05E0 (size: 0x8)
    class UImage* HeaderDivider8_7;                                                   // 0x05E8 (size: 0x8)
    class UImage* HeaderDivider8_8;                                                   // 0x05F0 (size: 0x8)
    class UImage* HeaderDivider8_9;                                                   // 0x05F8 (size: 0x8)
    class UImage* HeaderDivider8_10;                                                  // 0x0600 (size: 0x8)
    class UImage* HeaderDivider81;                                                    // 0x0608 (size: 0x8)
    class UImage* HeaderDivider9;                                                     // 0x0610 (size: 0x8)
    class UWBP_OptionsMenuItem_Checkbox_C* HeadphoneModeOption;                       // 0x0618 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* Helper_IKS;                        // 0x0620 (size: 0x8)
    class UVerticalBox* HelperVBox;                                                   // 0x0628 (size: 0x8)
    class UWBP_OptionsMenuItem_Checkbox_C* InvertMouseOption;                         // 0x0630 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* Jump_IKS;                          // 0x0638 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* JumpVault_IKS;                     // 0x0640 (size: 0x8)
    class UScrollBox* KeyRemappingSBox;                                               // 0x0648 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* LeanLeft_IKS;                      // 0x0650 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* LeanLeftToggle_IKS;                // 0x0658 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* LeanRight_IKS;                     // 0x0660 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* LeanRightToggle_IKS;               // 0x0668 (size: 0x8)
    class UWBP_OptionsMenuItem_Slider_C* MasterVolOption;                             // 0x0670 (size: 0x8)
    class UVerticalBox* MiscellaneousKeyRemappingVBox;                                // 0x0678 (size: 0x8)
    class UWBP_OptionsMenuItem_Checkbox_C* MotionBlurOption;                          // 0x0680 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* MoveBackward_IKS;                  // 0x0688 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* MoveForward_IKS;                   // 0x0690 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* MoveLeft_IKS;                      // 0x0698 (size: 0x8)
    class UVerticalBox* MovementKeyRemappingVBox;                                     // 0x06A0 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* MoveRight_IKS;                     // 0x06A8 (size: 0x8)
    class UWBP_OptionsMenuItem_Slider_C* MusicVolOption;                              // 0x06B0 (size: 0x8)
    class UImage* NavBarBg;                                                           // 0x06B8 (size: 0x8)
    class UHorizontalBox* NavHBox;                                                    // 0x06C0 (size: 0x8)
    class UWidgetSwitcher* NavWS;                                                     // 0x06C8 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* NextWeapon_IKS;                    // 0x06D0 (size: 0x8)
    class UImage* OptionsMenuBg;                                                      // 0x06D8 (size: 0x8)
    class UWBP_OptionsMenuItem_Arrow_C* OverallQualityOption;                         // 0x06E0 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* PointAimToggle_IKS;                // 0x06E8 (size: 0x8)
    class UWBP_OptionsMenuItem_Arrow_C* PPOption;                                     // 0x06F0 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* PreviousWeapon_IKS;                // 0x06F8 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* Prone_IKS;                         // 0x0700 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* PushToTalkCommand_IKS;             // 0x0708 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* PushToTalkLocal_IKS;               // 0x0710 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* PushToTalkSquad_IKS;               // 0x0718 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* RadialMenu_IKS;                    // 0x0720 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* Reload_IKS;                        // 0x0728 (size: 0x8)
    class UWBP_OptionsMenuItem_Slider_C* ResolutionScaleOption;                       // 0x0730 (size: 0x8)
    class UWBP_TextButton_C* RestoreDefaultsBtn;                                      // 0x0738 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* SayAll_IKS;                        // 0x0740 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* SaySquad_IKS;                      // 0x0748 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* SayTeam_IKS;                       // 0x0750 (size: 0x8)
    class UVerticalBox* ScalabilityAudioVBox;                                         // 0x0758 (size: 0x8)
    class UVerticalBox* ScalabilityVideoVBox;                                         // 0x0760 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* Scoreboard_IKS;                    // 0x0768 (size: 0x8)
    class UWBP_OptionsMenuItem_Arrow_C* ScreenResolutionOption;                       // 0x0770 (size: 0x8)
    class UWBP_OptionsMenuItem_Slider_C* SFXVolOption;                                // 0x0778 (size: 0x8)
    class UWBP_OptionsMenuItem_Arrow_C* ShadingOption;                                // 0x0780 (size: 0x8)
    class UWBP_OptionsMenuItem_Arrow_C* ShadowOption;                                 // 0x0788 (size: 0x8)
    class UWBP_OptionsMenuItem_Checkbox_C* SmoothFrameRateOption;                     // 0x0790 (size: 0x8)
    class UWBP_OptionsMenuItem_Checkbox_C* SmoothMouseOption;                         // 0x0798 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* Sprint_IKS;                        // 0x07A0 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* SprintToggle_IKS;                  // 0x07A8 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* SwitchFireMode_IKS;                // 0x07B0 (size: 0x8)
    class UWBP_OptionsMenuItem_Checkbox_C* SwitchFireModeOnReselectOption;            // 0x07B8 (size: 0x8)
    class UWBP_OptionsMenuItem_Arrow_C* TextureOption;                                // 0x07C0 (size: 0x8)
    class UTextBlock* UnsavedChangesText;                                             // 0x07C8 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* Use_IKS;                           // 0x07D0 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* Vault_IKS;                         // 0x07D8 (size: 0x8)
    class UWBP_OptionsMenuItem_Checkbox_C* VerticalSyncOption;                        // 0x07E0 (size: 0x8)
    class UWBP_OptionsMenuItem_Arrow_C* VFXOption;                                    // 0x07E8 (size: 0x8)
    class UWBP_TextButton_C* VideoBtn;                                                // 0x07F0 (size: 0x8)
    class UScrollBox* VideoSBox;                                                      // 0x07F8 (size: 0x8)
    class UWBP_OptionsMenuItem_Arrow_C* ViewDistanceOption;                           // 0x0800 (size: 0x8)
    class UWBP_OptionsMenuItem_Slider_C* VOIPVolOption;                               // 0x0808 (size: 0x8)
    class UVerticalBox* VolumeAudioVBox;                                              // 0x0810 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* VoteNo_IKS;                        // 0x0818 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* VoteYes_IKS;                       // 0x0820 (size: 0x8)
    class UWBP_OptionsMenuItem_Slider_C* VOVolOption;                                 // 0x0828 (size: 0x8)
    class UVerticalBox* WeaponKeyRemappingVBox;                                       // 0x0830 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* WeaponSlot0_IKS;                   // 0x0838 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* WeaponSlot1_IKS;                   // 0x0840 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* WeaponSlot2_IKS;                   // 0x0848 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* WeaponSlot3_IKS;                   // 0x0850 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* WeaponSlot4_IKS;                   // 0x0858 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* WeaponSlot5_IKS;                   // 0x0860 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* WeaponSlot6_IKS;                   // 0x0868 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* WeaponSlot7_IKS;                   // 0x0870 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* WeaponSlot8_IKS;                   // 0x0878 (size: 0x8)
    class UWBP_OptionsMenuItem_InputKeySelector_C* WeaponSlot9_IKS;                   // 0x0880 (size: 0x8)
    int32 MenuIndex;                                                                  // 0x0888 (size: 0x4)
    char padding_0[0x4];                                                              // 0x088C (size: 0x4)
    class UTBGameUserSettings* GameUserSettings;                                      // 0x0890 (size: 0x8)
    bool bDirty;                                                                      // 0x0898 (size: 0x1)
    char padding_1[0x7];                                                              // 0x0899 (size: 0x7)
    TArray<FFSubMenuOption> SubMenuOptions;                                           // 0x08A0 (size: 0x10)
    bool bBalanceVolumeLevels;                                                        // 0x08B0 (size: 0x1)
    char padding_2[0x7];                                                              // 0x08B1 (size: 0x7)
    class UWBP_OptionsMenuItem_InputKeySelector_C* CurrentIKS;                        // 0x08B8 (size: 0x8)
    float CurrentScrollOffset;                                                        // 0x08C0 (size: 0x4)
    char padding_3[0x4];                                                              // 0x08C4 (size: 0x4)
    class UWBP_MouseInputCatcherOverlay_C* MouseInputCatcher;                         // 0x08C8 (size: 0x8)

    void GetDesiredVerticalAlignment(TEnumAsByte<EVerticalAlignment>& Alignment);
    void GetDesiredHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>& Alignment);
    void HasSubMenus(bool& bSubMenuOptions);
    void GetSubMenuOptions(TArray<FFSubMenuOption>& SubOptions);
    void StartSelectingKey(class UWBP_OptionsMenuItem_InputKeySelector_C* IKS);
    void CatchMouseWheelInput(float NewScrollOffset);
    void SetCurrentIKS(class UWBP_OptionsMenuItem_InputKeySelector_C* IKS);
    void RefreshControlsOptionUI();
    void Update Key Binding(class UWBP_OptionsMenuItem_InputKeySelector_C* IKS, FInputChord NewInputChord);
    void PopulateAllKeyBindings();
    void SetupControlsOptionUI();
    void GetMaxSecondaryVolumeLevel(float& MaxVolLvl);
    void GetBalancedSecondaryVolumeLevel(float VolumeLevelToBalance, bool bMatchMasterVolLvl, float& VolLevelBalanced);
    void BalanceSecondaryVolumeLevels(bool bMatchMasterVolLvl, bool bRefreshAudioUI);
    void BalanceMasterVolumeLevel(bool bRefreshAudioUI);
    void BalanceVolumeLevels(bool bRefreshAudioUI);
    void RefreshAudioOptionUI();
    void UpdateScreenResolutionState();
    void SetResolutionScaleBounds();
    void UpdateUnsavedStatus();
    void RegisterClickEventsForContainer(class UPanelWidget* Container);
    void SetupOptionSelectionEvents();
    void RefreshQualityOptions();
    void RefreshOverallQualityOption();
    void SetScreenResolutionSetting(FString ScreenResolution);
    void SetupVideoOptionUI();
    void PopulateScreenResolutionOption();
    void RefreshVideoOptionUI();
    void IsDirty(bool& bDirty);
    void RefreshGameplayOptionUI();
    void SetupGameplayOptionUI();
    void SetupAllOptionUI();
    void RefreshAllOptionUI();
    void OnNavOptionSelected(class UWBP_TextButton_C* NavBtn);
    void SetMenuIndex(int32 NewIndex);
    void Destruct();
    void BndEvt__GameplayBtn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void BndEvt__VideoBtn_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void BndEvt__AudioBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void BndEvt__ControlsBtn_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature();
    void OnOptionsUINeedsUpdate();
    void Construct();
    void BndEvt__DisplayModeOption_K2Node_ComponentBoundEvent_6_OnSelectionChangedByUser__DelegateSignature(FString SelectedItemValue);
    void BndEvt__ScreenResolutionOption_K2Node_ComponentBoundEvent_7_OnSelectionChangedByUser__DelegateSignature(FString SelectedItemValue);
    void BndEvt__RestoreDefaultsBtn_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature();
    void BndEvt__ApplyBtn_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__VerticalSyncOption_K2Node_ComponentBoundEvent_10_CheckStateChangedBool__DelegateSignature(bool bChecked);
    void BndEvt__OverallQualityOption_K2Node_ComponentBoundEvent_11_OnSelectionChangedByUser__DelegateSignature(FString SelectedItemValue);
    void BndEvt__ViewDistanceOption_K2Node_ComponentBoundEvent_12_OnSelectionChangedByUser__DelegateSignature(FString SelectedItemValue);
    void BndEvt__AAOption_K2Node_ComponentBoundEvent_13_OnSelectionChangedByUser__DelegateSignature(FString SelectedItemValue);
    void BndEvt__PPOption_K2Node_ComponentBoundEvent_14_OnSelectionChangedByUser__DelegateSignature(FString SelectedItemValue);
    void BndEvt__ShadowOption_K2Node_ComponentBoundEvent_15_OnSelectionChangedByUser__DelegateSignature(FString SelectedItemValue);
    void BndEvt__TextureOption_K2Node_ComponentBoundEvent_16_OnSelectionChangedByUser__DelegateSignature(FString SelectedItemValue);
    void BndEvt__EffectsOption_K2Node_ComponentBoundEvent_17_OnSelectionChangedByUser__DelegateSignature(FString SelectedItemValue);
    void BndEvt__FoliageOption_K2Node_ComponentBoundEvent_18_OnSelectionChangedByUser__DelegateSignature(FString SelectedItemValue);
    void OnArrowMenuSelectionChangedUser(FString SelectedItemValue);
    void OnCheckboxMenuCheckStateChanged(bool bChecked);
    void SetActiveSubMenuByIndex(int32 SubMenuIndex);
    void OnSliderMenuValueChanged(float Value);
    void OnToggleMenuToggleStateChanged(bool bToggledOn);
    void BndEvt__ResolutionScaleOption_K2Node_ComponentBoundEvent_4_ValueChanged__DelegateSignature(float Value);
    void BndEvt__SmoothFrameRateOption_K2Node_ComponentBoundEvent_20_CheckStateChangedBool__DelegateSignature(bool bChecked);
    void BndEvt__FrameRateLimitOption_K2Node_ComponentBoundEvent_19_ValueChanged__DelegateSignature(float Value);
    void BndEvt__DiscardChangesBtn_K2Node_ComponentBoundEvent_21_ButtonClicked__DelegateSignature();
    void BndEvt__GlobalMouseSensitivityOption_K2Node_ComponentBoundEvent_22_ValueChanged__DelegateSignature(float Value);
    void BndEvt__InvertMousePitchOption_K2Node_ComponentBoundEvent_23_CheckStateChangedBool__DelegateSignature(bool bChecked);
    void BndEvt__SmoothMouseOption_K2Node_ComponentBoundEvent_24_CheckStateChangedBool__DelegateSignature(bool bChecked);
    void BndEvt__DisplayGammaOption_K2Node_ComponentBoundEvent_25_ValueChanged__DelegateSignature(float Value);
    void BndEvt__FOVOption_K2Node_ComponentBoundEvent_26_ValueChanged__DelegateSignature(float Value);
    void BndEvt__AudioQualityOption_K2Node_ComponentBoundEvent_27_OnSelectionChangedByUser__DelegateSignature(FString SelectedItemValue);
    void BndEvt__HeadphoneModeOption_K2Node_ComponentBoundEvent_28_CheckStateChangedBool__DelegateSignature(bool bChecked);
    void BndEvt__MasterVolOption_K2Node_ComponentBoundEvent_5_ValueChanged__DelegateSignature(float Value);
    void BndEvt__SFXVolOption_K2Node_ComponentBoundEvent_29_ValueChanged__DelegateSignature(float Value);
    void BndEvt__MusicVolOption_K2Node_ComponentBoundEvent_30_ValueChanged__DelegateSignature(float Value);
    void BndEvt__VOVolOption_K2Node_ComponentBoundEvent_31_ValueChanged__DelegateSignature(float Value);
    void BndEvt__VOIPVolOption_K2Node_ComponentBoundEvent_32_ValueChanged__DelegateSignature(float Value);
    void BndEvt__ShadingOption_K2Node_ComponentBoundEvent_33_OnSelectionChangedByUser__DelegateSignature(FString SelectedItemValue);
    void BndEvt__AllowSoundInBgOption_K2Node_ComponentBoundEvent_34_CheckStateChangedBool__DelegateSignature(bool bChecked);
    void BndEvt__MotionBlurOption_K2Node_ComponentBoundEvent_35_CheckStateChangedBool__DelegateSignature(bool bChecked);
    void BndEvt__MoveForward_IKS_K2Node_ComponentBoundEvent_36_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__MoveBackward_IKS_K2Node_ComponentBoundEvent_37_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__MoveLeft_IKS_K2Node_ComponentBoundEvent_38_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__MoveRight_IKS_K2Node_ComponentBoundEvent_39_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__Sprint_IKS_K2Node_ComponentBoundEvent_40_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__Crouch_IKS_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__Jump_IKS_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__Fire_IKS_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__Reload_IKS_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__AimDownSights_IKS_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__NextWeapon_IKS_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__PreviousWeapon_IKS_K2Node_ComponentBoundEvent_47_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__WeaponSlot1_IKS_K2Node_ComponentBoundEvent_48_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__WeaponSlot2_IKS_K2Node_ComponentBoundEvent_49_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__WeaponSlot3_IKS_K2Node_ComponentBoundEvent_50_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__WeaponSlot4_IKS_K2Node_ComponentBoundEvent_51_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__WeaponSlot5_IKS_K2Node_ComponentBoundEvent_52_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__WeaponSlot6_IKS_K2Node_ComponentBoundEvent_53_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__WeaponSlot7_IKS_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__WeaponSlot8_IKS_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__PushToTalk_IKS_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__SayAll_IKS_K2Node_ComponentBoundEvent_57_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__SayTeam_IKS_K2Node_ComponentBoundEvent_58_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__Use_IKS_K2Node_ComponentBoundEvent_59_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__Scoreboard_IKS_K2Node_ComponentBoundEvent_60_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__DeployMenu_IKS_K2Node_ComponentBoundEvent_61_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__CameraToggle_IKS_K2Node_ComponentBoundEvent_62_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void OnIKSMenuKeySelected(FInputChord Key Selected);
    void BndEvt__MoveForward_IKS_K2Node_ComponentBoundEvent_63_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__MoveLeft_IKS_K2Node_ComponentBoundEvent_65_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__MoveRight_IKS_K2Node_ComponentBoundEvent_66_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__Sprint_IKS_K2Node_ComponentBoundEvent_67_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__Crouch_IKS_K2Node_ComponentBoundEvent_68_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__Jump_IKS_K2Node_ComponentBoundEvent_69_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__Fire_IKS_K2Node_ComponentBoundEvent_70_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__Reload_IKS_K2Node_ComponentBoundEvent_71_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__AimDownSights_IKS_K2Node_ComponentBoundEvent_72_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__NextWeapon_IKS_K2Node_ComponentBoundEvent_73_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__PreviousWeapon_IKS_K2Node_ComponentBoundEvent_74_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__WeaponSlot1_IKS_K2Node_ComponentBoundEvent_75_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__WeaponSlot2_IKS_K2Node_ComponentBoundEvent_76_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__WeaponSlot3_IKS_K2Node_ComponentBoundEvent_77_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__WeaponSlot4_IKS_K2Node_ComponentBoundEvent_78_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__WeaponSlot5_IKS_K2Node_ComponentBoundEvent_79_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__WeaponSlot6_IKS_K2Node_ComponentBoundEvent_80_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__WeaponSlot7_IKS_K2Node_ComponentBoundEvent_81_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__WeaponSlot8_IKS_K2Node_ComponentBoundEvent_82_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__PushToTalk_IKS_K2Node_ComponentBoundEvent_83_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__SayAll_IKS_K2Node_ComponentBoundEvent_84_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__SayTeam_IKS_K2Node_ComponentBoundEvent_85_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__Use_IKS_K2Node_ComponentBoundEvent_86_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__Scoreboard_IKS_K2Node_ComponentBoundEvent_87_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__DeployMenu_IKS_K2Node_ComponentBoundEvent_88_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__CameraToggle_IKS_K2Node_ComponentBoundEvent_89_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__KeyRemappingSBox_K2Node_ComponentBoundEvent_90_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
    void BndEvt__MoveBackward_IKS_K2Node_ComponentBoundEvent_64_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__WeaponSlot0_IKS_K2Node_ComponentBoundEvent_91_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__WeaponSlot0_IKS_K2Node_ComponentBoundEvent_92_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__WeaponSlot9_IKS_K2Node_ComponentBoundEvent_93_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__WeaponSlot9_IKS_K2Node_ComponentBoundEvent_94_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__LeanLeft_IKS_K2Node_ComponentBoundEvent_95_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__LeanRight_IKS_K2Node_ComponentBoundEvent_96_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__LeanLeft_IKS_K2Node_ComponentBoundEvent_97_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__LeanRight_IKS_K2Node_ComponentBoundEvent_98_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__Prone_IKS_K2Node_ComponentBoundEvent_99_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__Prone_IKS_K2Node_ComponentBoundEvent_100_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__PushToTalkSquad_IKS_K2Node_ComponentBoundEvent_101_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__PushToTalkSquad_IKS_K2Node_ComponentBoundEvent_102_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__PushToTalkCommand_IKS_K2Node_ComponentBoundEvent_103_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__PushToTalkCommand_IKS_K2Node_ComponentBoundEvent_104_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__SaySquad_IKS_K2Node_ComponentBoundEvent_105_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__SaySquad_IKS_K2Node_ComponentBoundEvent_106_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__RadialMenu_IKS_K2Node_ComponentBoundEvent_107_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__RadialMenu_IKS_K2Node_ComponentBoundEvent_108_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__JumpVault_IKS_K2Node_ComponentBoundEvent_109_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__JumpVault_IKS_K2Node_ComponentBoundEvent_110_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__Vault_IKS_K2Node_ComponentBoundEvent_111_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__Vault_IKS_K2Node_ComponentBoundEvent_112_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__CrouchToggle_IKS_K2Node_ComponentBoundEvent_113_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__CrouchToggle_IKS_K2Node_ComponentBoundEvent_114_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__LeanLeftToggle_IKS_K2Node_ComponentBoundEvent_115_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__LeanLeftToggle_IKS_K2Node_ComponentBoundEvent_116_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__LeanRightToggle_IKS_K2Node_ComponentBoundEvent_117_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__LeanRightToggle_IKS_K2Node_ComponentBoundEvent_118_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__AimDownSightsToggle_IKS_K2Node_ComponentBoundEvent_119_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__AimDownSightsToggle_IKS_K2Node_ComponentBoundEvent_120_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__SprintToggle_IKS_K2Node_ComponentBoundEvent_121_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__SprintToggle_IKS_K2Node_ComponentBoundEvent_122_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__SwitchFireMode_IKS_K2Node_ComponentBoundEvent_123_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__SwitchFireMode_IKS_K2Node_ComponentBoundEvent_124_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__PointAimToggle_IKS_K2Node_ComponentBoundEvent_125_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__PointAimToggle_IKS_K2Node_ComponentBoundEvent_126_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__CycleWeaponSights_IKS_K2Node_ComponentBoundEvent_127_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__CycleWeaponSights_IKS_K2Node_ComponentBoundEvent_128_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__SwitchFireModeOnReselectOption_K2Node_ComponentBoundEvent_129_CheckStateChangedBool__DelegateSignature(bool bChecked);
    void BndEvt__Console_IKS_K2Node_ComponentBoundEvent_130_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__Console_IKS_K2Node_ComponentBoundEvent_131_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__VoteYes_IKS_K2Node_ComponentBoundEvent_132_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__VoteYes_IKS_K2Node_ComponentBoundEvent_133_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__VoteNo_IKS_K2Node_ComponentBoundEvent_134_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__VoteNo_IKS_K2Node_ComponentBoundEvent_135_OnIsSelectingKeyChanged__DelegateSignature();
    void BndEvt__ChatHistory_IKS_K2Node_ComponentBoundEvent_136_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__ChatHistory_IKS_K2Node_ComponentBoundEvent_137_OnIsSelectingKeyChanged__DelegateSignature();
    void ExecuteUbergraph_WBP_OptionMenu_Options(int32 EntryPoint);
}; // Size: 0x8D0

#endif
