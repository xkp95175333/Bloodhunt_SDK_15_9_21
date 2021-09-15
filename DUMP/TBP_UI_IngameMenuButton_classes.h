// WidgetBlueprintGeneratedClass TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C
// Size: 0x2e1 (Inherited: 0x280)
struct UTBP_UI_IngameMenuButton_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* Highlight; // 0x288(0x08)
	struct UWidgetAnimation* Deselected; // 0x290(0x08)
	struct UWidgetAnimation* Selected; // 0x298(0x08)
	struct UImage* CamarillaSymbol; // 0x2a0(0x08)
	struct UCanvasPanel* CanvasPanel_50; // 0x2a8(0x08)
	struct UButton* MenuItemButton; // 0x2b0(0x08)
	struct UTigerStyledRichTextBlock* MenuItemText; // 0x2b8(0x08)
	struct UTBP_UI_NewNotification_C* NewNotification; // 0x2c0(0x08)
	struct UTigerIngameSubmenuWidget* MenuWidget; // 0x2c8(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2d0(0x10)
	bool IsSelected; // 0x2e0(0x01)

	void SetDisplayedText(struct FText Text); // Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.SetDisplayedText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnNewMenuSelected(struct UTigerIngameSubmenuWidget* NewMenu, bool ShouldUseButtonAsset, struct UTBP_UI_IngameMenuButton_C* NewMenuButton, struct UTBP_UI_IngameMenuButton_C* CurrenyMenyButton); // Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnNewMenuSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnDeselected(); // Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnDeselected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnSelected(); // Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FSlateColor GetMenuItemTextColor(); // Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.GetMenuItemTextColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void OpenOptions(); // Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OpenOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OpenMap(); // Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OpenMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OpenInventory(); // Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OpenInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnClickedItemButton(); // Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnClickedItemButton // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_IngameMenuButton(int32_t EntryPoint); // Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.ExecuteUbergraph_TBP_UI_IngameMenuButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnClicked__DelegateSignature(struct UTigerIngameSubmenuWidget* SubmenuWidget); // Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

