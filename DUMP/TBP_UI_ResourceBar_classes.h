// WidgetBlueprintGeneratedClass TBP_UI_ResourceBar.TBP_UI_ResourceBar_C
// Size: 0x37c (Inherited: 0x340)
struct UTBP_UI_ResourceBar_C : UTigerResourceBarUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWidgetAnimation* DamageBackgroundAnimation; // 0x348(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x350(0x08)
	struct UImage* DamageBackground; // 0x358(0x08)
	struct UHorizontalBox* SegmentPanel; // 0x360(0x08)
	struct TArray<struct UTBP_UI_FlashEffect_C*> Recycled Flash Effects; // 0x368(0x10)
	bool Enable Flash Effect; // 0x378(0x01)
	bool Enable Damaged Background; // 0x379(0x01)
	bool BaseBar; // 0x37a(0x01)
	bool EmptyBar; // 0x37b(0x01)

	void OnSegmentAdded(int32_t InIndex, struct UTBP_UI_ResourceBarSegment_C* InSegment, struct UHorizontalBoxSlot* InHorizontalBoxSlot); // Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.OnSegmentAdded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ClearSegments(); // Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.ClearSegments // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateFlashEffect(struct UTBP_UI_FlashEffect_C* Output_Get); // Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.CreateFlashEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnHealthLost(); // Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.OnHealthLost // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnSegmentEmptied(float HorizontalProgress); // Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.OnSegmentEmptied // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void RecycleFlashEffect(struct UTBP_UI_FlashEffect_C* Finished Effect); // Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.RecycleFlashEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ResourceBar(int32_t EntryPoint); // Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.ExecuteUbergraph_TBP_UI_ResourceBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

