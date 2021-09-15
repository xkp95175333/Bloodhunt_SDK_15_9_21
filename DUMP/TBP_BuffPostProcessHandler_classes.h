// BlueprintGeneratedClass TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C
// Size: 0x2a8 (Inherited: 0x200)
struct UTBP_BuffPostProcessHandler_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x200(0x08)
	struct TMap<int32_t, struct ATBP_BuffPostProcess_Master_C*> ActiveList; // 0x208(0x50)
	struct TMap<int32_t, struct ATBP_BuffPostProcess_Master_C*> ActiveConsumableList; // 0x258(0x50)

	void GetConsumableBuffDuration(struct UTigerConsumableAsset* InConsumable, float OutDuration); // Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.GetConsumableBuffDuration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetConsumableID(struct UTigerConsumableAsset* InConsumable, int32_t OutID); // Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.GetConsumableID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void AddPostProcess(struct ATigerBuffPostProcess* PostProcess, float Duration, int32_t ID, struct ATBP_BuffPostProcess_Master_C* PostProcessActor); // Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.AddPostProcess // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnBuffAdded(struct UTigerBuff* Buff, int32_t ID, float Duration); // Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnBuffAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnBuffRefreshed(struct UTigerBuff* Buff, int32_t ID, float Duration); // Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnBuffRefreshed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnBuffRemoved(struct UTigerBuff* Buff, int32_t ID, float Duration); // Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnBuffRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClientBuffIdUpdated(int32_t OldId, int32_t NewId); // Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnClientBuffIdUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnUseConsumableStarted(struct UTigerConsumableAsset* Consumable); // Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnUseConsumableStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnUseConsumableFinished(struct UTigerConsumableAsset* Consumable); // Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnUseConsumableFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnUseConsumableCancelled(struct UTigerConsumableAsset* Consumable); // Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnUseConsumableCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_BuffPostProcessHandler(int32_t EntryPoint); // Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.ExecuteUbergraph_TBP_BuffPostProcessHandler // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

