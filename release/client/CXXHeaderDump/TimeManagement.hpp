#ifndef UE4SS_SDK_TimeManagement_HPP
#define UE4SS_SDK_TimeManagement_HPP

#include "TimeManagement_enums.hpp"

struct FTimedDataChannelSampleTime
{
    char padding_0[0x18];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x18

struct FTimedDataInputEvaluationData
{
    float DistanceToNewestSampleSeconds;                                              // 0x0000 (size: 0x4)
    float DistanceToOldestSampleSeconds;                                              // 0x0004 (size: 0x4)

}; // Size: 0x8

class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
    FFrameRate FixedFrameRate;                                                        // 0x0028 (size: 0x8)

}; // Size: 0x30

class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    FFrameTime TransformTime(const FFrameTime& SourceTime, const FFrameRate& SourceRate, const FFrameRate& DestinationRate);
    FFrameNumber Subtract_FrameNumberInteger(FFrameNumber A, int32 B);
    FFrameNumber Subtract_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);
    FFrameTime SnapFrameTimeToRate(const FFrameTime& SourceTime, const FFrameRate& SourceRate, const FFrameRate& SnapToRate);
    FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, const FFrameRate& FrameRate);
    FFrameNumber Multiply_FrameNumberInteger(FFrameNumber A, int32 B);
    bool IsValid_MultipleOf(const FFrameRate& InFrameRate, const FFrameRate& OtherFramerate);
    bool IsValid_Framerate(const FFrameRate& InFrameRate);
    FFrameRate GetTimecodeFrameRate();
    FTimecode GetTimecode();
    FFrameNumber Divide_FrameNumberInteger(FFrameNumber A, int32 B);
    FString Conv_TimecodeToString(const FTimecode& InTimecode, bool bForceSignDisplay);
    float Conv_QualifiedFrameTimeToSeconds(const FQualifiedFrameTime& InFrameTime);
    float Conv_FrameRateToSeconds(const FFrameRate& InFrameRate);
    int32 Conv_FrameNumberToInteger(const FFrameNumber& InFrameNumber);
    FFrameNumber Add_FrameNumberInteger(FFrameNumber A, int32 B);
    FFrameNumber Add_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);
}; // Size: 0x28

class UTimeSynchronizationSource : public UObject
{
    bool bUseForSynchronization;                                                      // 0x0028 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0029 (size: 0x3)
    int32 FrameOffset;                                                                // 0x002C (size: 0x4)

}; // Size: 0x30

#endif
