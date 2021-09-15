// BlueprintGeneratedClass TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C
// Size: 0x350 (Inherited: 0x260)
struct UTBP_HeadConfiguration_Master_C : UTigerCharacterHeadConfiguration {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct TMap<enum class ENUM_PiercingNames, struct FTigerCharacterHeadPiercingSocket> PiercingOffsets; // 0x268(0x50)
	struct TMap<enum class ENUM_PiercingNames, struct FName> PiercingNameMappings; // 0x2b8(0x50)
	struct FTigerCharacterHeadEyewearOffset EyewearOffset_Nose; // 0x308(0x18)
	struct FTigerCharacterHeadEyewearOffset EyewearOffset_EarLeft; // 0x320(0x18)
	struct FTigerCharacterHeadEyewearOffset EyewearOffset_EarRight; // 0x338(0x18)

	void GetPiercingSlots(struct UTigerCharacterMeshManager* InMeshManager, struct TSet<struct FString> InFilter, struct TMap<struct FName, struct FTigerCharacterHeadPiercingSocket> OutSlots); // Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.GetPiercingSlots // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
	void GatherPoseableMeshSetupData(struct UTBP_PoseableMesh_Master_C* Mesh, struct TSet<struct FString> Filter, struct TArray<struct FTigerCharacterPoseableMeshBoneSetupData> Data); // Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.GatherPoseableMeshSetupData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
	void SetPoseableBeard(struct UTigerCharacterBeardCustomization* InBeard, struct UTigerCharacterMeshManager* InMeshManager, struct TSet<struct FString> InFilter); // Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetPoseableBeard // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
	void SetEyewearOffset(struct UTigerCharacterMeshManager* MeshManager); // Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetEyewearOffset // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
	void SetPiercings(struct UTigerCharacterPiercingSetCustomization* InPiercingSet, struct UTigerCharacterMeshManager* InMeshManager, struct TSet<struct FString> InFilter); // Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetPiercings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
	void SetPiercingSlotLocationAndRotation(struct UTigerCharacterMeshManager* InMeshManager, struct FName InName, struct FVector InLocation, struct FRotator InRotation); // Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetPiercingSlotLocationAndRotation // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_HeadConfiguration_Master(int32_t EntryPoint); // Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.ExecuteUbergraph_TBP_HeadConfiguration_Master // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

