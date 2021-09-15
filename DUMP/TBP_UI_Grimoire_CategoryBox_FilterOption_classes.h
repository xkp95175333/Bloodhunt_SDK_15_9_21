// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_CategoryBox_FilterOption.TBP_UI_Grimoire_CategoryBox_FilterOption_C
// Size: 0x2b0 (Inherited: 0x280)
struct UTBP_UI_Grimoire_CategoryBox_FilterOption_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UButton* FilterButton; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* FilterText; // 0x290(0x08)
	struct UTBP_UI_Grimoire_CategoryBox_C* CategoryBox; // 0x298(0x08)
	enum class ETigerGrimoireSortType SortingType; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct UTBP_UI_Grimoire_CategoryBox_Filter_C* Filter; // 0x2a8(0x08)

	void BndEvt__ResultButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Grimoire_CategoryBox_FilterOption.TBP_UI_Grimoire_CategoryBox_FilterOption_C.BndEvt__ResultButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_202_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Grimoire_CategoryBox_FilterOption.TBP_UI_Grimoire_CategoryBox_FilterOption_C.BndEvt__Button_202_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_202_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Grimoire_CategoryBox_FilterOption.TBP_UI_Grimoire_CategoryBox_FilterOption_C.BndEvt__Button_202_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_Grimoire_CategoryBox_FilterOption.TBP_UI_Grimoire_CategoryBox_FilterOption_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function TBP_UI_Grimoire_CategoryBox_FilterOption.TBP_UI_Grimoire_CategoryBox_FilterOption_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Grimoire_CategoryBox_FilterOption(int32_t EntryPoint); // Function TBP_UI_Grimoire_CategoryBox_FilterOption.TBP_UI_Grimoire_CategoryBox_FilterOption_C.ExecuteUbergraph_TBP_UI_Grimoire_CategoryBox_FilterOption // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

