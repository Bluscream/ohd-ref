#pragma once
#include "CoreMinimal.h"
#include "HDKitPrerequisiteBase.h"
#include "HDKitPrerequisite_SquadUsageLimit.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HDMAIN_API UHDKitPrerequisite_SquadUsageLimit : public UHDKitPrerequisiteBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSquadMembers;
    
public:
    UHDKitPrerequisite_SquadUsageLimit();

};

