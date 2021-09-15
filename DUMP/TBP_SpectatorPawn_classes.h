// BlueprintGeneratedClass TBP_SpectatorPawn.TBP_SpectatorPawn_C
// Size: 0x320 (Inherited: 0x308)
struct ATBP_SpectatorPawn_C : ATigerSpectatorPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct USceneComponent* Listener Component; // 0x310(0x08)
	struct UCameraComponent* Camera; // 0x318(0x08)

	void SetAudioListenerOverride(); // Function TBP_SpectatorPawn.TBP_SpectatorPawn_C.SetAudioListenerOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveTick(float DeltaSeconds); // Function TBP_SpectatorPawn.TBP_SpectatorPawn_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_SpectatorPawn(int32_t EntryPoint); // Function TBP_SpectatorPawn.TBP_SpectatorPawn_C.ExecuteUbergraph_TBP_SpectatorPawn // (Final|UbergraphFunction) // @ game+0x16c0340
};

