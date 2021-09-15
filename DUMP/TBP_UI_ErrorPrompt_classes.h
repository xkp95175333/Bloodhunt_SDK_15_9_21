// WidgetBlueprintGeneratedClass TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C
// Size: 0x280 (Inherited: 0x260)
struct UTBP_UI_ErrorPrompt_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTBP_UI_ConfirmMenu_C* ConfirmMenu; // 0x268(0x08)
	struct FMulticastInlineDelegate OnClose; // 0x270(0x10)

	void ShowErrorString(struct FString InSourceString); // Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.ShowErrorString // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ConfirmMenu_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature(); // Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.BndEvt__ConfirmMenu_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ErrorPrompt(int32_t EntryPoint); // Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.ExecuteUbergraph_TBP_UI_ErrorPrompt // (Final|UbergraphFunction) // @ game+0x16c0340
	void OnClose__DelegateSignature(); // Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.OnClose__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

