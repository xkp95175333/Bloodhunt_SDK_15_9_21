// BlueprintGeneratedClass TBP_ElysiumGameMode.TBP_ElysiumGameMode_C
// Size: 0x4e8 (Inherited: 0x4d8)
struct ATBP_ElysiumGameMode_C : ATigerElysiumGameMode {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4e0(0x08)

	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function TBP_ElysiumGameMode.TBP_ElysiumGameMode_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ElysiumGameMode(int32_t EntryPoint); // Function TBP_ElysiumGameMode.TBP_ElysiumGameMode_C.ExecuteUbergraph_TBP_ElysiumGameMode // (Final|UbergraphFunction) // @ game+0x16c0340
};

