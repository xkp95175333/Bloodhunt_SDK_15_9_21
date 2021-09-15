// WidgetBlueprintGeneratedClass TBP_UI_Button_ClosePopup.TBP_UI_Button_ClosePopup_C
// Size: 0x2b0 (Inherited: 0x260)
struct UTBP_UI_Button_ClosePopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* CloseButton; // 0x268(0x08)
	struct UImage* CloseButtonBG; // 0x270(0x08)
	struct UImage* ClosebuttonCross; // 0x278(0x08)
	struct FMulticastInlineDelegate On Pressed; // 0x280(0x10)
	struct FMulticastInlineDelegate On Hover; // 0x290(0x10)
	struct FMulticastInlineDelegate On Unhover; // 0x2a0(0x10)

	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_UI_Button_ClosePopup.TBP_UI_Button_ClosePopup_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Button_ClosePopup.TBP_UI_Button_ClosePopup_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Button_ClosePopup.TBP_UI_Button_ClosePopup_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function TBP_UI_Button_ClosePopup.TBP_UI_Button_ClosePopup_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Button_ClosePopup(int32_t EntryPoint); // Function TBP_UI_Button_ClosePopup.TBP_UI_Button_ClosePopup_C.ExecuteUbergraph_TBP_UI_Button_ClosePopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void On Unhover__DelegateSignature(); // Function TBP_UI_Button_ClosePopup.TBP_UI_Button_ClosePopup_C.On Unhover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void On Hover__DelegateSignature(); // Function TBP_UI_Button_ClosePopup.TBP_UI_Button_ClosePopup_C.On Hover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void On Pressed__DelegateSignature(); // Function TBP_UI_Button_ClosePopup.TBP_UI_Button_ClosePopup_C.On Pressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

