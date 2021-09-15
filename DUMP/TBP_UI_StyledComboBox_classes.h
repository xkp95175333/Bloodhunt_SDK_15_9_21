// WidgetBlueprintGeneratedClass TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C
// Size: 0x35a (Inherited: 0x260)
struct UTBP_UI_StyledComboBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ExpandDropDown; // 0x268(0x08)
	struct UBorder* ButtonBorder; // 0x270(0x08)
	struct UTigerStyledRichTextBlock* ButtonTextBlock; // 0x278(0x08)
	struct UBorder* DropDownBackground; // 0x280(0x08)
	struct UBorder* DropDownBorder; // 0x288(0x08)
	struct UButton* DropDownButton; // 0x290(0x08)
	struct UImage* DropDownImage; // 0x298(0x08)
	struct UVerticalBox* DropDownList; // 0x2a0(0x08)
	struct UScrollBox* ScrollBox_1; // 0x2a8(0x08)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x2b0(0x10)
	struct FDataTableRowHandle TextStyle; // 0x2c0(0x10)
	struct FText HintText; // 0x2d0(0x18)
	float HintTextOpacity; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct TArray<struct FText> Options; // 0x2f0(0x10)
	int32_t CurrentlySelectedIndex; // 0x300(0x04)
	bool Expanded; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	struct FLinearColor DefaultBorderColor; // 0x308(0x10)
	struct FLinearColor HoveredBorderColor; // 0x318(0x10)
	struct FLinearColor ActiveBorderColor; // 0x328(0x10)
	struct FLinearColor ErrorBorderColor; // 0x338(0x10)
	struct FLinearColor BackgroundColor; // 0x348(0x10)
	bool Hovered; // 0x358(0x01)
	bool IsError; // 0x359(0x01)

	void ScrollToIndex(int32_t InIndex); // Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.ScrollToIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HasSelection(bool HasSelection); // Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.HasSelection // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void SetOptions(struct TArray<struct FText> InNewOptions); // Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.SetOptions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateColors(); // Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.UpdateColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetError(bool InIsError); // Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.SetError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetCurrentlySelectedOption(struct FText OutSelectedOption); // Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.GetCurrentlySelectedOption // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetDropDownExpanded(bool InExpand); // Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.SetDropDownExpanded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OptionClicked(struct UTBP_UI_StyledComboBoxRow_C* InClickedOption); // Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OptionClicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_180_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.BndEvt__Button_180_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void Destruct(); // Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_StyledComboBox(int32_t EntryPoint); // Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.ExecuteUbergraph_TBP_UI_StyledComboBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnSelectionChanged__DelegateSignature(struct FText SelectedItem, int32_t SelectedIndex); // Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OnSelectionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

