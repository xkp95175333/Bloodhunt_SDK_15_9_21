// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_InfoTextBlock.TBP_UI_Grimoire_InfoTextBlock_C
// Size: 0x2b8 (Inherited: 0x280)
struct UTBP_UI_Grimoire_InfoTextBlock_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTigerStyledRichTextBlock* Heading; // 0x288(0x08)
	struct UTBP_UI_VerticalLine_C* HighlightLine; // 0x290(0x08)
	struct UTigerStyledRichTextBlock* Spacer; // 0x298(0x08)
	struct UWidgetSwitcher* Switcher; // 0x2a0(0x08)
	struct UTBP_UI_NewNotification_C* TBP_UI_NewNotification; // 0x2a8(0x08)
	struct UTigerStyledRichTextBlock* TextBlock; // 0x2b0(0x08)

	void ShowHighlight(bool Highlight); // Function TBP_UI_Grimoire_InfoTextBlock.TBP_UI_Grimoire_InfoTextBlock_C.ShowHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Grimoire_InfoTextBlock.TBP_UI_Grimoire_InfoTextBlock_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Grimoire_InfoTextBlock(int32_t EntryPoint); // Function TBP_UI_Grimoire_InfoTextBlock.TBP_UI_Grimoire_InfoTextBlock_C.ExecuteUbergraph_TBP_UI_Grimoire_InfoTextBlock // (Final|UbergraphFunction) // @ game+0x16c0340
};

