// AnimBlueprintGeneratedClass ABP_VMP_NOS_F_HAIR_03.ABP_VMP_NOS_F_HAIR_03_C
// Size: 0x3a80 (Inherited: 0x2c0)
struct UABP_VMP_NOS_F_HAIR_03_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2c8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2e8(0x20)
	char pad_308[0x8]; // 0x308(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_13; // 0x310(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x750(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0xb90(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0xfd0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x1410(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x1850(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x1c90(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x20d0(0x440)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2510(0x30)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2540(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2980(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x2dc0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x3200(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3640(0x440)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_VMP_NOS_F_HAIR_03.ABP_VMP_NOS_F_HAIR_03_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_ABP_VMP_NOS_F_HAIR_03(int32_t EntryPoint); // Function ABP_VMP_NOS_F_HAIR_03.ABP_VMP_NOS_F_HAIR_03_C.ExecuteUbergraph_ABP_VMP_NOS_F_HAIR_03 // (Final|UbergraphFunction) // @ game+0x16c0340
};

