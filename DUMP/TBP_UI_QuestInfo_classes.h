// WidgetBlueprintGeneratedClass TBP_UI_QuestInfo.TBP_UI_QuestInfo_C
// Size: 0x2e9 (Inherited: 0x280)
struct UTBP_UI_QuestInfo_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UScrollBox* ContentScrollBox; // 0x288(0x08)
	struct USpacer* DummyContentSpacer; // 0x290(0x08)
	struct UScrollBox* DummyScrollBox; // 0x298(0x08)
	struct UImage* Image_80; // 0x2a0(0x08)
	struct UVerticalBox* ObjectivesBox; // 0x2a8(0x08)
	struct UTigerStyledRichTextBlock* QuestFlavour; // 0x2b0(0x08)
	struct UTigerStyledRichTextBlock* QuestName; // 0x2b8(0x08)
	struct UTigerStyledRichTextBlock* QuestSubheading; // 0x2c0(0x08)
	struct UTigerStyledRichTextBlock* StatusText; // 0x2c8(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x2d0(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider_2; // 0x2d8(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_168; // 0x2e0(0x08)
	bool bDummyContentNeedsResize; // 0x2e8(0x01)

	void SetQuest(struct UTigerQuest* InNewQuest); // Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.SetQuest // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_QuestInfo_ContentScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.BndEvt__TBP_UI_QuestInfo_ContentScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_QuestInfo(int32_t EntryPoint); // Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.ExecuteUbergraph_TBP_UI_QuestInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

