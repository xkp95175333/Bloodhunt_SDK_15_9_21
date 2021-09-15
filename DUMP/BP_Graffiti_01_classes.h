// BlueprintGeneratedClass BP_Graffiti_01.BP_Graffiti_01_C
// Size: 0x258 (Inherited: 0x228)
struct ABP_Graffiti_01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UStaticMeshComponent* SM_Graffiti_Decal_01; // 0x230(0x08)
	struct FLinearColor Color; // 0x238(0x10)
	struct UMaterialInstance* Material; // 0x248(0x08)
	float FakeIntensity; // 0x250(0x04)
	int32_t Sort Priority; // 0x254(0x04)

	void SetCustomPrimitiveData(); // Function BP_Graffiti_01.BP_Graffiti_01_C.SetCustomPrimitiveData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UserConstructionScript(); // Function BP_Graffiti_01.BP_Graffiti_01_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function BP_Graffiti_01.BP_Graffiti_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_BP_Graffiti_01(int32_t EntryPoint); // Function BP_Graffiti_01.BP_Graffiti_01_C.ExecuteUbergraph_BP_Graffiti_01 // (Final|UbergraphFunction) // @ game+0x16c0340
};

