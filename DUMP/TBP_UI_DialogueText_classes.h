// WidgetBlueprintGeneratedClass TBP_UI_DialogueText.TBP_UI_DialogueText_C
// Size: 0x2c0 (Inherited: 0x290)
struct UTBP_UI_DialogueText_C : UTigerMenuWidget {
	struct UTigerStyledRichTextBlock* DialogueContent; // 0x290(0x08)
	struct UImage* Icon; // 0x298(0x08)
	struct UTigerStyledRichTextBlock* Name; // 0x2a0(0x08)
	struct UTBP_UI_QuestObjective_C* NewQuestObjective; // 0x2a8(0x08)
	struct UTBP_UI_Divider_Vertical_C* TBP_UI_Divider_Vertical; // 0x2b0(0x08)
	struct UTigerStyledRichTextBlock* Title; // 0x2b8(0x08)

	void SetQuestObjective(struct FText InText); // Function TBP_UI_DialogueText.TBP_UI_DialogueText_C.SetQuestObjective // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetDialogueText(struct FText InText); // Function TBP_UI_DialogueText.TBP_UI_DialogueText_C.SetDialogueText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetNameAndTitle(struct FText InName, struct FText InTitle, struct UTexture2D* InIcon); // Function TBP_UI_DialogueText.TBP_UI_DialogueText_C.SetNameAndTitle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

