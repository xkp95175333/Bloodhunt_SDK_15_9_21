// WidgetBlueprintGeneratedClass TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C
// Size: 0x2e0 (Inherited: 0x280)
struct UTBP_UI_BloodResonance_Inventory_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTigerStyledRichTextBlock* CountText; // 0x288(0x08)
	struct UImage* Image_140; // 0x290(0x08)
	struct UTigerStyledRichTextBlock* MaxText; // 0x298(0x08)
	struct UTBP_UI_BloodResonance_InventoryItem_C* TBP_UI_BloodResonance_InventoryItem_Choleric; // 0x2a0(0x08)
	struct UTBP_UI_BloodResonance_InventoryItem_C* TBP_UI_BloodResonance_InventoryItem_Melancholic; // 0x2a8(0x08)
	struct UTBP_UI_BloodResonance_InventoryItem_C* TBP_UI_BloodResonance_InventoryItem_Phlegmatic; // 0x2b0(0x08)
	struct UTBP_UI_BloodResonance_InventoryItem_C* TBP_UI_BloodResonance_InventoryItem_Sanguine; // 0x2b8(0x08)
	struct UTigerBloodResonanceAsset* DataAsset_Choleric; // 0x2c0(0x08)
	struct UTigerBloodResonanceAsset* DataAsset_Melancholic; // 0x2c8(0x08)
	struct UTigerBloodResonanceAsset* DataAsset_Sanguine; // 0x2d0(0x08)
	struct UTigerBloodResonanceAsset* DataAsset_Phlegmantic; // 0x2d8(0x08)

	void UpdateInventoryResonance(struct UTBP_UI_BloodResonance_InventoryItem_C* InTarget, struct UTigerBloodResonanceAsset* InDataAsset, enum class ETigerBloodType InBloodType); // Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.UpdateInventoryResonance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InitializeInventoryResonance(struct UTBP_UI_BloodResonance_InventoryItem_C* InTarget, struct UTigerBloodResonanceAsset* InDataAsset, enum class ETigerBloodType InBloodType); // Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.InitializeInventoryResonance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateInfo(); // Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.UpdateInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_BloodResonance_Inventory(int32_t EntryPoint); // Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.ExecuteUbergraph_TBP_UI_BloodResonance_Inventory // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

