#ifndef UE4SS_SDK_FieldSystemEngine_HPP
#define UE4SS_SDK_FieldSystemEngine_HPP

class AFieldSystemActor : public AActor
{
    class UFieldSystemComponent* FieldSystemComponent;                                // 0x0220 (size: 0x8)

}; // Size: 0x228

class UBoxFalloff : public UFieldNodeFloat
{
    float Magnitude;                                                                  // 0x00B0 (size: 0x4)
    float MinRange;                                                                   // 0x00B4 (size: 0x4)
    float MaxRange;                                                                   // 0x00B8 (size: 0x4)
    float Default;                                                                    // 0x00BC (size: 0x4)
    FTransform Transform;                                                             // 0x00C0 (size: 0x30)
    TEnumAsByte<EFieldFalloffType> Falloff;                                           // 0x00F0 (size: 0x1)

    class UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, FTransform Transform, TEnumAsByte<EFieldFalloffType> Falloff);
}; // Size: 0x100

class UCullingField : public UFieldNodeBase
{
    class UFieldNodeBase* Culling;                                                    // 0x00B0 (size: 0x8)
    class UFieldNodeBase* Field;                                                      // 0x00B8 (size: 0x8)
    TEnumAsByte<EFieldCullingOperationType> Operation;                                // 0x00C0 (size: 0x1)

    class UCullingField* SetCullingField(const class UFieldNodeBase* Culling, const class UFieldNodeBase* Field, TEnumAsByte<EFieldCullingOperationType> Operation);
}; // Size: 0xC8

class UFieldNodeBase : public UActorComponent
{
    char padding_0[0xB0];                                                             // 0x0000 (size: 0x0)
}; // Size: 0xB0

class UFieldNodeFloat : public UFieldNodeBase
{
    char padding_0[0xB0];                                                             // 0x0000 (size: 0x0)
}; // Size: 0xB0

class UFieldNodeInt : public UFieldNodeBase
{
    char padding_0[0xB0];                                                             // 0x0000 (size: 0x0)
}; // Size: 0xB0

class UFieldNodeVector : public UFieldNodeBase
{
    char padding_0[0xB0];                                                             // 0x0000 (size: 0x0)
}; // Size: 0xB0

class UFieldSystem : public UObject
{
    char padding_0[0x38];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x38

class UFieldSystemComponent : public UPrimitiveComponent
{
    class UFieldSystem* FieldSystem;                                                  // 0x0408 (size: 0x8)
    char padding_0[0x10];                                                             // 0x0410 (size: 0x10)
    TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers;                       // 0x0420 (size: 0x10)

    void ResetFieldSystem();
    void ApplyUniformVectorFalloffForce(bool Enabled, FVector Position, FVector Direction, float Radius, float Magnitude);
    void ApplyStrainField(bool Enabled, FVector Position, float Radius, float Magnitude, int32 Iterations);
    void ApplyStayDynamicField(bool Enabled, FVector Position, float Radius);
    void ApplyRadialVectorFalloffForce(bool Enabled, FVector Position, float Radius, float Magnitude);
    void ApplyRadialForce(bool Enabled, FVector Position, float Magnitude);
    void ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
    void ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude);
    void AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
}; // Size: 0x450

class UFieldSystemMetaData : public UActorComponent
{
    char padding_0[0xB0];                                                             // 0x0000 (size: 0x0)
}; // Size: 0xB0

class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{
    int32 Iterations;                                                                 // 0x00B0 (size: 0x4)

    class UFieldSystemMetaDataIteration* SetMetaDataIteration(int32 Iterations);
}; // Size: 0xB8

class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
    TEnumAsByte<EFieldResolutionType> ResolutionType;                                 // 0x00B0 (size: 0x1)

    class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> ResolutionType);
}; // Size: 0xB8

class UNoiseField : public UFieldNodeFloat
{
    float MinRange;                                                                   // 0x00B0 (size: 0x4)
    float MaxRange;                                                                   // 0x00B4 (size: 0x4)
    char padding_0[0x8];                                                              // 0x00B8 (size: 0x8)
    FTransform Transform;                                                             // 0x00C0 (size: 0x30)

    class UNoiseField* SetNoiseField(float MinRange, float MaxRange, FTransform Transform);
}; // Size: 0xF0

class UOperatorField : public UFieldNodeBase
{
    float Magnitude;                                                                  // 0x00B0 (size: 0x4)
    char padding_0[0x4];                                                              // 0x00B4 (size: 0x4)
    class UFieldNodeBase* RightField;                                                 // 0x00B8 (size: 0x8)
    class UFieldNodeBase* LeftField;                                                  // 0x00C0 (size: 0x8)
    TEnumAsByte<EFieldOperationType> Operation;                                       // 0x00C8 (size: 0x1)

    class UOperatorField* SetOperatorField(float Magnitude, const class UFieldNodeBase* RightField, const class UFieldNodeBase* LeftField, TEnumAsByte<EFieldOperationType> Operation);
}; // Size: 0xD0

class UPlaneFalloff : public UFieldNodeFloat
{
    float Magnitude;                                                                  // 0x00B0 (size: 0x4)
    float MinRange;                                                                   // 0x00B4 (size: 0x4)
    float MaxRange;                                                                   // 0x00B8 (size: 0x4)
    float Default;                                                                    // 0x00BC (size: 0x4)
    float Distance;                                                                   // 0x00C0 (size: 0x4)
    FVector Position;                                                                 // 0x00C4 (size: 0xC)
    FVector Normal;                                                                   // 0x00D0 (size: 0xC)
    TEnumAsByte<EFieldFalloffType> Falloff;                                           // 0x00DC (size: 0x1)

    class UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, FVector Position, FVector Normal, TEnumAsByte<EFieldFalloffType> Falloff);
}; // Size: 0xE0

class URadialFalloff : public UFieldNodeFloat
{
    float Magnitude;                                                                  // 0x00B0 (size: 0x4)
    float MinRange;                                                                   // 0x00B4 (size: 0x4)
    float MaxRange;                                                                   // 0x00B8 (size: 0x4)
    float Default;                                                                    // 0x00BC (size: 0x4)
    float Radius;                                                                     // 0x00C0 (size: 0x4)
    FVector Position;                                                                 // 0x00C4 (size: 0xC)
    TEnumAsByte<EFieldFalloffType> Falloff;                                           // 0x00D0 (size: 0x1)

    class URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, FVector Position, TEnumAsByte<EFieldFalloffType> Falloff);
}; // Size: 0xD8

class URadialIntMask : public UFieldNodeInt
{
    float Radius;                                                                     // 0x00B0 (size: 0x4)
    FVector Position;                                                                 // 0x00B4 (size: 0xC)
    int32 InteriorValue;                                                              // 0x00C0 (size: 0x4)
    int32 ExteriorValue;                                                              // 0x00C4 (size: 0x4)
    TEnumAsByte<ESetMaskConditionType> SetMaskCondition;                              // 0x00C8 (size: 0x1)

    class URadialIntMask* SetRadialIntMask(float Radius, FVector Position, int32 InteriorValue, int32 ExteriorValue, TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn);
}; // Size: 0xD0

class URadialVector : public UFieldNodeVector
{
    float Magnitude;                                                                  // 0x00B0 (size: 0x4)
    FVector Position;                                                                 // 0x00B4 (size: 0xC)

    class URadialVector* SetRadialVector(float Magnitude, FVector Position);
}; // Size: 0xC0

class URandomVector : public UFieldNodeVector
{
    float Magnitude;                                                                  // 0x00B0 (size: 0x4)

    class URandomVector* SetRandomVector(float Magnitude);
}; // Size: 0xB8

class UReturnResultsTerminal : public UFieldNodeBase
{
    char padding_0[0xB0];                                                             // 0x0000 (size: 0x0)

    class UReturnResultsTerminal* SetReturnResultsTerminal();
}; // Size: 0xB0

class UToFloatField : public UFieldNodeFloat
{
    class UFieldNodeInt* IntField;                                                    // 0x00B0 (size: 0x8)

    class UToFloatField* SetToFloatField(const class UFieldNodeInt* IntegerField);
}; // Size: 0xB8

class UToIntegerField : public UFieldNodeInt
{
    class UFieldNodeFloat* FloatField;                                                // 0x00B0 (size: 0x8)

    class UToIntegerField* SetToIntegerField(const class UFieldNodeFloat* FloatField);
}; // Size: 0xB8

class UUniformInteger : public UFieldNodeInt
{
    int32 Magnitude;                                                                  // 0x00B0 (size: 0x4)

    class UUniformInteger* SetUniformInteger(int32 Magnitude);
}; // Size: 0xB8

class UUniformScalar : public UFieldNodeFloat
{
    float Magnitude;                                                                  // 0x00B0 (size: 0x4)

    class UUniformScalar* SetUniformScalar(float Magnitude);
}; // Size: 0xB8

class UUniformVector : public UFieldNodeVector
{
    float Magnitude;                                                                  // 0x00B0 (size: 0x4)
    FVector Direction;                                                                // 0x00B4 (size: 0xC)

    class UUniformVector* SetUniformVector(float Magnitude, FVector Direction);
}; // Size: 0xC0

#endif
