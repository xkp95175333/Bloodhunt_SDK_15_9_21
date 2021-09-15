// BlueprintGeneratedClass TBP_Vehicle_01.TBP_Vehicle_01_C
// Size: 0x468 (Inherited: 0x288)
struct ATBP_Vehicle_01_C : ATigerVehicle {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UAkComponent* AkComponent; // 0x290(0x08)
	struct UChildActorComponent* LootableChildActor; // 0x298(0x08)
	struct UBoxComponent* CollisionBox; // 0x2a0(0x08)
	float Timeline_0_FlashingLightIntensity_E276A4F846AD647EA78499941D2D43DE; // 0x2a8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_E276A4F846AD647EA78499941D2D43DE; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2b0(0x08)
	enum class ENUM_VehicleSelection Select Vehicle; // 0x2b8(0x01)
	bool ShowShadow; // 0x2b9(0x01)
	bool EnableLights; // 0x2ba(0x01)
	char pad_2BB[0x1]; // 0x2bb(0x01)
	float FrontLightsIntensity; // 0x2bc(0x04)
	float BackLightsIntensity; // 0x2c0(0x04)
	int32_t Chans of alarm trigger; // 0x2c4(0x04)
	int32_t NumberOfAlarmsBlinks; // 0x2c8(0x04)
	bool BreakPlacedVehicle; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	int32_t NumberOfBlinked; // 0x2d0(0x04)
	float FrontLightsMultiplied; // 0x2d4(0x04)
	float BackLightsMultiplied; // 0x2d8(0x04)
	float LightsIntensityDuringAlarm; // 0x2dc(0x04)
	bool EnableAlarm; // 0x2e0(0x01)
	bool CarAlarmIsOn; // 0x2e1(0x01)
	char pad_2E2[0x6]; // 0x2e2(0x06)
	struct TArray<struct FVector> AllColorTintsInterior; // 0x2e8(0x10)
	struct FVector ColorTintInterior; // 0x2f8(0x0c)
	bool HasBeenLandedOn; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	int32_t ExteriorColors; // 0x308(0x04)
	int32_t InteriorColors; // 0x30c(0x04)
	float BounceMultiplier; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct FS_VehicleSetups CarSetup; // 0x318(0x20)
	bool UseRandomDirt; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	float Dirtyness; // 0x33c(0x04)
	bool UseRandomRust; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	float Rustyness; // 0x344(0x04)
	struct TArray<float> CrushZonesX_Locations; // 0x348(0x10)
	struct TArray<struct FName> CrushZones; // 0x358(0x10)
	struct TArray<int32_t> CrushZoneActivated; // 0x368(0x10)
	struct UParticleSystem* GlassShatterEffect; // 0x378(0x08)
	struct UAkAudioEvent* LandingOnCarAudio; // 0x380(0x08)
	struct TArray<struct FVector> GlassShatterLocations; // 0x388(0x10)
	struct TArray<struct FName> GlassShatterSockets; // 0x398(0x10)
	bool ShouldBreak; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct TArray<struct FS_ColorTintPresets> ColorTintPresets; // 0x3b0(0x10)
	struct FS_ColorTintPresets ChosenColorTintPreset; // 0x3c0(0x18)
	struct TArray<int32_t> AlreadyCrushedZones; // 0x3d8(0x10)
	bool ObjectIsActive; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	struct FRandomStream DirtynessStream; // 0x3ec(0x08)
	struct FRandomStream RustynessStream; // 0x3f4(0x08)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct USpotLightComponent* Spot_FrontLeft; // 0x400(0x08)
	struct USpotLightComponent* Spot_FrontRight; // 0x408(0x08)
	struct USpotLightComponent* Spot_BackLeft; // 0x410(0x08)
	struct USpotLightComponent* Spot_BackRight; // 0x418(0x08)
	struct UStaticMeshComponent* SM_Shadow; // 0x420(0x08)
	struct TArray<struct UStaticMeshComponent*> AllMeshes; // 0x428(0x10)
	bool UseRandomWindowTint; // 0x438(0x01)
	char pad_439[0x3]; // 0x439(0x03)
	float WindowTint; // 0x43c(0x04)
	bool Passive Flashing; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	int32_t Branding; // 0x444(0x04)
	struct UMaterialInstance* BrandingMaterialOverride; // 0x448(0x08)
	bool CastDynamicShadow?; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct UTBP_Vehicle_01_DataInterface_C* TBPVehicle01CDO; // 0x458(0x08)
	float FrontWheelRotation; // 0x460(0x04)
	float AUDIO_RandomCarAlarms; // 0x464(0x04)

	void GetPingInfo(struct FTS_PingableActorInfo OutInfo); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.GetPingInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetPingCategory(struct FName OutCategory); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.GetPingCategory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IsPolice(bool IsPolice); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.IsPolice // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void AUDIO_RandomizeCarAlarms(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.AUDIO_RandomizeCarAlarms // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SpawnGlassShatterEffect(struct FVector Location); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.SpawnGlassShatterEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DisableAlarm(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.DisableAlarm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Set Custom Primitive Vector(struct TArray<struct UStaticMeshComponent*> Static Meshes, bool Runtime, enum class ESharkCustomPrimitiveVector3DataName NewParam, struct FVector Value); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.Set Custom Primitive Vector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Set Custom Primitive Float(struct TArray<struct UStaticMeshComponent*> Static Meshes, bool Runtime, enum class ESharkCustomPrimitiveFloatDataName NewParam, float Value); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.Set Custom Primitive Float // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	bool IsEntity(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.IsEntity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void SetFrontLightColor(struct UTigerSpotLightComponent* TigerSpotLight, struct UTigerSpotLightComponent* OutTigerSpotLight); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetFrontLightColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetCustomPrimitiveData(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetCustomPrimitiveData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetCollision(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetBranding(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetBranding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetUntintedColors(struct TArray<struct UStaticMeshComponent*> Meshes); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetUntintedColors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetColorTintPresets(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetColorTintPresets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetMeshComponents(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetMeshComponents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetParametersPerVehicle(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetParametersPerVehicle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlaceObjects(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.PlaceObjects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CustomizableElements(struct TArray<struct UStaticMeshComponent*> Meshes); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.CustomizableElements // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Color(struct TArray<struct UStaticMeshComponent*> Meshes); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.Color // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TurnLightsOnOrOff(bool IsRuntime); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.TurnLightsOnOrOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UserConstructionScript(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Timeline_0__FinishedFunc(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x16c0340
	void Timeline_0__UpdateFunc(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x16c0340
	void StaticMeshComponentHit(struct FHitResult HitResult, struct FVector ImpactVelocity); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.StaticMeshComponentHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnBeginCharacterOverlap(struct ATigerCharacter* OverlappingCharacter, int32_t TotalOverlapCount); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnBeginCharacterOverlap // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnObjectActivated(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnObjectActivated // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnObjectDeactivated(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnObjectDeactivated // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnRebuild(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnRebuild // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ActivateAlarm(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.ActivateAlarm // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TriggerAlarm(); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.TriggerAlarm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_Vehicle_01(int32_t EntryPoint); // Function TBP_Vehicle_01.TBP_Vehicle_01_C.ExecuteUbergraph_TBP_Vehicle_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

