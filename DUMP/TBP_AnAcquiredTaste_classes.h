// BlueprintGeneratedClass TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C
// Size: 0xcc (Inherited: 0xc0)
struct UTBP_AnAcquiredTaste_C : UTigerPassiveComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	int32_t Stacks; // 0xc8(0x04)

	void OnCreated(struct ATigerPlayer* InPlayer, bool InHasAuthority); // Function TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C.OnCreated // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerEvent(enum class ETigerPlayerEvent Event, struct ATigerCharacter* EventTiedCharacter); // Function TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C.OnPlayerEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_AnAcquiredTaste(int32_t EntryPoint); // Function TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C.ExecuteUbergraph_TBP_AnAcquiredTaste // (Final|UbergraphFunction) // @ game+0x16c0340
};

