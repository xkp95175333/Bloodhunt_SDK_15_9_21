// BlueprintGeneratedClass DefaultCycleStyle.DefaultCycleStyle_C
// Size: 0x58 (Inherited: 0x48)
struct UDefaultCycleStyle_C : UTigerWeaponCycleStyle {
	int32_t DirectionInt; // 0x48(0x04)
	int32_t OutSlot; // 0x4c(0x04)
	struct ATigerPlayerController* PlayerController; // 0x50(0x08)

	enum class ETigerWeaponSlot DetermineNextWeaponSlot(struct ATigerPlayerController* InPlayerController, enum class ETigerWeaponCycleDirection InDirection); // Function DefaultCycleStyle.DefaultCycleStyle_C.DetermineNextWeaponSlot // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

