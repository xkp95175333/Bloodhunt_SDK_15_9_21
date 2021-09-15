// BlueprintGeneratedClass BP_ConstructionLamp_03.BP_ConstructionLamp_03_C
// Size: 0x29c (Inherited: 0x280)
struct ABP_ConstructionLamp_03_C : ABP_LightMaster_C {
	struct UStaticMeshComponent* SM_ConstructionLamp_03; // 0x280(0x08)
	bool Static?; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float AttenuationRadius; // 0x28c(0x04)
	float Intensity; // 0x290(0x04)
	bool Cast Shadow?; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	float OuterConeAngle; // 0x298(0x04)

	void UserConstructionScript(); // Function BP_ConstructionLamp_03.BP_ConstructionLamp_03_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

