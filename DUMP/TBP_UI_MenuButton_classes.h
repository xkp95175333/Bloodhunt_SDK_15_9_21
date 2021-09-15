// WidgetBlueprintGeneratedClass TBP_UI_MenuButton.TBP_UI_MenuButton_C
// Size: 0x3e2 (Inherited: 0x260)
struct UTBP_UI_MenuButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* SmallButton_OnIdle; // 0x268(0x08)
	struct UWidgetAnimation* SmallButton_OnReleased; // 0x270(0x08)
	struct UWidgetAnimation* SmallButton_OnPressed; // 0x278(0x08)
	struct UWidgetAnimation* SmallButton_OnClick; // 0x280(0x08)
	struct UWidgetAnimation* SmallButton_OnHover; // 0x288(0x08)
	struct UButton* Button; // 0x290(0x08)
	struct UImage* ButtonBackground; // 0x298(0x08)
	struct UTBP_UI_Box_C* ButtonSelectionBorder; // 0x2a0(0x08)
	struct UNamedSlot* ContentOverride; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Image_686; // 0x2b8(0x08)
	struct UCanvasPanel* ScalePanel; // 0x2c0(0x08)
	struct UImage* SingleScalingButtonFill; // 0x2c8(0x08)
	struct UImage* SmallButton_Base; // 0x2d0(0x08)
	struct UImage* SmallButton_Border; // 0x2d8(0x08)
	struct UImage* SmallButton_Dot_Bottom; // 0x2e0(0x08)
	struct UImage* SmallButton_Dot_Top; // 0x2e8(0x08)
	struct UImage* SmallButton_Ornament_Bottom; // 0x2f0(0x08)
	struct UImage* SmallButton_Ornament_Top; // 0x2f8(0x08)
	struct USizeBox* SmallButton_SizeBox; // 0x300(0x08)
	struct UTigerStyledRichTextBlock* SmallButtonTextWidget; // 0x308(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x310(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x318(0x10)
	float BorderOpacity; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct FText ButtonText; // 0x330(0x18)
	float BorderOpacityTarget; // 0x348(0x04)
	float BorderOpacitySpeed; // 0x34c(0x04)
	struct FMulticastInlineDelegate OnHovered; // 0x350(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x360(0x10)
	struct FLinearColor PressedColor; // 0x370(0x10)
	struct FLinearColor HoveredColor; // 0x380(0x10)
	struct FLinearColor NormalColor; // 0x390(0x10)
	struct FLinearColor BorderPressedColor; // 0x3a0(0x10)
	struct FLinearColor BorderHoveredColor; // 0x3b0(0x10)
	struct FLinearColor BorderNormalColor; // 0x3c0(0x10)
	struct FDataTableRowHandle RichTextFont; // 0x3d0(0x10)
	bool Hovered; // 0x3e0(0x01)
	bool Pressed; // 0x3e1(0x01)

	void Set Is Clickable(bool bIsClickable); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.Set Is Clickable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetButtonStyleTexture(struct UTexture2D* Texture); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.SetButtonStyleTexture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateBackgroundStyle(); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.UpdateBackgroundStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateBorderOpacity(float DeltaTime); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.UpdateBorderOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetButtonText(struct FText InText); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.SetButtonText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_300_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_300_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_334_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_334_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_323_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_323_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_MenuButton(int32_t EntryPoint); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.ExecuteUbergraph_TBP_UI_MenuButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnUnhovered__DelegateSignature(); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnHovered__DelegateSignature(); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClicked__DelegateSignature(); // Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

