// WidgetBlueprintGeneratedClass TBP_UI_QuestObjectiveSummary.TBP_UI_QuestObjectiveSummary_C
// Size: 0x2b4 (Inherited: 0x280)
struct UTBP_UI_QuestObjectiveSummary_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTigerStyledRichTextBlock* ExtraCompleteText; // 0x288(0x08)
	struct UTBP_UI_ObjectiveStateMarker_C* Icon; // 0x290(0x08)
	struct UTigerStyledRichTextBlock* ObjectiveText; // 0x298(0x08)
	struct UTigerQuestObjective* QuestObjective; // 0x2a0(0x08)
	bool AdditionalObjectivesDisplayMode; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	int32_t NumberOfObjectives; // 0x2ac(0x04)
	int32_t NumberOfCompletedObjectives; // 0x2b0(0x04)

	void DisplayAsAdditionalObjectives(); // Function TBP_UI_QuestObjectiveSummary.TBP_UI_QuestObjectiveSummary_C.DisplayAsAdditionalObjectives // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DisplayAsObjectiveSummary(); // Function TBP_UI_QuestObjectiveSummary.TBP_UI_QuestObjectiveSummary_C.DisplayAsObjectiveSummary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_QuestObjectiveSummary.TBP_UI_QuestObjectiveSummary_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_QuestObjectiveSummary(int32_t EntryPoint); // Function TBP_UI_QuestObjectiveSummary.TBP_UI_QuestObjectiveSummary_C.ExecuteUbergraph_TBP_UI_QuestObjectiveSummary // (Final|UbergraphFunction) // @ game+0x16c0340
};

