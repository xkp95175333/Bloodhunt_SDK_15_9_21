// BlueprintGeneratedClass TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C
// Size: 0x101 (Inherited: 0xe8)
struct UTBP_ScoutingFamiliarPassive_C : UTigerFamiliarScoutPassive {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct ATigerFamiliarScout* Scout; // 0xf0(0x08)
	bool Replicated Passive Activated; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float TimeStart; // 0xfc(0x04)
	bool bParticleVisibility; // 0x100(0x01)

	void OnRep_Replicated Passive Activated(); // Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.OnRep_Replicated Passive Activated // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct UParticleSystemComponent* CreateOrbitingParticles(); // Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.CreateOrbitingParticles // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ScoutSpawned(struct ATigerFamiliarScout* SpawnedScout); // Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.ScoutSpawned // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Scout Destroyed(struct AActor* DestroyedActor); // Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.Scout Destroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Begin Fade Out(); // Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.Begin Fade Out // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Begin Fade In(); // Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.Begin Fade In // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void EvaluateVisibility(); // Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.EvaluateVisibility // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ScoutingFamiliarPassive(int32_t EntryPoint); // Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.ExecuteUbergraph_TBP_ScoutingFamiliarPassive // (Final|UbergraphFunction) // @ game+0x16c0340
};

