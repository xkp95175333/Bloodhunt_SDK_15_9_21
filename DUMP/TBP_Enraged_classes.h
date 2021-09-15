// BlueprintGeneratedClass TBP_Enraged.TBP_Enraged_C
// Size: 0x24c (Inherited: 0x230)
struct ATBP_Enraged_C : ATigerEnragedEffectActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UParticleSystemComponent* RegeneratingEmitter; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	int32_t EnrageAkEventID; // 0x248(0x04)

	void PlayEnrageAudio(); // Function TBP_Enraged.TBP_Enraged_C.PlayEnrageAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void StopEnrageAudio(); // Function TBP_Enraged.TBP_Enraged_C.StopEnrageAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnRegenStarted(); // Function TBP_Enraged.TBP_Enraged_C.OnRegenStarted // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnRegenStopped(); // Function TBP_Enraged.TBP_Enraged_C.OnRegenStopped // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function TBP_Enraged.TBP_Enraged_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_Enraged(int32_t EntryPoint); // Function TBP_Enraged.TBP_Enraged_C.ExecuteUbergraph_TBP_Enraged // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

