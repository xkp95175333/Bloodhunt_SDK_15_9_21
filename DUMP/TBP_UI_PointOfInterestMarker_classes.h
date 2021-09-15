// WidgetBlueprintGeneratedClass TBP_UI_PointOfInterestMarker.TBP_UI_PointOfInterestMarker_C
// Size: 0x2f8 (Inherited: 0x2c8)
struct UTBP_UI_PointOfInterestMarker_C : UTigerPointOfInterestMapMarkerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UTextBlock* HighTierLoot_Text; // 0x2d0(0x08)
	struct UInvalidationBox* IB_POI_Marker; // 0x2d8(0x08)
	struct UImage* PoiIcon; // 0x2e0(0x08)
	struct UTigerStyledRichTextBlock* PoiText; // 0x2e8(0x08)
	struct UBorder* PoiTextBorder; // 0x2f0(0x08)

	void ConvertToHighTierLootMarker(SoftClassProperty InHighTierLootGroup); // Function TBP_UI_PointOfInterestMarker.TBP_UI_PointOfInterestMarker_C.ConvertToHighTierLootMarker // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetToHighTierLootLocation(SoftClassProperty InHighTierLootGroup); // Function TBP_UI_PointOfInterestMarker.TBP_UI_PointOfInterestMarker_C.SetToHighTierLootLocation // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_PointOfInterestMarker(int32_t EntryPoint); // Function TBP_UI_PointOfInterestMarker.TBP_UI_PointOfInterestMarker_C.ExecuteUbergraph_TBP_UI_PointOfInterestMarker // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

