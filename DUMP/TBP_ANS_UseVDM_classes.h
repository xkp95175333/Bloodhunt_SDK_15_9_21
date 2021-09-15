// BlueprintGeneratedClass TBP_ANS_UseVDM.TBP_ANS_UseVDM_C
// Size: 0x35 (Inherited: 0x30)
struct UTBP_ANS_UseVDM_C : UAnimNotifyState {
	int32_t Type; // 0x30(0x04)
	enum class ETigerDetachMethod DetachMethod; // 0x34(0x01)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function TBP_ANS_UseVDM.TBP_ANS_UseVDM_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function TBP_ANS_UseVDM.TBP_ANS_UseVDM_C.Received_NotifyBegin // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
};

