// WidgetBlueprintGeneratedClass TBP_UI_EntityCheckpointMarker.TBP_UI_EntityCheckpointMarker_C
// Size: 0x2d0 (Inherited: 0x2b8)
struct UTBP_UI_EntityCheckpointMarker_C : UTBP_UI_MapMarker_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UImage* EntityIconGlow; // 0x2c0(0x08)
	struct UImage* EntityIconImage; // 0x2c8(0x08)

	struct UWidget* GetToolTipWidget_1(); // Function TBP_UI_EntityCheckpointMarker.TBP_UI_EntityCheckpointMarker_C.GetToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_EntityCheckpointMarker.TBP_UI_EntityCheckpointMarker_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_EntityCheckpointMarker.TBP_UI_EntityCheckpointMarker_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnIsOnMinimapIsSet(bool bInIsOnMinimap); // Function TBP_UI_EntityCheckpointMarker.TBP_UI_EntityCheckpointMarker_C.OnIsOnMinimapIsSet // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_EntityCheckpointMarker(int32_t EntryPoint); // Function TBP_UI_EntityCheckpointMarker.TBP_UI_EntityCheckpointMarker_C.ExecuteUbergraph_TBP_UI_EntityCheckpointMarker // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

