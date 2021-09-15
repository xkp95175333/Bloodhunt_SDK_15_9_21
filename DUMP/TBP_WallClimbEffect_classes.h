// BlueprintGeneratedClass TBP_WallClimbEffect.TBP_WallClimbEffect_C
// Size: 0x30 (Inherited: 0x28)
struct UTBP_WallClimbEffect_C : UTigerCharacterEffect {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x28(0x08)

	void HandleVFX(struct UObject* WorldContextObject, struct UParticleSystem* ParticleSystem, struct UMaterialInterface* Decal, struct FVector VFXLocation, struct FRotator ParticleRotation, struct FRotator DecalRotation); // Function TBP_WallClimbEffect.TBP_WallClimbEffect_C.HandleVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ApplyWithSocket(struct ATigerCharacter* Character, struct FName SocketName); // Function TBP_WallClimbEffect.TBP_WallClimbEffect_C.ApplyWithSocket // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_WallClimbEffect(int32_t EntryPoint); // Function TBP_WallClimbEffect.TBP_WallClimbEffect_C.ExecuteUbergraph_TBP_WallClimbEffect // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

