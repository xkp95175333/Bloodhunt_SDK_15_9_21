// WidgetBlueprintGeneratedClass TBP_UI_CompassObject.TBP_UI_CompassObject_C
// Size: 0x2b8 (Inherited: 0x298)
struct UTBP_UI_CompassObject_C : UTigerCompassMarkerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UCanvasPanel* CompassMarker; // 0x2a0(0x08)
	struct UImage* CompassMarkerImage; // 0x2a8(0x08)
	struct UMaterialInstanceDynamic* CompassMarkerMaterial; // 0x2b0(0x08)

	void UpdatePosition(); // Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.UpdatePosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void SetColorBasedOnPlayerIndex(char InIndex); // Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.SetColorBasedOnPlayerIndex // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_CompassObject(int32_t EntryPoint); // Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.ExecuteUbergraph_TBP_UI_CompassObject // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

