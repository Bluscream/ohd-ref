#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "CharacterOnDeathSignatureDelegate.generated.h"

class AActor;
class AController;
class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FCharacterOnDeathSignature, APawn*, VictimPawn, AController*, VictimController, float, KillingDamage, const FDamageEvent&, DamageEvent, APawn*, InstigatingPawn, AActor*, DamageCauser);

