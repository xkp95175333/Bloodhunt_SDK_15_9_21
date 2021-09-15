// WidgetBlueprintGeneratedClass TBP_UI_ScoutedNpcMarker.TBP_UI_ScoutedNpcMarker_C
// Size: 0x2c8 (Inherited: 0x2b8)
struct UTBP_UI_ScoutedNpcMarker_C : UTBP_UI_MapMarker_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UImage* Image_28; // 0x2c0(0x08)

	struct UWidget* GetToolTipWidget_1(); // Function TBP_UI_ScoutedNpcMarker.TBP_UI_ScoutedNpcMarker_C.GetToolTipWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	struct FLinearColor GetColorAndOpacity_1(); // Function TBP_UI_ScoutedNpcMarker.TBP_UI_ScoutedNpcMarker_C.GetColorAndOpacity_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_ScoutedNpcMarker.TBP_UI_ScoutedNpcMarker_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnIsOnMinimapIsSet(bool bInIsOnMinimap); // Function TBP_UI_ScoutedNpcMarker.TBP_UI_ScoutedNpcMarker_C.OnIsOnMinimapIsSet // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ScoutedNpcMarker(int32_t EntryPoint); // Function TBP_UI_ScoutedNpcMarker.TBP_UI_ScoutedNpcMarker_C.ExecuteUbergraph_TBP_UI_ScoutedNpcMarker // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

