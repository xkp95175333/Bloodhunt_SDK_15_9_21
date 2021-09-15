// BlueprintGeneratedClass TBP_XP_DownedPlayer.TBP_XP_DownedPlayer_C
// Size: 0x58 (Inherited: 0x50)
struct UTBP_XP_DownedPlayer_C : UTigerExperienceEvent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x50(0x08)

	void GetExperienceAmount(struct ATigerPlayer* Player, struct ATigerCharacter* EventTiedCharacter, enum class EMatchBalanceMode BalanceMode, int32_t OutOwnPlayerExperienceGain, int32_t OutExperienceToAddToEveryGroupMemberIncludingSelf); // Function TBP_XP_DownedPlayer.TBP_XP_DownedPlayer_C.GetExperienceAmount // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_XP_DownedPlayer(int32_t EntryPoint); // Function TBP_XP_DownedPlayer.TBP_XP_DownedPlayer_C.ExecuteUbergraph_TBP_XP_DownedPlayer // (Final|UbergraphFunction) // @ game+0x16c0340
};

