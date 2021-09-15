// WidgetBlueprintGeneratedClass TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C
// Size: 0x298 (Inherited: 0x280)
struct UTBP_UI_InventoryClanBodyTypeIcons_C : UTigerWidget {
	struct UImage* BodyTypeIcon; // 0x280(0x08)
	struct UImage* ClanIcon; // 0x288(0x08)
	struct UImage* ClanStrikethrough; // 0x290(0x08)

	void SetOwnerIndicators(struct UTigerInventoryItemBase* InItem); // Function TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C.SetOwnerIndicators // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetClanOrArchetypeIcon(struct TArray<enum class ETigerClan> InClans, struct TArray<enum class ETigerPowerKitType> InArchetypes); // Function TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C.SetClanOrArchetypeIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CheckIfShouldDisplayDisallowedClan(struct TArray<enum class ETigerClan> InClans, struct TArray<enum class ETigerPowerKitType> InArchetypes, bool bSuccessful); // Function TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C.CheckIfShouldDisplayDisallowedClan // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

