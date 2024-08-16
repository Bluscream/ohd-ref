#ifndef UE4SS_SDK_AAS-SpawnMapTesting_HPP
#define UE4SS_SDK_AAS-SpawnMapTesting_HPP

class AAAS-SpawnMapTesting_C : public ATBLevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class AActor* BoundaryMarkerB_ExecuteUbergraph_AAS-SpawnMapTesting_RefProperty;   // 0x0230 (size: 0x8)
    class AActor* BoundaryMarkerA_ExecuteUbergraph_AAS-SpawnMapTesting_RefProperty;   // 0x0238 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AAS-SpawnMapTesting(int32 EntryPoint);
}; // Size: 0x240

#endif
