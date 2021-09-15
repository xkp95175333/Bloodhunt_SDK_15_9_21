// WidgetBlueprintGeneratedClass TBP_UI_MatchMenu.TBP_UI_MatchMenu_C
// Size: 0x31a (Inherited: 0x290)
struct UTBP_UI_MatchMenu_C : UTigerMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UVerticalBox* LeaveContainer; // 0x298(0x08)
	struct UTBP_UI_MenuButton_C* LeaveLeaveButton; // 0x2a0(0x08)
	struct UTBP_UI_MenuButton_C* LeaveReturnButton; // 0x2a8(0x08)
	struct UTBP_UI_MenuButton_C* LeaveSessionButton; // 0x2b0(0x08)
	struct UVerticalBox* MenuContainer; // 0x2b8(0x08)
	struct UVerticalBox* QuitContainer; // 0x2c0(0x08)
	struct UTBP_UI_MenuButton_C* QuitGameButton; // 0x2c8(0x08)
	struct UTBP_UI_MenuButton_C* QuitQuitButton; // 0x2d0(0x08)
	struct UTBP_UI_MenuButton_C* QuitReturnButton; // 0x2d8(0x08)
	struct UTBP_UI_MenuButton_C* ReturnButton; // 0x2e0(0x08)
	struct UTBP_UI_MenuButton_C* SettingsButton; // 0x2e8(0x08)
	struct UTBP_UI_Popup_Base_C* TBP_UI_Popup_Base; // 0x2f0(0x08)
	struct UTigerStyledRichTextBlock* TigerStyledRichTextBlock; // 0x2f8(0x08)
	struct UTigerStyledRichTextBlock* TigerStyledRichTextBlock_154; // 0x300(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x308(0x08)
	bool ConfirmLeave; // 0x310(0x01)
	bool ConfirmQuit; // 0x311(0x01)
	char pad_312[0x2]; // 0x312(0x02)
	int32_t WaitCount; // 0x314(0x04)
	bool bIsOpen; // 0x318(0x01)
	bool bLeaveParty; // 0x319(0x01)

	void Open Menu(); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.Open Menu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CloseMenu(); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.CloseMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ResetButtonToDefaultState(struct UTBP_UI_MenuButton_C* TargetButton); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ResetButtonToDefaultState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TryToJoinElysiumSession(); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.TryToJoinElysiumSession // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ReturnToElysium(); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ReturnToElysium // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnStatsReadyOrTimeout(bool bTimedOut); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.OnStatsReadyOrTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ReturnButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__ReturnButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__QuitGameButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__QuitGameButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__LeaveLeaveButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__LeaveLeaveButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__QuitQuitButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__QuitQuitButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ResumeGame(); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ResumeGame // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__QuitReturnButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__QuitReturnButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__LeaveReturnButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__LeaveReturnButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ToggleMenu(); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ToggleMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_MatchMenu(int32_t EntryPoint); // Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ExecuteUbergraph_TBP_UI_MatchMenu // (Final|UbergraphFunction) // @ game+0x16c0340
};

