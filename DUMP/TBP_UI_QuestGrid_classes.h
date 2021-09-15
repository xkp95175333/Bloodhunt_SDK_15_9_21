// WidgetBlueprintGeneratedClass TBP_UI_QuestGrid.TBP_UI_QuestGrid_C
// Size: 0x2c8 (Inherited: 0x280)
struct UTBP_UI_QuestGrid_C : UTigerWidget {
	struct UVerticalBox* PreviewContainer; // 0x280(0x08)
	struct FText Title; // 0x288(0x18)
	struct FMulticastInlineDelegate QuestSelected; // 0x2a0(0x10)
	struct FMargin ElementPadding; // 0x2b0(0x10)
	struct UTBP_UI_QuestPreview_C* SelectedWidget; // 0x2c0(0x08)

	void SelectFirstQuest(); // Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.SelectFirstQuest // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnButtonClicked(struct UTBP_UI_QuestPreview_C* InClickedWidget); // Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.OnButtonClicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PopulateGrid(int32_t InStartIndex, struct TArray<struct UTigerQuest*> InQuests); // Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.PopulateGrid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void QuestSelected__DelegateSignature(struct UTigerQuest* InSelectedQuest); // Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.QuestSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

