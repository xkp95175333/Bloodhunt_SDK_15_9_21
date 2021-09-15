// WidgetBlueprintGeneratedClass TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C
// Size: 0x410 (Inherited: 0x260)
struct UTBP_UI_PremiumCurrency_Button_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* OnHover; // 0x268(0x08)
	struct UImage* BG_Image; // 0x270(0x08)
	struct UImage* BotGlow; // 0x278(0x08)
	struct UTigerStyledRichTextBlock* Cost; // 0x280(0x08)
	struct UButton* CurrencyButton; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* CurrencyPlusBonusText; // 0x290(0x08)
	struct UTBP_UI_CurrencyText_C* CurrencyWidget; // 0x298(0x08)
	struct UImage* PremiumCurrency_Image; // 0x2a0(0x08)
	struct USizeBox* SizeBox_1; // 0x2a8(0x08)
	struct UTBP_UI_Gradient_C* TBP_UI_Gradient; // 0x2b0(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x2b8(0x08)
	struct UImage* TopGlow; // 0x2c0(0x08)
	int32_t PremiumCurrencyAmount; // 0x2c8(0x04)
	int32_t PremiumCurrencyBonusAmount; // 0x2cc(0x04)
	struct FVector2D SizeBox_Override; // 0x2d0(0x08)
	float Real Currency; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct FText Currency Name; // 0x2e0(0x18)
	struct FTigerVendorStoreCategoryItem Item; // 0x2f8(0x98)
	struct FMulticastInlineDelegate OnClicked; // 0x390(0x10)
	struct FTigerPremiumCurrencyPackData PremiumPackData; // 0x3a0(0x48)
	struct FText Bonus_Text; // 0x3e8(0x18)
	struct FString DownloadImagePath; // 0x400(0x10)

	void UpdatePackData(struct FTigerPremiumCurrencyPackData InNewPackData); // Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.UpdatePackData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateAppearance(); // Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.UpdateAppearance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnFail_70BD921E4DF523A95B2F7CA66C0D34FC(struct UTexture2DDynamic* Texture); // Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.OnFail_70BD921E4DF523A95B2F7CA66C0D34FC // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnSuccess_70BD921E4DF523A95B2F7CA66C0D34FC(struct UTexture2DDynamic* Texture); // Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.OnSuccess_70BD921E4DF523A95B2F7CA66C0D34FC // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_63_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.BndEvt__Button_63_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_63_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.BndEvt__Button_63_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CurrencyButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.BndEvt__CurrencyButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void DownloadImage(); // Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.DownloadImage // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_PremiumCurrency_Button(int32_t EntryPoint); // Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.ExecuteUbergraph_TBP_UI_PremiumCurrency_Button // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnClicked__DelegateSignature(struct FTigerPremiumCurrencyPackData PremiumPackData); // Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

