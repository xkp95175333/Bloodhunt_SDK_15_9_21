// WidgetBlueprintGeneratedClass TBP_UI_TitleScreen.TBP_UI_TitleScreen_C
// Size: 0x338 (Inherited: 0x280)
struct UTBP_UI_TitleScreen_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* OutAnimation; // 0x288(0x08)
	struct UWidgetAnimation* Loop_Text_Animation; // 0x290(0x08)
	struct UWidgetAnimation* InAnimation; // 0x298(0x08)
	struct UScaleBox* BackgroundScaleBox; // 0x2a0(0x08)
	struct UImage* BackgroundVideoWidget; // 0x2a8(0x08)
	struct UImage* BlackScreen; // 0x2b0(0x08)
	struct UTBP_UI_TitleError_C* ErrorSubscreen; // 0x2b8(0x08)
	struct UImage* Image_547; // 0x2c0(0x08)
	struct UTigerStyledRichTextBlock* Message; // 0x2c8(0x08)
	struct UTigerStyledRichTextBlock* PressAnyKeyText; // 0x2d0(0x08)
	struct UImage* Season_Logo; // 0x2d8(0x08)
	struct UTigerStyledRichTextBlock* Title_activebuild_text; // 0x2e0(0x08)
	struct UImage* Title_Logo; // 0x2e8(0x08)
	struct UImage* Vein1; // 0x2f0(0x08)
	struct UImage* Vein2; // 0x2f8(0x08)
	struct UImage* Vein3; // 0x300(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x308(0x08)
	struct FMulticastInlineDelegate OnLandingPageClosed; // 0x310(0x10)
	bool Is Playing Out Animation; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct FMulticastInlineDelegate OnLandingPageFadeOutStarted; // 0x328(0x10)

	void SetupVeins(); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.SetupVeins // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CloseErrorSubscreen(); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.CloseErrorSubscreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OpenErrorSubscreen(); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OpenErrorSubscreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HandleInputReaction(); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.HandleInputReaction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnVideoOpened(struct FString OpenedUrl); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnVideoOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1(); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x16c0340
	void Destruct(); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Open(); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.Open // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ErrorSubscreen_K2Node_ComponentBoundEvent_0_OnRetry__DelegateSignature(); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.BndEvt__ErrorSubscreen_K2Node_ComponentBoundEvent_0_OnRetry__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnLandingPageClosed_Event(); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnLandingPageClosed_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_3(); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_4(); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_4 // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_TitleScreen(int32_t EntryPoint); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.ExecuteUbergraph_TBP_UI_TitleScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnLandingPageFadeOutStarted__DelegateSignature(); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnLandingPageFadeOutStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLandingPageClosed__DelegateSignature(); // Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnLandingPageClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

