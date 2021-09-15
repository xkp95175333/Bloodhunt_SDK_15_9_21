// WidgetBlueprintGeneratedClass TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C
// Size: 0x2a8 (Inherited: 0x288)
struct UTBP_UI_Social_Elysium_ActionMenu_C : UTBP_UI_Social_ActionMenuBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UTBP_UI_Social_ActionMenuItem_C* AddFriendMenuItem; // 0x290(0x08)
	struct UImage* Image_99; // 0x298(0x08)
	struct UTBP_UI_Social_ActionMenuItem_C* InviteToGroupMenuItem; // 0x2a0(0x08)

	void CouldAddAsFriend(bool bCouldAdd); // Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.CouldAddAsFriend // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CouldInviteToParty(bool bCouldInvite); // Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.CouldInviteToParty // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetElysiumPlayerCard(struct UTBP_UI_Social_Elysium_PlayerCard_C* OutPlayerCard); // Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.GetElysiumPlayerCard // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_Social_ActionMenuItem_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature(); // Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.BndEvt__TBP_UI_Social_ActionMenuItem_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__AddFriendMenuItem_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature(); // Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.BndEvt__AddFriendMenuItem_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Social_Elysium_ActionMenu(int32_t EntryPoint); // Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.ExecuteUbergraph_TBP_UI_Social_Elysium_ActionMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

