// WidgetBlueprintGeneratedClass TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C
// Size: 0x2d0 (Inherited: 0x260)
struct UTBP_UI_InputMenuPrompt_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad; // 0x268(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard; // 0x270(0x08)
	struct UTBP_UI_TransitionMenuButton_C* TransitionMenuButton; // 0x278(0x08)
	struct FText PrefixText; // 0x280(0x18)
	struct FText PostfixTest; // 0x298(0x18)
	struct FName InputAction; // 0x2b0(0x08)
	bool bListenForInput; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct FMulticastInlineDelegate OnInputPressed; // 0x2c0(0x10)

	void SetText(struct FText InText); // Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.SetText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Internal_OnInputPressed(); // Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.Internal_OnInputPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_TransitionMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.BndEvt__TBP_UI_TransitionMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void RestartAnimation(); // Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.RestartAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_InputMenuPrompt(int32_t EntryPoint); // Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.ExecuteUbergraph_TBP_UI_InputMenuPrompt // (Final|UbergraphFunction) // @ game+0x16c0340
	void OnInputPressed__DelegateSignature(); // Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.OnInputPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

