// WidgetBlueprintGeneratedClass TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C
// Size: 0x2d8 (Inherited: 0x280)
struct UTBP_UI_InventoryMeleeSlot_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* MeleeBackgroundPane; // 0x288(0x08)
	struct UOverlay* Overlay_1; // 0x290(0x08)
	struct UTBP_UI_Rarity_VFX_C* TBP_UI_Rarity_VFX; // 0x298(0x08)
	struct UImage* WeaponImage; // 0x2a0(0x08)
	enum class ETigerWeaponSlot Weapon Slot; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	struct FName SelectInputAction; // 0x2ac(0x08)
	float Current_Opacity; // 0x2b4(0x04)
	struct FTigerPingNotificationNetData PingNetData; // 0x2b8(0x18)
	struct UTigerItemAsset* ItemAsset; // 0x2d0(0x08)

	void UpdateRarityMarker(); // Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.UpdateRarityMarker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PingEmpty(); // Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.PingEmpty // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PingWeapon(); // Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.PingWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateTooltipActions(); // Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.CreateTooltipActions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct UTigerTooltipWidget* ConstructTooltipWidget(); // Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.ConstructTooltipWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void EquipWeapon(); // Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.EquipWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DropWeapon(); // Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.DropWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetSelectedSlotColor(enum class ETigerWeaponSlot SelectedSlot, struct FSlateColor Color); // Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.GetSelectedSlotColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void UpdateNoWeapon(); // Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.UpdateNoWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateVisibleWeapon(struct UTigerMeleeWeapon* MeleeWeapon, struct UTigerItemAsset* WeaponItem, struct UTigerDisciplineComponent* Discipline, enum class ETigerWeaponSlot EquippedSlot); // Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.UpdateVisibleWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_InventoryMeleeSlot(int32_t EntryPoint); // Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.ExecuteUbergraph_TBP_UI_InventoryMeleeSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

