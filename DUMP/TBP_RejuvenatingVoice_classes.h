// BlueprintGeneratedClass TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C
// Size: 0x144 (Inherited: 0x138)
struct UTBP_RejuvenatingVoice_C : UTigerDisciplineRejuvenatingVoice {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	float HealRadius; // 0x140(0x04)

	void OnPlayerEnter(struct ATigerPlayer* InPlayer); // Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnPlayerEnter // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerExit(struct ATigerPlayer* InPlayer); // Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnPlayerExit // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnHealStart(); // Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnHealStart // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnHealStop(); // Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnHealStop // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnHealPulse(bool bInOnProjection); // Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnHealPulse // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_RejuvenatingVoice(int32_t EntryPoint); // Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.ExecuteUbergraph_TBP_RejuvenatingVoice // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

