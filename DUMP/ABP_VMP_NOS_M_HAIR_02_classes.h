// AnimBlueprintGeneratedClass ABP_VMP_NOS_M_HAIR_02.ABP_VMP_NOS_M_HAIR_02_C
// Size: 0x2100 (Inherited: 0x2c0)
struct UABP_VMP_NOS_M_HAIR_02_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2f8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x318(0x20)
	char pad_338[0x8]; // 0x338(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x340(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x780(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0xbc0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x1000(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x1440(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x1880(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x1cc0(0x440)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_VMP_NOS_M_HAIR_02.ABP_VMP_NOS_M_HAIR_02_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_ABP_VMP_NOS_M_HAIR_02(int32_t EntryPoint); // Function ABP_VMP_NOS_M_HAIR_02.ABP_VMP_NOS_M_HAIR_02_C.ExecuteUbergraph_ABP_VMP_NOS_M_HAIR_02 // (Final|UbergraphFunction) // @ game+0x16c0340
};

