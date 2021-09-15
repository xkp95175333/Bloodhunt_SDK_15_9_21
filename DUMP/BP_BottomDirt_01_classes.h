// BlueprintGeneratedClass BP_BottomDirt_01.BP_BottomDirt_01_C
// Size: 0x260 (Inherited: 0x228)
struct ABP_BottomDirt_01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UStaticMeshComponent* SM_BottomDirtDecal_01; // 0x230(0x08)
	int32_t Decal; // 0x238(0x04)
	float Alpha; // 0x23c(0x04)
	float Desaturation; // 0x240(0x04)
	float CutoffLeft; // 0x244(0x04)
	float CutoffRight; // 0x248(0x04)
	bool Flip?; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	struct FLinearColor DiffuseMultiplier; // 0x250(0x10)

	void SetCustomPrimitiveData(); // Function BP_BottomDirt_01.BP_BottomDirt_01_C.SetCustomPrimitiveData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UserConstructionScript(); // Function BP_BottomDirt_01.BP_BottomDirt_01_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function BP_BottomDirt_01.BP_BottomDirt_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_BP_BottomDirt_01(int32_t EntryPoint); // Function BP_BottomDirt_01.BP_BottomDirt_01_C.ExecuteUbergraph_BP_BottomDirt_01 // (Final|UbergraphFunction) // @ game+0x16c0340
};

