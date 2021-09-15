// AnimBlueprintGeneratedClass ABP_VMP_BRU_F_HAIR_03.ABP_VMP_BRU_F_HAIR_03_C
// Size: 0x1000 (Inherited: 0x2c0)
struct UABP_VMP_BRU_F_HAIR_03_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	char pad_2F8[0x8]; // 0x2f8(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x300(0x440)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x760(0x20)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x780(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0xbc0(0x440)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_VMP_BRU_F_HAIR_03.ABP_VMP_BRU_F_HAIR_03_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_ABP_VMP_BRU_F_HAIR_03(int32_t EntryPoint); // Function ABP_VMP_BRU_F_HAIR_03.ABP_VMP_BRU_F_HAIR_03_C.ExecuteUbergraph_ABP_VMP_BRU_F_HAIR_03 // (Final|UbergraphFunction) // @ game+0x16c0340
};

