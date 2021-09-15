// BlueprintGeneratedClass BP_DamageDecals_01.BP_DamageDecals_01_C
// Size: 0x244 (Inherited: 0x228)
struct ABP_DamageDecals_01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UStaticMeshComponent* SM_WallStain_01; // 0x230(0x08)
	int32_t MaterialSwitch; // 0x238(0x04)
	struct FColor ColorOverlay; // 0x23c(0x04)
	float Opacitiy; // 0x240(0x04)

	void SetCustomPrimitiveData(); // Function BP_DamageDecals_01.BP_DamageDecals_01_C.SetCustomPrimitiveData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UserConstructionScript(); // Function BP_DamageDecals_01.BP_DamageDecals_01_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function BP_DamageDecals_01.BP_DamageDecals_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_BP_DamageDecals_01(int32_t EntryPoint); // Function BP_DamageDecals_01.BP_DamageDecals_01_C.ExecuteUbergraph_BP_DamageDecals_01 // (Final|UbergraphFunction) // @ game+0x16c0340
};

