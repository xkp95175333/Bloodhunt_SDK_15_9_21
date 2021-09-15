// AnimBlueprintGeneratedClass ABP_Paperdoll.ABP_Paperdoll_C
// Size: 0xe68 (Inherited: 0x3c0)
struct UABP_Paperdoll_C : UTigerPaperDollAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c0(0x08)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x3c8(0x80)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_4; // 0x448(0xc8)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_3; // 0x510(0xc8)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0x5d8(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x6a0(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x720(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x7a0(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x820(0x80)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x8a0(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x968(0x80)
	struct FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode; // 0x9e8(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xa88(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xb28(0x80)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xba8(0x48)
	struct FTigerAnimNode_RandomPlayer TigerAnimGraphNode_RandomPlayer; // 0xbf0(0x98)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xc88(0xc8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xd50(0xc0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xe10(0x30)
	bool bIsDefaultSequenceList; // 0xe40(0x01)
	char pad_E41[0x3]; // 0xe41(0x03)
	struct FName FaceAnimSlotName00; // 0xe44(0x08)
	struct FName FaceAnimSlotName01; // 0xe4c(0x08)
	struct FName FaceAnimSlotName02; // 0xe54(0x08)
	struct FName FaceAnimSlotName03; // 0xe5c(0x08)
	float Start Position; // 0xe64(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Paperdoll.ABP_Paperdoll_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FacialAnimations(); // Function ABP_Paperdoll.ABP_Paperdoll_C.FacialAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SelectAnimationSets(struct UTigerAnimationSetCollection* Set Collection); // Function ABP_Paperdoll.ABP_Paperdoll_C.SelectAnimationSets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_E582EC97449B0B37ADC0ACA05429B4C2(); // Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_E582EC97449B0B37ADC0ACA05429B4C2 // (BlueprintEvent) // @ game+0x16c0340
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_BB1D1FF74A496723387A3B8DBAADF705(); // Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_BB1D1FF74A496723387A3B8DBAADF705 // (BlueprintEvent) // @ game+0x16c0340
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_C42E041348A26E837E668D9F9E6B722F(); // Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_C42E041348A26E837E668D9F9E6B722F // (BlueprintEvent) // @ game+0x16c0340
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_F6119FB64030A2FB3C6041B9E77579B3(); // Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_F6119FB64030A2FB3C6041B9E77579B3 // (BlueprintEvent) // @ game+0x16c0340
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_CE1E43BE48777820551A1A88BB0B3107(); // Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_CE1E43BE48777820551A1A88BB0B3107 // (BlueprintEvent) // @ game+0x16c0340
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_TigerAnimGraphNode_RandomPlayer_A8C728FF47A5802CD0C3EAB638BED191(); // Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_TigerAnimGraphNode_RandomPlayer_A8C728FF47A5802CD0C3EAB638BED191 // (BlueprintEvent) // @ game+0x16c0340
	void AddSets(struct UTigerAnimationSetCollection* SetCollection); // Function ABP_Paperdoll.ABP_Paperdoll_C.AddSets // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Paperdoll.ABP_Paperdoll_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BlueprintInitializeAnimation(); // Function ABP_Paperdoll.ABP_Paperdoll_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_ABP_Paperdoll(int32_t EntryPoint); // Function ABP_Paperdoll.ABP_Paperdoll_C.ExecuteUbergraph_ABP_Paperdoll // (Final|UbergraphFunction) // @ game+0x16c0340
};

