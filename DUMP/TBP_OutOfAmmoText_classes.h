// WidgetBlueprintGeneratedClass TBP_OutOfAmmoText.TBP_OutOfAmmoText_C
// Size: 0x329 (Inherited: 0x280)
struct UTBP_OutOfAmmoText_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* ReloadStartAnimation; // 0x288(0x08)
	struct UWidgetAnimation* FadeInAndOutWidgetAnimation; // 0x290(0x08)
	struct UWidgetAnimation* ReloadFailedAnimation; // 0x298(0x08)
	struct UWidgetAnimation* ReloadCompleteAnimation; // 0x2a0(0x08)
	struct UWidgetAnimation* OutOfAmmoAnimation; // 0x2a8(0x08)
	struct UWidgetSwitcher* AmmoStateSwitcher; // 0x2b0(0x08)
	struct UVerticalBox* EmptyClipBox; // 0x2b8(0x08)
	struct UTigerStyledRichTextBlock* EmptyClipText; // 0x2c0(0x08)
	struct UImage* LeftFadeProgress; // 0x2c8(0x08)
	struct UVerticalBox* LowAmmoBox; // 0x2d0(0x08)
	struct UTigerStyledRichTextBlock* LowAmmoText; // 0x2d8(0x08)
	struct UVerticalBox* OutOfAmmoBox; // 0x2e0(0x08)
	struct UTigerStyledRichTextBlock* OutOfAmmoText; // 0x2e8(0x08)
	struct UVerticalBox* ReloadingBox; // 0x2f0(0x08)
	struct UTigerStyledRichTextBlock* ReloadingText; // 0x2f8(0x08)
	struct UProgressBar* ReloadProgressBar; // 0x300(0x08)
	struct UImage* RightFadeProgress; // 0x308(0x08)
	struct UTBP_UI_HorizontalFadeSlot_C* TBP_UI_HorizontalFadeSlot; // 0x310(0x08)
	bool CanPlayReloadAnimation; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct UWidget* QueuedWidgetToShowAfterFadeOut; // 0x320(0x08)
	bool IsReloading; // 0x328(0x01)

	void SetNonReloadWidget(struct UWidget* Widget); // Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.SetNonReloadWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReloadAnimationDone(); // Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.ReloadAnimationDone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnReloadAborted(); // Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.OnReloadAborted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnReloadFinished(); // Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.OnReloadFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnReloadStart(); // Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.OnReloadStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReloadAnimationStartFadeOut(); // Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.ReloadAnimationStartFadeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayReloadEndAnimation(struct UWidgetAnimation* ReloadAnimation); // Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.PlayReloadEndAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IsWaitingForReloadingAnimation(bool AnimationPlaying); // Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.IsWaitingForReloadingAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void Construct(); // Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Reload Aborted(); // Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Reload Aborted // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Reload Finished(); // Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Reload Finished // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Reload Start(); // Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Reload Start // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_OutOfAmmoText(int32_t EntryPoint); // Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.ExecuteUbergraph_TBP_OutOfAmmoText // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

