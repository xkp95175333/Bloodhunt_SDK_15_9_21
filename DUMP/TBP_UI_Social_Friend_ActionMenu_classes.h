// WidgetBlueprintGeneratedClass TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C
// Size: 0x2a8 (Inherited: 0x288)
struct UTBP_UI_Social_Friend_ActionMenu_C : UTBP_UI_Social_ActionMenuBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UBorder* Border_190; // 0x290(0x08)
	struct UTBP_UI_Social_ActionMenuItem_C* InviteToGroupMenuItem; // 0x298(0x08)
	struct UTBP_UI_Social_ActionMenuItem_C* RemoveFriendMenuItem; // 0x2a0(0x08)

	void ShouldEnableRemoveFriend(bool bShouldEnable); // Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.ShouldEnableRemoveFriend // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShouldEnableGroupInvite(bool bShouldEnable); // Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.ShouldEnableGroupInvite // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetFriendPlayerCard(struct UTBP_UI_Social_Friend_PlayerCard_C* OutPlayerCard); // Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.GetFriendPlayerCard // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__RemoveFriendMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature(); // Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.BndEvt__RemoveFriendMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__InviteToGroupMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature(); // Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.BndEvt__InviteToGroupMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Social_Friend_ActionMenu(int32_t EntryPoint); // Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.ExecuteUbergraph_TBP_UI_Social_Friend_ActionMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

