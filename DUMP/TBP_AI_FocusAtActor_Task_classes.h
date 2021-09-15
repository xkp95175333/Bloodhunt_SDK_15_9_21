// BlueprintGeneratedClass TBP_AI_FocusAtActor_Task.TBP_AI_FocusAtActor_Task_C
// Size: 0xd9 (Inherited: 0xa8)
struct UTBP_AI_FocusAtActor_Task_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector FocusActorKey; // 0xb0(0x28)
	bool ShouldClearValue; // 0xd8(0x01)

	void ReceiveExecute(struct AActor* OwnerActor); // Function TBP_AI_FocusAtActor_Task.TBP_AI_FocusAtActor_Task_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_AI_FocusAtActor_Task(int32_t EntryPoint); // Function TBP_AI_FocusAtActor_Task.TBP_AI_FocusAtActor_Task_C.ExecuteUbergraph_TBP_AI_FocusAtActor_Task // (Final|UbergraphFunction) // @ game+0x16c0340
};

