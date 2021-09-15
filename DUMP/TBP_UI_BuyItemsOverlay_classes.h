// WidgetBlueprintGeneratedClass TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C
// Size: 0x3f0 (Inherited: 0x280)
struct UTBP_UI_BuyItemsOverlay_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* FadeIn; // 0x288(0x08)
	struct UWidgetAnimation* Success; // 0x290(0x08)
	struct UWidgetAnimation* FadeOut; // 0x298(0x08)
	struct UTBP_UI_MenuButton_C* Button_Buy; // 0x2a0(0x08)
	struct UTBP_UI_MenuButton_C* Button_Cancel; // 0x2a8(0x08)
	struct UImage* CardAssetImage; // 0x2b0(0x08)
	struct UTBP_UI_CurrencyText_C* CostWidget; // 0x2b8(0x08)
	struct UTigerStyledRichTextBlock* ErrorMessageText; // 0x2c0(0x08)
	struct UImage* GradientLine; // 0x2c8(0x08)
	struct UTigerStyledRichTextBlock* Header; // 0x2d0(0x08)
	struct UImage* ImageBG; // 0x2d8(0x08)
	struct UTigerStyledRichTextBlock* ItemDisplayName; // 0x2e0(0x08)
	struct UImage* ItemIcon; // 0x2e8(0x08)
	struct UScaleBox* ItemScaleBox; // 0x2f0(0x08)
	struct UVerticalBox* NameCostBox; // 0x2f8(0x08)
	struct UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber; // 0x300(0x08)
	struct UTBP_UI_Popup_Base_C* TBP_UI_Popup_Base; // 0x308(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x310(0x08)
	struct FMulticastInlineDelegate OnConfirmBuy; // 0x318(0x10)
	struct FMulticastInlineDelegate OnCancelBuy; // 0x328(0x10)
	struct FTigerVendorStoreCategoryItem StoreItem; // 0x338(0x98)
	struct FMulticastInlineDelegate OnPopupRemoved; // 0x3d0(0x10)
	bool CanAfford; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct FTimerHandle TimeoutHandle; // 0x3e8(0x08)

	void GetTextureForStoreItem(struct UTexture2D* OuTexture); // Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.GetTextureForStoreItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void Close(); // Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnItemBought(); // Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnItemBought // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnErrorMessage(struct FText ErrorMessage); // Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnErrorMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RemovePopup(); // Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.RemovePopup // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BuyAndEquip(); // Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BuyAndEquip // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_MenuButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__TBP_UI_MenuButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(); // Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature(); // Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_Buy_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature(); // Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__Button_Buy_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnTimedOut(); // Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnTimedOut // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_BuyItemsOverlay(int32_t EntryPoint); // Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.ExecuteUbergraph_TBP_UI_BuyItemsOverlay // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnPopupRemoved__DelegateSignature(); // Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnPopupRemoved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCancelBuy__DelegateSignature(); // Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnCancelBuy__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnConfirmBuy__DelegateSignature(struct FTigerMetaStoreEntry StoreEntryToBuy, bool bEquipItem); // Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnConfirmBuy__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

