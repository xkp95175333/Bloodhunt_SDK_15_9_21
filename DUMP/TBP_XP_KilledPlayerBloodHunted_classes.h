// BlueprintGeneratedClass TBP_XP_KilledPlayerBloodHunted.TBP_XP_KilledPlayerBloodHunted_C
// Size: 0x5c (Inherited: 0x50)
struct UTBP_XP_KilledPlayerBloodHunted_C : UTigerExperienceEvent {
	float XpPerLevelOfDiablorizer; // 0x50(0x04)
	float ExperienceTakenFromVictimMultipiyer; // 0x54(0x04)
	float FlatExperienceeBonus; // 0x58(0x04)

	void GetExperienceAmount(struct ATigerPlayer* Player, struct ATigerCharacter* EventTiedCharacter, enum class EMatchBalanceMode BalanceMode, int32_t OutOwnPlayerExperienceGain, int32_t OutExperienceToAddToEveryGroupMemberIncludingSelf); // Function TBP_XP_KilledPlayerBloodHunted.TBP_XP_KilledPlayerBloodHunted_C.GetExperienceAmount // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
};

