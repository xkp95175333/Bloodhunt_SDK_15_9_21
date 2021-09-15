// WidgetBlueprintGeneratedClass TBP_UI_LoadingScreen_Simple.TBP_UI_LoadingScreen_Simple_C
// Size: 0x334 (Inherited: 0x298)
struct UTBP_UI_LoadingScreen_Simple_C : UTigerLoadingScreenUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* MoveText; // 0x2a0(0x08)
	struct UWidgetAnimation* FadeOutAnimation; // 0x2a8(0x08)
	struct UWidgetAnimation* FadeInAnimation; // 0x2b0(0x08)
	struct UImage* BackgroundWidget; // 0x2b8(0x08)
	struct UTigerStyledRichTextBlock* DestinationText; // 0x2c0(0x08)
	struct UImage* Image_119; // 0x2c8(0x08)
	struct UTextBlock* LoadingScreenWarning; // 0x2d0(0x08)
	struct UTextBlock* MovingTextAnim; // 0x2d8(0x08)
	struct UCanvasPanel* RootLayout; // 0x2e0(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x2e8(0x08)
	struct UTBP_UI_Gradient_C* TBP_UI_Gradient; // 0x2f0(0x08)
	struct UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber; // 0x2f8(0x08)
	struct UTextBlock* TickMovingText; // 0x300(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_9; // 0x308(0x08)
	struct UTigerStyledRichTextBlock* TipDescriptionText; // 0x310(0x08)
	struct UTigerStyledRichTextBlock* TipTitleText; // 0x318(0x08)
	int32_t PlayngId; // 0x320(0x04)
	float DebugPingPongSign; // 0x324(0x04)
	struct UTBP_LoadingToolTip_C* LoadingTipsAsset; // 0x328(0x08)
	int32_t LastLoadingTipUpdatedTime; // 0x330(0x04)

	void SetEditorPreviewState(); // Function TBP_UI_LoadingScreen_Simple.TBP_UI_LoadingScreen_Simple_C.SetEditorPreviewState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateLoadingTips(); // Function TBP_UI_LoadingScreen_Simple.TBP_UI_LoadingScreen_Simple_C.UpdateLoadingTips // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RandomizeLoadingTip(); // Function TBP_UI_LoadingScreen_Simple.TBP_UI_LoadingScreen_Simple_C.RandomizeLoadingTip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateLoadingDebug(float InDeltaTime); // Function TBP_UI_LoadingScreen_Simple.TBP_UI_LoadingScreen_Simple_C.UpdateLoadingDebug // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLoaded_A9BA45904D621D959BC5A8831E744710(struct UObject* Loaded); // Function TBP_UI_LoadingScreen_Simple.TBP_UI_LoadingScreen_Simple_C.OnLoaded_A9BA45904D621D959BC5A8831E744710 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLoaded_982BBF6049ABFCB92CFEBD91FBE8FCA1(struct UObject* Loaded); // Function TBP_UI_LoadingScreen_Simple.TBP_UI_LoadingScreen_Simple_C.OnLoaded_982BBF6049ABFCB92CFEBD91FBE8FCA1 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_LoadingScreen_Simple.TBP_UI_LoadingScreen_Simple_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void InputBlocker(); // Function TBP_UI_LoadingScreen_Simple.TBP_UI_LoadingScreen_Simple_C.InputBlocker // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void StartFadeOut(); // Function TBP_UI_LoadingScreen_Simple.TBP_UI_LoadingScreen_Simple_C.StartFadeOut // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1(); // Function TBP_UI_LoadingScreen_Simple.TBP_UI_LoadingScreen_Simple_C.WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_LoadingScreen_Simple.TBP_UI_LoadingScreen_Simple_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_LoadingScreen_Simple.TBP_UI_LoadingScreen_Simple_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_LoadingScreen_Simple(int32_t EntryPoint); // Function TBP_UI_LoadingScreen_Simple.TBP_UI_LoadingScreen_Simple_C.ExecuteUbergraph_TBP_UI_LoadingScreen_Simple // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

