// WidgetBlueprintGeneratedClass TBP_UI_TitleError.TBP_UI_TitleError_C
// Size: 0x2f0 (Inherited: 0x290)
struct UTBP_UI_TitleError_C : UTigerTitleErrorUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UTigerStyledRichTextBlock* ErrorCodeBlock; // 0x298(0x08)
	struct UTigerStyledRichTextBlock* MessageTextBlock; // 0x2a0(0x08)
	struct UHorizontalBox* RetryDelayBox; // 0x2a8(0x08)
	struct UTigerStyledRichTextBlock* RetryDelayDurationText; // 0x2b0(0x08)
	struct UTBP_UI_MenuButton_C* TBP_UI_MenuButton_Exit; // 0x2b8(0x08)
	struct UTBP_UI_MenuButton_C* TBP_UI_MenuButton_Retry; // 0x2c0(0x08)
	struct UTBP_UI_Popup_Base_C* TBP_UI_Popup_Base; // 0x2c8(0x08)
	struct UTigerStyledRichTextBlock* TitleTextBlock; // 0x2d0(0x08)
	struct FMulticastInlineDelegate OnRetry; // 0x2d8(0x10)
	struct FTimerHandle RetryDelayTimerHandle; // 0x2e8(0x08)

	void DisableRetry(); // Function TBP_UI_TitleError.TBP_UI_TitleError_C.DisableRetry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void EnabledRetry(); // Function TBP_UI_TitleError.TBP_UI_TitleError_C.EnabledRetry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateRetryDelay(); // Function TBP_UI_TitleError.TBP_UI_TitleError_C.UpdateRetryDelay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_TitleError.TBP_UI_TitleError_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_MenuButton_Exit_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function TBP_UI_TitleError.TBP_UI_TitleError_C.BndEvt__TBP_UI_MenuButton_Exit_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_MenuButton_Retry_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function TBP_UI_TitleError.TBP_UI_TitleError_C.BndEvt__TBP_UI_MenuButton_Retry_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_TitleError(int32_t EntryPoint); // Function TBP_UI_TitleError.TBP_UI_TitleError_C.ExecuteUbergraph_TBP_UI_TitleError // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnRetry__DelegateSignature(); // Function TBP_UI_TitleError.TBP_UI_TitleError_C.OnRetry__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

