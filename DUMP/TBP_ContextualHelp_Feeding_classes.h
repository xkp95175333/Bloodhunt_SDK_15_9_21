// BlueprintGeneratedClass TBP_ContextualHelp_Feeding.TBP_ContextualHelp_Feeding_C
// Size: 0xe0 (Inherited: 0xc4)
struct UTBP_ContextualHelp_Feeding_C : UTBP_ContextualHelpBase_C {
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	float LowHealthTriggerLimit; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct ATigerPlayer* TigerPlayer; // 0xd8(0x08)

	void OnTargetInteractionChanged(enum class ETargetInteraction InInteraction); // Function TBP_ContextualHelp_Feeding.TBP_ContextualHelp_Feeding_C.OnTargetInteractionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnHealthChanged(struct ATigerPlayer* InPlayer, float InOldHealth, float InNewHealth); // Function TBP_ContextualHelp_Feeding.TBP_ContextualHelp_Feeding_C.OnHealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerSpawned(struct ATigerPlayer* InTigerPlayer); // Function TBP_ContextualHelp_Feeding.TBP_ContextualHelp_Feeding_C.OnPlayerSpawned // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ContextualHelp_Feeding(int32_t EntryPoint); // Function TBP_ContextualHelp_Feeding.TBP_ContextualHelp_Feeding_C.ExecuteUbergraph_TBP_ContextualHelp_Feeding // (Final|UbergraphFunction) // @ game+0x16c0340
};

