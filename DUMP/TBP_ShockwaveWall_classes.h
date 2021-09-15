// BlueprintGeneratedClass TBP_ShockwaveWall.TBP_ShockwaveWall_C
// Size: 0x30c (Inherited: 0x2c0)
struct ATBP_ShockwaveWall_C : ATigerShockwaveWall {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UParticleSystemComponent* PS_Vfx_ShockwavePunch; // 0x2c8(0x08)
	float KnockbackPitchOffsetInDegrees; // 0x2d0(0x04)
	float KnockbackForce; // 0x2d4(0x04)
	bool bShouldDrawHitboxes; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	int32_t ShockwaveWallAkEventID; // 0x2dc(0x04)
	struct ATBP_ShockwaveWallTrail_C* TrailActor; // 0x2e0(0x08)
	float ShockTrailParticleRate; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct UCurveFloat* KnockbackCurve; // 0x2f0(0x08)
	float ForceOnDynamicObjects; // 0x2f8(0x04)
	float DistancePercentTravelled; // 0x2fc(0x04)
	struct UCurveFloat* DamageCurve; // 0x300(0x08)
	float Shockwave Damage; // 0x308(0x04)

	void StrongBarrierTrait(bool isStrong); // Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.StrongBarrierTrait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	float DetermineDamageOnEnemy(struct ATigerCharacter* InEnemyCharacter); // Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.DetermineDamageOnEnemy // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
	void SlowBarrierTrait(struct ATigerCharacter* Actor); // Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.SlowBarrierTrait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayBarrierImpactPlayerAudio(); // Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.PlayBarrierImpactPlayerAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayBarrierAudio(); // Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.PlayBarrierAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void StopBarrierAudio(); // Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.StopBarrierAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void StopBarrierAudioPlayImpactAudio(); // Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.StopBarrierAudioPlayImpactAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FVector CalculateKnockbackVector(struct ATigerCharacter* InHitEnemyCharacter); // Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.CalculateKnockbackVector // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnEffectBoxOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.OnEffectBoxOverlap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ReceiveTick(float DeltaSeconds); // Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ReceiveDestroyed(); // Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnShockwaveWallDestroyed(enum class EShockwaveWallDestroyReason InDestroyReason); // Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.OnShockwaveWallDestroyed // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnCharacterHit(struct ATigerCharacter* InCharacterHit); // Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.OnCharacterHit // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ShockwaveWall(int32_t EntryPoint); // Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ExecuteUbergraph_TBP_ShockwaveWall // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

