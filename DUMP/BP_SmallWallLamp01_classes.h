// BlueprintGeneratedClass BP_SmallWallLamp01.BP_SmallWallLamp01_C
// Size: 0x2b9 (Inherited: 0x280)
struct ABP_SmallWallLamp01_C : ABP_LightMaster_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UStaticMeshComponent* SM_Wall_Lamp_03; // 0x288(0x08)
	float LightIntensity; // 0x290(0x04)
	float AttenuationRadius; // 0x294(0x04)
	float OuterConeAngle; // 0x298(0x04)
	int32_t SpotlightMesh; // 0x29c(0x04)
	bool off; // 0x2a0(0x01)
	bool CastShadows; // 0x2a1(0x01)
	char pad_2A2[0x2]; // 0x2a2(0x02)
	int32_t IES; // 0x2a4(0x04)
	struct FLinearColor LightColor; // 0x2a8(0x10)
	bool Static?; // 0x2b8(0x01)

	void LightSetup(struct UTigerSpotLightComponent* Light Component); // Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.LightSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UserConstructionScript(); // Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_BP_SmallWallLamp01(int32_t EntryPoint); // Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.ExecuteUbergraph_BP_SmallWallLamp01 // (Final|UbergraphFunction) // @ game+0x16c0340
};

