// BlueprintGeneratedClass TBP_BulletProjectile.TBP_BulletProjectile_C
// Size: 0x3d5 (Inherited: 0x2d0)
struct ATBP_BulletProjectile_C : ATigerProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UMaterialInstanceDynamic* Decal_Concrete; // 0x2d8(0x08)
	struct FVector StartPosition; // 0x2e0(0x0c)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct FSoftObjectPath NiagaraTrailPath; // 0x2f0(0x18)
	struct FSoftObjectPath RemoteNiagaraTrailPath; // 0x308(0x18)
	struct UNiagaraSystem* CachedTrailEffect; // 0x320(0x08)
	struct FVector StartVelocity; // 0x328(0x0c)
	struct FVector LastTraceLocation; // 0x334(0x0c)
	int32_t TotalTraces; // 0x340(0x04)
	struct FVector TraceEndLocation; // 0x344(0x0c)
	struct FLinearColor TraceColor; // 0x350(0x10)
	float SmokeWidth; // 0x360(0x04)
	float SmokeLifetime; // 0x364(0x04)
	float SmokeVisibility; // 0x368(0x04)
	float DotSize; // 0x36c(0x04)
	float SmokeCurlAmount; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct TMap<enum class EPhysicalSurface, struct FName> SurfaceToAudioName; // 0x378(0x50)
	float TraceLifetime; // 0x3c8(0x04)
	float TraceWidth; // 0x3cc(0x04)
	int32_t FlyByAkEventID; // 0x3d0(0x04)
	bool HasSmokeTrail; // 0x3d4(0x01)

	void TriggerEffects(struct UPhysicalMaterial* PhysMaterial, struct FVector ImpactPoint, struct UPrimitiveComponent* Hit Component, struct FVector Normal, struct FVector ProjectileDirection); // Function TBP_BulletProjectile.TBP_BulletProjectile_C.TriggerEffects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HandleParticlesSpawning(struct FVector Impact Point, struct FRotator Rotation, enum class EPhysicalSurface Surface Type, struct UPrimitiveComponent* Potential Scene Component); // Function TBP_BulletProjectile.TBP_BulletProjectile_C.HandleParticlesSpawning // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HandleDecalSpawning(struct FVector WorldLocation, struct FRotator WorldRotation, struct UPrimitiveComponent* Potential Scene Component, enum class EPhysicalSurface Surface Type); // Function TBP_BulletProjectile.TBP_BulletProjectile_C.HandleDecalSpawning // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TryPlayHitWallSound(struct UPrimitiveComponent* Hit Component); // Function TBP_BulletProjectile.TBP_BulletProjectile_C.TryPlayHitWallSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_BulletProjectile.TBP_BulletProjectile_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void TriggerHitEffects(struct FHitResult Hit); // Function TBP_BulletProjectile.TBP_BulletProjectile_C.TriggerHitEffects // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void ReceiveTick(float DeltaSeconds); // Function TBP_BulletProjectile.TBP_BulletProjectile_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnReactivate(); // Function TBP_BulletProjectile.TBP_BulletProjectile_C.OnReactivate // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_BulletProjectile(int32_t EntryPoint); // Function TBP_BulletProjectile.TBP_BulletProjectile_C.ExecuteUbergraph_TBP_BulletProjectile // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

