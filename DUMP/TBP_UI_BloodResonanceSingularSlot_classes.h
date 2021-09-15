// WidgetBlueprintGeneratedClass TBP_UI_BloodResonanceSingularSlot.TBP_UI_BloodResonanceSingularSlot_C
// Size: 0x2c1 (Inherited: 0x260)
struct UTBP_UI_BloodResonanceSingularSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Animation_PotentialBlocked; // 0x268(0x08)
	struct UWidgetAnimation* Animation_PotentialResonance; // 0x270(0x08)
	struct UWidgetAnimation* Animation_Blocked; // 0x278(0x08)
	struct UWidgetAnimation* Animation_AddSlot; // 0x280(0x08)
	struct UCanvasPanel* BlockedConainer; // 0x288(0x08)
	struct UImage* BlockedGlowImage; // 0x290(0x08)
	struct UImage* BlockedImage; // 0x298(0x08)
	struct UImage* ResonanceImage; // 0x2a0(0x08)
	struct UImage* SlotEmptyImage; // 0x2a8(0x08)
	struct UImage* SlotGlowImage; // 0x2b0(0x08)
	struct UImage* SlotImage; // 0x2b8(0x08)
	bool NewVar_1; // 0x2c0(0x01)

	void BlockedByMaxed(); // Function TBP_UI_BloodResonanceSingularSlot.TBP_UI_BloodResonanceSingularSlot_C.BlockedByMaxed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BlockedBySlots(); // Function TBP_UI_BloodResonanceSingularSlot.TBP_UI_BloodResonanceSingularSlot_C.BlockedBySlots // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetResonanceFilled(); // Function TBP_UI_BloodResonanceSingularSlot.TBP_UI_BloodResonanceSingularSlot_C.SetResonanceFilled // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ResetSlot(); // Function TBP_UI_BloodResonanceSingularSlot.TBP_UI_BloodResonanceSingularSlot_C.ResetSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetSlotFilled(); // Function TBP_UI_BloodResonanceSingularSlot.TBP_UI_BloodResonanceSingularSlot_C.SetSlotFilled // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PotentialResonance(); // Function TBP_UI_BloodResonanceSingularSlot.TBP_UI_BloodResonanceSingularSlot_C.PotentialResonance // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PotentialBlocked(); // Function TBP_UI_BloodResonanceSingularSlot.TBP_UI_BloodResonanceSingularSlot_C.PotentialBlocked // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RemoveSlot(); // Function TBP_UI_BloodResonanceSingularSlot.TBP_UI_BloodResonanceSingularSlot_C.RemoveSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddResonance(); // Function TBP_UI_BloodResonanceSingularSlot.TBP_UI_BloodResonanceSingularSlot_C.AddResonance // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddSlot(); // Function TBP_UI_BloodResonanceSingularSlot.TBP_UI_BloodResonanceSingularSlot_C.AddSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetResonaceColor(struct FLinearColor InColorAndOpacity); // Function TBP_UI_BloodResonanceSingularSlot.TBP_UI_BloodResonanceSingularSlot_C.SetResonaceColor // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_BloodResonanceSingularSlot(int32_t EntryPoint); // Function TBP_UI_BloodResonanceSingularSlot.TBP_UI_BloodResonanceSingularSlot_C.ExecuteUbergraph_TBP_UI_BloodResonanceSingularSlot // (Final|UbergraphFunction) // @ game+0x16c0340
};

