#pragma once
#include "CoreMinimal.h"
#include "HDKitPrerequisiteBase.h"
#include "HDKitPrerequisite_SquadSizeLimit.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HDMAIN_API UHDKitPrerequisite_SquadSizeLimit : public UHDKitPrerequisiteBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSquadCount;
    
public:
    UHDKitPrerequisite_SquadSizeLimit();

};

