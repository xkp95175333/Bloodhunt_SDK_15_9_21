// WidgetBlueprintGeneratedClass TBP_UI_SliderWBox.TBP_UI_SliderWBox_C
// Size: 0x2d1 (Inherited: 0x280)
struct UTBP_UI_SliderWBox_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UEditableTextBox* Box; // 0x288(0x08)
	struct USlider* Slider; // 0x290(0x08)
	struct UImage* SliderBG; // 0x298(0x08)
	struct FMulticastInlineDelegate OnValueChanged; // 0x2a0(0x10)
	float MaxValue; // 0x2b0(0x04)
	float MinValue; // 0x2b4(0x04)
	struct FLinearColor BG Color Override; // 0x2b8(0x10)
	float TempSliderValue; // 0x2c8(0x04)
	float TempBoxValue; // 0x2cc(0x04)
	bool AllowDecimals; // 0x2d0(0x01)

	void SetMinValue(float MinValue); // Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetMinValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetValues(float Box Value, float Slider Value); // Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.GetValues // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
	void InitializeValues(float SliderValue, float MinValue, float MaxValue, bool AllowDecimals); // Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.InitializeValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetMaxValue(float InMaxValue); // Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetMaxValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetBoxValue(float InValue); // Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetBoxValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Box_K2Node_ComponentBoundEvent_97_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Box_K2Node_ComponentBoundEvent_97_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature(); // Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature(); // Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Slider_K2Node_ComponentBoundEvent_82_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Slider_K2Node_ComponentBoundEvent_82_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_SliderWBox(int32_t EntryPoint); // Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.ExecuteUbergraph_TBP_UI_SliderWBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.OnValueChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

