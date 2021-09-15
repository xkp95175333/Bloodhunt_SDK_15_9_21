// WidgetBlueprintGeneratedClass TBP_UI_BloodHuntMarker.TBP_UI_BloodHuntMarker_C
// Size: 0x2f0 (Inherited: 0x2b8)
struct UTBP_UI_BloodHuntMarker_C : UTBP_UI_MapMarker_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UWidgetAnimation* PulseAnim_Beat; // 0x2c0(0x08)
	struct UWidgetAnimation* PulseAnim; // 0x2c8(0x08)
	struct UWidgetAnimation* BloodDot; // 0x2d0(0x08)
	struct UImage* BloodHuntImage; // 0x2d8(0x08)
	struct UImage* Image_57; // 0x2e0(0x08)
	struct UImage* Pulse; // 0x2e8(0x08)

	struct UWidget* GetToolTipWidget_1(); // Function TBP_UI_BloodHuntMarker.TBP_UI_BloodHuntMarker_C.GetToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_BloodHuntMarker.TBP_UI_BloodHuntMarker_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnIsOnMinimapIsSet(bool bInIsOnMinimap); // Function TBP_UI_BloodHuntMarker.TBP_UI_BloodHuntMarker_C.OnIsOnMinimapIsSet // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_BloodHuntMarker(int32_t EntryPoint); // Function TBP_UI_BloodHuntMarker.TBP_UI_BloodHuntMarker_C.ExecuteUbergraph_TBP_UI_BloodHuntMarker // (Final|UbergraphFunction) // @ game+0x16c0340
};

