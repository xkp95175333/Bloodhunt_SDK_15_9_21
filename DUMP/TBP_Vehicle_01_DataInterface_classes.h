// BlueprintGeneratedClass TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C
// Size: 0x35 (Inherited: 0x28)
struct UTBP_Vehicle_01_DataInterface_C : UObject {
	bool Bounceable; // 0x28(0x01)
	bool Squashable; // 0x29(0x01)
	bool HasCarAlam; // 0x2a(0x01)
	bool CanBeTinted; // 0x2b(0x01)
	bool LandAnywhereCrushAll; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t HowManyCrushZones; // 0x30(0x04)
	bool HasTwoExteriorMaterials; // 0x34(0x01)

	void GetBrandingMaterial(int32_t InIndex, struct UMaterialInstance* OutMaterial); // Function TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C.GetBrandingMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetLootableAsset(struct AActor* OutAsset); // Function TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C.GetLootableAsset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetBodyMesh(struct UStaticMesh* OutMesh); // Function TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C.GetBodyMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
};

