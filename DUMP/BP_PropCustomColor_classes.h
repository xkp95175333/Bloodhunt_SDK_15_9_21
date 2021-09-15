// BlueprintGeneratedClass BP_PropCustomColor.BP_PropCustomColor_C
// Size: 0x261 (Inherited: 0x228)
struct ABP_PropCustomColor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	int32_t Color Picker; // 0x238(0x04)
	bool Use Custom Color; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	struct FLinearColor Custom Color; // 0x240(0x10)
	struct TArray<struct FLinearColor> ColorPresets; // 0x250(0x10)
	bool Use 1st custom color FIX; // 0x260(0x01)

	void SetCustomPrimitiveData(); // Function BP_PropCustomColor.BP_PropCustomColor_C.SetCustomPrimitiveData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UserConstructionScript(); // Function BP_PropCustomColor.BP_PropCustomColor_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function BP_PropCustomColor.BP_PropCustomColor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_BP_PropCustomColor(int32_t EntryPoint); // Function BP_PropCustomColor.BP_PropCustomColor_C.ExecuteUbergraph_BP_PropCustomColor // (Final|UbergraphFunction) // @ game+0x16c0340
};

