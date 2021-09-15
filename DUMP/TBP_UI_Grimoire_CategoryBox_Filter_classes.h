// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_CategoryBox_Filter.TBP_UI_Grimoire_CategoryBox_Filter_C
// Size: 0x3e0 (Inherited: 0x280)
struct UTBP_UI_Grimoire_CategoryBox_Filter_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UBorder* BoxBorder; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* CurrentFilterText; // 0x290(0x08)
	struct UButton* FilterButton; // 0x298(0x08)
	struct UImage* FilterIcon; // 0x2a0(0x08)
	struct UVerticalBox* OptionsBox; // 0x2a8(0x08)
	struct USizeBox* OptionsSizeBox; // 0x2b0(0x08)
	struct UTBP_UI_Grimoire_CategoryBox_C* CategoryBox; // 0x2b8(0x08)
	float UnhoveredOpacity; // 0x2c0(0x04)
	float HoveredOpacity; // 0x2c4(0x04)
	float NoOpacity; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct FSlateBrush FilterIconHoveredBrush; // 0x2d0(0x88)
	struct FSlateBrush FilterIconNormalBrush; // 0x358(0x88)

	void HideFilters(); // Function TBP_UI_Grimoire_CategoryBox_Filter.TBP_UI_Grimoire_CategoryBox_Filter_C.HideFilters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowFilters(); // Function TBP_UI_Grimoire_CategoryBox_Filter.TBP_UI_Grimoire_CategoryBox_Filter_C.ShowFilters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateFilterOptions(); // Function TBP_UI_Grimoire_CategoryBox_Filter.TBP_UI_Grimoire_CategoryBox_Filter_C.CreateFilterOptions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void On Open(); // Function TBP_UI_Grimoire_CategoryBox_Filter.TBP_UI_Grimoire_CategoryBox_Filter_C.On Open // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Grimoire_CategoryBox_Filter.TBP_UI_Grimoire_CategoryBox_Filter_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Grimoire_CategoryBox_Filter.TBP_UI_Grimoire_CategoryBox_Filter_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function TBP_UI_Grimoire_CategoryBox_Filter.TBP_UI_Grimoire_CategoryBox_Filter_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Grimoire_CategoryBox_Filter.TBP_UI_Grimoire_CategoryBox_Filter_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_Grimoire_CategoryBox_Filter.TBP_UI_Grimoire_CategoryBox_Filter_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Grimoire_CategoryBox_Filter(int32_t EntryPoint); // Function TBP_UI_Grimoire_CategoryBox_Filter.TBP_UI_Grimoire_CategoryBox_Filter_C.ExecuteUbergraph_TBP_UI_Grimoire_CategoryBox_Filter // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

