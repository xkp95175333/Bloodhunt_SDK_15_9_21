// WidgetBlueprintGeneratedClass TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C
// Size: 0x2b8 (Inherited: 0x260)
struct UTBP_UI_OutfitVendorTooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UOverlay* ActionOverlay; // 0x268(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* ActionPromptGamepad; // 0x270(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* ActionPromptKeyboard; // 0x278(0x08)
	struct UTigerStyledRichTextBlock* ErrorMessage; // 0x280(0x08)
	struct UTigerStyledRichTextBlock* ItemName; // 0x288(0x08)
	struct UTBP_UI_Box_C* LowerBox; // 0x290(0x08)
	struct UTBP_UI_TooltipActionsContainer_C* TooltipActionsContainer; // 0x298(0x08)
	struct UTBP_UI_Box_C* UpperBox; // 0x2a0(0x08)
	struct TArray<struct FTigerTooltipAction> TooltipActions; // 0x2a8(0x10)

	void GetItem(struct UTigerInventoryItemBase* InItem, struct UTigerInventoryItemBase* OutItem); // Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.GetItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetItem(struct FTigerVendorStoreCategoryItem Item, struct FText ErrorMessage, struct FKey GamepadInputKey, struct FText ActionText); // Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.SetItem // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_OutfitVendorTooltip(int32_t EntryPoint); // Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.ExecuteUbergraph_TBP_UI_OutfitVendorTooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

