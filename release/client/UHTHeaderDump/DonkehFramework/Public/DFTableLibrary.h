#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DFTableLibrary.generated.h"

UCLASS(Blueprintable)
class DONKEHFRAMEWORK_API UDFTableLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDFTableLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRowInvFromIndex(int32 Index, int32 TableHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRowFromIndex(int32 Index, int32 TableWidth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetIndexFromRowColumnPair(int32 Row, int32 Column, int32 TableWidth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetIndexFromColumnRowPair(int32 Column, int32 Row, int32 TableHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetColumnInvFromIndex(int32 Index, int32 TableHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetColumnFromIndex(int32 Index, int32 TableWidth);
    
};

