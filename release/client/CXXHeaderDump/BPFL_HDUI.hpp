#ifndef UE4SS_SDK_BPFL_HDUI_HPP
#define UE4SS_SDK_BPFL_HDUI_HPP

class UBPFL_HDUI_C : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void ParseServerBadgesFromTable(class UDataTable* BadgeTable, class UObject* __WorldContext, TArray<FFServerBadgeUIDefinition>& SortedBadgeDefs);
    void GetIconBrushForStanceState(EHDUICharacterStanceState State, class UObject* __WorldContext, FSlateBrush& IconBrush);
    void GetIconTextureForStanceState(EHDUICharacterStanceState State, class UObject* __WorldContext, class UTexture2D*& IconTex);
    void GetNormHealthColorByRatio(float HealthValueNorm, class UObject* __WorldContext, FLinearColor& ColorToUse);
    void GetHealthColorByRatio(float Health, float MaxHealth, class UObject* __WorldContext, FLinearColor& ColorToUse);
}; // Size: 0x28

#endif
