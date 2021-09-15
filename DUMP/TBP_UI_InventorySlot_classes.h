// WidgetBlueprintGeneratedClass TBP_UI_InventorySlot.TBP_UI_InventorySlot_C
// Size: 0x6e0 (Inherited: 0x280)
struct UTBP_UI_InventorySlot_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UProgressBar* AmmoFiller; // 0x288(0x08)
	struct UImage* BackgroundImage; // 0x290(0x08)
	struct UCanvasPanel* BigSlotContent; // 0x298(0x08)
	struct UImage* BorderImage; // 0x2a0(0x08)
	struct UTextBlock* CountDivider; // 0x2a8(0x08)
	struct UImage* InnerBorder; // 0x2b0(0x08)
	struct UImage* ItemImage; // 0x2b8(0x08)
	struct UOverlay* ItemUnusableContainer; // 0x2c0(0x08)
	struct UImage* ItemUnusableWidget; // 0x2c8(0x08)
	struct UTextBlock* MaxCountText; // 0x2d0(0x08)
	struct UTextBlock* StackCountText; // 0x2d8(0x08)
	struct UTextBlock* TypeText; // 0x2e0(0x08)
	struct UTBP_UI_Inventory_C* Inventory; // 0x2e8(0x08)
	struct UTigerItemAsset* ItemAsset; // 0x2f0(0x08)
	int32_t StackCount; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct FSlateBrush BackgroundBrush; // 0x300(0x88)
	struct FSlateBrush AmmoBackgroundBrush; // 0x388(0x88)
	struct FSlateBrush ModBorderBrush; // 0x410(0x88)
	struct FSlateBrush AmmoBorderBrush; // 0x498(0x88)
	struct FSlateBrush ConsumableBorderBrush; // 0x520(0x88)
	struct FSlateBrush SlotMissingModBrush; // 0x5a8(0x88)
	struct FLinearColor DefaultBorderColor; // 0x630(0x10)
	enum class ETigerWeaponSlot ModOnWeaponSlot; // 0x640(0x01)
	bool bIsWeaponModSlot; // 0x641(0x01)
	bool bIsModEquippedInWeaponSlot; // 0x642(0x01)
	char pad_643[0x1]; // 0x643(0x01)
	struct FName Config_MenuPrimary; // 0x644(0x08)
	struct FName Config_MenuSecondary; // 0x64c(0x08)
	char pad_654[0x4]; // 0x654(0x04)
	struct FSlateBrush CollectibleBorderBrush; // 0x658(0x88)

	void ResetImageColourForArtifacts(); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.ResetImageColourForArtifacts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateArtifact(int32_t InStackCount); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.UpdateArtifact // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateCollectible(int32_t InStackCount); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.UpdateCollectible // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateMod(); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.UpdateMod // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateConsumable(); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.UpdateConsumable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateAmmo(struct UTigerAmmoAsset* InAmmoAsset); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.UpdateAmmo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddDynamicPingTooltipAction(); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.AddDynamicPingTooltipAction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SwapWeaponEquippedOn(); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.SwapWeaponEquippedOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SendHasItemPing(); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.SendHasItemPing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SendWantItemPing(); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.SendWantItemPing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IsValidAmmoItemForWeaponSlot(struct UTigerInventoryComponent* InInventoryComponent, enum class ETigerWeaponSlot InWeaponSlot, struct UTigerAmmoAsset* InAmmoAsset, bool bCanUseAmmo); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.IsValidAmmoItemForWeaponSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
	void SetModUnavailableState(); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.SetModUnavailableState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetAmmoUnavailableState(); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.SetAmmoUnavailableState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateTooltipActions(); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.CreateTooltipActions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetRangedModInfo(struct UTigerRangedModItemAsset* ModItemAsset, bool bIgnoreEquippedMod, bool bIsModSlotEmpty, bool bSupportsSwap, bool bHasHigherPriority); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.GetRangedModInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct UTigerTooltipWidget* ConstructTooltipWidget(); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.ConstructTooltipWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UnequipMod(); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.UnequipMod // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void EquipMod(); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.EquipMod // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetModInWeapon(enum class ETigerWeaponSlot InWeaponSlot, struct UTigerRangedModItemAsset* InModItemAsset, bool bInIsUnlocked, bool bInIsOnHud); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.SetModInWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UseConsumable(); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.UseConsumable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DropPack(bool bWholeStack); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.DropPack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateInventorySlot(struct UTigerItemAsset* NewItemAsset, int32_t ItemStackSize); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.UpdateInventorySlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetStackCount(int32_t InStackCount); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.SetStackCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnDropSinglePack(); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.OnDropSinglePack // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnDropStack(); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.OnDropStack // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_InventorySlot(int32_t EntryPoint); // Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.ExecuteUbergraph_TBP_UI_InventorySlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

