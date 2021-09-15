// BlueprintGeneratedClass TBP_BlindingBeauty.TBP_BlindingBeauty_C
// Size: 0x2a1 (Inherited: 0x238)
struct ATBP_BlindingBeauty_C : ATigerBlindingBeautyEffectActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UPostProcessComponent* PostProcess; // 0x240(0x08)
	struct USphereComponent* Sphere; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	float UpdateAnticipationVisibility_NewTrack_0_F0F03A1D44C8206BF3C18B8D5DDCCB03; // 0x258(0x04)
	enum class ETimelineDirection UpdateAnticipationVisibility__Direction_F0F03A1D44C8206BF3C18B8D5DDCCB03; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct UTimelineComponent* UpdateAnticipationVisibility; // 0x260(0x08)
	float Timeline_0_NewTrack_0_975FED8B458A734F1FB99DAE89CB25E3; // 0x268(0x04)
	enum class ETimelineDirection Timeline_0__Direction_975FED8B458A734F1FB99DAE89CB25E3; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x270(0x08)
	float GlowCurve_NewTrack_0_50A9B99C47A6E2549D5E76977AAB52D1; // 0x278(0x04)
	enum class ETimelineDirection GlowCurve__Direction_50A9B99C47A6E2549D5E76977AAB52D1; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* GlowCurve; // 0x280(0x08)
	struct FVector AreaSize; // 0x288(0x0c)
	bool IsInDash; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UParticleSystemComponent* NewVar_1; // 0x298(0x08)
	bool AnticipationPhase; // 0x2a0(0x01)

	void GlowCurve__FinishedFunc(); // Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.GlowCurve__FinishedFunc // (BlueprintEvent) // @ game+0x16c0340
	void GlowCurve__UpdateFunc(); // Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.GlowCurve__UpdateFunc // (BlueprintEvent) // @ game+0x16c0340
	void Timeline_0__FinishedFunc(); // Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x16c0340
	void Timeline_0__UpdateFunc(); // Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x16c0340
	void UpdateAnticipationVisibility__FinishedFunc(); // Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.UpdateAnticipationVisibility__FinishedFunc // (BlueprintEvent) // @ game+0x16c0340
	void UpdateAnticipationVisibility__UpdateFunc(); // Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.UpdateAnticipationVisibility__UpdateFunc // (BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnDashEnter(); // Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.OnDashEnter // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnDashExit(bool bInShouldTrigger); // Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.OnDashExit // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_BlindingBeauty(int32_t EntryPoint); // Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.ExecuteUbergraph_TBP_BlindingBeauty // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

