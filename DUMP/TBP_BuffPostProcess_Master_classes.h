// BlueprintGeneratedClass TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C
// Size: 0x261 (Inherited: 0x238)
struct ATBP_BuffPostProcess_Master_C : ATigerBuffPostProcess {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UCurveFloat* VisibilityCurve; // 0x240(0x08)
	float CurrentDuration; // 0x248(0x04)
	float TotalDuration; // 0x24c(0x04)
	float CurrentHideDuration; // 0x250(0x04)
	float TotalHideDuration; // 0x254(0x04)
	int32_t CurrentlyShownID; // 0x258(0x04)
	float AdditionalDuration; // 0x25c(0x04)
	bool UseHideDuration; // 0x260(0x01)

	void SetParameters(float NormalizedDuration); // Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.SetParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Refresh(float NewDuration); // Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Remove(); // Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.Remove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Initialize(int32_t BuffID, float TotalDuration); // Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveTick(float DeltaSeconds); // Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void UpdateDuration(); // Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.UpdateDuration // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_BuffPostProcess_Master(int32_t EntryPoint); // Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.ExecuteUbergraph_TBP_BuffPostProcess_Master // (Final|UbergraphFunction) // @ game+0x16c0340
};

