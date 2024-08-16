#ifndef UE4SS_SDK_WBP_DlgBox_ServerUGCDownloadStatus_HPP
#define UE4SS_SDK_WBP_DlgBox_ServerUGCDownloadStatus_HPP

class UWBP_DlgBox_ServerUGCDownloadStatus_C : public UHDUGCLoadProgressScreen
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UProgressBar* StatusProgressBar;                                            // 0x0240 (size: 0x8)
    class UTextBlock* StatusText;                                                     // 0x0248 (size: 0x8)
    int32 UGCRemaining;                                                               // 0x0250 (size: 0x4)
    int32 UGCTotal;                                                                   // 0x0254 (size: 0x4)

    void Construct();
    void DummyInput();
    void SetupProgressScreen(int32 TotalUGCToLoad);
    void UpdateLoadProgress(int32 NumUGCRemainingToLoad);
    void StatusDisplayUpdate();
    void ExecuteUbergraph_WBP_DlgBox_ServerUGCDownloadStatus(int32 EntryPoint);
}; // Size: 0x258

#endif
