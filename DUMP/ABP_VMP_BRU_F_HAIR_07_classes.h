// AnimBlueprintGeneratedClass ABP_VMP_BRU_F_HAIR_07.ABP_VMP_BRU_F_HAIR_07_C
// Size: 0x1000 (Inherited: 0x2c0)
struct UABP_VMP_BRU_F_HAIR_07_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2c8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2e8(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x30)
	char pad_338[0x8]; // 0x338(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x340(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x780(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0xbc0(0x440)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_VMP_BRU_F_HAIR_07.ABP_VMP_BRU_F_HAIR_07_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_ABP_VMP_BRU_F_HAIR_07(int32_t EntryPoint); // Function ABP_VMP_BRU_F_HAIR_07.ABP_VMP_BRU_F_HAIR_07_C.ExecuteUbergraph_ABP_VMP_BRU_F_HAIR_07 // (Final|UbergraphFunction) // @ game+0x16c0340
};

