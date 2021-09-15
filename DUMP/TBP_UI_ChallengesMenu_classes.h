// WidgetBlueprintGeneratedClass TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C
// Size: 0x4b0 (Inherited: 0x3b0)
struct UTBP_UI_ChallengesMenu_C : UTigerSceneBackgroundUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct UWidgetAnimation* FadeInItemPreview; // 0x3b8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x3c0(0x08)
	struct UTBP_UI_InputMenuPrompt_C* BackInputPrompt; // 0x3c8(0x08)
	struct UImage* BlackBackground; // 0x3d0(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x3d8(0x08)
	struct UVerticalBox* DailyChallengesBox; // 0x3e0(0x08)
	struct UTBP_UI_ChallengeGrid_C* DailyChallengesGrid; // 0x3e8(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* DailyTabWidget; // 0x3f0(0x08)
	struct UTigerStyledRichTextBlock* ExpireText; // 0x3f8(0x08)
	struct UTBP_UI_InputMenuPrompt_C* HidePreviewInputPrompt_2; // 0x400(0x08)
	struct UImage* Image; // 0x408(0x08)
	struct UImage* Image_74; // 0x410(0x08)
	struct UImage* Image_163; // 0x418(0x08)
	struct UTBP_UI_InputMenuPrompt_C* PreviewInputPrompt; // 0x420(0x08)
	struct UTBP_UI_QuestScreen_C* QuestScreen; // 0x428(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* QuestsTabWidget; // 0x430(0x08)
	struct UTigerStyledRichTextBlock* SeasonalWeekHeader; // 0x438(0x08)
	struct UButton* SeasonWeekLeftButton; // 0x440(0x08)
	struct UButton* SeasonWeekRightButton; // 0x448(0x08)
	struct UTBP_UI_ItemPreview_C* TBP_UI_ItemPreview; // 0x450(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* TBP_UI_Menu_Button_Prompt_Footer; // 0x458(0x08)
	struct UTBP_UI_Submenu_Header_C* TBP_UI_Submenu_Header; // 0x460(0x08)
	struct UTigerStyledRichTextBlock* TigerStyledRichTextBlock; // 0x468(0x08)
	struct UTigerStyledRichTextBlock* TigerStyledRichTextBlock_2; // 0x470(0x08)
	struct UTigerStyledRichTextBlock* TigerStyledRichTextBlock_3; // 0x478(0x08)
	struct UTigerStyledRichTextBlock* TigerStyledRichTextBlock_550; // 0x480(0x08)
	struct UVerticalBox* WeeklyChallengesBox; // 0x488(0x08)
	struct UWidgetSwitcher* WeeklyChallengeSwitcher; // 0x490(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* WeeklyTabWidget; // 0x498(0x08)
	bool IsShowingPreview; // 0x4a0(0x01)
	bool CanPreview; // 0x4a1(0x01)
	char pad_4A2[0x6]; // 0x4a2(0x06)
	struct UTigerInventoryItemBase* SelectedReward; // 0x4a8(0x08)

	void RefreshItemPreviewButton(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.RefreshItemPreviewButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HideItemPreview(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.HideItemPreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowItemPreview(struct FTigerItemId InItemToShow); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ShowItemPreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RefreshQuestWidgets(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.RefreshQuestWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetWeeklyChallengeHeader(int32_t InWeek); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.SetWeeklyChallengeHeader // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RefreshAllWeeklyChallengeProgress(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.RefreshAllWeeklyChallengeProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TryRebuildWeeklyChallenges(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.TryRebuildWeeklyChallenges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetDailyExpireText(struct FText OutExpireText); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.GetDailyExpireText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__WeeklyTabWidget_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__WeeklyTabWidget_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnBackgroundSceneShown(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.OnBackgroundSceneShown // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__DailyTabWidget_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__DailyTabWidget_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ChallengeProgressUpdated(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ChallengeProgressUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__BackInputPrompt_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__BackInputPrompt_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void FadeRightFinished(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.FadeRightFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FadeLeftFinished(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.FadeLeftFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__QuestsTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__QuestsTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__PreviewInputPrompt_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__PreviewInputPrompt_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__HidePreviewInputPrompt_1_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__HidePreviewInputPrompt_1_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ChallengesMenu(int32_t EntryPoint); // Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ExecuteUbergraph_TBP_UI_ChallengesMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

