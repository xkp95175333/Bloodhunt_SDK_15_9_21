// WidgetBlueprintGeneratedClass TBP_UI_SystemMenu.TBP_UI_SystemMenu_C
// Size: 0x3fc (Inherited: 0x2b8)
struct UTBP_UI_SystemMenu_C : UTigerInputMenuUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UTBP_UI_InputPromptCombined_C* ApplyInputPrompt; // 0x2c0(0x08)
	struct UTBP_UI_IngameMenuButton_C* Audio_Button; // 0x2c8(0x08)
	struct UTBP_UI_IngameMenuButton_C* Gameplay_Button; // 0x2d0(0x08)
	struct UTBP_UI_IngameMenuButton_C* Graphics_Button; // 0x2d8(0x08)
	struct UTBP_UI_IngameMenuButton_C* KeyBindings_Button; // 0x2e0(0x08)
	struct UHorizontalBox* MenuItems; // 0x2e8(0x08)
	struct UTBP_UI_MenuButton_C* PopupQuitButton; // 0x2f0(0x08)
	struct UTBP_UI_MenuButton_C* PopupReturnButton; // 0x2f8(0x08)
	struct UButton* QuitButton; // 0x300(0x08)
	struct UTigerStyledRichTextBlock* QuitGameText; // 0x308(0x08)
	struct UTBP_UI_InputPromptCombined_C* ResetInputPrompt; // 0x310(0x08)
	struct UTBP_UI_ConfirmMenu_C* ResetPrompt; // 0x318(0x08)
	struct UButton* SystemButton; // 0x320(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x328(0x08)
	struct UTBP_UI_Divider_Vertical_C* TBP_UI_Divider_Vertical; // 0x330(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad; // 0x338(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad_216; // 0x340(0x08)
	struct UTBP_UI_InputPromptCombined_C* TBP_UI_InputPromptCombined_BackButton; // 0x348(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* TBP_UI_Menu_Button_Prompt_Footer; // 0x350(0x08)
	struct UTBP_UI_Popup_Base_C* TBP_UI_Popup_Base; // 0x358(0x08)
	struct UTBP_UI_SystemMenuAudioSettings_C* TBP_UI_SystemMenuAudioSettings; // 0x360(0x08)
	struct UTBP_UI_SystemMenuGameplaySettings_C* TBP_UI_SystemMenuGameplaySettings; // 0x368(0x08)
	struct UTBP_UI_SystemMenuGraphicsSettings_C* TBP_UI_SystemMenuGraphicsSettings; // 0x370(0x08)
	struct UTBP_UI_SystemMenuKeybindings_C* TBP_UI_SystemMenuKeybindings; // 0x378(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x380(0x08)
	struct UTigerStyledRichTextBlock* TigerStyledRichTextBlock_174; // 0x388(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_222; // 0x390(0x08)
	struct UTBP_UI_SystemMenuItem_C* CurrentlySelectedSystemMenuItem; // 0x398(0x08)
	struct UTBP_UI_SystemMenuGraphicsSettings_C* GraphicsSettingsMenu; // 0x3a0(0x08)
	struct UTigerMenuWidget* CurrentlyActiveSubMenu; // 0x3a8(0x08)
	struct UTBP_UI_SystemMenuGameplaySettings_C* GameplaySettingsMenu; // 0x3b0(0x08)
	struct UTBP_UI_SystemMenuKeybindings_C* KeybindingsMenu; // 0x3b8(0x08)
	struct UTBP_UI_SystemMenuAudioSettings_C* AudioSettingsMenu; // 0x3c0(0x08)
	struct TArray<struct UTBP_UI_IngameMenuButton_C*> MenuButtons; // 0x3c8(0x10)
	struct UTBP_UI_IngameMenuButton_C* SelectedMenuButton; // 0x3d8(0x08)
	struct UTBP_UI_IngameMenuButton_C* SelectedMenuButton_FutureSelected; // 0x3e0(0x08)
	struct TArray<struct UTigerMenuWidget*> MenuWidgets; // 0x3e8(0x10)
	int32_t ActiveMenuIndex; // 0x3f8(0x04)

	enum class ESlateVisibility Get_ResetInputPrompt_Visibility_1(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Get_ResetInputPrompt_Visibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	enum class ESlateVisibility Get_ApplyInputPrompt_Visibility_1(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Get_ApplyInputPrompt_Visibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void SelectMenuAndButtonByIndex(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SelectMenuAndButtonByIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetActiveMenuButton(struct UTBP_UI_IngameMenuButton_C* NewParam); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SetActiveMenuButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Destruct(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Gameplay_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(struct UTigerIngameSubmenuWidget* SubmenuWidget); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__Gameplay_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Graphics_Button_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(struct UTigerIngameSubmenuWidget* SubmenuWidget); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__Graphics_Button_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Audio_Button_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(struct UTigerIngameSubmenuWidget* SubmenuWidget); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__Audio_Button_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__KeyBindings_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(struct UTigerIngameSubmenuWidget* SubmenuWidget); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__KeyBindings_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_94_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__Button_94_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__QuitButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__QuitButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Close menu(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Close menu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpenMenu(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnOpenMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void EscapePressed(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.EscapePressed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__PopupQuitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__PopupQuitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__PopupReturnButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__PopupReturnButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void SelectMenuToTheRight(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SelectMenuToTheRight // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SelectMenuToTheLeft(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SelectMenuToTheLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CustomEvent_1(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CustomEvent(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_InputPromptCombined_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_InputPromptCombined_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_SystemMenu_ApplyInputPrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_ApplyInputPrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnApplySettings(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnApplySettings // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_SystemMenu_ResetInputPrompt_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_ResetInputPrompt_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_SystemMenu_ResetPrompt_K2Node_ComponentBoundEvent_12_Confirm__DelegateSignature(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_ResetPrompt_K2Node_ComponentBoundEvent_12_Confirm__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnResetSettings(); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnResetSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_SystemMenu(int32_t EntryPoint); // Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.ExecuteUbergraph_TBP_UI_SystemMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

