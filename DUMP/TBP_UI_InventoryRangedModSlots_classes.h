// WidgetBlueprintGeneratedClass TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C
// Size: 0x3b8 (Inherited: 0x280)
struct UTBP_UI_InventoryRangedModSlots_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UGridPanel* Slots; // 0x288(0x08)
	enum class EHorizontalAlignment HAlign; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FSlateBrush ModBorderBrush; // 0x298(0x88)
	struct FLinearColor DefaultBorderColor; // 0x320(0x10)
	struct FSlateBrush DefaultBackgroundBrush; // 0x330(0x88)

	void SetModBorderColor(int32_t InSlotIndex, struct FLinearColor InColor); // Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.SetModBorderColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PopulateMods(enum class ETigerWeaponSlot InWeaponSlot, struct TArray<struct FTigerModSlotInfo> InModSlots); // Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.PopulateMods // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_InventoryRangedModSlots(int32_t EntryPoint); // Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.ExecuteUbergraph_TBP_UI_InventoryRangedModSlots // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

