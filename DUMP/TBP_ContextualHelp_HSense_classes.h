// BlueprintGeneratedClass TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C
// Size: 0xe0 (Inherited: 0xc4)
struct UTBP_ContextualHelp_HSense_C : UTBP_ContextualHelpBase_C {
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	float RetriggerTime; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FTimerHandle DelayTimer; // 0xd8(0x08)

	void OnHide(struct ATigerPlayerController* InTigerPlayerController); // Function TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C.OnHide // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerSpawned(struct ATigerPlayer* InTigerPlayer); // Function TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C.OnPlayerSpawned // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnHeightenedSensesUsed(bool bIsNowActive); // Function TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C.OnHeightenedSensesUsed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ResetWantsToShow(); // Function TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C.ResetWantsToShow // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ResetWantsToShowDelayed(); // Function TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C.ResetWantsToShowDelayed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ContextualHelp_HSense(int32_t EntryPoint); // Function TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C.ExecuteUbergraph_TBP_ContextualHelp_HSense // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

