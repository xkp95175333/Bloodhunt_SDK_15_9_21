// BlueprintGeneratedClass TBP_StakeProjectile.TBP_StakeProjectile_C
// Size: 0x3e0 (Inherited: 0x3d5)
struct ATBP_StakeProjectile_C : ATBP_BulletProjectile_C {
	char pad_3D5[0x3]; // 0x3d5(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)

	void HandleParticlesSpawning(struct FVector Impact Point, struct FRotator Rotation, enum class EPhysicalSurface Surface Type, struct UPrimitiveComponent* Potential Scene Component); // Function TBP_StakeProjectile.TBP_StakeProjectile_C.HandleParticlesSpawning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_StakeProjectile.TBP_StakeProjectile_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_StakeProjectile(int32_t EntryPoint); // Function TBP_StakeProjectile.TBP_StakeProjectile_C.ExecuteUbergraph_TBP_StakeProjectile // (Final|UbergraphFunction) // @ game+0x16c0340
};

