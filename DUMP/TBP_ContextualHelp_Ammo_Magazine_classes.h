// BlueprintGeneratedClass TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C
// Size: 0xd0 (Inherited: 0xc4)
struct UTBP_ContextualHelp_Ammo_Magazine_C : UTBP_ContextualHelpBase_C {
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnPlayerSpawned(struct ATigerPlayer* InTigerPlayer); // Function TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C.OnPlayerSpawned // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void CheckLowAmmo(); // Function TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C.CheckLowAmmo // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReloadStarted(); // Function TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C.ReloadStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RangedWeaponEquipped(); // Function TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C.RangedWeaponEquipped // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void MeleeWeaponEquipped(); // Function TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C.MeleeWeaponEquipped // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ContextualHelp_Ammo_Magazine(int32_t EntryPoint); // Function TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C.ExecuteUbergraph_TBP_ContextualHelp_Ammo_Magazine // (Final|UbergraphFunction) // @ game+0x16c0340
};

