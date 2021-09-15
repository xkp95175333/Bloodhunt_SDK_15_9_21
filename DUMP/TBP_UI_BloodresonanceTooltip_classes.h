// WidgetBlueprintGeneratedClass TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C
// Size: 0x330 (Inherited: 0x288)
struct UTBP_UI_BloodResonanceTooltip_C : UTigerTooltipWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* MissingSlot; // 0x290(0x08)
	struct UWidgetAnimation* PotentialResonance; // 0x298(0x08)
	struct UImage* Image_133; // 0x2a0(0x08)
	struct UTigerStyledRichTextBlock* ItemDescText; // 0x2a8(0x08)
	struct UTigerStyledRichTextBlock* ItemText; // 0x2b0(0x08)
	struct UTigerStyledRichTextBlock* ItemTypeText; // 0x2b8(0x08)
	struct UTBP_UI_BloodResonanceSingular_C* TBP_UI_BloodResonanceSingular; // 0x2c0(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x2c8(0x08)
	struct UTBP_UI_Rarity_VFX_C* TBP_UI_Rarity_VFX; // 0x2d0(0x08)
	struct UTigerItemAsset* ItemAsset; // 0x2d8(0x08)
	struct TArray<struct FTigerTooltipAction> InputActions; // 0x2e0(0x10)
	bool bColorItemBackground; // 0x2f0(0x01)
	bool bShowAdditionalInfo; // 0x2f1(0x01)
	bool bShouldTick; // 0x2f2(0x01)
	char pad_2F3[0x5]; // 0x2f3(0x05)
	struct TArray<struct UImage*> TransferArrows; // 0x2f8(0x10)
	bool bShowUnavailableIcon; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct UTigerBloodResonanceAsset* BloodAsset_Choleric; // 0x310(0x08)
	struct UTigerBloodResonanceAsset* BloodAsset_Melancholic; // 0x318(0x08)
	struct UTigerBloodResonanceAsset* BloodAsset_Phlegmatic; // 0x320(0x08)
	struct UTigerBloodResonanceAsset* BloodAsset_Sanguine; // 0x328(0x08)

	void SetBloodType(enum class ETigerBloodType InBloodType); // Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.SetBloodType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnBloodResonanceAdded(enum class ETigerBloodType InBloodType); // Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.OnBloodResonanceAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnBloodResonanceWasCappedAfterFeed(enum class ETigerBloodType InBloodType, enum class ETigerBloodResonanceBlockType InBlockType); // Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.OnBloodResonanceWasCappedAfterFeed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_BloodResonanceTooltip(int32_t EntryPoint); // Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.ExecuteUbergraph_TBP_UI_BloodResonanceTooltip // (Final|UbergraphFunction) // @ game+0x16c0340
};

