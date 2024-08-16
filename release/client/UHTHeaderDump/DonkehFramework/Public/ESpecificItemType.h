#pragma once
#include "CoreMinimal.h"
#include "ESpecificItemType.generated.h"

UENUM(BlueprintType)
enum class ESpecificItemType : uint8 {
    None,
    Rifle = 10,
    MachineGun,
    GrenadeLauncher,
    RocketLauncher,
    SniperRifle,
    SubmachineGun = 30,
    Pistol,
    FragGrenade = 50,
    SmokeGrenade,
    Melee = 80,
    Bandage = 110,
    AmmoBag = 120,
    MedicBag,
    Binoculars = 150,
    Radio,
    Shovel,
    SpecialItem1 = 210,
    SpecialItem2,
    SpecialItem3,
    SpecialItem4 = SpecialItem3,
    SpecialItem5 = SpecialItem3,
    CustomItem1 = 220,
    CustomItem2,
    CustomItem3,
    CustomItem4,
    CustomItem5,
    Undefined = 255,
};

