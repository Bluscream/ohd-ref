#pragma once
#include "CoreMinimal.h"
#include "EHDTeam.h"
#include "HDKitPrerequisiteBase.h"
#include "HDKitPrerequisite_TeamSpecific.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HDMAIN_API UHDKitPrerequisite_TeamSpecific : public UHDKitPrerequisiteBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHDTeam RequiredTeam;
    
public:
    UHDKitPrerequisite_TeamSpecific();

};

