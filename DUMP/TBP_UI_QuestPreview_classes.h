// WidgetBlueprintGeneratedClass TBP_UI_QuestPreview.TBP_UI_QuestPreview_C
// Size: 0x378 (Inherited: 0x280)
struct UTBP_UI_QuestPreview_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* OnHover; // 0x288(0x08)
	struct UTBP_UI_AnimatedCompletionIcon_C* AnimatedCompleteIcon; // 0x290(0x08)
	struct UImage* BackgroundGlow; // 0x298(0x08)
	struct UTBP_UI_MaskedCardBorder_C* CardBorder; // 0x2a0(0x08)
	struct UImage* Image_632; // 0x2a8(0x08)
	struct UButton* InteractButton; // 0x2b0(0x08)
	struct UVerticalBox* ObjectivesVerticleBox; // 0x2b8(0x08)
	struct UImage* Rarity_left; // 0x2c0(0x08)
	struct UImage* Rarity_right; // 0x2c8(0x08)
	struct UImage* RewardImage; // 0x2d0(0x08)
	struct UTigerStyledRichTextBlock* TitleTextBlock; // 0x2d8(0x08)
	struct UImage* XPGradient; // 0x2e0(0x08)
	struct UTigerStyledRichTextBlock* XPText; // 0x2e8(0x08)
	struct UTigerQuest* Quest; // 0x2f0(0x08)
	struct TArray<struct UTigerQuestObjective*> IncompleteObjectives; // 0x2f8(0x10)
	struct TArray<struct UTigerQuestObjective*> CompletedObjectives; // 0x308(0x10)
	struct FMulticastInlineDelegate ButtonClicked; // 0x318(0x10)
	struct FLinearColor HighlightBorderColor; // 0x328(0x10)
	struct FDataTableRowHandle HighlightTitleTextStyle; // 0x338(0x10)
	struct FLinearColor DefaultBorderColor; // 0x348(0x10)
	struct FDataTableRowHandle DefaultTitleTextStyle; // 0x358(0x10)
	struct FMargin ObjectivePadding; // 0x368(0x10)

	void HideHighlight(); // Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.HideHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowHighlight(); // Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.ShowHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Setup Reward Preview(); // Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.Setup Reward Preview // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.BndEvt__InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_QuestPreview_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.BndEvt__TBP_UI_QuestPreview_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_QuestPreview(int32_t EntryPoint); // Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.ExecuteUbergraph_TBP_UI_QuestPreview // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void ButtonClicked__DelegateSignature(struct UTBP_UI_QuestPreview_C* InClickedWidget); // Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.ButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

