// WidgetBlueprintGeneratedClass TBP_UI_QuestInfoObjectiveSection.TBP_UI_QuestInfoObjectiveSection_C
// Size: 0x2c0 (Inherited: 0x280)
struct UTBP_UI_QuestInfoObjectiveSection_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UVerticalBox* Background; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* FlavourText; // 0x290(0x08)
	struct UImage* Image_62; // 0x298(0x08)
	struct UImage* Image_104; // 0x2a0(0x08)
	struct UImage* Image_158; // 0x2a8(0x08)
	struct UTBP_UI_QuestObjectiveSummary_C* QuestObjectiveSummary; // 0x2b0(0x08)
	struct UTigerQuestObjective* Objective; // 0x2b8(0x08)

	void Construct(); // Function TBP_UI_QuestInfoObjectiveSection.TBP_UI_QuestInfoObjectiveSection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_QuestInfoObjectiveSection(int32_t EntryPoint); // Function TBP_UI_QuestInfoObjectiveSection.TBP_UI_QuestInfoObjectiveSection_C.ExecuteUbergraph_TBP_UI_QuestInfoObjectiveSection // (Final|UbergraphFunction) // @ game+0x16c0340
};

