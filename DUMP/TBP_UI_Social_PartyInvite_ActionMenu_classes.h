// WidgetBlueprintGeneratedClass TBP_UI_Social_PartyInvite_ActionMenu.TBP_UI_Social_PartyInvite_ActionMenu_C
// Size: 0x2a8 (Inherited: 0x288)
struct UTBP_UI_Social_PartyInvite_ActionMenu_C : UTBP_UI_Social_ActionMenuBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UTBP_UI_Social_ActionMenuItem_C* AcceptMenuItem; // 0x290(0x08)
	struct UImage* Image_99; // 0x298(0x08)
	struct UTBP_UI_Social_ActionMenuItem_C* RejectMenuItem; // 0x2a0(0x08)

	void GetPartyInviteCard(struct UTBP_UI_Social_PartyInvite_PlayerCard_C* OutPlayerCard); // Function TBP_UI_Social_PartyInvite_ActionMenu.TBP_UI_Social_PartyInvite_ActionMenu_C.GetPartyInviteCard // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__AcceptMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature(); // Function TBP_UI_Social_PartyInvite_ActionMenu.TBP_UI_Social_PartyInvite_ActionMenu_C.BndEvt__AcceptMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__RejectMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature(); // Function TBP_UI_Social_PartyInvite_ActionMenu.TBP_UI_Social_PartyInvite_ActionMenu_C.BndEvt__RejectMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Social_PartyInvite_ActionMenu(int32_t EntryPoint); // Function TBP_UI_Social_PartyInvite_ActionMenu.TBP_UI_Social_PartyInvite_ActionMenu_C.ExecuteUbergraph_TBP_UI_Social_PartyInvite_ActionMenu // (Final|UbergraphFunction) // @ game+0x16c0340
};

