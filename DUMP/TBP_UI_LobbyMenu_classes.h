// WidgetBlueprintGeneratedClass TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C
// Size: 0x330 (Inherited: 0x290)
struct UTBP_UI_LobbyMenu_C : UTigerMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UButton* HostButton; // 0x298(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_LeaveGroup; // 0x2a0(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_PlayerList; // 0x2a8(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_Quit; // 0x2b0(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_Resume; // 0x2b8(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_SelectCharacter; // 0x2c0(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_LeaveGroup; // 0x2c8(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_PlayerList; // 0x2d0(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_Quit; // 0x2d8(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_Resume; // 0x2e0(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_SelectCharacter; // 0x2e8(0x08)
	struct UTBP_UI_MenuButton_C* LeaveGroupButton; // 0x2f0(0x08)
	struct UTBP_UI_MenuButton_C* PlayerListButton; // 0x2f8(0x08)
	struct UTBP_UI_ConfirmMenu_C* QuitConfirmation; // 0x300(0x08)
	struct UTBP_UI_MenuButton_C* QuitGameButton; // 0x308(0x08)
	struct UTBP_UI_MenuButton_C* ResumeButton; // 0x310(0x08)
	struct UTBP_UI_MenuButton_C* SelectCharacterButton; // 0x318(0x08)
	struct UTBP_UI_BasicMenu_C* TBP_UI_BasicMenu; // 0x320(0x08)
	struct UTBP_TigerGameInstance_C* GameInstanceRef; // 0x328(0x08)

	void ShowQuitConfirmation(); // Function TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C.ShowQuitConfirmation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowLobbyMenu(); // Function TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C.ShowLobbyMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	bool Get_FindButton_bIsEnabled_1(); // Function TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C.Get_FindButton_bIsEnabled_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	enum class ESlateVisibility Get_LeaveGroup_Visibility_1(); // Function TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C.Get_LeaveGroup_Visibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__HostButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C.BndEvt__HostButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_MenuButton_C_0_K2Node_ComponentBoundEvent_444_OnClicked__DelegateSignature(); // Function TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C.BndEvt__TBP_UI_MenuButton_C_0_K2Node_ComponentBoundEvent_444_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_MenuButton_C_2_K2Node_ComponentBoundEvent_609_OnClicked__DelegateSignature(); // Function TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C.BndEvt__TBP_UI_MenuButton_C_2_K2Node_ComponentBoundEvent_609_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_MenuButton_C_3_K2Node_ComponentBoundEvent_620_OnClicked__DelegateSignature(); // Function TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C.BndEvt__TBP_UI_MenuButton_C_3_K2Node_ComponentBoundEvent_620_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_ConfirmMenu_K2Node_ComponentBoundEvent_25_Confirm__DelegateSignature(); // Function TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C.BndEvt__TBP_UI_ConfirmMenu_K2Node_ComponentBoundEvent_25_Confirm__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__QuitConfirmation_K2Node_ComponentBoundEvent_81_Decline__DelegateSignature(); // Function TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C.BndEvt__QuitConfirmation_K2Node_ComponentBoundEvent_81_Decline__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_113_OnClicked__DelegateSignature(); // Function TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_113_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Resume(); // Function TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C.Resume // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void SelectCharacter(); // Function TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C.SelectCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void LeaveGroup(); // Function TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C.LeaveGroup // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_LobbyMenu(int32_t EntryPoint); // Function TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C.ExecuteUbergraph_TBP_UI_LobbyMenu // (Final|UbergraphFunction) // @ game+0x16c0340
};

