// WidgetBlueprintGeneratedClass TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C
// Size: 0x2ec (Inherited: 0x280)
struct UTBP_UI_PremiumCurrencyPopUp_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTigerStyledRichTextBlock* Header; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* Subheader; // 0x290(0x08)
	struct UTBP_UI_Popup_Base_C* TBP_UI_Popup_Base; // 0x298(0x08)
	struct UTBP_UI_PremiumCurrency_C* TBP_UI_PremiumCurrency; // 0x2a0(0x08)
	struct FMulticastInlineDelegate OnClosed; // 0x2a8(0x10)
	struct FText Currency Name; // 0x2b8(0x18)
	struct FText CurrentItemName; // 0x2d0(0x18)
	int32_t CurrentItemCost; // 0x2e8(0x04)

	void SetItemNameAndCost(struct FText InItemName, int32_t InItemCost); // Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.SetItemNameAndCost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnClose // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnExitKeyPressed(); // Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnExitKeyPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_PremiumCurrencyPopUp(int32_t EntryPoint); // Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.ExecuteUbergraph_TBP_UI_PremiumCurrencyPopUp // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnClosed__DelegateSignature(); // Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

