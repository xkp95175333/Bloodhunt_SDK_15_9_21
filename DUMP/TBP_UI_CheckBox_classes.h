// WidgetBlueprintGeneratedClass TBP_UI_CheckBox.TBP_UI_CheckBox_C
// Size: 0x2c8 (Inherited: 0x260)
struct UTBP_UI_CheckBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTigerStyledRichTextBlock* CheckboxText; // 0x268(0x08)
	struct UCheckBox* CheckBoxWidget; // 0x270(0x08)
	struct UImage* CheckedWidget; // 0x278(0x08)
	struct UImage* CheckedWidget_2; // 0x280(0x08)
	struct UTBP_UI_TransitionWidget_C* TBP_UI_TransitionWidget; // 0x288(0x08)
	struct UHorizontalBox* TextContainer; // 0x290(0x08)
	struct FText Text; // 0x298(0x18)
	float TextPadding; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x2b8(0x10)

	void SetIsChecked(bool bInIsChecked); // Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.SetIsChecked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetCurrentStateTintColor(struct FSlateColor TintColor); // Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.GetCurrentStateTintColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_CheckBox(int32_t EntryPoint); // Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.ExecuteUbergraph_TBP_UI_CheckBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.OnCheckStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

