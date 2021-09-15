// WidgetBlueprintGeneratedClass TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C
// Size: 0x311 (Inherited: 0x2b0)
struct UTBP_UI_PlayerMarker_C : UTigerPlayerMarkerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UWidgetAnimation* CrossToDefault; // 0x2b8(0x08)
	struct UWidgetAnimation* CrossToRed; // 0x2c0(0x08)
	struct UCanvasPanel* PlayerCross; // 0x2c8(0x08)
	struct UImage* PlayerMarkerImage; // 0x2d0(0x08)
	struct UTBP_UI_Gradient_C* TBP_UI_Gradient; // 0x2d8(0x08)
	struct UTBP_UI_Gradient_C* TBP_UI_Gradient_2; // 0x2e0(0x08)
	struct UTBP_UI_Gradient_C* TBP_UI_Gradient_3; // 0x2e8(0x08)
	struct UTBP_UI_Gradient_C* TBP_UI_Gradient_4; // 0x2f0(0x08)
	struct UImage* ZoomTarget; // 0x2f8(0x08)
	char GroupPlayerIndex; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct UTigerPlayerMasqueradeComponent* PlayerMasqueradeComponent; // 0x308(0x08)
	bool MasqueradeBreached; // 0x310(0x01)

	void Construct(); // Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnIsOnMinimapIsSet(bool bInIsOnMinimap); // Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.OnIsOnMinimapIsSet // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void On Masquerade Changed(bool InIsMasqueradeBreached, enum class ETigerAIPlayerAction InPlayerAction); // Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.On Masquerade Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_PlayerMarker(int32_t EntryPoint); // Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.ExecuteUbergraph_TBP_UI_PlayerMarker // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

