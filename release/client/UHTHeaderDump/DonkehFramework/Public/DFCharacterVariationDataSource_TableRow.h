#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "DFCharacterVariationDataSource.h"
#include "DFCharacterVariationDataSource_TableRow.generated.h"

USTRUCT(BlueprintType)
struct DONKEHFRAMEWORK_API FDFCharacterVariationDataSource_TableRow : public FDFCharacterVariationDataSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bValidRowHandle;
    
public:
    FDFCharacterVariationDataSource_TableRow();
};

