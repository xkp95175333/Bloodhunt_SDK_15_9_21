// BlueprintGeneratedClass TBP_ElysiumPlayer.TBP_ElysiumPlayer_C
// Size: 0x1378 (Inherited: 0x1364)
struct ATBP_ElysiumPlayer_C : ATBP_Player_C {
	char pad_1364[0x4]; // 0x1364(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1368(0x08)
	struct UWidgetComponent* NameplateWidget; // 0x1370(0x08)

	void OnJoinedParty(struct FTigerParty InParty); // Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnJoinedParty // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnGotPlayerState(); // Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnGotPlayerState // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnLeftParty(struct FTigerParty InParty); // Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnLeftParty // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ElysiumPlayer(int32_t EntryPoint); // Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.ExecuteUbergraph_TBP_ElysiumPlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

