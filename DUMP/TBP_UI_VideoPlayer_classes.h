// WidgetBlueprintGeneratedClass TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C
// Size: 0x358 (Inherited: 0x280)
struct UTBP_UI_VideoPlayer_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* OnPlay; // 0x288(0x08)
	struct UWidgetAnimation* OnPause; // 0x290(0x08)
	struct UWidgetAnimation* OnHover; // 0x298(0x08)
	struct UWidgetAnimation* OverlayFadeBlackToWhite; // 0x2a0(0x08)
	struct UWidgetSwitcher* ButtonImageSwitcher; // 0x2a8(0x08)
	struct UImage* ExitFullscreenButtonImage; // 0x2b0(0x08)
	struct UButton* FullscreenButton; // 0x2b8(0x08)
	struct UImage* FullScreenButtonImage; // 0x2c0(0x08)
	struct UWidgetSwitcher* FullscreenButtonSwitcher; // 0x2c8(0x08)
	struct UThrobber* LoadingThrobber; // 0x2d0(0x08)
	struct UImage* PauseButtonImage; // 0x2d8(0x08)
	struct UImage* PauseCenterImage; // 0x2e0(0x08)
	struct UImage* PlayButtonImage; // 0x2e8(0x08)
	struct UImage* PlayCenterImage; // 0x2f0(0x08)
	struct USlider* Slider; // 0x2f8(0x08)
	struct UProgressBar* SliderProgress; // 0x300(0x08)
	struct UButton* TogglePlayButton; // 0x308(0x08)
	struct UBorder* VideoOverlay; // 0x310(0x08)
	struct UImage* VideoTexture; // 0x318(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x320(0x08)
	bool ConsumeNextPauseHover; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct UMediaTexture* MediaTexture; // 0x330(0x08)
	bool IsPlaying; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	float PreCacheTimer; // 0x33c(0x04)
	bool IsScrubbing; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct FMulticastInlineDelegate FullscreenButtonPressed; // 0x348(0x10)

	void SetFullscreenIcon(bool Expanded); // Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.SetFullscreenIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Hide(); // Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Hide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Show(struct UMediaSource* InMediaSource); // Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Show // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnMediaOpened(struct FString OpenedUrl); // Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnMediaOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__PauseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.BndEvt__PauseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnScrubMouseCaptureBegin(); // Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnScrubMouseCaptureBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnScrubMouseCaptureEnd(); // Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnScrubMouseCaptureEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnScrubValueChanged(float Value); // Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnScrubValueChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__FullscreenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.BndEvt__FullscreenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_VideoPlayer(int32_t EntryPoint); // Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.ExecuteUbergraph_TBP_UI_VideoPlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void FullscreenButtonPressed__DelegateSignature(); // Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.FullscreenButtonPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

