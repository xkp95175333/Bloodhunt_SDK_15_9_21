// WidgetBlueprintGeneratedClass TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C
// Size: 0x348 (Inherited: 0x280)
struct UTBP_UI_InventoryRangedSlot_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTextBlock* AmmoAmount; // 0x288(0x08)
	struct UHorizontalBox* Ammobox; // 0x290(0x08)
	struct UTextBlock* AmmoInventoryAmount; // 0x298(0x08)
	struct UImage* AmmoType; // 0x2a0(0x08)
	struct UImage* AmmoTypeBackground; // 0x2a8(0x08)
	struct UImage* AmmoTypeBorder; // 0x2b0(0x08)
	struct UTextBlock* EmptyText; // 0x2b8(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* FireMode_InputPromptGamepad; // 0x2c0(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* FireMode_InputPromptKeyboard; // 0x2c8(0x08)
	struct UImage* FireModeImage; // 0x2d0(0x08)
	struct UTBP_UI_InventoryRangedModSlots_C* ModSlots; // 0x2d8(0x08)
	struct UTextBlock* Name; // 0x2e0(0x08)
	struct UOverlay* Overlay_1; // 0x2e8(0x08)
	struct UImage* RangeBackgroundPane; // 0x2f0(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* Select_InputPromptGamepad; // 0x2f8(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* Select_InputPromptKeyboard; // 0x300(0x08)
	struct UTBP_UI_Rarity_VFX_C* TBP_UI_Rarity_VFX; // 0x308(0x08)
	struct UTextBlock* Weapon_Description; // 0x310(0x08)
	struct UCanvasPanel* WeaponContent; // 0x318(0x08)
	struct UImage* WeaponImage; // 0x320(0x08)
	enum class ETigerWeaponSlot Weapon Slot; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	struct FName SelectInputAction; // 0x32c(0x08)
	bool bForceRebuildTooltip; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	float Current_Opacity; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct UTigerItemAsset* ItemAsset; // 0x340(0x08)

	void UpdateRarityBorder(); // Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.UpdateRarityBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateFireMode(); // Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.UpdateFireMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PingEmpty(); // Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.PingEmpty // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PingAmmo(); // Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.PingAmmo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PingWeapon(); // Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.PingWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateTooltipActions(); // Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.CreateTooltipActions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct UTigerTooltipWidget* ConstructTooltipWidget(); // Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.ConstructTooltipWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SwitchSlot(); // Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.SwitchSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void EquipWeapon(); // Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.EquipWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DropWeapon(); // Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.DropWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetSelectedSlotColor(enum class ETigerWeaponSlot SelectedSlot, struct FSlateColor Color); // Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.GetSelectedSlotColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void UpdateNoWeapon(); // Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.UpdateNoWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateVisibleWeapon(struct UTigerItemAsset* ItemAsset, struct UTigerAmmoAsset* AmmoAsset, int32_t AmmoInWeapon, int32_t AmmoInInventory, struct TArray<struct FTigerModSlotInfo> ModSlotInfo, enum class ETigerWeaponSlot SelectedWeaponSlot); // Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.UpdateVisibleWeapon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnInventoryUpdated(); // Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.OnInventoryUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_InventoryRangedSlot(int32_t EntryPoint); // Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.ExecuteUbergraph_TBP_UI_InventoryRangedSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

