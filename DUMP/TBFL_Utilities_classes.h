// BlueprintGeneratedClass TBFL_Utilities.TBFL_Utilities_C
// Size: 0x28 (Inherited: 0x28)
struct UTBFL_Utilities_C : UBlueprintFunctionLibrary {

	void SortFloatArray(struct TArray<float> InputFloatArray, bool Descending, struct UObject* __WorldContext, struct TArray<float> OutputArray); // Function TBFL_Utilities.TBFL_Utilities_C.SortFloatArray // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DistanceToBox(struct FVector Position, struct FVector Bounds, struct UObject* __WorldContext, float Distance); // Function TBFL_Utilities.TBFL_Utilities_C.DistanceToBox // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void Compute2DCentroid(struct TArray<struct FVector> Array, struct UObject* __WorldContext, struct FVector OutCentroid); // Function TBFL_Utilities.TBFL_Utilities_C.Compute2DCentroid // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetCurveValueVector(struct UCurveVector* Curve, float Time, struct UObject* __WorldContext, struct FVector Value); // Function TBFL_Utilities.TBFL_Utilities_C.GetCurveValueVector // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetCurveValueColor(struct UCurveLinearColor* Curve, float Time, struct UObject* __WorldContext, struct FLinearColor Value); // Function TBFL_Utilities.TBFL_Utilities_C.GetCurveValueColor // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetCurveValueFloat(struct UCurveFloat* Curve, float Time, struct UObject* __WorldContext, float Value); // Function TBFL_Utilities.TBFL_Utilities_C.GetCurveValueFloat // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void ForceClampMax(int32_t Variable, int32_t Max, struct UObject* __WorldContext); // Function TBFL_Utilities.TBFL_Utilities_C.ForceClampMax // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ForceClamp(int32_t Variable, struct TArray<struct UObject*> Array, struct UObject* __WorldContext); // Function TBFL_Utilities.TBFL_Utilities_C.ForceClamp // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

