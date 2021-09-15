// WidgetBlueprintGeneratedClass TBP_UI_Carousel.TBP_UI_Carousel_C
// Size: 0x2d0 (Inherited: 0x280)
struct UTBP_UI_Carousel_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UButton* LeftButton; // 0x288(0x08)
	struct UButton* RightButton; // 0x290(0x08)
	struct UTigerStyledRichTextBlock* SelectedItemText; // 0x298(0x08)
	struct TArray<struct FText> ItemLabels; // 0x2a0(0x10)
	int32_t CurrentlySelectedIndex; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct FMulticastInlineDelegate SelectedItemIndexChanged; // 0x2b8(0x10)
	int32_t MinIndex; // 0x2c8(0x04)
	int32_t MaxIndex; // 0x2cc(0x04)

	void SetSwappableRange(int32_t InMinIndex, int32_t InMaxIndex); // Function TBP_UI_Carousel.TBP_UI_Carousel_C.SetSwappableRange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetSelectedItemIndex(int32_t Index); // Function TBP_UI_Carousel.TBP_UI_Carousel_C.SetSelectedItemIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateSelectedItemLabel(); // Function TBP_UI_Carousel.TBP_UI_Carousel_C.UpdateSelectedItemLabel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetItemLabels(struct TArray<struct FText> NewItemLabels, int32_t NewSelectedItemIndex); // Function TBP_UI_Carousel.TBP_UI_Carousel_C.SetItemLabels // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_Carousel.TBP_UI_Carousel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Carousel.TBP_UI_Carousel_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Carousel.TBP_UI_Carousel_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Carousel(int32_t EntryPoint); // Function TBP_UI_Carousel.TBP_UI_Carousel_C.ExecuteUbergraph_TBP_UI_Carousel // (Final|UbergraphFunction) // @ game+0x16c0340
	void SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_Carousel.TBP_UI_Carousel_C.SelectedItemIndexChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

