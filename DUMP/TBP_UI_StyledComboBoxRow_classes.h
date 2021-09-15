// WidgetBlueprintGeneratedClass TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C
// Size: 0x288 (Inherited: 0x260)
struct UTBP_UI_StyledComboBoxRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_1; // 0x268(0x08)
	struct UTigerStyledRichTextBlock* TextBlock; // 0x270(0x08)
	bool IsSelected; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct UTBP_UI_StyledComboBox_C* ParentBox; // 0x280(0x08)

	void SetSelected(bool InIsSelected); // Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Init(struct FText InText, struct FDataTableRowHandle InTextStyle, struct UTBP_UI_StyledComboBox_C* InParentBox); // Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_StyledComboBoxRow(int32_t EntryPoint); // Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.ExecuteUbergraph_TBP_UI_StyledComboBoxRow // (Final|UbergraphFunction) // @ game+0x16c0340
};

