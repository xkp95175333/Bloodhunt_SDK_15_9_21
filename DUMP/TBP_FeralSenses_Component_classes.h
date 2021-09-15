// BlueprintGeneratedClass TBP_FeralSenses_Component.TBP_FeralSenses_Component_C
// Size: 0x1b8 (Inherited: 0x148)
struct UTBP_FeralSenses_Component_C : UTigerUtilityPowerHSenseComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x148(0x08)
	struct UCurveFloat* ActivatedOpacityCurve; // 0x150(0x08)
	struct UCurveFloat* DeactivatedOpacityCurve; // 0x158(0x08)
	struct UCurveFloat* ActivatedBurstCurve; // 0x160(0x08)
	struct FTimerHandle TimerHandle; // 0x168(0x08)
	struct UCurveFloat* ActivatedDesaturationCurve; // 0x170(0x08)
	struct UCurveFloat* DeactivatedDesaturationCurve; // 0x178(0x08)
	struct FLinearColor FogColor; // 0x180(0x10)
	struct FLinearColor FogNearColor; // 0x190(0x10)
	float FogStartRange; // 0x1a0(0x04)
	float FogEndRange; // 0x1a4(0x04)
	float TimeMultiplier; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct ATBP_Player_C* Player; // 0x1b0(0x08)

	void HandleBloodTrackUpgrades(); // Function TBP_FeralSenses_Component.TBP_FeralSenses_Component_C.HandleBloodTrackUpgrades // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	float GetCurrentHeightenedSensesViewLength(); // Function TBP_FeralSenses_Component.TBP_FeralSenses_Component_C.GetCurrentHeightenedSensesViewLength // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
	void ContinueUpdatingBurst(); // Function TBP_FeralSenses_Component.TBP_FeralSenses_Component_C.ContinueUpdatingBurst // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FadeoutSetup(); // Function TBP_FeralSenses_Component.TBP_FeralSenses_Component_C.FadeoutSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FadeInSetup2(); // Function TBP_FeralSenses_Component.TBP_FeralSenses_Component_C.FadeInSetup2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FadeInSetup1(); // Function TBP_FeralSenses_Component.TBP_FeralSenses_Component_C.FadeInSetup1 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateHeightenedSenses(); // Function TBP_FeralSenses_Component.TBP_FeralSenses_Component_C.UpdateHeightenedSenses // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FinishHeightenedSenses(); // Function TBP_FeralSenses_Component.TBP_FeralSenses_Component_C.FinishHeightenedSenses // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetOwnersBloodScanPostFX(struct UPostProcessComponent* BloodScanPostFX); // Function TBP_FeralSenses_Component.TBP_FeralSenses_Component_C.GetOwnersBloodScanPostFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetOwnersHeartScan(struct UParticleSystemComponent* Heart Scan Effect Plane); // Function TBP_FeralSenses_Component.TBP_FeralSenses_Component_C.GetOwnersHeartScan // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void OnActivateHeightenedSenses(); // Function TBP_FeralSenses_Component.TBP_FeralSenses_Component_C.OnActivateHeightenedSenses // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnDeactivateHeightenedSenses(); // Function TBP_FeralSenses_Component.TBP_FeralSenses_Component_C.OnDeactivateHeightenedSenses // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_FeralSenses_Component.TBP_FeralSenses_Component_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ReceiveTick(float DeltaSeconds); // Function TBP_FeralSenses_Component.TBP_FeralSenses_Component_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_FeralSenses_Component(int32_t EntryPoint); // Function TBP_FeralSenses_Component.TBP_FeralSenses_Component_C.ExecuteUbergraph_TBP_FeralSenses_Component // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

