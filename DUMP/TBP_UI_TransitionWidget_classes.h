// WidgetBlueprintGeneratedClass TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C
// Size: 0x2b0 (Inherited: 0x298)
struct UTBP_UI_TransitionWidget_C : UTigerTransitionWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UNamedSlot* Content; // 0x2a0(0x08)
	struct UTBP_UI_TransitionRetainerBox_C* TransitionRetainerBox; // 0x2a8(0x08)

	void ChangeAnimationSpeed(float InAnimationSpeed); // Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.ChangeAnimationSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void EnableRendering(); // Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.EnableRendering // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DisableRendering(); // Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.DisableRendering // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_TransitionWidget(int32_t EntryPoint); // Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.ExecuteUbergraph_TBP_UI_TransitionWidget // (Final|UbergraphFunction) // @ game+0x16c0340
};

