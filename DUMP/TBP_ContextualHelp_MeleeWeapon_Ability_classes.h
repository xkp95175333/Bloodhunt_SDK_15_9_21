// BlueprintGeneratedClass TBP_ContextualHelp_MeleeWeapon_Ability.TBP_ContextualHelp_MeleeWeapon_Ability_C
// Size: 0xd0 (Inherited: 0xc4)
struct UTBP_ContextualHelp_MeleeWeapon_Ability_C : UTBP_ContextualHelpBase_C {
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnPlayerSpawned(struct ATigerPlayer* InTigerPlayer); // Function TBP_ContextualHelp_MeleeWeapon_Ability.TBP_ContextualHelp_MeleeWeapon_Ability_C.OnPlayerSpawned // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void MeleeWeaponEquipped(); // Function TBP_ContextualHelp_MeleeWeapon_Ability.TBP_ContextualHelp_MeleeWeapon_Ability_C.MeleeWeaponEquipped // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void NonMeleeWeaponEquipped(); // Function TBP_ContextualHelp_MeleeWeapon_Ability.TBP_ContextualHelp_MeleeWeapon_Ability_C.NonMeleeWeaponEquipped // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ContextualHelp_MeleeWeapon_Ability(int32_t EntryPoint); // Function TBP_ContextualHelp_MeleeWeapon_Ability.TBP_ContextualHelp_MeleeWeapon_Ability_C.ExecuteUbergraph_TBP_ContextualHelp_MeleeWeapon_Ability // (Final|UbergraphFunction) // @ game+0x16c0340
};

