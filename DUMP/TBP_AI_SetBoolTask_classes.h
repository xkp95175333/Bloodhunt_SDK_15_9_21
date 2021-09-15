// BlueprintGeneratedClass TBP_AI_SetBoolTask.TBP_AI_SetBoolTask_C
// Size: 0xd9 (Inherited: 0xa8)
struct UTBP_AI_SetBoolTask_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector BlackboardKey; // 0xb0(0x28)
	bool Value; // 0xd8(0x01)

	void ReceiveExecute(struct AActor* OwnerActor); // Function TBP_AI_SetBoolTask.TBP_AI_SetBoolTask_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function TBP_AI_SetBoolTask.TBP_AI_SetBoolTask_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_AI_SetBoolTask(int32_t EntryPoint); // Function TBP_AI_SetBoolTask.TBP_AI_SetBoolTask_C.ExecuteUbergraph_TBP_AI_SetBoolTask // (Final|UbergraphFunction) // @ game+0x16c0340
};

