// AnimBlueprintGeneratedClass ABP_VMP_TOR_M_HAIR_06.ABP_VMP_TOR_M_HAIR_06_C
// Size: 0x3640 (Inherited: 0x2c0)
struct UABP_VMP_TOR_M_HAIR_06_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	char pad_2F8[0x8]; // 0x2f8(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x300(0x440)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740(0x20)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x760(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0xba0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0xfe0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x1420(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x1860(0x440)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1ca0(0x20)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x1cc0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2100(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2540(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x2980(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x2dc0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3200(0x440)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_VMP_TOR_M_HAIR_06.ABP_VMP_TOR_M_HAIR_06_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_ABP_VMP_TOR_M_HAIR_06(int32_t EntryPoint); // Function ABP_VMP_TOR_M_HAIR_06.ABP_VMP_TOR_M_HAIR_06_C.ExecuteUbergraph_ABP_VMP_TOR_M_HAIR_06 // (Final|UbergraphFunction) // @ game+0x16c0340
};

