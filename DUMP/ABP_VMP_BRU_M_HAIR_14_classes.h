// AnimBlueprintGeneratedClass ABP_VMP_BRU_M_HAIR_14.ABP_VMP_BRU_M_HAIR_13_C
// Size: 0x2540 (Inherited: 0x2c0)
struct UABP_VMP_BRU_M_HAIR_13_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x2d0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x710(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0xb50(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0xf90(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x13d0(0x440)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x1810(0x30)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x1840(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x1c80(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x20c0(0x440)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2500(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2520(0x20)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_VMP_BRU_M_HAIR_14.ABP_VMP_BRU_M_HAIR_13_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_ABP_VMP_BRU_M_HAIR_14(int32_t EntryPoint); // Function ABP_VMP_BRU_M_HAIR_14.ABP_VMP_BRU_M_HAIR_13_C.ExecuteUbergraph_ABP_VMP_BRU_M_HAIR_14 // (Final|UbergraphFunction) // @ game+0x16c0340
};

