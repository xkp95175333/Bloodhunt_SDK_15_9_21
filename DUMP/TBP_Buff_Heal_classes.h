// BlueprintGeneratedClass TBP_Buff_Heal.TBP_Buff_Heal_C
// Size: 0x27c (Inherited: 0x270)
struct UTBP_Buff_Heal_C : UTigerBuff {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	float In Heal Amount; // 0x278(0x04)

	void OnActivated(struct ATigerCharacter* InBuffOwner, struct ATigerCharacter* InBuffCaster); // Function TBP_Buff_Heal.TBP_Buff_Heal_C.OnActivated // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnDeactivated(struct ATigerCharacter* InBuffOwner, struct ATigerCharacter* InBuffCaster); // Function TBP_Buff_Heal.TBP_Buff_Heal_C.OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_Buff_Heal(int32_t EntryPoint); // Function TBP_Buff_Heal.TBP_Buff_Heal_C.ExecuteUbergraph_TBP_Buff_Heal // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

