// BlueprintGeneratedClass TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C
// Size: 0x304 (Inherited: 0x2b0)
struct ATBP_ExaminableProp_Template_C : ATigerInteractiveGrimoireProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct USphereComponent* OutlineUpdateVolume; // 0x2b8(0x08)
	struct UStaticMeshComponent* OutlineBillboard; // 0x2c0(0x08)
	float OutlineMeshExtraWidth; // 0x2c8(0x04)
	float OutlineStrength; // 0x2cc(0x04)
	float OutlineDrawDistance; // 0x2d0(0x04)
	float OutlineScaleMultiplier; // 0x2d4(0x04)
	struct FVector OutlineColorShiftRange; // 0x2d8(0x0c)
	struct FLinearColor OutlineColor1; // 0x2e4(0x10)
	struct FLinearColor OutlineColor2; // 0x2f4(0x10)

	void SetToolTipText(); // Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetToolTipText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetDrawDistance(); // Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetDrawDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetCustomPrimitiveData(); // Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetCustomPrimitiveData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ValidateEntryId(struct FString EntryId, bool IsValid); // Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ValidateEntryId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowGrimoireEntryInfo(struct FString Entry Id); // Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ShowGrimoireEntryInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateOutlineEffect(); // Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.UpdateOutlineEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetOutlineColor(struct FLinearColor Color); // Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetOutlineColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetOutlineBillboardScale(); // Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetOutlineBillboardScale // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UserConstructionScript(); // Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void DisableHighlight(); // Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.DisableHighlight // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ReceiveTick(float DeltaSeconds); // Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OpenGrimoire(); // Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.OpenGrimoire // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnInteract(enum class EInteractiveObjectState ActivatedTrigger); // Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.OnInteract // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__OutlineUpdateVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.BndEvt__OutlineUpdateVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__OutlineUpdateVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.BndEvt__OutlineUpdateVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnLanguageChanged(); // Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.OnLanguageChanged // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ExaminableProp_Template(int32_t EntryPoint); // Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ExecuteUbergraph_TBP_ExaminableProp_Template // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

