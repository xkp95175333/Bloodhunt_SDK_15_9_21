// WidgetBlueprintGeneratedClass TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C
// Size: 0x329 (Inherited: 0x280)
struct UTBP_UI_InputPromptCombined_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UButton* Button; // 0x288(0x08)
	struct UWidgetSwitcher* InputSwitcher; // 0x290(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad; // 0x298(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* TBP_UI_InputPrompt_Keyboard; // 0x2a0(0x08)
	struct FText PrefixText; // 0x2a8(0x18)
	struct FText PostfixText; // 0x2c0(0x18)
	struct FName Action; // 0x2d8(0x08)
	bool IsAxis; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct FDataTableRowHandle FontInfo; // 0x2e8(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x2f8(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x308(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x318(0x10)
	bool IsClickable; // 0x328(0x01)

	void UpdatePromptVisibility(); // Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.UpdatePromptVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Update Properties(struct FText PrefixText, struct FText PostfixText, struct FName Action, bool IsAxis); // Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.Update Properties // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnUseGamepadChanged(bool bNewIsProbablyUsingGamepad); // Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.OnUseGamepadChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_89_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.BndEvt__Button_89_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void SetClickability(bool Index); // Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.SetClickability // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_InputPromptCombined(int32_t EntryPoint); // Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.ExecuteUbergraph_TBP_UI_InputPromptCombined // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnUnhovered__DelegateSignature(); // Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnHovered__DelegateSignature(); // Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClicked__DelegateSignature(); // Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

