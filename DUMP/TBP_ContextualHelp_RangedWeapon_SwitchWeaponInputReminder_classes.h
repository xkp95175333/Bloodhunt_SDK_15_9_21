// BlueprintGeneratedClass TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder.TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C
// Size: 0xd0 (Inherited: 0xc4)
struct UTBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C : UTBP_ContextualHelpBase_C {
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnPlayerSpawned(struct ATigerPlayer* InTigerPlayer); // Function TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder.TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C.OnPlayerSpawned // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void RangedWeaponPickedUp(); // Function TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder.TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C.RangedWeaponPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ItemPickedUp(struct UTigerItemAsset* Item, int32_t Count); // Function TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder.TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C.ItemPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder(int32_t EntryPoint); // Function TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder.TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C.ExecuteUbergraph_TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder // (Final|UbergraphFunction) // @ game+0x16c0340
};

