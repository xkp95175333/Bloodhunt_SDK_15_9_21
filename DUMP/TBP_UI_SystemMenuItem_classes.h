// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuItem.TBP_UI_SystemMenuItem_C
// Size: 0x2f0 (Inherited: 0x280)
struct UTBP_UI_SystemMenuItem_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTBP_UI_TransitionMenuButton_C* ItemUiButton; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* TextBlock; // 0x290(0x08)
	struct FMulticastInlineDelegate OnWidgetClicked; // 0x298(0x10)
	struct FMulticastInlineDelegate OnWidgetHovered; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnWidgetUnhovered; // 0x2b8(0x10)
	struct UAkAudioEvent* HoveredAudioEvent; // 0x2c8(0x08)
	struct UAkAudioEvent* ClickedAudioEvent; // 0x2d0(0x08)
	struct FText ButtonLabel; // 0x2d8(0x18)

	void SetIsDeselected(); // Function TBP_UI_SystemMenuItem.TBP_UI_SystemMenuItem_C.SetIsDeselected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetIsSelected(); // Function TBP_UI_SystemMenuItem.TBP_UI_SystemMenuItem_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CreateNewCharacterUIButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function TBP_UI_SystemMenuItem.TBP_UI_SystemMenuItem_C.BndEvt__CreateNewCharacterUIButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CreateNewCharacterUIButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature(); // Function TBP_UI_SystemMenuItem.TBP_UI_SystemMenuItem_C.BndEvt__CreateNewCharacterUIButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CreateNewCharacterUIButton_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature(); // Function TBP_UI_SystemMenuItem.TBP_UI_SystemMenuItem_C.BndEvt__CreateNewCharacterUIButton_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_SystemMenuItem.TBP_UI_SystemMenuItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_SystemMenuItem(int32_t EntryPoint); // Function TBP_UI_SystemMenuItem.TBP_UI_SystemMenuItem_C.ExecuteUbergraph_TBP_UI_SystemMenuItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnWidgetUnhovered__DelegateSignature(); // Function TBP_UI_SystemMenuItem.TBP_UI_SystemMenuItem_C.OnWidgetUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnWidgetHovered__DelegateSignature(); // Function TBP_UI_SystemMenuItem.TBP_UI_SystemMenuItem_C.OnWidgetHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnWidgetClicked__DelegateSignature(); // Function TBP_UI_SystemMenuItem.TBP_UI_SystemMenuItem_C.OnWidgetClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

