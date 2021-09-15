// WidgetBlueprintGeneratedClass TBP_UI_NewsWidget.TBP_UI_NewsWidget_C
// Size: 0x338 (Inherited: 0x280)
struct UTBP_UI_NewsWidget_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* OnHover; // 0x288(0x08)
	struct UImage* BotGlow; // 0x290(0x08)
	struct UButton* ButtonWidget; // 0x298(0x08)
	struct UTigerStyledRichTextBlock* HeaderWidget; // 0x2a0(0x08)
	struct UTigerStyledRichTextBlock* MainTextWidget; // 0x2a8(0x08)
	struct UImage* NewsImage; // 0x2b0(0x08)
	struct UTBP_UI_Gradient_C* TBP_UI_Gradient; // 0x2b8(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x2c0(0x08)
	struct UImage* TopGlow; // 0x2c8(0x08)
	struct FText HeaderText; // 0x2d0(0x18)
	struct FText MainText; // 0x2e8(0x18)
	struct TSoftObjectPtr<struct UTexture2D> ContentTexture; // 0x300(0x28)
	struct FString UrlToLaunch; // 0x328(0x10)

	void OnLoaded_F3B4134A484B7CD82F7608BEDF06AF45(struct UObject* Loaded); // Function TBP_UI_NewsWidget.TBP_UI_NewsWidget_C.OnLoaded_F3B4134A484B7CD82F7608BEDF06AF45 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_NewsWidget.TBP_UI_NewsWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_NewsWidget.TBP_UI_NewsWidget_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_NewsWidget.TBP_UI_NewsWidget_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_NewsWidget.TBP_UI_NewsWidget_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_NewsWidget(int32_t EntryPoint); // Function TBP_UI_NewsWidget.TBP_UI_NewsWidget_C.ExecuteUbergraph_TBP_UI_NewsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

