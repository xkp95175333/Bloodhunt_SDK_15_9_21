// WidgetBlueprintGeneratedClass TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C
// Size: 0x300 (Inherited: 0x290)
struct UTBP_UI_TutorialMenu_C : UTigerMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UTBP_UI_MenuButton_C* QuitButton; // 0x298(0x08)
	struct UTBP_UI_MenuButton_C* ResumeButton; // 0x2a0(0x08)
	struct UTBP_UI_MenuButton_C* ReturnButton; // 0x2a8(0x08)
	struct UTBP_UI_BasicMenu_C* SelectionMenu; // 0x2b0(0x08)
	struct UTBP_UI_ConfirmMenu_C* TBP_UI_ConfirmMenu; // 0x2b8(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad_Quit; // 0x2c0(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad_Resume; // 0x2c8(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad_Return; // 0x2d0(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* TBP_UI_InputPrompt_Keyboard_Quit; // 0x2d8(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* TBP_UI_InputPrompt_Keyboard_Resume; // 0x2e0(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* TBP_UI_InputPrompt_Keyboard_Return; // 0x2e8(0x08)
	struct UTBP_TigerGameInstance_C* GameInstanceRef; // 0x2f0(0x08)
	bool ConfirmLeave; // 0x2f8(0x01)
	bool ConfirmQuit; // 0x2f9(0x01)
	char pad_2FA[0x2]; // 0x2fa(0x02)
	int32_t WaitCount; // 0x2fc(0x04)

	void TryToJoinElysiumSession(); // Function TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C.TryToJoinElysiumSession // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowConfirmMenu(bool Leave, bool Quit); // Function TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C.ShowConfirmMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReturnToMenu(); // Function TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C.ReturnToMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__FindButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C.BndEvt__FindButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_ConfirmMenu_K2Node_ComponentBoundEvent_85_Confirm__DelegateSignature(); // Function TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C.BndEvt__TBP_UI_ConfirmMenu_K2Node_ComponentBoundEvent_85_Confirm__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnStatsReadyOrTimeout(bool bTimedOut); // Function TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C.OnStatsReadyOrTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowConfirmMenu_Return(); // Function TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C.ShowConfirmMenu_Return // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowConfirmMenu_Quit(); // Function TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C.ShowConfirmMenu_Quit // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ResumeGame(); // Function TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C.ResumeGame // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_ConfirmMenu_K2Node_ComponentBoundEvent_0_Decline__DelegateSignature(); // Function TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C.BndEvt__TBP_UI_ConfirmMenu_K2Node_ComponentBoundEvent_0_Decline__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_TutorialMenu(int32_t EntryPoint); // Function TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C.ExecuteUbergraph_TBP_UI_TutorialMenu // (Final|UbergraphFunction) // @ game+0x16c0340
};

