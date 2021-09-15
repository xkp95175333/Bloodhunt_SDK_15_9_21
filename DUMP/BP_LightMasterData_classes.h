// BlueprintGeneratedClass BP_LightMasterData.BP_LightMasterData_C
// Size: 0x78 (Inherited: 0x28)
struct UBP_LightMasterData_C : UBP_LightMasterDataInterface_C {
	struct TArray<struct TSoftObjectPtr<struct UMaterialInstance>> LightOffMaterial; // 0x28(0x10)
	struct TArray<struct TSoftObjectPtr<struct UMaterialInstance>> LightFlickerMaterial; // 0x38(0x10)
	struct TArray<struct TSoftObjectPtr<struct UStaticMesh>> LightMeshes; // 0x48(0x10)
	struct TArray<struct TSoftObjectPtr<struct UMaterialInstance>> LightMaterials; // 0x58(0x10)
	struct TArray<struct TSoftObjectPtr<struct UTextureLightProfile>> LightIESProfiles; // 0x68(0x10)

	void GetIESProfile(int32_t InIndex, struct UTextureLightProfile* OutIESProfile); // Function BP_LightMasterData.BP_LightMasterData_C.GetIESProfile // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetLightMateriales(int32_t InIndex, struct UMaterialInstance* OutMaterial); // Function BP_LightMasterData.BP_LightMasterData_C.GetLightMateriales // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetLightMeshes(int32_t InIndex, struct UStaticMesh* OutMesh); // Function BP_LightMasterData.BP_LightMasterData_C.GetLightMeshes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetLightFlickerMaterial(int32_t InIndex, struct UMaterialInstance* OutMaterial); // Function BP_LightMasterData.BP_LightMasterData_C.GetLightFlickerMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetLightOffMaterial(int32_t InIndex, struct UMaterialInstance* OutMaterial); // Function BP_LightMasterData.BP_LightMasterData_C.GetLightOffMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
};

