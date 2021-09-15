// BlueprintGeneratedClass BP_Candle_01.BP_Candle_01_C
// Size: 0x264 (Inherited: 0x228)
struct ABP_Candle_01_C : AActor {
	struct UPointLightComponent* PointLight_01; // 0x228(0x08)
	struct UStaticMeshComponent* SM_VFX_CandleFlame_01; // 0x230(0x08)
	struct UStaticMeshComponent* SM_VFX_CandleFlame_03; // 0x238(0x08)
	struct UStaticMeshComponent* SM_VFX_CandleFlame_02; // 0x240(0x08)
	struct UPointLightComponent* FlickeringLight1; // 0x248(0x08)
	struct UStaticMeshComponent* SM_MERGED_BP_Candle_01_6; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct FColor light color; // 0x260(0x04)

	float Random from world(int32_t NewParam); // Function BP_Candle_01.BP_Candle_01_C.Random from world // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UserConstructionScript(); // Function BP_Candle_01.BP_Candle_01_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

