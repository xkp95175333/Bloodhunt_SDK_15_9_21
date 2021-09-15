// BlueprintGeneratedClass TBP_MatchMaker.TBP_MatchMaker_C
// Size: 0x164 (Inherited: 0x158)
struct UTBP_MatchMaker_C : UTigerInteractiveNpcComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	float WelcomeSoundDelay; // 0x160(0x04)

	void ReceiveBeginPlay(); // Function TBP_MatchMaker.TBP_MatchMaker_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function TBP_MatchMaker.TBP_MatchMaker_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnCountdownBegin(); // Function TBP_MatchMaker.TBP_MatchMaker_C.OnCountdownBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnTitleScreenClosed(); // Function TBP_MatchMaker.TBP_MatchMaker_C.OnTitleScreenClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_MatchMaker(int32_t EntryPoint); // Function TBP_MatchMaker.TBP_MatchMaker_C.ExecuteUbergraph_TBP_MatchMaker // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

