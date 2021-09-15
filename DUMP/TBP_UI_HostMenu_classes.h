// WidgetBlueprintGeneratedClass TBP_UI_HostMenu.TBP_UI_HostMenu_C
// Size: 0x2d1 (Inherited: 0x290)
struct UTBP_UI_HostMenu_C : UTigerMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UButton* BackButton; // 0x298(0x08)
	struct UButton* LaunchButton; // 0x2a0(0x08)
	struct UEditableTextBox* UserServerName; // 0x2a8(0x08)
	struct UTBP_TigerGameInstance_C* GameInstanceRef; // 0x2b0(0x08)
	struct FText ServerNameText; // 0x2b8(0x18)
	bool LaunchIsEnabled?; // 0x2d0(0x01)

	void Construct(); // Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__UserServerName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.BndEvt__UserServerName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__LaunchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.BndEvt__LaunchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_HostMenu(int32_t EntryPoint); // Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.ExecuteUbergraph_TBP_UI_HostMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

