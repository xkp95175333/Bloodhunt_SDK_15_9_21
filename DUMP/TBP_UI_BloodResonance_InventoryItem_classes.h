// WidgetBlueprintGeneratedClass TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C
// Size: 0x2c1 (Inherited: 0x280)
struct UTBP_UI_BloodResonance_InventoryItem_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTigerStyledRichTextBlock* BloodResonanceDescText; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* BloodResonanceNameText; // 0x290(0x08)
	struct UImage* ResonanceIconImage; // 0x298(0x08)
	struct UImage* ResonanceVFXImage; // 0x2a0(0x08)
	struct UTBP_UI_BloodResonanceSingularSlot_C* Slot1; // 0x2a8(0x08)
	struct UTBP_UI_BloodResonanceSingularSlot_C* Slot2; // 0x2b0(0x08)
	struct UTBP_UI_BloodResonanceSingularSlot_C* Slot3; // 0x2b8(0x08)
	enum class ETigerBloodType BloodType; // 0x2c0(0x01)

	void UpdateStatusAndInfo(struct FText TextDesc); // Function TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C.UpdateStatusAndInfo // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InitializeInventoryResonance(struct FText InResonanceName, struct FLinearColor InResonanceColor, struct TSoftObjectPtr<struct UTexture2D> InResonanceIcon, struct TSoftObjectPtr<struct UTexture2D> InResonanceVFX, enum class ETigerBloodType InBloodType); // Function TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C.InitializeInventoryResonance // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_BloodResonance_InventoryItem(int32_t EntryPoint); // Function TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C.ExecuteUbergraph_TBP_UI_BloodResonance_InventoryItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

