// BlueprintGeneratedClass TBP_EarthShock.TBP_EarthShock_C
// Size: 0x1ec (Inherited: 0x178)
struct UTBP_EarthShock_C : UTigerDisciplineEarthshock {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x178(0x08)
	struct UDecalComponent* Indicator; // 0x180(0x08)
	float IndicatorOffset; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct UAkComponent* AudioComponent; // 0x190(0x08)
	int32_t AimingAkEventID; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct UCurveFloat* LeapTimeCurve; // 0x1a0(0x08)
	struct UStaticMeshComponent* IndicatorMesh; // 0x1a8(0x08)
	struct ATBP_Vfx_GroundSlam_Marker_C* Indicator Actor; // 0x1b0(0x08)
	bool Target Is Wall; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct ATBP_VFX_GroundSlam_Impact_C* Impact VFX Actor; // 0x1c0(0x08)
	struct FRotator Calculated Rotation; // 0x1c8(0x0c)
	struct FVector Calculated Position; // 0x1d4(0x0c)
	struct FVector Base Position; // 0x1e0(0x0c)

	void Set Indicator Location & Rotation(struct FVector Location, struct FRotator Rotation); // Function TBP_EarthShock.TBP_EarthShock_C.Set Indicator Location & Rotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Set Indicator Visibility(bool Has Valid Target Location); // Function TBP_EarthShock.TBP_EarthShock_C.Set Indicator Visibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Spawn Impact VFX Actor Check(); // Function TBP_EarthShock.TBP_EarthShock_C.Spawn Impact VFX Actor Check // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Set Variables(bool Target Is Wall, struct FRotator Calculated Rotation, struct FVector Calculated Position, struct FVector Base Position); // Function TBP_EarthShock.TBP_EarthShock_C.Set Variables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FVector CalculateConeDirection(); // Function TBP_EarthShock.TBP_EarthShock_C.CalculateConeDirection // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
	struct FVector CalculateKnockbackForce(struct ATigerCharacter* InHitCharacter); // Function TBP_EarthShock.TBP_EarthShock_C.CalculateKnockbackForce // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
	bool EvaluateIsTargetLocationValid(bool bIsWall, struct FHitResult InHitSurface); // Function TBP_EarthShock.TBP_EarthShock_C.EvaluateIsTargetLocationValid // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
	float GetLeapTime(struct FVector InLeapVector); // Function TBP_EarthShock.TBP_EarthShock_C.GetLeapTime // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
	void CalculateDecalLocationAndRotation(struct FVector TargetLocation, struct FVector SurfaceNormal, struct FRotator Rotation, struct FVector DecalOffset); // Function TBP_EarthShock.TBP_EarthShock_C.CalculateDecalLocationAndRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void OnLanded(struct FVector InLocation, struct FVector InSurfaceNormal, bool bInTargetIsWall); // Function TBP_EarthShock.TBP_EarthShock_C.OnLanded // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnRemoveTargetIndicator(); // Function TBP_EarthShock.TBP_EarthShock_C.OnRemoveTargetIndicator // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnSpawnTargetIndicator(); // Function TBP_EarthShock.TBP_EarthShock_C.OnSpawnTargetIndicator // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnTargetIndicatorUpdated(bool bInHasTargetLocation, struct FVector InTargetLocation, struct FVector InSurfaceNormal, bool bInTargetIsWall); // Function TBP_EarthShock.TBP_EarthShock_C.OnTargetIndicatorUpdated // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnEnemyCharacterHit(struct ATigerCharacter* InHitCharacter); // Function TBP_EarthShock.TBP_EarthShock_C.OnEnemyCharacterHit // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_EarthShock(int32_t EntryPoint); // Function TBP_EarthShock.TBP_EarthShock_C.ExecuteUbergraph_TBP_EarthShock // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

