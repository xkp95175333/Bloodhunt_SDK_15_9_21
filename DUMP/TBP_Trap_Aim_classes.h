// BlueprintGeneratedClass TBP_Trap_Aim.TBP_Trap_Aim_C
// Size: 0x248 (Inherited: 0x228)
struct ATBP_Trap_Aim_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct USpotLightComponent* TrapLightTop; // 0x230(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void IsCharacterFriendlyWithDisciplineCaster(struct ATigerCharacter* OtherCharacter, bool Is Friendly); // Function TBP_Trap_Aim.TBP_Trap_Aim_C.IsCharacterFriendlyWithDisciplineCaster // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_Trap_Aim.TBP_Trap_Aim_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_Trap_Aim(int32_t EntryPoint); // Function TBP_Trap_Aim.TBP_Trap_Aim_C.ExecuteUbergraph_TBP_Trap_Aim // (Final|UbergraphFunction) // @ game+0x16c0340
};

