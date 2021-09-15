// WidgetBlueprintGeneratedClass TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C
// Size: 0x388 (Inherited: 0x260)
struct UTBP_UI_TransitionMenuButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Deselected; // 0x268(0x08)
	struct UWidgetAnimation* Pressed; // 0x270(0x08)
	struct UWidgetAnimation* Hover; // 0x278(0x08)
	struct UWidgetAnimation* FadeIn; // 0x280(0x08)
	struct UImage* BG_Solid; // 0x288(0x08)
	struct UBorder* Border_Outline; // 0x290(0x08)
	struct UButton* Button; // 0x298(0x08)
	struct UTBP_UI_Box_C* ButtonSelectionBorder; // 0x2a0(0x08)
	struct UImage* CloudWidget; // 0x2a8(0x08)
	struct UNamedSlot* ContentOverride; // 0x2b0(0x08)
	struct UImage* FadedBgWidget; // 0x2b8(0x08)
	struct UImage* FlashOverlay; // 0x2c0(0x08)
	struct UTBP_UI_TransitionWidget_C* InnerTransitionWidget; // 0x2c8(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x2f0(0x10)
	float AnimationDelay; // 0x300(0x04)
	float BorderOpacityTarget; // 0x304(0x04)
	float BorderOpacity; // 0x308(0x04)
	float BorderOpacitySpeed; // 0x30c(0x04)
	bool bBoldBorder; // 0x310(0x01)
	enum class EUMGSequencePlayMode LastPressedPlayMode; // 0x311(0x01)
	bool IsSelectable; // 0x312(0x01)
	char pad_313[0x5]; // 0x313(0x05)
	struct UMaterialInstanceDynamic* BorderMaterial; // 0x318(0x08)
	bool bShowHoverBorder; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	struct FLinearColor BackgroundColor; // 0x324(0x10)
	struct FLinearColor UnhoveredBorderColor; // 0x334(0x10)
	struct FLinearColor HoveredBorderColor; // 0x344(0x10)
	bool bEnableClouds; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
	float ContentFadeInDelay; // 0x358(0x04)
	bool bIsSelected; // 0x35c(0x01)
	bool bIsWaitingForFadeIn; // 0x35d(0x01)
	char pad_35E[0x2]; // 0x35e(0x02)
	struct FSlateColor CloudTintColor; // 0x360(0x28)

	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.SetBackgroundColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IsSelected(bool IsSelected); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.IsSelected // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
	void SetIsDeselected(); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.SetIsDeselected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetIsSelected(); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateCloudBackground(); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.CreateCloudBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayPressedOverlayAnimation(enum class EUMGSequencePlayMode PlayMode); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.PlayPressedOverlayAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayAnimationFromCurrentPosition(struct UWidgetAnimation* InAnimation, enum class EUMGSequencePlayMode InPlayMode); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.PlayAnimationFromCurrentPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateBorderMaterial(); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.CreateBorderMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateBorderOpacity(float InDeltaTime); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.UpdateBorderOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature(); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnTransitionStarted(); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnTransitionStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RestartAnimation(); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.RestartAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_Pressed_K2Node_WidgetAnimationEvent_1(); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.WidgetAnimationEvt_Pressed_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x16c0340
	void DisableInput(); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.DisableInput // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_TransitionMenuButton(int32_t EntryPoint); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.ExecuteUbergraph_TBP_UI_TransitionMenuButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnUnhovered__DelegateSignature(); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnHovered__DelegateSignature(); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClicked__DelegateSignature(); // Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

