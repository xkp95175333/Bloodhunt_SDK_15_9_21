// BlueprintGeneratedClass TBP_ContextualHelp_Consumable_Prevented.TBP_ContextualHelp_Consumable_Prevented_C
// Size: 0x118 (Inherited: 0xc4)
struct UTBP_ContextualHelp_Consumable_Prevented_C : UTBP_ContextualHelpBase_C {
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	struct FText ArmorContext; // 0xd0(0x18)
	struct FText BloodBagContext; // 0xe8(0x18)
	struct FText DefaultContext; // 0x100(0x18)

	void OnPlayerSpawned(struct ATigerPlayer* InTigerPlayer); // Function TBP_ContextualHelp_Consumable_Prevented.TBP_ContextualHelp_Consumable_Prevented_C.OnPlayerSpawned // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnConsumablePrevented(struct UTigerConsumableAsset* Consumable); // Function TBP_ContextualHelp_Consumable_Prevented.TBP_ContextualHelp_Consumable_Prevented_C.OnConsumablePrevented // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ContextualHelp_Consumable_Prevented(int32_t EntryPoint); // Function TBP_ContextualHelp_Consumable_Prevented.TBP_ContextualHelp_Consumable_Prevented_C.ExecuteUbergraph_TBP_ContextualHelp_Consumable_Prevented // (Final|UbergraphFunction) // @ game+0x16c0340
};

