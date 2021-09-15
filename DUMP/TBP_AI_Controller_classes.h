// BlueprintGeneratedClass TBP_AI_Controller.TBP_AI_Controller_C
// Size: 0x4b0 (Inherited: 0x498)
struct ATBP_AI_Controller_C : ATigerAIController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x498(0x08)
	struct UAIPerceptionComponent* AIPerception; // 0x4a0(0x08)
	struct FName SelfKey; // 0x4a8(0x08)

	void DebugStimulus(struct FAIStimulus Stimulus); // Function TBP_AI_Controller.TBP_AI_Controller_C.DebugStimulus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HandleNonVampireStimulus(struct FAIStimulus Stimulus); // Function TBP_AI_Controller.TBP_AI_Controller_C.HandleNonVampireStimulus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SyncKeysFromBlackboard(); // Function TBP_AI_Controller.TBP_AI_Controller_C.SyncKeysFromBlackboard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InitBlackBoardBB_Police(); // Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardBB_Police // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InitBlackBoardBB_Civilian(); // Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardBB_Civilian // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InitBlackBoardBB_Entity(); // Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardBB_Entity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InitBlackBoardValues(enum class ETigerNPCType NPC Type); // Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_AI_Controller.TBP_AI_Controller_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(struct AActor* Actor, struct FAIStimulus Stimulus); // Function TBP_AI_Controller.TBP_AI_Controller_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function TBP_AI_Controller.TBP_AI_Controller_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void SetupData(enum class ETigerNPCType InNPCType); // Function TBP_AI_Controller.TBP_AI_Controller_C.SetupData // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_AI_Controller(int32_t EntryPoint); // Function TBP_AI_Controller.TBP_AI_Controller_C.ExecuteUbergraph_TBP_AI_Controller // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

