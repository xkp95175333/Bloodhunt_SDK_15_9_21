// BlueprintGeneratedClass TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C
// Size: 0x240 (Inherited: 0x228)
struct ATBP_ShockwaveWallTrail_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UParticleSystemComponent* ParticleSystem trail; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)

	void StopSpawningParticles(); // Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.StopSpawningParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ReceiveTick(float DeltaSeconds); // Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ShockwaveWallTrail(int32_t EntryPoint); // Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.ExecuteUbergraph_TBP_ShockwaveWallTrail // (Final|UbergraphFunction) // @ game+0x16c0340
};

