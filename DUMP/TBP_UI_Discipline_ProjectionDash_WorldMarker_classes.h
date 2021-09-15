// WidgetBlueprintGeneratedClass TBP_UI_Discipline_ProjectionDash_WorldMarker.TBP_UI_Discipline_ProjectionDash_WorldMarker_C
// Size: 0x394 (Inherited: 0x320)
struct UTBP_UI_Discipline_ProjectionDash_WorldMarker_C : UTBP_UI_InWorldIconBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* OffScreenState; // 0x328(0x08)
	struct UWidgetAnimation* DownArrow_FadeOut; // 0x330(0x08)
	struct UWidgetAnimation* FadeOutAnimation; // 0x338(0x08)
	struct UWidgetAnimation* FadeInAnimation; // 0x340(0x08)
	struct UWidgetAnimation* DownArrow_Movement; // 0x348(0x08)
	struct UTextBlock* DistanceText; // 0x350(0x08)
	struct UImage* DownArrowImage; // 0x358(0x08)
	struct UImage* IconWidget; // 0x360(0x08)
	struct UCanvasPanel* RootCanvas; // 0x368(0x08)
	struct UTigerDisciplineProjectionDash* ProjectionDashDiscipline; // 0x370(0x08)
	struct FWidgetTransform OnScreenRootTransform; // 0x378(0x1c)

	void UpdateWidgetColorsForPlayerDistance(); // Function TBP_UI_Discipline_ProjectionDash_WorldMarker.TBP_UI_Discipline_ProjectionDash_WorldMarker_C.UpdateWidgetColorsForPlayerDistance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_Discipline_ProjectionDash_WorldMarker.TBP_UI_Discipline_ProjectionDash_WorldMarker_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Discipline_ProjectionDash_WorldMarker.TBP_UI_Discipline_ProjectionDash_WorldMarker_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void UpdateVisuals(bool bInIsOnScreen); // Function TBP_UI_Discipline_ProjectionDash_WorldMarker.TBP_UI_Discipline_ProjectionDash_WorldMarker_C.UpdateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Discipline_ProjectionDash_WorldMarker.TBP_UI_Discipline_ProjectionDash_WorldMarker_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void UpdateOffScreenState(float InRotationDegrees); // Function TBP_UI_Discipline_ProjectionDash_WorldMarker.TBP_UI_Discipline_ProjectionDash_WorldMarker_C.UpdateOffScreenState // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Discipline_ProjectionDash_WorldMarker(int32_t EntryPoint); // Function TBP_UI_Discipline_ProjectionDash_WorldMarker.TBP_UI_Discipline_ProjectionDash_WorldMarker_C.ExecuteUbergraph_TBP_UI_Discipline_ProjectionDash_WorldMarker // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

