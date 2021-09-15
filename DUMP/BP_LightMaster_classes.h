// BlueprintGeneratedClass BP_LightMaster.BP_LightMaster_C
// Size: 0x280 (Inherited: 0x240)
struct ABP_LightMaster_C : ATigerRebuildableActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UParticleSystemComponent* PS_Lamp_Rain; // 0x248(0x08)
	struct TArray<struct FLinearColor> MasterLightColors; // 0x250(0x10)
	int32_t LightColorSelector; // 0x260(0x04)
	bool RainOn; // 0x264(0x01)
	bool ForceRainWhenUnderSomething; // 0x265(0x01)
	char pad_266[0x2]; // 0x266(0x02)
	struct TArray<struct FLinearColor> EmissiveColor; // 0x268(0x10)
	struct UBP_LightMasterDataInterface_C* LightMasterCDO; // 0x278(0x08)

	void SetMaterialAndPrimitiveData(struct FVector4 InColor, struct UPrimitiveComponent* InMesh, int32_t InIndex); // Function BP_LightMaster.BP_LightMaster_C.SetMaterialAndPrimitiveData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetCDO(SoftClassProperty InData); // Function BP_LightMaster.BP_LightMaster_C.SetCDO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void LineTraceLogic(); // Function BP_LightMaster.BP_LightMaster_C.LineTraceLogic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetRainParticles(bool RainOn); // Function BP_LightMaster.BP_LightMaster_C.SetRainParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void LightColorSelection(struct ULightComponent* Light, struct FLinearColor NewLightColor, struct FVector4 NewEmissiveColor, int32_t LightColorInt); // Function BP_LightMaster.BP_LightMaster_C.LightColorSelection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UserConstructionScript(); // Function BP_LightMaster.BP_LightMaster_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateWeatherComponents(); // Function BP_LightMaster.BP_LightMaster_C.UpdateWeatherComponents // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function BP_LightMaster.BP_LightMaster_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnRebuild(); // Function BP_LightMaster.BP_LightMaster_C.OnRebuild // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_BP_LightMaster(int32_t EntryPoint); // Function BP_LightMaster.BP_LightMaster_C.ExecuteUbergraph_BP_LightMaster // (Final|UbergraphFunction) // @ game+0x16c0340
};

