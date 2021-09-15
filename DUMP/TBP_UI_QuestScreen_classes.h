// WidgetBlueprintGeneratedClass TBP_UI_QuestScreen.TBP_UI_QuestScreen_C
// Size: 0x2b8 (Inherited: 0x280)
struct UTBP_UI_QuestScreen_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetSwitcher* QuestListSwitcher; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* QuestsCategoryHeader; // 0x290(0x08)
	struct UButton* QuestsLeftButton; // 0x298(0x08)
	struct UButton* QuestsRightButton; // 0x2a0(0x08)
	struct UTBP_UI_QuestInfo_C* TBP_UI_QuestInfo; // 0x2a8(0x08)
	struct UTigerQuest* SelectedQuest; // 0x2b0(0x08)

	void SelectFirstElementOfCurrentGrid(); // Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.SelectFirstElementOfCurrentGrid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnQuestSelected(struct UTigerQuest* InSelectedQuest); // Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.OnQuestSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RefreshHeaderAndButtons(); // Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.RefreshHeaderAndButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RebuildWidget(); // Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.RebuildWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__QuestsLeftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__QuestsLeftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__QuestsRightButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__QuestsRightButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_QuestScreen(int32_t EntryPoint); // Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.ExecuteUbergraph_TBP_UI_QuestScreen // (Final|UbergraphFunction) // @ game+0x16c0340
};

