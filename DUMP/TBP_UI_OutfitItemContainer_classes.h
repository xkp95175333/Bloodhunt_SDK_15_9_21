// WidgetBlueprintGeneratedClass TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C
// Size: 0x2c8 (Inherited: 0x280)
struct UTBP_UI_OutfitItemContainer_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UGridPanel* ItemContainer; // 0x288(0x08)
	struct UScrollBox* ScrollContainer; // 0x290(0x08)
	struct UThrobber* UpdateThrobber; // 0x298(0x08)
	struct TScriptInterface<None> ItemListener; // 0x2a0(0x10)
	struct TArray<struct UTBP_UI_OutfitItem_C*> OutfitWidgets; // 0x2b0(0x10)
	struct FVector2D NewVar_1; // 0x2c0(0x08)

	void CreateStoreItems(struct TArray<struct FTigerVendorStoreCategoryItem> Items); // Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.CreateStoreItems // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateOwnerStatus(SoftClassProperty ItemClassPath, int32_t NewInventoryCount, bool bIsEquipped); // Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.UpdateOwnerStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	bool DoesPlayerOwnItem(SoftClassProperty ItemClassPath); // Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.DoesPlayerOwnItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
	void SetItemListener(struct TScriptInterface<None> ItemListener); // Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.SetItemListener // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateStoreItem(struct FTigerVendorStoreCategoryItem StoreItem, struct UTBP_UI_OutfitItem_C* ItemWidget); // Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.CreateStoreItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Reset(); // Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.Reset // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_OutfitItemContainer(int32_t EntryPoint); // Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.ExecuteUbergraph_TBP_UI_OutfitItemContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

