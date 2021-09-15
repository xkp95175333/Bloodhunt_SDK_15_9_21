// AnimBlueprintGeneratedClass ABP_Melee_Weapon.ABP_Melee_Weapon_C
// Size: 0xfd0 (Inherited: 0x2c0)
struct UABP_Melee_Weapon_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x2f8(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x400(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x420(0x108)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x528(0x28)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x550(0x20)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x570(0xb0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x620(0x158)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x778(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x7c0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x7e8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x810(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x838(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x990(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x9b8(0x158)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4; // 0xb10(0x50)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0xb60(0x50)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0xbb0(0x158)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0xd08(0x50)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0xd58(0x50)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xda8(0x158)
	enum class ETigerGender BodyType; // 0xf00(0x01)
	bool IsSecondaryWeapon; // 0xf01(0x01)
	bool IsPlayingAsFemaleBool; // 0xf02(0x01)
	char pad_F03[0x1]; // 0xf03(0x01)
	float IsPlayingAsFemaleFloat; // 0xf04(0x04)
	struct FVector RootJointOffset; // 0xf08(0x0c)
	struct FVector LeftHandIKOffset; // 0xf14(0x0c)
	enum class ENUM_MeleeWeaponCategories CurrentMeleeWeapon; // 0xf20(0x01)
	char pad_F21[0x7]; // 0xf21(0x07)
	struct TMap<enum class ENUM_MeleeWeaponCategories, struct FVector> RootJointOffsetMap; // 0xf28(0x50)
	struct TMap<enum class ENUM_MeleeWeaponCategories, struct FVector> LeftHandOffsetMap; // 0xf78(0x50)
	struct UABP_Player_C* Anim Instance; // 0xfc8(0x08)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BlueprintInitializeAnimation(); // Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnMelee(int32_t AttackCount); // Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.OnMelee // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_ABP_Melee_Weapon(int32_t EntryPoint); // Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.ExecuteUbergraph_ABP_Melee_Weapon // (Final|UbergraphFunction) // @ game+0x16c0340
};

