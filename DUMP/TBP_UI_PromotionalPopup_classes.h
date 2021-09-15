// WidgetBlueprintGeneratedClass TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C
// Size: 0x3d0 (Inherited: 0x300)
struct UTBP_UI_PromotionalPopup_C : UTigerPromotionalUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UWidgetAnimation* FadeOut; // 0x308(0x08)
	struct UTBP_UI_MenuButton_C* CloseButton; // 0x310(0x08)
	struct UImage* CloseImage; // 0x318(0x08)
	struct UButton* CornerCloseButton; // 0x320(0x08)
	struct UTigerStyledRichTextBlock* DescriptionWidget; // 0x328(0x08)
	struct UTBP_UI_MenuButton_C* GoToStoreButton; // 0x330(0x08)
	struct UTigerStyledRichTextBlock* HeaderWidget; // 0x338(0x08)
	struct UImage* Image_104; // 0x340(0x08)
	struct UImage* PromoImageWidget; // 0x348(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x350(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider_2; // 0x358(0x08)
	struct UTBP_UI_Gradient_C* TBP_UI_Gradient; // 0x360(0x08)
	struct FString Subheader_TextFormatting; // 0x368(0x10)
	struct FString Subtitle_TextFormatting; // 0x378(0x10)
	struct FString UL_TextFormatting; // 0x388(0x10)
	struct FString Bold_TextFormating; // 0x398(0x10)
	struct FString EF_TextFormatting; // 0x3a8(0x10)
	struct FText BR_TextFormatting; // 0x3b8(0x18)

	void HideTextIfEmpty(struct FText InText); // Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.HideTextIfEmpty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowFirstTimeEntry(); // Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.ShowFirstTimeEntry // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ApplyTextureToImage(struct UTexture* InTexture); // Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.ApplyTextureToImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnFail_786AAD54450C034286CFC995F0D77869(struct UTexture2DDynamic* Texture); // Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.OnFail_786AAD54450C034286CFC995F0D77869 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnSuccess_786AAD54450C034286CFC995F0D77869(struct UTexture2DDynamic* Texture); // Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.OnSuccess_786AAD54450C034286CFC995F0D77869 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnShowFirstTimeEntry(); // Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.OnShowFirstTimeEntry // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnShowEntry(struct FTigerPromotionalPopupConfigEntry InEntry); // Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.OnShowEntry // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1(); // Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__GoToStoreButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.BndEvt__GoToStoreButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CornerCloseButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.BndEvt__CornerCloseButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BeginPopupCloseAnimated(); // Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.BeginPopupCloseAnimated // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_PromotionalPopup(int32_t EntryPoint); // Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.ExecuteUbergraph_TBP_UI_PromotionalPopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

