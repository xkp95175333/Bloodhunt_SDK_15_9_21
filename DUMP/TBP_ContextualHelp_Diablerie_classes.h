// BlueprintGeneratedClass TBP_ContextualHelp_Diablerie.TBP_ContextualHelp_Diablerie_C
// Size: 0xd0 (Inherited: 0xc4)
struct UTBP_ContextualHelp_Diablerie_C : UTBP_ContextualHelpBase_C {
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void SetupTriggerConditions(struct FTigerContextualHelpContext InContext); // Function TBP_ContextualHelp_Diablerie.TBP_ContextualHelp_Diablerie_C.SetupTriggerConditions // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnClientDownedEnemyPlayer(struct ATigerPlayer* InPlayer); // Function TBP_ContextualHelp_Diablerie.TBP_ContextualHelp_Diablerie_C.OnClientDownedEnemyPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnEnemyLifeStatusChanged(enum class ETigerPlayerLifeStatus NewLifeStatus); // Function TBP_ContextualHelp_Diablerie.TBP_ContextualHelp_Diablerie_C.OnEnemyLifeStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ContextualHelp_Diablerie(int32_t EntryPoint); // Function TBP_ContextualHelp_Diablerie.TBP_ContextualHelp_Diablerie_C.ExecuteUbergraph_TBP_ContextualHelp_Diablerie // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

