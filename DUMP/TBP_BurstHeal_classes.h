// BlueprintGeneratedClass TBP_BurstHeal.TBP_BurstHeal_C
// Size: 0xcc (Inherited: 0xc0)
struct UTBP_BurstHeal_C : UTigerPassiveComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	float PulseHealMultiplier; // 0xc8(0x04)

	void OnCreated(struct ATigerPlayer* InPlayer, bool InHasAuthority); // Function TBP_BurstHeal.TBP_BurstHeal_C.OnCreated // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Character Action(enum class ETigerCharacterAction InCharacterAction); // Function TBP_BurstHeal.TBP_BurstHeal_C.Character Action // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_BurstHeal(int32_t EntryPoint); // Function TBP_BurstHeal.TBP_BurstHeal_C.ExecuteUbergraph_TBP_BurstHeal // (Final|UbergraphFunction) // @ game+0x16c0340
};

