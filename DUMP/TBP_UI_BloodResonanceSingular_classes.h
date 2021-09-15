// WidgetBlueprintGeneratedClass TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C
// Size: 0x2e8 (Inherited: 0x280)
struct UTBP_UI_BloodResonanceSingular_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* Animation_FlashResonanceMaxed; // 0x288(0x08)
	struct UWidgetAnimation* Animation_FlashResonance; // 0x290(0x08)
	struct UWidgetAnimation* Animation_Flash; // 0x298(0x08)
	struct UImage* flash; // 0x2a0(0x08)
	struct UImage* FlashResonance; // 0x2a8(0x08)
	struct UImage* ResonanceIconImage; // 0x2b0(0x08)
	struct UImage* ResonanceVFXImage; // 0x2b8(0x08)
	struct UTBP_UI_BloodResonanceSingularSlot_C* Slot1; // 0x2c0(0x08)
	struct UTBP_UI_BloodResonanceSingularSlot_C* Slot2; // 0x2c8(0x08)
	struct UTBP_UI_BloodResonanceSingularSlot_C* Slot3; // 0x2d0(0x08)
	enum class ETigerBloodType BloodType; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct UTigerBloodResonanceAsset* DataAsset; // 0x2e0(0x08)

	void RemoveSlotType(int32_t InSlotsLeft); // Function TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C.RemoveSlotType // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InitializeBloodType(struct UTigerBloodResonanceAsset* InDataAsset, enum class ETigerBloodType InBloodType); // Function TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C.InitializeBloodType // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddSlotType(int32_t InSlotsLeft); // Function TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C.AddSlotType // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddResonanceType(); // Function TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C.AddResonanceType // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BlockedByMaxed(); // Function TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C.BlockedByMaxed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BlockedBySlot(); // Function TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C.BlockedBySlot // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TooltipPotentialGain(); // Function TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C.TooltipPotentialGain // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TooltipPotentialBlocked(); // Function TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C.TooltipPotentialBlocked // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_BloodResonanceSingular(int32_t EntryPoint); // Function TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C.ExecuteUbergraph_TBP_UI_BloodResonanceSingular // (Final|UbergraphFunction) // @ game+0x16c0340
};

