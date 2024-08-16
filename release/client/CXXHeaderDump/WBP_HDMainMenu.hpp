#ifndef UE4SS_SDK_WBP_HDMainMenu_HPP
#define UE4SS_SDK_WBP_HDMainMenu_HPP

class UWBP_HDMainMenu_C : public UWBP_MainMenu_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F0 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_HDMainMenu(int32 EntryPoint);
}; // Size: 0x3F8

#endif
