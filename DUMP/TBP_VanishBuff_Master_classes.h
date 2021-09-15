// BlueprintGeneratedClass TBP_VanishBuff_Master.TBP_VanishBuff_Master_C
// Size: 0x298 (Inherited: 0x290)
struct UTBP_VanishBuff_Master_C : UTigerBuffVanish {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)

	void OnActivated(struct ATigerCharacter* InBuffOwner, struct ATigerCharacter* InBuffCaster); // Function TBP_VanishBuff_Master.TBP_VanishBuff_Master_C.OnActivated // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnDeactivated(struct ATigerCharacter* InBuffOwner, struct ATigerCharacter* InBuffCaster); // Function TBP_VanishBuff_Master.TBP_VanishBuff_Master_C.OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_VanishBuff_Master(int32_t EntryPoint); // Function TBP_VanishBuff_Master.TBP_VanishBuff_Master_C.ExecuteUbergraph_TBP_VanishBuff_Master // (Final|UbergraphFunction) // @ game+0x16c0340
};

