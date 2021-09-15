// WidgetBlueprintGeneratedClass TBP_UI_InputPrompt_Gamepad.TBP_UI_InputPrompt_Gamepad_C
// Size: 0x380 (Inherited: 0x2e8)
struct UTBP_UI_InputPrompt_Gamepad_C : UTigerInputPrompt {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UTigerStyledRichTextBlock* PostFixTextBlock; // 0x2f0(0x08)
	struct UTigerStyledRichTextBlock* PrefixTextBlock; // 0x2f8(0x08)
	struct UTBP_UI_XboxIcon_C* TBP_UI_XboxIcon; // 0x300(0x08)
	struct FSlateFontInfo FontInfo; // 0x308(0x58)
	struct FMargin CustomPadding; // 0x360(0x10)
	struct FDataTableRowHandle Font; // 0x370(0x10)

	void InputBindingChanged(struct FName InInputName); // Function TBP_UI_InputPrompt_Gamepad.TBP_UI_InputPrompt_Gamepad_C.InputBindingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdatePromptVisibility(bool bUsingGamePad); // Function TBP_UI_InputPrompt_Gamepad.TBP_UI_InputPrompt_Gamepad_C.UpdatePromptVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ConstructIcon(); // Function TBP_UI_InputPrompt_Gamepad.TBP_UI_InputPrompt_Gamepad_C.ConstructIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_InputPrompt_Gamepad.TBP_UI_InputPrompt_Gamepad_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Destruct(); // Function TBP_UI_InputPrompt_Gamepad.TBP_UI_InputPrompt_Gamepad_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnUseGamepadChanged(bool bNewIsProbablyUsingGamepad); // Function TBP_UI_InputPrompt_Gamepad.TBP_UI_InputPrompt_Gamepad_C.OnUseGamepadChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_InputPrompt_Gamepad.TBP_UI_InputPrompt_Gamepad_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void UpdateIcon(); // Function TBP_UI_InputPrompt_Gamepad.TBP_UI_InputPrompt_Gamepad_C.UpdateIcon // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void UpdateProperties(struct FText NewPrefixText, struct FText NewPostfixText, bool bNewUseKey, struct FName NewInputAction, struct FName NewInputAxis, struct FKey NewInputKey); // Function TBP_UI_InputPrompt_Gamepad.TBP_UI_InputPrompt_Gamepad_C.UpdateProperties // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnInputBindingChanged(struct FInputActionKeyMapping OldKeyBinding, struct FInputActionKeyMapping NewKeyBinding); // Function TBP_UI_InputPrompt_Gamepad.TBP_UI_InputPrompt_Gamepad_C.OnInputBindingChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnInputPresetChanged(); // Function TBP_UI_InputPrompt_Gamepad.TBP_UI_InputPrompt_Gamepad_C.OnInputPresetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnAxisInputBindingChanged(struct FInputAxisKeyMapping OldKeyBinding, struct FInputAxisKeyMapping NewKeyBinding); // Function TBP_UI_InputPrompt_Gamepad.TBP_UI_InputPrompt_Gamepad_C.OnAxisInputBindingChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_InputPrompt_Gamepad(int32_t EntryPoint); // Function TBP_UI_InputPrompt_Gamepad.TBP_UI_InputPrompt_Gamepad_C.ExecuteUbergraph_TBP_UI_InputPrompt_Gamepad // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

