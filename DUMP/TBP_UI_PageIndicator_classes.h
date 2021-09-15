// WidgetBlueprintGeneratedClass TBP_UI_PageIndicator.TBP_UI_PageIndicator_C
// Size: 0x28c (Inherited: 0x260)
struct UTBP_UI_PageIndicator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* Container; // 0x268(0x08)
	int32_t NumPages; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct FMulticastInlineDelegate OnPageSelected; // 0x278(0x10)
	int32_t CurrentPageIndex; // 0x288(0x04)

	void GetCurrentPageIndex(int32_t CurrentIndex); // Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.GetCurrentPageIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void SetNumPages(int32_t NumPages); // Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.SetNumPages // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void SelectPage(int32_t NewPageIndex); // Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.SelectPage // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void PageSelected(int32_t PageIndex); // Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.PageSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_PageIndicator(int32_t EntryPoint); // Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.ExecuteUbergraph_TBP_UI_PageIndicator // (Final|UbergraphFunction) // @ game+0x16c0340
	void OnPageSelected__DelegateSignature(int32_t PageIndex); // Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.OnPageSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

