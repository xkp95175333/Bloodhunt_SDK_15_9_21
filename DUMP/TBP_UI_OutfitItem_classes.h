// WidgetBlueprintGeneratedClass TBP_UI_OutfitItem.TBP_UI_OutfitItem_C
// Size: 0x491 (Inherited: 0x280)
struct UTBP_UI_OutfitItem_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* OnUnhover; // 0x288(0x08)
	struct UWidgetAnimation* OnHover; // 0x290(0x08)
	struct UImage* BotGlow; // 0x298(0x08)
	struct UOverlay* CostOverlay; // 0x2a0(0x08)
	struct UVerticalBox* CostOwnedBox; // 0x2a8(0x08)
	struct UTBP_UI_CurrencyText_C* CostWidget; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Image_95; // 0x2c0(0x08)
	struct UButton* ImageButton; // 0x2c8(0x08)
	struct UImage* ItemImage; // 0x2d0(0x08)
	struct UScaleBox* ItemImage_Scalebox; // 0x2d8(0x08)
	struct UScaleBox* ItemImage_Scalebox_Store; // 0x2e0(0x08)
	struct URetainerBox* ItemImageRetainer; // 0x2e8(0x08)
	struct UImage* ItemImageStore; // 0x2f0(0x08)
	struct UTigerStyledRichTextBlock* ItemName; // 0x2f8(0x08)
	struct UTigerStyledRichTextBlock* ItemName_Store; // 0x300(0x08)
	struct UTigerStyledRichTextBlock* ItemType_Store; // 0x308(0x08)
	struct UTigerStyledRichTextBlock* ItemTypeText; // 0x310(0x08)
	struct UOverlay* NewItem; // 0x318(0x08)
	struct USizeBox* OutfitItem_SizeBox; // 0x320(0x08)
	struct UOverlay* OwnedEquippedWidget; // 0x328(0x08)
	struct UTigerStyledRichTextBlock* OwnedWidget; // 0x330(0x08)
	struct UImage* Rarity_left; // 0x338(0x08)
	struct UImage* Rarity_right; // 0x340(0x08)
	struct UVerticalBox* StoreLayout; // 0x348(0x08)
	struct UTBP_UI_Gradient_C* TBP_UI_Gradient; // 0x350(0x08)
	struct UTBP_UI_Gradient_C* TBP_UI_Gradient_2; // 0x358(0x08)
	struct UTBP_UI_InventoryClanBodyTypeIcons_C* TBP_UI_InventoryClanBodyTypeIcons; // 0x360(0x08)
	struct UTBP_UI_InventoryClanBodyTypeIcons_C* TBP_UI_InventoryClanBodyTypeIcons_Store; // 0x368(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x370(0x08)
	struct UTigerStyledRichTextBlock* TimeLeftText; // 0x378(0x08)
	struct UOverlay* TimeLeftWidget; // 0x380(0x08)
	struct UImage* TopGlow; // 0x388(0x08)
	struct UVerticalBox* WardrobeLayout; // 0x390(0x08)
	struct FTigerVendorStoreCategoryItem Item; // 0x398(0x98)
	struct TScriptInterface<None> ItemListener; // 0x430(0x10)
	bool bIsEquipped; // 0x440(0x01)
	bool bShowDurationLeft; // 0x441(0x01)
	bool Is_Owned; // 0x442(0x01)
	char pad_443[0x5]; // 0x443(0x05)
	struct FText Hair Color; // 0x448(0x18)
	struct FMulticastInlineDelegate On Hover; // 0x460(0x10)
	struct FMulticastInlineDelegate On Unhover; // 0x470(0x10)
	struct FMulticastInlineDelegate On Clicked; // 0x480(0x10)
	bool IsInWardrobe; // 0x490(0x01)

	void TintImageMaterial(struct UTigerInventoryItemBase* InItem); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.TintImageMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Wardrobe or Store Setup(); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Wardrobe or Store Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Get Time Left Text(struct FText Text); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Get Time Left Text // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void UpdateOwnedWidget(); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.UpdateOwnedWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetItemAsOwned(bool bIsOwned); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.SetItemAsOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DesaturateUnequippableItems(); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.DesaturateUnequippableItems // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetItemData(SoftClassProperty ItemClassPath, struct UTigerInventoryItemBase* InBaseItem, int32_t Cost, int32_t InventoryCount, struct FTigerItemId InSoftCurrencyId); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.SetItemData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Is A Combined Item(struct UTigerInventoryItemBase* Target, bool bSuccess); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Is A Combined Item // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void ChooseItem(struct UTigerInventoryItemBase* InItem, struct UTigerInventoryItemBase* OutItem); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.ChooseItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ChooseItemTintToShow(struct UTigerInventoryItemBase* InItem, struct FLinearColor TintColor); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.ChooseItemTintToShow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void ChooseItemIconToShow(struct UTigerInventoryItemBase* InItem, struct TSoftObjectPtr<struct UTexture2D> UITexture); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.ChooseItemIconToShow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	bool IsItemEquipped(SoftClassProperty ItemClassPath); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.IsItemEquipped // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void UpdateInventoryCount(int32_t InInventoryCount, bool bInIsEquipped, bool bIsOwnedByPlayer); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.UpdateInventoryCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ChangeButtonTexture(struct UTexture2D* InTexture); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.ChangeButtonTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetItem(struct UTexture2D* UITexture, struct FText UiName, int32_t Cost, int32_t InventoryCount, bool bInIsEquipped, struct FTigerItemId InSoftCurrencyId); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.SetItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLoaded_1F65942246C0D84B6A9FFD96930A3E30(struct UObject* Loaded); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.OnLoaded_1F65942246C0D84B6A9FFD96930A3E30 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void LoadItemTexture(); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.LoadItemTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Update Item(); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Update Item // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreviewItem(); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.PreviewItem // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateRarityAndClanIcon(struct UTigerInventoryItemBase* InItem); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.UpdateRarityAndClanIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick Entry Duration(); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Tick Entry Duration // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Destruct(); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_OutfitItem(int32_t EntryPoint); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.ExecuteUbergraph_TBP_UI_OutfitItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void On Clicked__DelegateSignature(); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.On Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void On Unhover__DelegateSignature(); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.On Unhover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void On Hover__DelegateSignature(); // Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.On Hover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

