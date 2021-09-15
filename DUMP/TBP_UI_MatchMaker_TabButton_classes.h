// WidgetBlueprintGeneratedClass TBP_UI_MatchMaker_TabButton.TBP_UI_MatchMaker_TabButton_C
// Size: 0x361 (Inherited: 0x280)
struct UTBP_UI_MatchMaker_TabButton_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* Deselected; // 0x288(0x08)
	struct UWidgetAnimation* Selected; // 0x290(0x08)
	struct UBorder* Background; // 0x298(0x08)
	struct USizeBox* ButtonSizeBox; // 0x2a0(0x08)
	struct UImage* IconImage; // 0x2a8(0x08)
	struct UButton* MenuItemButton; // 0x2b0(0x08)
	struct UTigerStyledRichTextBlock* MenuItemText; // 0x2b8(0x08)
	struct UTBP_UI_NewNotification_C* TBP_UI_NewNotification; // 0x2c0(0x08)
	struct FText ButtonText; // 0x2c8(0x18)
	struct FMulticastInlineDelegate OnButtonPressed; // 0x2e0(0x10)
	bool bIsSelected; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	struct FMargin LinePadding; // 0x2f4(0x10)
	int32_t OverrideFontSize; // 0x304(0x04)
	float OverrideWidth; // 0x308(0x04)
	bool bHasBackground; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	struct UTexture2D* IconTexture; // 0x310(0x08)
	struct FMulticastInlineDelegate OnButtonPressedCaller; // 0x318(0x10)
	struct FMulticastInlineDelegate OnButtonHovered; // 0x328(0x10)
	struct FMulticastInlineDelegate OnButtonUnhovered; // 0x338(0x10)
	bool bCallSiblingDeselect; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct FDataTableRowHandle RichTextFont; // 0x350(0x10)
	enum class ETigerNewNotificationMenuOptions NewNotificationMenuType; // 0x360(0x01)

	void AnimateTabSelection(); // Function TBP_UI_MatchMaker_TabButton.TBP_UI_MatchMaker_TabButton_C.AnimateTabSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Deselect(); // Function TBP_UI_MatchMaker_TabButton.TBP_UI_MatchMaker_TabButton_C.Deselect // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_MatchMaker_TabButton.TBP_UI_MatchMaker_TabButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_UI_MatchMaker_TabButton.TBP_UI_MatchMaker_TabButton_C.BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_MatchMaker_TabButton.TBP_UI_MatchMaker_TabButton_C.BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Select(); // Function TBP_UI_MatchMaker_TabButton.TBP_UI_MatchMaker_TabButton_C.Select // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_MatchMaker_TabButton.TBP_UI_MatchMaker_TabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_MatchMaker_TabButton.TBP_UI_MatchMaker_TabButton_C.BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_MatchMaker_TabButton.TBP_UI_MatchMaker_TabButton_C.BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_MatchMaker_TabButton(int32_t EntryPoint); // Function TBP_UI_MatchMaker_TabButton.TBP_UI_MatchMaker_TabButton_C.ExecuteUbergraph_TBP_UI_MatchMaker_TabButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnButtonUnhovered__DelegateSignature(); // Function TBP_UI_MatchMaker_TabButton.TBP_UI_MatchMaker_TabButton_C.OnButtonUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnButtonHovered__DelegateSignature(); // Function TBP_UI_MatchMaker_TabButton.TBP_UI_MatchMaker_TabButton_C.OnButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnButtonPressedCaller__DelegateSignature(struct UTBP_UI_MatchMaker_TabButton_C* Caller); // Function TBP_UI_MatchMaker_TabButton.TBP_UI_MatchMaker_TabButton_C.OnButtonPressedCaller__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnButtonPressed__DelegateSignature(); // Function TBP_UI_MatchMaker_TabButton.TBP_UI_MatchMaker_TabButton_C.OnButtonPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

