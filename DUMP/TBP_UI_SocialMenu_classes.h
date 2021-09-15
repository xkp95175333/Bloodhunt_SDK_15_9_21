// WidgetBlueprintGeneratedClass TBP_UI_SocialMenu.TBP_UI_SocialMenu_C
// Size: 0x428 (Inherited: 0x3b8)
struct UTBP_UI_SocialMenu_C : UTigerSocialUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* ElysiumButton; // 0x3c0(0x08)
	struct UTBP_UI_Social_Elysium_Subscreen_C* ElysiumSubscreen; // 0x3c8(0x08)
	struct UTBP_UI_InputMenuPrompt_C* Exit; // 0x3d0(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* FriendsButton; // 0x3d8(0x08)
	struct UTBP_UI_Social_Friend_Subscreen_C* FriendsSubscreen; // 0x3e0(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* InboxButton; // 0x3e8(0x08)
	struct UTBP_UI_Social_Inbox_Subscreen_C* InboxSubscreen; // 0x3f0(0x08)
	struct UTBP_UI_Social_Party_Panel_C* PartyPanel; // 0x3f8(0x08)
	struct UWidgetSwitcher* SubscreenSwitcher; // 0x400(0x08)
	struct UTBP_UI_Divider_Vertical_C* TBP_UI_Divider_Vertical; // 0x408(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* TBP_UI_Menu_Button_Prompt_Footer; // 0x410(0x08)
	struct UTBP_UI_Submenu_Header_C* TBP_UI_Submenu_Header; // 0x418(0x08)
	struct UAkAudioEvent* MenuEnterAudioEvent; // 0x420(0x08)

	void ShowSubscreen(struct UTigerSocialSubscreenUI* InSubscreen); // Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.ShowSubscreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Exit_K2Node_ComponentBoundEvent_4_OnInputPressed__DelegateSignature(); // Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__Exit_K2Node_ComponentBoundEvent_4_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnSubscreenOpen(struct UTigerSocialSubscreenUI* InSubscreen); // Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.OnSubscreenOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__FriendsButton_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature(); // Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__InboxButton_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature(); // Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__InboxButton_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ElysiumButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature(); // Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__ElysiumButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_SocialMenu(int32_t EntryPoint); // Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.ExecuteUbergraph_TBP_UI_SocialMenu // (Final|UbergraphFunction) // @ game+0x16c0340
};

