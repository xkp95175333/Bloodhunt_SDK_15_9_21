// BlueprintGeneratedClass TBP_XP_FeedingHighPotenceBlood.TBP_XP_FeedingHighPotenceBlood_C
// Size: 0x58 (Inherited: 0x50)
struct UTBP_XP_FeedingHighPotenceBlood_C : UTigerExperienceEvent {
	float MultpliyerPerLevel; // 0x50(0x04)
	float FlatBonus; // 0x54(0x04)

	void GetExperienceAmount(struct ATigerPlayer* Player, struct ATigerCharacter* EventTiedCharacter, enum class EMatchBalanceMode BalanceMode, int32_t OutOwnPlayerExperienceGain, int32_t OutExperienceToAddToEveryGroupMemberIncludingSelf); // Function TBP_XP_FeedingHighPotenceBlood.TBP_XP_FeedingHighPotenceBlood_C.GetExperienceAmount // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
};

