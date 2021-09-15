// WidgetBlueprintGeneratedClass TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C
// Size: 0x308 (Inherited: 0x280)
struct UTBP_UI_ConfirmPurchase_Premium_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTBP_UI_MenuButton_C* ClosePrompt; // 0x288(0x08)
	struct UImage* Image_218; // 0x290(0x08)
	struct UTigerStyledRichTextBlock* ProcessText; // 0x298(0x08)
	struct UTigerStyledRichTextBlock* PurchaseStatusHeader; // 0x2a0(0x08)
	struct UTigerStyledRichTextBlock* SupportText; // 0x2a8(0x08)
	struct UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber; // 0x2b0(0x08)
	struct UTBP_UI_Popup_Base_C* TBP_UI_Popup_Base; // 0x2b8(0x08)
	struct USizeBox* ThrobberSizeBox; // 0x2c0(0x08)
	struct FMulticastInlineDelegate OnClosed; // 0x2c8(0x10)
	struct FText WaitingText; // 0x2d8(0x18)
	struct FText WebsiteLinkToSupport; // 0x2f0(0x18)

	void PurchaseHandled(bool InSuccess, struct FText InMessage); // Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.PurchaseHandled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CloseWidget(); // Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.CloseWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Show(); // Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ClosePrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.BndEvt__ClosePrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ConfirmPurchase_Premium(int32_t EntryPoint); // Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.ExecuteUbergraph_TBP_UI_ConfirmPurchase_Premium // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnClosed__DelegateSignature(bool ConfirmedPurchase); // Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.OnClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

