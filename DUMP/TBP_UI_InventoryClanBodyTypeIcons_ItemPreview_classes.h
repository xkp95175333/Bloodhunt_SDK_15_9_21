// WidgetBlueprintGeneratedClass TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C
// Size: 0x2d0 (Inherited: 0x280)
struct UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTigerStyledRichTextBlock* AvailableForText; // 0x288(0x08)
	struct UHorizontalBox* BodyContainer; // 0x290(0x08)
	struct UImage* BodyTypeIcon; // 0x298(0x08)
	struct UTigerStyledRichTextBlock* BodyTypeText; // 0x2a0(0x08)
	struct UHorizontalBox* ClanContainer; // 0x2a8(0x08)
	struct UImage* ClanIcon; // 0x2b0(0x08)
	struct UImage* ClanStrikethrough; // 0x2b8(0x08)
	struct UTigerStyledRichTextBlock* ClanText; // 0x2c0(0x08)
	struct UVerticalBox* Container; // 0x2c8(0x08)

	void SetOwnerIndicators(struct UTigerInventoryItemBase* InItem); // Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.SetOwnerIndicators // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetClanOrArchetypeIcon(struct TArray<enum class ETigerClan> InClans, struct TArray<enum class ETigerPowerKitType> InArchetypes); // Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.SetClanOrArchetypeIcon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CheckIfShouldDisplayDisallowedClan(struct TArray<enum class ETigerClan> InClans, struct TArray<enum class ETigerPowerKitType> InArchetypes, bool bSuccessful); // Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.CheckIfShouldDisplayDisallowedClan // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_InventoryClanBodyTypeIcons_ItemPreview(int32_t EntryPoint); // Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.ExecuteUbergraph_TBP_UI_InventoryClanBodyTypeIcons_ItemPreview // (Final|UbergraphFunction) // @ game+0x16c0340
};

