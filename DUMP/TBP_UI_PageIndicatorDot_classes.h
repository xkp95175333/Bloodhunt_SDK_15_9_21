// WidgetBlueprintGeneratedClass TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C
// Size: 0x284 (Inherited: 0x260)
struct UTBP_UI_PageIndicatorDot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Dot; // 0x268(0x08)
	struct FMulticastInlineDelegate OnPressed; // 0x270(0x10)
	int32_t PageIndex; // 0x280(0x04)

	void UpdateSelectedState(bool bIsCurrentPage); // Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.UpdateSelectedState // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_PageIndicatorDot(int32_t EntryPoint); // Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.ExecuteUbergraph_TBP_UI_PageIndicatorDot // (Final|UbergraphFunction) // @ game+0x16c0340
	void OnPressed__DelegateSignature(int32_t PageIndex); // Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

