// WidgetBlueprintGeneratedClass TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C
// Size: 0x345 (Inherited: 0x280)
struct UTBP_UI_ConfirmMenu_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTBP_UI_InputMenuPrompt_C* ConfirmWidget; // 0x288(0x08)
	struct UTBP_UI_InputMenuPrompt_C* DeclineWidget; // 0x290(0x08)
	struct UTigerStyledRichTextBlock* InnerCountdownWidget; // 0x298(0x08)
	struct UTigerStyledRichTextBlock* InnerTitleWidget; // 0x2a0(0x08)
	struct UTBP_UI_FullScreen_PopUp_Base_C* PopUpWidget; // 0x2a8(0x08)
	struct FMulticastInlineDelegate Confirm; // 0x2b0(0x10)
	struct FMulticastInlineDelegate Decline; // 0x2c0(0x10)
	struct FText AcceptText; // 0x2d0(0x18)
	struct FText DeclineText; // 0x2e8(0x18)
	struct UAkAudioEvent* ConfirmAudioEvent; // 0x300(0x08)
	struct UAkAudioEvent* DeclineAudioEvent; // 0x308(0x08)
	struct FText QuestionText; // 0x310(0x18)
	bool bFadeOut; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct FMulticastInlineDelegate CountdownFinished; // 0x330(0x10)
	int32_t CountdownTime; // 0x340(0x04)
	bool ContinueCountdown; // 0x344(0x01)

	void SetTitleText(struct FText TitleText); // Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.SetTitleText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Hide(bool TryFadeOut); // Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Hide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Show(); // Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Yes(); // Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Yes // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void No(); // Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.No // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ConfirmWidget_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature(); // Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.BndEvt__ConfirmWidget_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__DeclineWidget_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature(); // Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.BndEvt__DeclineWidget_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnFadeOutFinished(); // Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.OnFadeOutFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InitCountdown(int32_t InSeconds); // Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.InitCountdown // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void StopCountdown(); // Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.StopCountdown // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ConfirmMenu(int32_t EntryPoint); // Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.ExecuteUbergraph_TBP_UI_ConfirmMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void CountdownFinished__DelegateSignature(); // Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.CountdownFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Decline__DelegateSignature(); // Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Decline__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Confirm__DelegateSignature(); // Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Confirm__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

