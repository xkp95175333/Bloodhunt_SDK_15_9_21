// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuSettingsListItem.TBP_UI_SystemMenuSettingsListItem_C
// Size: 0x318 (Inherited: 0x280)
struct UTBP_UI_SystemMenuSettingsListItem_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTBP_UI_SystemMenuSettingsListItemBorder_C* Border; // 0x288(0x08)
	struct UImage* HoveredDiamond; // 0x290(0x08)
	struct UImage* Image_58; // 0x298(0x08)
	struct UImage* LeftDiamond; // 0x2a0(0x08)
	struct UNamedSlot* OptionWidget; // 0x2a8(0x08)
	struct UImage* RightDiamond; // 0x2b0(0x08)
	struct UTigerStyledRichTextBlock* Text; // 0x2b8(0x08)
	struct FMulticastInlineDelegate OnWidgetClicked; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnWidgetHovered; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnWidgetUnhovered; // 0x2e0(0x10)
	struct UAkAudioEvent* HoveredAudioEvent; // 0x2f0(0x08)
	struct UAkAudioEvent* ClickedAudioEvent; // 0x2f8(0x08)
	struct FText ButtonLabel; // 0x300(0x18)

	void SetIsDeselected(); // Function TBP_UI_SystemMenuSettingsListItem.TBP_UI_SystemMenuSettingsListItem_C.SetIsDeselected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetIsSelected(); // Function TBP_UI_SystemMenuSettingsListItem.TBP_UI_SystemMenuSettingsListItem_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_SystemMenuSettingsListItem.TBP_UI_SystemMenuSettingsListItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_SystemMenuSettingsListItem.TBP_UI_SystemMenuSettingsListItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnHover(); // Function TBP_UI_SystemMenuSettingsListItem.TBP_UI_SystemMenuSettingsListItem_C.OnHover // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnUnhover(); // Function TBP_UI_SystemMenuSettingsListItem.TBP_UI_SystemMenuSettingsListItem_C.OnUnhover // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_SystemMenuSettingsListItem(int32_t EntryPoint); // Function TBP_UI_SystemMenuSettingsListItem.TBP_UI_SystemMenuSettingsListItem_C.ExecuteUbergraph_TBP_UI_SystemMenuSettingsListItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnWidgetUnhovered__DelegateSignature(); // Function TBP_UI_SystemMenuSettingsListItem.TBP_UI_SystemMenuSettingsListItem_C.OnWidgetUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnWidgetHovered__DelegateSignature(); // Function TBP_UI_SystemMenuSettingsListItem.TBP_UI_SystemMenuSettingsListItem_C.OnWidgetHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnWidgetClicked__DelegateSignature(); // Function TBP_UI_SystemMenuSettingsListItem.TBP_UI_SystemMenuSettingsListItem_C.OnWidgetClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

