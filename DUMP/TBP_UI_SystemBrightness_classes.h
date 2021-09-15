// WidgetBlueprintGeneratedClass TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C
// Size: 0x2ec (Inherited: 0x280)
struct UTBP_UI_SystemBrightness_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* Background; // 0x288(0x08)
	struct UImage* Background_2; // 0x290(0x08)
	struct UImage* Brightness_Screenshot; // 0x298(0x08)
	struct UTBP_UI_SliderWBox_C* Brightness_Slider; // 0x2a0(0x08)
	struct UTigerStyledRichTextBlock* BrightnessText; // 0x2a8(0x08)
	struct UButton* Button_1; // 0x2b0(0x08)
	struct UTBP_UI_Button_ClosePopup_C* Button_ClosePopup; // 0x2b8(0x08)
	struct UButton* ConfirmButton; // 0x2c0(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* Prompt_Confirm_Gamepad; // 0x2c8(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* Prompt_Confirm_Keyboard; // 0x2d0(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2d8(0x10)
	float GammaBeforeEdit; // 0x2e8(0x04)

	void On Value Changed(float BoxValue, float SliderValue); // Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.On Value Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnMenuBack(); // Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.OnMenuBack // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_Button_ClosePopup_K2Node_ComponentBoundEvent_4_On Pressed__DelegateSignature(); // Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.BndEvt__TBP_UI_Button_ClosePopup_K2Node_ComponentBoundEvent_4_On Pressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnMenuOpen(); // Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.OnMenuOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_SystemBrightness(int32_t EntryPoint); // Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.ExecuteUbergraph_TBP_UI_SystemBrightness // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnClicked__DelegateSignature(); // Function TBP_UI_SystemBrightness.TBP_UI_SystemBrightness_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

