// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C
// Size: 0x346 (Inherited: 0x260)
struct UTBP_UI_SystemMenuSettingsListItemBorder_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Deselected; // 0x268(0x08)
	struct UWidgetAnimation* Pressed; // 0x270(0x08)
	struct UWidgetAnimation* Hover; // 0x278(0x08)
	struct UWidgetAnimation* FadeIn; // 0x280(0x08)
	struct UButton* Button; // 0x288(0x08)
	struct UImage* CloudWidget; // 0x290(0x08)
	struct UNamedSlot* ContentOverride; // 0x298(0x08)
	struct UImage* FadedBgWidget; // 0x2a0(0x08)
	struct UImage* FlashOverlay; // 0x2a8(0x08)
	struct UTBP_UI_TransitionWidget_C* InnerTransitionWidget; // 0x2b0(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x2d8(0x10)
	float AnimationDelay; // 0x2e8(0x04)
	float BorderOpacityTarget; // 0x2ec(0x04)
	float BorderOpacity; // 0x2f0(0x04)
	float BorderOpacitySpeed; // 0x2f4(0x04)
	bool bBoldBorder; // 0x2f8(0x01)
	enum class EUMGSequencePlayMode LastPressedPlayMode; // 0x2f9(0x01)
	bool IsSelectable; // 0x2fa(0x01)
	char pad_2FB[0x5]; // 0x2fb(0x05)
	struct UMaterialInstanceDynamic* BorderMaterial; // 0x300(0x08)
	bool bShowHoverBorder; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	struct FLinearColor BackgroundColor; // 0x30c(0x10)
	struct FLinearColor UnhoveredBorderColor; // 0x31c(0x10)
	struct FLinearColor HoveredBorderColor; // 0x32c(0x10)
	bool bEnableClouds; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	float ContentFadeInDelay; // 0x340(0x04)
	bool bIsSelected; // 0x344(0x01)
	bool bIsWaitingForFadeIn; // 0x345(0x01)

	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.SetBackgroundColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IsSelected(bool IsSelected); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.IsSelected // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
	void SetIsDeselected(); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.SetIsDeselected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetIsSelected(); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateCloudBackground(); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.CreateCloudBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayPressedOverlayAnimation(enum class EUMGSequencePlayMode PlayMode); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.PlayPressedOverlayAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayAnimationFromCurrentPosition(struct UWidgetAnimation* InAnimation, enum class EUMGSequencePlayMode InPlayMode); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.PlayAnimationFromCurrentPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateBorderMaterial(); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.CreateBorderMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateBorderOpacity(float InDeltaTime); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.UpdateBorderOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnTransitionStarted(); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.OnTransitionStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RestartAnimation(); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.RestartAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_SystemMenuSettingsListItemBorder(int32_t EntryPoint); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.ExecuteUbergraph_TBP_UI_SystemMenuSettingsListItemBorder // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnUnhovered__DelegateSignature(); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnHovered__DelegateSignature(); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClicked__DelegateSignature(); // Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

