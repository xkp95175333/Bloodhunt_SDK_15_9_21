// BlueprintGeneratedClass TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C
// Size: 0xd4 (Inherited: 0xc4)
struct UTBP_ContextualHelp_Consumable_LowHPReminder_C : UTBP_ContextualHelpBase_C {
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	float LowHealthTriggerLimit; // 0xd0(0x04)

	void OnPlayerSpawned(struct ATigerPlayer* InTigerPlayer); // Function TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C.OnPlayerSpawned // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnHealthChanged(struct ATigerPlayer* InPlayer, float InOldHealth, float InNewHealth); // Function TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C.OnHealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ContextualHelp_Consumable_LowHPReminder(int32_t EntryPoint); // Function TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C.ExecuteUbergraph_TBP_ContextualHelp_Consumable_LowHPReminder // (Final|UbergraphFunction) // @ game+0x16c0340
};

