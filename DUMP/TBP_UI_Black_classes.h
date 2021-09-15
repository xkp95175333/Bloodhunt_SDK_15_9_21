// WidgetBlueprintGeneratedClass TBP_UI_Black.TBP_UI_Black_C
// Size: 0x2bc (Inherited: 0x298)
struct UTBP_UI_Black_C : UTigerLoadingScreenUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* FadeInThrobber; // 0x2a0(0x08)
	struct UWidgetAnimation* FadeOutAnim; // 0x2a8(0x08)
	struct UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber; // 0x2b0(0x08)
	int32_t ThrobberVisibilityReferenceTime; // 0x2b8(0x04)

	void StartFadeOut(); // Function TBP_UI_Black.TBP_UI_Black_C.StartFadeOut // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_FadeOutAnim_K2Node_WidgetAnimationEvent_1(); // Function TBP_UI_Black.TBP_UI_Black_C.WidgetAnimationEvt_FadeOutAnim_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Black.TBP_UI_Black_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Black.TBP_UI_Black_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Black(int32_t EntryPoint); // Function TBP_UI_Black.TBP_UI_Black_C.ExecuteUbergraph_TBP_UI_Black // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

