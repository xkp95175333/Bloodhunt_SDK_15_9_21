// WidgetBlueprintGeneratedClass TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C
// Size: 0x331 (Inherited: 0x2e0)
struct UTBP_UI_PremiumCurrency_C : UTigerPremiumCurrencyUiScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* ShowConfirm; // 0x2e8(0x08)
	struct USizeBox* CloseIfPopUpContainer; // 0x2f0(0x08)
	struct UTBP_UI_MenuButton_C* CloseIfPopUpMenuButton; // 0x2f8(0x08)
	struct UOverlay* ConfirmPopup; // 0x300(0x08)
	struct UHorizontalBox* CurrencyBox; // 0x308(0x08)
	struct UImage* InputBlock_Dark; // 0x310(0x08)
	struct UTBP_UI_ConfirmPurchase_Premium_C* TBP_UI_ConfirmPurchase_Premium; // 0x318(0x08)
	struct TArray<struct UTBP_UI_PremiumCurrency_Button_C*> CurrencyButtons; // 0x320(0x10)
	bool bIsPopUpMenu; // 0x330(0x01)

	void PopUpMenuSetup(bool Index); // Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.PopUpMenuSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void On Currency Button Clicked(struct FTigerPremiumCurrencyPackData InPremiumPackData); // Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.On Currency Button Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnConfirmPopupClosed(bool ConfirmedPurchase); // Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnConfirmPopupClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCurrencyPacksUpdated(); // Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnCurrencyPacksUpdated // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnPurchaseHandled(bool bInWasSuccesful, enum class EShMidasResultCode InPurchaseResult); // Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnPurchaseHandled // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ClosePopUpMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.BndEvt__ClosePopUpMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_PremiumCurrency(int32_t EntryPoint); // Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.ExecuteUbergraph_TBP_UI_PremiumCurrency // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

