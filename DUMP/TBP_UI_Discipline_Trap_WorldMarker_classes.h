// WidgetBlueprintGeneratedClass TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C
// Size: 0x3b0 (Inherited: 0x320)
struct UTBP_UI_Discipline_Trap_WorldMarker_C : UTBP_UI_InWorldIconBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* OffScreenState; // 0x328(0x08)
	struct UWidgetAnimation* DownArrow_FadeOut; // 0x330(0x08)
	struct UWidgetAnimation* DetectedText_FadeOut; // 0x338(0x08)
	struct UWidgetAnimation* DownArrow_Movement; // 0x340(0x08)
	struct UWidgetAnimation* Composite_DetectedAnimationOut; // 0x348(0x08)
	struct UWidgetAnimation* Composite_DetectedAnimationIn; // 0x350(0x08)
	struct UWidgetAnimation* DefaultBat_OutAnimation; // 0x358(0x08)
	struct UWidgetAnimation* DefaultBat_InAnimation; // 0x360(0x08)
	struct UTBP_UI_TransitionHeader_C* AnimatedDetectedText; // 0x368(0x08)
	struct UImage* DownArrowImage; // 0x370(0x08)
	struct UCanvasPanel* RootCanvas; // 0x378(0x08)
	struct UImage* TrapDefaultImage; // 0x380(0x08)
	struct UImage* TrapDetectedImage; // 0x388(0x08)
	bool bShouldDetectionWidgetsPlayHide; // 0x390(0x01)
	char pad_391[0x3]; // 0x391(0x03)
	struct FWidgetTransform OnScreenRootTransform; // 0x394(0x1c)

	void Fade Out Default Widgets(); // Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.Fade Out Default Widgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Fade In Default Widgets(); // Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.Fade In Default Widgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AreDetectionWidgetsHiddenOrAnimatingToHidden(bool AreHiding); // Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.AreDetectionWidgetsHiddenOrAnimatingToHidden // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void Toggle Detected Widgets(float Effect Size Multiplier, struct FText Text); // Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.Toggle Detected Widgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Play Detected Animations(float Effect Size Multiplier, struct FText Text, bool Should Hide Text); // Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.Play Detected Animations // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Hide Detected Relevant Widgets(); // Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.Hide Detected Relevant Widgets // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Show Detected Relevant Widgets(); // Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.Show Detected Relevant Widgets // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Fade Out Detected Text(); // Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.Fade Out Detected Text // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateOffScreenState(float InRotationDegrees); // Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.UpdateOffScreenState // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void UpdateVisuals(bool bInIsOnScreen); // Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.UpdateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Discipline_Trap_WorldMarker(int32_t EntryPoint); // Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.ExecuteUbergraph_TBP_UI_Discipline_Trap_WorldMarker // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

