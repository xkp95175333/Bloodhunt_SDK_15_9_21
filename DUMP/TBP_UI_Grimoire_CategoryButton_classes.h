// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C
// Size: 0x33d (Inherited: 0x260)
struct UTBP_UI_Grimoire_CategoryButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BottomLine; // 0x268(0x08)
	struct UHorizontalBox* ButtonBox; // 0x270(0x08)
	struct UTigerStyledRichTextBlock* ButtonText; // 0x278(0x08)
	struct UButton* CatButton; // 0x280(0x08)
	struct UImage* CollapseIcon; // 0x288(0x08)
	struct UVerticalBox* ContentBox; // 0x290(0x08)
	struct UImage* ExpandIcon; // 0x298(0x08)
	struct UNamedSlot* GamepadHelperSlot; // 0x2a0(0x08)
	struct UHorizontalBox* IconBox; // 0x2a8(0x08)
	struct UImage* LockedIcon; // 0x2b0(0x08)
	struct UExpandableArea* SubEntryArea; // 0x2b8(0x08)
	struct UImage* SuggestedIcon; // 0x2c0(0x08)
	struct UTBP_UI_NewNotification_C* TBP_UI_NewNotification; // 0x2c8(0x08)
	struct UTigerGrimoireCategory* MenuItemCategory; // 0x2d0(0x08)
	struct UTigerGrimoireEntry* MenuItemEntry; // 0x2d8(0x08)
	struct FMulticastInlineDelegate On Clicked Category; // 0x2e0(0x10)
	struct FMulticastInlineDelegate On Clicked Entry; // 0x2f0(0x10)
	struct UTBP_UI_Grimoire_CategoryBox_C* CategoryBox; // 0x300(0x08)
	bool IsUnlocked; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct UTigerGrimoireCategory* ParentCat; // 0x310(0x08)
	struct UTBP_UI_Grimoire_CategoryButton_C* ParentCategoryWidget; // 0x318(0x08)
	bool IsSelected; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	float UnhoveredOpacity; // 0x324(0x04)
	float HoveredOpacity; // 0x328(0x04)
	float LockIconMaxOpacity; // 0x32c(0x04)
	float SelectedOpactiy; // 0x330(0x04)
	bool IsExpanding; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	float PostExpansionTime; // 0x338(0x04)
	bool PreviousExpansionState; // 0x33c(0x01)

	void ToggleExpansion(); // Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.ToggleExpansion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void MarkEntryAsRead(); // Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.MarkEntryAsRead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IsParentExpanding(bool outIsExpanding); // Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.IsParentExpanding // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetHighlightedAsCategoryButton(bool InHighlight); // Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.SetHighlightedAsCategoryButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetHighlightedAsEntryButton(bool InHighlight); // Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.SetHighlightedAsEntryButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Unlocked(bool IsUnlocked); // Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Unlocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CatButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__CatButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__SubEntryArea_K2Node_ComponentBoundEvent_3_OnExpandableAreaExpansionChanged__DelegateSignature(struct UExpandableArea* Area, bool bIsExpanded); // Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__SubEntryArea_K2Node_ComponentBoundEvent_3_OnExpandableAreaExpansionChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CatButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__CatButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CatButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__CatButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Media Loaded(); // Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Media Loaded // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Grimoire_CategoryButton(int32_t EntryPoint); // Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.ExecuteUbergraph_TBP_UI_Grimoire_CategoryButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void On Clicked Entry__DelegateSignature(struct UTBP_UI_Grimoire_CategoryButton_C* EntryButton); // Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.On Clicked Entry__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void On Clicked Category__DelegateSignature(struct UTBP_UI_Grimoire_CategoryButton_C* CategoryButton); // Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.On Clicked Category__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

