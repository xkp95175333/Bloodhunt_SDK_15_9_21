// AnimBlueprintGeneratedClass ABP_VMP_TOR_F_HAIR_05.ABP_VMP_TOR_F_HAIR_05_C
// Size: 0x2dc0 (Inherited: 0x2c0)
struct UABP_VMP_TOR_F_HAIR_05_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0x2d0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x710(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0xb50(0x440)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xf90(0x20)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0xfb0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x13f0(0x440)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1830(0x20)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x1850(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x1c90(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x20d0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x2510(0x440)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2950(0x30)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x2980(0x440)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_VMP_TOR_F_HAIR_05.ABP_VMP_TOR_F_HAIR_05_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_ABP_VMP_TOR_F_HAIR_05(int32_t EntryPoint); // Function ABP_VMP_TOR_F_HAIR_05.ABP_VMP_TOR_F_HAIR_05_C.ExecuteUbergraph_ABP_VMP_TOR_F_HAIR_05 // (Final|UbergraphFunction) // @ game+0x16c0340
};

