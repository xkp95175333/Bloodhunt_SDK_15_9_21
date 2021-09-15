// BlueprintGeneratedClass TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C
// Size: 0x1f1 (Inherited: 0x198)
struct UTBP_MeleeWeapon_Master_C : UTigerMeleeWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x198(0x08)
	struct TMap<enum class ENUM_MeleeWeaponCategories, struct FName> WeaponToAudioName; // 0x1a0(0x50)
	enum class ENUM_MeleeWeaponCategories AnimMeleeWeaponCategory; // 0x1f0(0x01)

	void GetMeleeWeaponCategory(enum class ENUM_MeleeWeaponCategories MeleeWeaponCategory); // Function TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C.GetMeleeWeaponCategory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnWorldObjectHit(struct ATigerCharacter* InInstigator, struct FHitResult InWorldObjectHitResult, struct FVector InSwingDirection); // Function TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C.OnWorldObjectHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnHit(struct ATigerCharacter* Instigator, struct ATigerCharacter* Target, enum class ETigerWeaponMeleeAttackType AttackType, float Damage); // Function TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C.OnHit // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_MeleeWeapon_Master(int32_t EntryPoint); // Function TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C.ExecuteUbergraph_TBP_MeleeWeapon_Master // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

