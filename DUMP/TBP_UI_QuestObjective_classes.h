// WidgetBlueprintGeneratedClass TBP_UI_QuestObjective.TBP_UI_QuestObjective_C
// Size: 0x2b8 (Inherited: 0x280)
struct UTBP_UI_QuestObjective_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* FadeIn; // 0x288(0x08)
	struct UImage* Background; // 0x290(0x08)
	struct UTBP_UI_ObjectiveStateMarker_C* ObjectiveStateMarker; // 0x298(0x08)
	struct UTigerStyledRichTextBlock* QuestObjectiveText; // 0x2a0(0x08)
	struct UImage* Title_Line; // 0x2a8(0x08)
	struct UImage* Title_Line_3; // 0x2b0(0x08)

	void Play Fade in Part 2(); // Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.Play Fade in Part 2 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Play Fade in Part 1(); // Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.Play Fade in Part 1 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetObjectiveText(struct FText InText); // Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.SetObjectiveText // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Activate(struct FText InObjectiveText); // Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.Activate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnIconFadeInFinished(); // Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.OnIconFadeInFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_QuestObjective(int32_t EntryPoint); // Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.ExecuteUbergraph_TBP_UI_QuestObjective // (Final|UbergraphFunction) // @ game+0x16c0340
};

