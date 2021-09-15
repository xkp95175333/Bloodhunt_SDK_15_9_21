// BlueprintGeneratedClass BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C
// Size: 0x29c (Inherited: 0x250)
struct ABP_Sidewalk_Spline_01_C : ATigerSidewalkSpline {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct USplineComponent* SplineComponentExample; // 0x258(0x08)
	float Spacing; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct UStaticMesh* SidewalkMesh; // 0x268(0x08)
	float Width; // 0x270(0x04)
	float Padding; // 0x274(0x04)
	struct TArray<struct UMaterialInstance*> OverrideMaterials; // 0x278(0x10)
	bool Use padding on single pieces; // 0x288(0x01)
	bool Use point rotation; // 0x289(0x01)
	bool Reverse; // 0x28a(0x01)
	bool UseNoCollision; // 0x28b(0x01)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct UHierarchicalInstancedStaticMeshComponent* StraightMeshes; // 0x290(0x08)
	float SectionLength_Internal; // 0x298(0x04)

	float GetSectionLengthBasedOnMesh(struct UStaticMesh* InMesh); // Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetSectionLengthBasedOnMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	float GetReversedOffsetAmount(); // Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetReversedOffsetAmount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void AddSplineMeshes(); // Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.AddSplineMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetBestMeshesFromDistance(float InDistance, struct UDA_SidewalkMeshPreset_C* InPreset, struct TArray<struct UStaticMesh*> OutMeshes, float OutCombinedLength); // Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetBestMeshesFromDistance // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct UDA_SidewalkMeshPreset_C* LoadPreset(); // Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.LoadPreset // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	float GetMeshLength(struct UStaticMesh* InMesh); // Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetMeshLength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void SetOverrideMaterialOnAllComponents(); // Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.SetOverrideMaterialOnAllComponents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetBestMeshFromDistance(float InDistance, struct UDA_SidewalkMeshPreset_C* InPreset, struct UStaticMesh* OutMesh); // Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetBestMeshFromDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HandleCollisionResponse(struct UPrimitiveComponent* Mesh); // Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.HandleCollisionResponse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetOverrideMaterial(struct UPrimitiveComponent* Target); // Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.SetOverrideMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnRebuild(); // Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.OnRebuild // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_BP_Sidewalk_Spline_01(int32_t EntryPoint); // Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.ExecuteUbergraph_BP_Sidewalk_Spline_01 // (Final|UbergraphFunction) // @ game+0x16c0340
};

