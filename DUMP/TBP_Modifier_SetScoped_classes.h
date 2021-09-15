// BlueprintGeneratedClass TBP_Modifier_SetScoped.TBP_Modifier_SetScoped_C
// Size: 0x41 (Inherited: 0x28)
struct UTBP_Modifier_SetScoped_C : UTigerRangedWeaponModModifier {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x28(0x08)
	bool bIsScoped; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UTigerWeaponCrosshairWidget* CrossHairWidget; // 0x38(0x08)
	bool bAppliedWidget; // 0x40(0x01)

	void OnModEquipped(struct UTigerEquippedModModifierValues* Modifiers); // Function TBP_Modifier_SetScoped.TBP_Modifier_SetScoped_C.OnModEquipped // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnModUnequipped(struct UTigerEquippedModModifierValues* Modifiers); // Function TBP_Modifier_SetScoped.TBP_Modifier_SetScoped_C.OnModUnequipped // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_Modifier_SetScoped(int32_t EntryPoint); // Function TBP_Modifier_SetScoped.TBP_Modifier_SetScoped_C.ExecuteUbergraph_TBP_Modifier_SetScoped // (Final|UbergraphFunction) // @ game+0x16c0340
};

