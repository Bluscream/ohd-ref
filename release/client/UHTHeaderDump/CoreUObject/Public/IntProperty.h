#pragma once
#include "CoreMinimal.h"
#include "NumericProperty.h"
#include "IntProperty.generated.h"

UCLASS(Blueprintable)
class UIntProperty : public UNumericProperty {
    GENERATED_BODY()
public:
    UIntProperty();

};

