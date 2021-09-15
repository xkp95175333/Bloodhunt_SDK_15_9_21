// WidgetBlueprintGeneratedClass TBP_UI_GroupInvitation.TBP_UI_GroupInvitation_C
// Size: 0x2a9 (Inherited: 0x280)
struct UTBP_UI_GroupInvitation_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTBP_UI_ConfirmMenu_C* TBP_UI_ConfirmMenu; // 0x288(0x08)
	struct FTigerGroupInvitation Invite; // 0x290(0x10)
	struct ATigerPlayerState* Inviter; // 0x2a0(0x08)
	bool HasHandledInvite; // 0x2a8(0x01)

	void Construct(); // Function TBP_UI_GroupInvitation.TBP_UI_GroupInvitation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_ConfirmMenu_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature(); // Function TBP_UI_GroupInvitation.TBP_UI_GroupInvitation_C.BndEvt__TBP_UI_ConfirmMenu_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_ConfirmMenu_K2Node_ComponentBoundEvent_4_Decline__DelegateSignature(); // Function TBP_UI_GroupInvitation.TBP_UI_GroupInvitation_C.BndEvt__TBP_UI_ConfirmMenu_K2Node_ComponentBoundEvent_4_Decline__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Destruct(); // Function TBP_UI_GroupInvitation.TBP_UI_GroupInvitation_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_GroupInvitation(int32_t EntryPoint); // Function TBP_UI_GroupInvitation.TBP_UI_GroupInvitation_C.ExecuteUbergraph_TBP_UI_GroupInvitation // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

