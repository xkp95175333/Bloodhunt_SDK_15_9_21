// WidgetBlueprintGeneratedClass TBP_UI_WheelItem.TBP_UI_WheelItem_C
// Size: 0x2a1 (Inherited: 0x260)
struct UTBP_UI_WheelItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ShowForbiddenIcon; // 0x268(0x08)
	struct UWidgetAnimation* HoverAnimation; // 0x270(0x08)
	struct UImage* BackgroundColor; // 0x278(0x08)
	struct UImage* ForbiddenIcon; // 0x280(0x08)
	struct UImage* IconImage; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* NameText; // 0x290(0x08)
	struct UTigerStyledRichTextBlock* StackText; // 0x298(0x08)
	bool CanUseItem; // 0x2a0(0x01)

	void SetBackgroundColor(struct FLinearColor Color, bool bVisible); // Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.SetBackgroundColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateCanUse(bool Can Use); // Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.UpdateCanUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ResetAnimation(); // Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.ResetAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetSelected(bool IsSelected); // Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateData(struct FText Name, struct UTexture2D* Icon, int32_t Count); // Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.UpdateData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_1(); // Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_2(); // Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_WheelItem(int32_t EntryPoint); // Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.ExecuteUbergraph_TBP_UI_WheelItem // (Final|UbergraphFunction) // @ game+0x16c0340
};

