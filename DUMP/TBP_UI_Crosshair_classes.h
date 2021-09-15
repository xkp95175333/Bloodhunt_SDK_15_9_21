// WidgetBlueprintGeneratedClass TBP_UI_Crosshair.TBP_UI_Crosshair_C
// Size: 0x398 (Inherited: 0x2e0)
struct UTBP_UI_Crosshair_C : UTigerCrosshairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* FadeInProgressBar; // 0x2e8(0x08)
	struct UWidgetAnimation* SwitchInteraction; // 0x2f0(0x08)
	struct UWidgetAnimation* FadeOut; // 0x2f8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x300(0x08)
	struct UTigerStyledRichTextBlock* ActionText; // 0x308(0x08)
	struct UTigerStyledRichTextBlock* DetailText; // 0x310(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPromptGamepad; // 0x318(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPromptKeyboard; // 0x320(0x08)
	struct UCanvasPanel* InteractionCanvas; // 0x328(0x08)
	struct UImage* ItemIcon; // 0x330(0x08)
	struct UTBP_UI_InventoryTooltip_C* ItemTooltip; // 0x338(0x08)
	struct UBorder* LeftInteractionBorder; // 0x340(0x08)
	struct UHorizontalBox* NonTooltipInformation; // 0x348(0x08)
	struct UImage* ProgressBar; // 0x350(0x08)
	struct UTBP_OutOfAmmoText_C* TBP_OutOfAmmoText; // 0x358(0x08)
	struct UTBP_UI_BloodResonanceTooltip_C* TBP_UI_InventoryTooltipBloodresonance; // 0x360(0x08)
	struct UWidgetSwitcher* TooltipSwitcher; // 0x368(0x08)
	struct UTBP_UI_HitMarker_C* TBP_UI_HitMarker; // 0x370(0x08)
	enum class ETargetInteraction NextInteraction; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct UObject* NextInteractionObject; // 0x380(0x08)
	struct UVerticalBox* AmmoStateWidget; // 0x388(0x08)
	float CrosshairAmmoStateDuration; // 0x390(0x04)
	float CrosshairAmmoStateTimer; // 0x394(0x04)

	void UpdateFeedingPromtWithBloodPotency(); // Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateFeedingPromtWithBloodPotency // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowAmmoStateWidget(); // Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ShowAmmoStateWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FText GetInteractionText(); // Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.GetInteractionText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void UpdateInputPrompt(enum class ETargetInteraction InInteraction, bool bIsActionEnabled, bool bHasKeyPrompt); // Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetActionFromItemAsset(struct UTigerItemAsset* InItemAsset, int32_t Item Count, struct FText ActionText, struct FLinearColor TextColor, bool bCanPickUp, bool bIsSwap); // Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.GetActionFromItemAsset // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void OnChangeInteraction(); // Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnChangeInteraction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateInteractionPrompt(enum class ETargetInteraction InInteraction, struct UObject* InInteractionObject); // Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateInteractionPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateInteraction(enum class ETargetInteraction Interaction, struct UObject* InteractionObject); // Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateInteraction // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnShowHitMarker(struct FLinearColor HitmarkerColor, bool bWasDownedOrKilled); // Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnShowHitMarker // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void ChangeInteraction(); // Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ChangeInteraction // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnSwitchInteractionFinished(); // Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnSwitchInteractionFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void SetProgressBarColor(enum class ETigerUIColor UIColor); // Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.SetProgressBarColor // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnShowCrosshairAmmoState_Event_1(); // Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnShowCrosshairAmmoState_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnInventoryUpdated(); // Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnInventoryUpdated // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Crosshair(int32_t EntryPoint); // Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ExecuteUbergraph_TBP_UI_Crosshair // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

