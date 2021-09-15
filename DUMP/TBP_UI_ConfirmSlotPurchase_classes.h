// WidgetBlueprintGeneratedClass TBP_UI_ConfirmSlotPurchase.TBP_UI_ConfirmSlotPurchase_C
// Size: 0x2f0 (Inherited: 0x280)
struct UTBP_UI_ConfirmSlotPurchase_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* BG_Image; // 0x288(0x08)
	struct UImage* Border; // 0x290(0x08)
	struct UTBP_UI_InputMenuPrompt_C* CancelPrompt; // 0x298(0x08)
	struct UTBP_UI_InputMenuPrompt_C* ConfirmPrompt; // 0x2a0(0x08)
	struct UTigerStyledRichTextBlock* ConfirmPurchase; // 0x2a8(0x08)
	struct UImage* ItemImageWidget; // 0x2b0(0x08)
	struct UTigerStyledRichTextBlock* ItemNameWidget; // 0x2b8(0x08)
	struct UTBP_UI_CurrencyText_C* PriceWidget; // 0x2c0(0x08)
	struct FTigerItemIdWithPrice ItemWithPrice; // 0x2c8(0x18)
	struct FMulticastInlineDelegate OnClosed; // 0x2e0(0x10)

	void OnLoaded_2F008DAC479D06EA7CE27EA187DD07B3(struct UObject* Loaded); // Function TBP_UI_ConfirmSlotPurchase.TBP_UI_ConfirmSlotPurchase_C.OnLoaded_2F008DAC479D06EA7CE27EA187DD07B3 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLoaded_9A80E476402A7298AD4629B56CCA144F(struct UObject* Loaded); // Function TBP_UI_ConfirmSlotPurchase.TBP_UI_ConfirmSlotPurchase_C.OnLoaded_9A80E476402A7298AD4629B56CCA144F // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Show(struct FTigerItemIdWithPrice InItemWithPrice); // Function TBP_UI_ConfirmSlotPurchase.TBP_UI_ConfirmSlotPurchase_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ConfirmPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature(); // Function TBP_UI_ConfirmSlotPurchase.TBP_UI_ConfirmSlotPurchase_C.BndEvt__ConfirmPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CancelPrompt_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature(); // Function TBP_UI_ConfirmSlotPurchase.TBP_UI_ConfirmSlotPurchase_C.BndEvt__CancelPrompt_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ConfirmSlotPurchase(int32_t EntryPoint); // Function TBP_UI_ConfirmSlotPurchase.TBP_UI_ConfirmSlotPurchase_C.ExecuteUbergraph_TBP_UI_ConfirmSlotPurchase // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnClosed__DelegateSignature(bool ConfirmedPurchase); // Function TBP_UI_ConfirmSlotPurchase.TBP_UI_ConfirmSlotPurchase_C.OnClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

