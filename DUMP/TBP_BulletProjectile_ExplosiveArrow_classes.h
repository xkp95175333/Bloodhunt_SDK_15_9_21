// BlueprintGeneratedClass TBP_BulletProjectile_ExplosiveArrow.TBP_BulletProjectile_ExplosiveArrow_C
// Size: 0x3e0 (Inherited: 0x3d5)
struct ATBP_BulletProjectile_ExplosiveArrow_C : ATBP_BulletProjectile_C {
	char pad_3D5[0x3]; // 0x3d5(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)

	void HandleParticlesSpawning(struct FVector Impact Point, struct FRotator Rotation, enum class EPhysicalSurface Surface Type, struct UPrimitiveComponent* Potential Scene Component); // Function TBP_BulletProjectile_ExplosiveArrow.TBP_BulletProjectile_ExplosiveArrow_C.HandleParticlesSpawning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_BulletProjectile_ExplosiveArrow(int32_t EntryPoint); // Function TBP_BulletProjectile_ExplosiveArrow.TBP_BulletProjectile_ExplosiveArrow_C.ExecuteUbergraph_TBP_BulletProjectile_ExplosiveArrow // (Final|UbergraphFunction) // @ game+0x16c0340
};

