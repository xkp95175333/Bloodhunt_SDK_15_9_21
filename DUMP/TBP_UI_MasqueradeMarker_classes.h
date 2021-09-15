// WidgetBlueprintGeneratedClass TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C
// Size: 0x2d8 (Inherited: 0x2b8)
struct UTBP_UI_MasqueradeMarker_C : UTigerMasqueradeMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UWidgetAnimation* ScaleUp; // 0x2c0(0x08)
	struct UImage* RadiusImage; // 0x2c8(0x08)
	struct UTigerMasqueradeMarkerProxy* MasqueradeMarkerProxy; // 0x2d0(0x08)

	void UpdateMasqueradePosition(); // Function TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C.UpdateMasqueradePosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnUpdated(); // Function TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C.OnUpdated // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_MasqueradeMarker(int32_t EntryPoint); // Function TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C.ExecuteUbergraph_TBP_UI_MasqueradeMarker // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

