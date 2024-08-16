#pragma once
#include "CoreMinimal.h"
#include "EUnit.generated.h"

UENUM(BlueprintType)
enum class EUnit : uint8 {
    Micrometers,
    Millimeters,
    Centimeters,
    Meters,
    Kilometers,
    Inches,
    Feet,
    Yards,
    Miles,
    Lightyears,
    Degrees,
    Radians,
    MetersPerSecond,
    KilometersPerHour,
    MilesPerHour,
    Celsius,
    Farenheit,
    Kelvin,
    Micrograms,
    Milligrams,
    Grams,
    Kilograms,
    MetricTons,
    Ounces,
    Pounds,
    Stones,
    Newtons,
    PoundsForce,
    KilogramsForce,
    Hertz,
    Kilohertz,
    Megahertz,
    Gigahertz,
    RevolutionsPerMinute,
    Bytes,
    Kilobytes,
    Megabytes,
    Gigabytes,
    Terabytes,
    Lumens,
    Milliseconds = 43,
    Seconds,
    Minutes,
    Hours,
    Days,
    Months,
    Years,
    Multiplier = 52,
    Percentage = 51,
    Unspecified = 53,
};

