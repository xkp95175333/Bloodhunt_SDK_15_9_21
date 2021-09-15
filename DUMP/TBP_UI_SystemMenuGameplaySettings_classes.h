// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C
// Size: 0x418 (Inherited: 0x290)
struct UTBP_UI_SystemMenuGameplaySettings_C : UTigerMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UTBP_UI_StyledComboBox_C* AudioLanguageSelect; // 0x298(0x08)
	struct UTBP_UI_CheckBox_C* AutoSprintToggle; // 0x2a0(0x08)
	struct UTBP_UI_CheckBox_C* AutoSwapDefaultPistol; // 0x2a8(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* Gamepad_Submenu_Button; // 0x2b0(0x08)
	struct UTBP_UI_SliderWBox_C* GamepadAimingSensitivitySlider; // 0x2b8(0x08)
	struct UTBP_UI_CheckBox_C* GamepadInvertYToggle; // 0x2c0(0x08)
	struct UTBP_UI_SliderWBox_C* GamepadScopedSensitivitySlider; // 0x2c8(0x08)
	struct UTBP_UI_SliderWBox_C* GamepadSensitivitySlider; // 0x2d0(0x08)
	struct UTBP_UI_StyledComboBox_C* GamepadWeaponCycleStylePreset; // 0x2d8(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* Gameplay_Submenu_Button; // 0x2e0(0x08)
	struct UWidgetSwitcher* GameplaySettingsSwitcher; // 0x2e8(0x08)
	struct UTBP_UI_SystemMenuSettingsListItem_C* HoldForHeightenedSensesItem; // 0x2f0(0x08)
	struct UTBP_UI_CheckBox_C* HoldForHeightenedSensesToggle; // 0x2f8(0x08)
	struct UTBP_UI_CheckBox_C* HoldForInventoryToggle; // 0x300(0x08)
	struct UTBP_UI_StyledComboBox_C* InputPresets; // 0x308(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* KeyboardMouse_Submenu_Button; // 0x310(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* Language_Submenu_Button; // 0x318(0x08)
	struct UTBP_UI_SliderWBox_C* MouseAimingSensitivitySlider; // 0x320(0x08)
	struct UTBP_UI_CheckBox_C* MouseInvertYToggle; // 0x328(0x08)
	struct UTBP_UI_SliderWBox_C* MouseScopedSensitivitySlider; // 0x330(0x08)
	struct UTBP_UI_SliderWBox_C* MouseSensitivitySlider; // 0x338(0x08)
	struct UTBP_UI_StyledComboBox_C* MouseWeaponCycleStylePreset; // 0x340(0x08)
	struct UTBP_UI_CheckBox_C* MuteGeneralChatToggle; // 0x348(0x08)
	struct UTBP_UI_Submenu_Header_C* TBP_UI_Submenu_Header; // 0x350(0x08)
	struct UTBP_UI_StyledComboBox_C* TextLanguageSelect; // 0x358(0x08)
	struct UTBP_UI_SystemMenuItem_C* CurrentlySelectedSystemMenuItem; // 0x360(0x08)
	struct TArray<struct FIntPoint> AvailableResolutions; // 0x368(0x10)
	struct FIntPoint CurrentlySelectedResolution; // 0x378(0x08)
	struct FText Submenu_Gameplay; // 0x380(0x18)
	struct FText Submenu_KeyboardMouse; // 0x398(0x18)
	struct FText Submenu_Gamepad; // 0x3b0(0x18)
	struct FText Submenu_Language; // 0x3c8(0x18)
	struct TArray<struct FText> InputTexts; // 0x3e0(0x10)
	struct TArray<struct FString> AvailableAudioLanguages; // 0x3f0(0x10)
	struct TArray<struct FString> AvailableTextLanguages; // 0x400(0x10)
	struct UTBP_UI_Grimoire_C* GrimoireUI; // 0x410(0x08)

	void Get Grimoire(struct UTBP_UI_Grimoire_C* AsTBP UI Grimoire); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.Get Grimoire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BindButtons(); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BindButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateDropdownLists(); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateDropdownLists // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateLanguageSelections(); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateLanguageSelections // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetComboBoxSelection(struct UTBP_UI_StyledComboBox_C* InComboBox); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.SetComboBoxSelection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetSubmenuButtonNames(); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.SetSubmenuButtonNames // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateWeaponCycleStyleDropdownList(struct UTBP_UI_StyledComboBox_C* InDropdownBox, bool bInIsGamepad); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateWeaponCycleStyleDropdownList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateLanguageSelectionDropdownList(struct UTBP_UI_StyledComboBox_C* InDropdownBox, struct TArray<struct FString> InSelectableCultures, struct TArray<struct FString> InAvailableLanguagesArray, struct FString InCurrentLanguage); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateLanguageSelectionDropdownList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PresetChanged(); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.PresetChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SwitchToCustomPreset(); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.SwitchToCustomPreset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateInputPresetsDropdownList(); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateInputPresetsDropdownList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateSettings(); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__HoldForHeightenedSensesToggle_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__HoldForHeightenedSensesToggle_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__HoldForInventoryToggle_K2Node_ComponentBoundEvent_13_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__HoldForInventoryToggle_K2Node_ComponentBoundEvent_13_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnGamepadWeaponStyleChanged(struct FText SelectedItem, int32_t SelectedIndex); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnGamepadWeaponStyleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnGameplayPressed(); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnGameplayPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLanguagePressed(); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnLanguagePressed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InputPresetsChanged(struct FText SelectedItem, int32_t SelectedIndex); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.InputPresetsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TextLanguageSelectChanged(struct FText SelectedItem, int32_t SelectedIndex); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.TextLanguageSelectChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AudioLanguageSelectChanged(struct FText SelectedItem, int32_t SelectedIndex); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.AudioLanguageSelectChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnKeyboardMousePressed(); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnKeyboardMousePressed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnGamepadPressed(); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnGamepadPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnMouseWeaponStyleChanged(struct FText SelectedItem, int32_t SelectedIndex); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnMouseWeaponStyleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__AutoSwapDefaultPistol_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__AutoSwapDefaultPistol_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MuteGeneralChatToggle_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MuteGeneralChatToggle_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_SystemMenuGameplaySettings(int32_t EntryPoint); // Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.ExecuteUbergraph_TBP_UI_SystemMenuGameplaySettings // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

