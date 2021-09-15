// BlueprintGeneratedClass TBP_ContextualHelp_RedGas.TBP_ContextualHelp_RedGas_C
// Size: 0xd0 (Inherited: 0xc4)
struct UTBP_ContextualHelp_RedGas_C : UTBP_ContextualHelpBase_C {
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnPlayerSpawned(struct ATigerPlayer* InTigerPlayer); // Function TBP_ContextualHelp_RedGas.TBP_ContextualHelp_RedGas_C.OnPlayerSpawned // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnGasDamageTaken(); // Function TBP_ContextualHelp_RedGas.TBP_ContextualHelp_RedGas_C.OnGasDamageTaken // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ContextualHelp_RedGas(int32_t EntryPoint); // Function TBP_ContextualHelp_RedGas.TBP_ContextualHelp_RedGas_C.ExecuteUbergraph_TBP_ContextualHelp_RedGas // (Final|UbergraphFunction) // @ game+0x16c0340
};

