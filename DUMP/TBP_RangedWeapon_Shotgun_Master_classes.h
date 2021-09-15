// BlueprintGeneratedClass TBP_RangedWeapon_Shotgun_Master.TBP_RangedWeapon_Shotgun_Master_C
// Size: 0x214 (Inherited: 0x201)
struct UTBP_RangedWeapon_Shotgun_Master_C : UTBP_RangedWeapon_Master_C {
	char pad_201[0x3]; // 0x201(0x03)
	struct FVector SpreadOfCurrentShot_1; // 0x204(0x0c)
	int32_t ShotIndex; // 0x210(0x04)

	void Demo(struct FVector AimDirection, struct FTigerRangedRandomState RandomState, int32_t BulletIndex, struct UTigerRangedWeaponComponent* RangedWeaponComponent, float NoiseMagnitudeInDegrees, struct FVector OutDirection); // Function TBP_RangedWeapon_Shotgun_Master.TBP_RangedWeapon_Shotgun_Master_C.Demo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FVector CalculateBulletDirection(struct FVector InAimDirection, struct FTigerRangedRandomState InOutRandomState, int32_t InBulletIndex, struct UTigerRangedWeaponComponent* InRangedWeaponComponent); // Function TBP_RangedWeapon_Shotgun_Master.TBP_RangedWeapon_Shotgun_Master_C.CalculateBulletDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

