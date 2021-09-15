// WidgetBlueprintGeneratedClass TBP_UI_Inventory.TBP_UI_Inventory_C
// Size: 0x410 (Inherited: 0x2b8)
struct UTBP_UI_Inventory_C : UTigerInventoryUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UTBP_UI_InventorySlot_C* AmmoSlot_Bolt; // 0x2c0(0x08)
	struct UTBP_UI_InventorySlot_C* AmmoSlot_Heavy; // 0x2c8(0x08)
	struct UTBP_UI_InventorySlot_C* AmmoSlot_Heavy_2; // 0x2d0(0x08)
	struct UTBP_UI_InventorySlot_C* AmmoSlot_Light; // 0x2d8(0x08)
	struct UTBP_UI_InventorySlot_C* AmmoSlot_Shell; // 0x2e0(0x08)
	struct UUniformGridPanel* AmmoSlotsPanel; // 0x2e8(0x08)
	struct UTigerStyledRichTextBlock* ArtifactDescription; // 0x2f0(0x08)
	struct UVerticalBox* ArtifactDescriptionContainer; // 0x2f8(0x08)
	struct UTigerStyledRichTextBlock* ArtifactNameText; // 0x300(0x08)
	struct UTBP_UI_InventorySlot_C* ArtifactSlot; // 0x308(0x08)
	struct UTBP_UI_MenuButton_C* BackButton; // 0x310(0x08)
	struct UImage* Background; // 0x318(0x08)
	struct UTBP_UI_InventorySlot_C* CollectibleSlot; // 0x320(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* ConsumableInput_GamePad; // 0x328(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* ConsumableInput_Keyboard; // 0x330(0x08)
	struct UTBP_UI_InventorySlot_C* ConsumableSlot_Bloodbag; // 0x338(0x08)
	struct UTBP_UI_InventorySlot_C* ConsumableSlot_Shield; // 0x340(0x08)
	struct UTBP_UI_InventorySlot_C* ConsumableSlot_Stimulant; // 0x348(0x08)
	struct UTBP_UI_InventorySlot_C* ConsumableSlot_Syringe; // 0x350(0x08)
	struct UUniformGridPanel* ConsumableSlotPanel; // 0x358(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_Back; // 0x360(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_Back; // 0x368(0x08)
	struct UTBP_UI_InventoryMeleeSlot_C* Melee; // 0x370(0x08)
	struct UTBP_UI_InventorySlot_C* QuickSlot0; // 0x378(0x08)
	struct UTBP_UI_InventoryRangedSlot_C* RangedPrimary; // 0x380(0x08)
	struct UTBP_UI_InventoryRangedSlot_C* RangedSecondary; // 0x388(0x08)
	struct UTBP_UI_BloodResonance_Inventory_C* TBP_UI_BloodResonance_Inventory; // 0x390(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x398(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad; // 0x3a0(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad_2; // 0x3a8(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad_3; // 0x3b0(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* TBP_UI_InputPrompt_Keyboard; // 0x3b8(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* TBP_UI_InputPrompt_Keyboard_2; // 0x3c0(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* TBP_UI_InputPrompt_Keyboard_3; // 0x3c8(0x08)
	struct UTBP_UI_InputPromptCombined_C* TBP_UI_InputPromptCombined; // 0x3d0(0x08)
	struct UTBP_UI_InputPromptCombined_C* TBP_UI_InputPromptCombined_2; // 0x3d8(0x08)
	struct UTBP_UI_InputPromptCombined_C* TBP_UI_InputPromptCombined_3; // 0x3e0(0x08)
	struct UTBP_UI_InputPromptCombined_C* TBP_UI_InputPromptCombined_4; // 0x3e8(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* TBP_UI_Menu_Button_Prompt_Footer; // 0x3f0(0x08)
	struct UImage* Vignette; // 0x3f8(0x08)
	struct UWidgetSwitcher* WeaponSlotSwitcher; // 0x400(0x08)
	struct UTigerItemAsset* GroupCollectibleItemAsset; // 0x408(0x08)

	void InitSlots(); // Function TBP_UI_Inventory.TBP_UI_Inventory_C.InitSlots // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Update Slots(); // Function TBP_UI_Inventory.TBP_UI_Inventory_C.Update Slots // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DisableSpecificHudElements(); // Function TBP_UI_Inventory.TBP_UI_Inventory_C.DisableSpecificHudElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void EnableSpecificHudElements(); // Function TBP_UI_Inventory.TBP_UI_Inventory_C.EnableSpecificHudElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnInventoryUpdatedBP(); // Function TBP_UI_Inventory.TBP_UI_Inventory_C.OnInventoryUpdatedBP // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Inventory.TBP_UI_Inventory_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function TBP_UI_Inventory.TBP_UI_Inventory_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ToggleInventory(); // Function TBP_UI_Inventory.TBP_UI_Inventory_C.ToggleInventory // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_Inventory.TBP_UI_Inventory_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_Inventory.TBP_UI_Inventory_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void DropItem(); // Function TBP_UI_Inventory.TBP_UI_Inventory_C.DropItem // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ToggleInventoryOnInput(); // Function TBP_UI_Inventory.TBP_UI_Inventory_C.ToggleInventoryOnInput // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_Inventory.TBP_UI_Inventory_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Update Switcher(); // Function TBP_UI_Inventory.TBP_UI_Inventory_C.Update Switcher // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OpenMainMenu(); // Function TBP_UI_Inventory.TBP_UI_Inventory_C.OpenMainMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OpenMap(); // Function TBP_UI_Inventory.TBP_UI_Inventory_C.OpenMap // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Inventory(int32_t EntryPoint); // Function TBP_UI_Inventory.TBP_UI_Inventory_C.ExecuteUbergraph_TBP_UI_Inventory // (Final|UbergraphFunction) // @ game+0x16c0340
};

