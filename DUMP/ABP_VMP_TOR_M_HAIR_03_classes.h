// AnimBlueprintGeneratedClass ABP_VMP_TOR_M_HAIR_03.ABP_VMP_TOR_M_HAIR_03_C
// Size: 0x1440 (Inherited: 0x2c0)
struct UABP_VMP_TOR_M_HAIR_03_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2c8(0x20)
	char pad_2E8[0x8]; // 0x2e8(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2f0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x730(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0xb70(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0xfb0(0x440)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x13f0(0x30)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1420(0x20)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_VMP_TOR_M_HAIR_03.ABP_VMP_TOR_M_HAIR_03_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_ABP_VMP_TOR_M_HAIR_03(int32_t EntryPoint); // Function ABP_VMP_TOR_M_HAIR_03.ABP_VMP_TOR_M_HAIR_03_C.ExecuteUbergraph_ABP_VMP_TOR_M_HAIR_03 // (Final|UbergraphFunction) // @ game+0x16c0340
};

