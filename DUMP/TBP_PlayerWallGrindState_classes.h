// BlueprintGeneratedClass TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C
// Size: 0x1e8 (Inherited: 0x140)
struct UTBP_PlayerWallGrindState_C : UTigerTraversalWallGrindState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct TMap<struct FName, struct UParticleSystemComponent*> ParticleSystems; // 0x148(0x50)
	struct TMap<struct FName, enum class EPhysicalSurface> PhysicalMaterial; // 0x198(0x50)

	void AssignPhysicalMaterial(struct FHitResult Hit, struct FName BoneName); // Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.AssignPhysicalMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CheckForParticleSystemUpdate(struct FName BoneName, struct FHitResult HitResult, struct ACharacter* Character); // Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.CheckForParticleSystemUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DestroyParticleSystem(struct FName BoneName); // Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.DestroyParticleSystem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateParticleSystem(struct FName BoneName, struct FHitResult HitResult, struct ACharacter* Character); // Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.CreateParticleSystem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void StartEffect(struct FName InAssociatedBoneName, struct FHitResult InHitResult, struct ATigerCharacter* InTigerCharacter); // Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.StartEffect // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void StopEffect(struct FName InAssociatedBoneName, struct ATigerCharacter* InTigerCharacter); // Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.StopEffect // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void UpdateEffect(struct FName InAssociatedBoneName, struct FHitResult InHitResult, struct ATigerCharacter* InTigerCharacter); // Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.UpdateEffect // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_PlayerWallGrindState(int32_t EntryPoint); // Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.ExecuteUbergraph_TBP_PlayerWallGrindState // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

