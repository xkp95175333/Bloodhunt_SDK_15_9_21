// BlueprintGeneratedClass TBP_Buff_SpeedUp.TBP_Buff_SpeedUp_C
// Size: 0x284 (Inherited: 0x270)
struct UTBP_Buff_SpeedUp_C : UTigerBuff {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FVector SpeedColor; // 0x278(0x0c)

	void OnActivated(struct ATigerCharacter* InBuffOwner, struct ATigerCharacter* InBuffCaster); // Function TBP_Buff_SpeedUp.TBP_Buff_SpeedUp_C.OnActivated // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnDeactivated(struct ATigerCharacter* InBuffOwner, struct ATigerCharacter* InBuffCaster); // Function TBP_Buff_SpeedUp.TBP_Buff_SpeedUp_C.OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_Buff_SpeedUp(int32_t EntryPoint); // Function TBP_Buff_SpeedUp.TBP_Buff_SpeedUp_C.ExecuteUbergraph_TBP_Buff_SpeedUp // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

