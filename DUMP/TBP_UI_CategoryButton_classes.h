// WidgetBlueprintGeneratedClass TBP_UI_CategoryButton.TBP_UI_CategoryButton_C
// Size: 0x385 (Inherited: 0x280)
struct UTBP_UI_CategoryButton_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTigerStyledRichTextBlock* ButtonTextBlock_R; // 0x288(0x08)
	struct UButton* CategoryButton; // 0x290(0x08)
	struct UHorizontalBox* CategoryButtonBox; // 0x298(0x08)
	struct UNamedSlot* Content; // 0x2a0(0x08)
	struct UImage* Icon; // 0x2a8(0x08)
	struct UImage* IconBackground; // 0x2b0(0x08)
	struct USizeBox* IconBox; // 0x2b8(0x08)
	struct UTBP_UI_NewNotification_C* TBP_UI_NewNotification; // 0x2c0(0x08)
	struct UTexture2D* IconImage; // 0x2c8(0x08)
	struct UTexture2D* IconBackgroundImage; // 0x2d0(0x08)
	struct FLinearColor IconColorNormal; // 0x2d8(0x10)
	struct FLinearColor IconColorHover; // 0x2e8(0x10)
	struct FLinearColor IconColorSelected; // 0x2f8(0x10)
	struct FText ButtonText; // 0x308(0x18)
	float TextPadding; // 0x320(0x04)
	float IconScale; // 0x324(0x04)
	float IconBackgroundScale; // 0x328(0x04)
	bool bSetIconToRight; // 0x32c(0x01)
	bool bHideContentWhenUnused; // 0x32d(0x01)
	bool bIsSelectedWhenUsed; // 0x32e(0x01)
	char pad_32F[0x1]; // 0x32f(0x01)
	struct FMulticastInlineDelegate OnButtonPressed; // 0x330(0x10)
	struct FMulticastInlineDelegate OnButtonHover; // 0x340(0x10)
	struct FMulticastInlineDelegate OnButtonUnhover; // 0x350(0x10)
	bool bShouldSelectChildCategory; // 0x360(0x01)
	bool bIsSubcategory; // 0x361(0x01)
	bool bIsSelected; // 0x362(0x01)
	bool bIsUsed; // 0x363(0x01)
	char pad_364[0x4]; // 0x364(0x04)
	struct FDataTableRowHandle RichTextFont; // 0x368(0x10)
	float RichTextOpacityNormal; // 0x378(0x04)
	float RichTextOpacityHover; // 0x37c(0x04)
	float RichTextOpacitySelected; // 0x380(0x04)
	enum class ETigerNewNotificationMenuOptions MenuCategory; // 0x384(0x01)

	void GetFirstChildCategory(struct UTBP_UI_CategoryButton_C* OutChildCategory); // Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.GetFirstChildCategory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetParentCategory(struct UTBP_UI_CategoryButton_C* OutParentCategory); // Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.GetParentCategory // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowContent(); // Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.ShowContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UnselectContent(); // Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.UnselectContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Unselect(); // Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.Unselect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Select(); // Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.Select // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_CategoryButton(int32_t EntryPoint); // Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.ExecuteUbergraph_TBP_UI_CategoryButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnButtonUnhover__DelegateSignature(); // Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.OnButtonUnhover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnButtonHover__DelegateSignature(); // Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.OnButtonHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnButtonPressed__DelegateSignature(); // Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.OnButtonPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

