// WidgetBlueprintGeneratedClass TBP_UI_HitMarker.TBP_UI_HitMarker_C
// Size: 0x310 (Inherited: 0x280)
struct UTBP_UI_HitMarker_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* HitMarkerKill; // 0x288(0x08)
	struct UWidgetAnimation* HitMarkerPop; // 0x290(0x08)
	struct UCanvasPanel* HitMarker; // 0x298(0x08)
	struct UImage* HitMarkerImageBottomLeft; // 0x2a0(0x08)
	struct UImage* HitMarkerImageBottomLeft_2; // 0x2a8(0x08)
	struct UImage* HitMarkerImageBottomRight; // 0x2b0(0x08)
	struct UImage* HitMarkerImageBottomRight_2; // 0x2b8(0x08)
	struct UImage* HitMarkerImageTopLeft; // 0x2c0(0x08)
	struct UImage* HitMarkerImageTopLeft_2; // 0x2c8(0x08)
	struct UImage* HitMarkerImageTopRight; // 0x2d0(0x08)
	struct UImage* HitMarkerImageTopRight_2; // 0x2d8(0x08)
	float Alpha; // 0x2e0(0x04)
	struct FLinearColor HitmarkerColor; // 0x2e4(0x10)
	bool bDisplayingDownedFeedback; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	float DownedFeebackTimeout; // 0x2f8(0x04)
	bool bIsVisible; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	struct FLinearColor KillMarkerColor; // 0x300(0x10)

	void IsShown(bool bOutIsShown); // Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.IsShown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void ShowHitMarker(struct FLinearColor In Hit Marker Color, bool bPlayerWasDownedOrKilled); // Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.ShowHitMarker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_HitMarker(int32_t EntryPoint); // Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.ExecuteUbergraph_TBP_UI_HitMarker // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

