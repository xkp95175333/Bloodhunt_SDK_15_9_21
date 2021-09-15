// BlueprintGeneratedClass TBP_Buff_Syringe.TBP_Buff_Syringe_C
// Size: 0x288 (Inherited: 0x280)
struct UTBP_Buff_Syringe_C : UTigerHealingBuff {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)

	void OnActivated(struct ATigerCharacter* InBuffOwner, struct ATigerCharacter* InBuffCaster); // Function TBP_Buff_Syringe.TBP_Buff_Syringe_C.OnActivated // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnDeactivated(struct ATigerCharacter* InBuffOwner, struct ATigerCharacter* InBuffCaster); // Function TBP_Buff_Syringe.TBP_Buff_Syringe_C.OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_Buff_Syringe(int32_t EntryPoint); // Function TBP_Buff_Syringe.TBP_Buff_Syringe_C.ExecuteUbergraph_TBP_Buff_Syringe // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

