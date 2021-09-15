// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_ArticleLink_Random.TBP_UI_Grimoire_ArticleLink_Random_C
// Size: 0x2fc (Inherited: 0x280)
struct UTBP_UI_Grimoire_ArticleLink_Random_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* ExpandBoxAnim; // 0x288(0x08)
	struct UImage* BlackBackground; // 0x290(0x08)
	struct UTBP_UI_MaskedCardBorder_C* CardBorder; // 0x298(0x08)
	struct UImage* GradientImage; // 0x2a0(0x08)
	struct UOverlay* Group; // 0x2a8(0x08)
	struct UButton* RandomButton; // 0x2b0(0x08)
	struct UImage* RandomIcon; // 0x2b8(0x08)
	struct UTigerStyledRichTextBlock* RandomText; // 0x2c0(0x08)
	struct UVerticalBox* RandomVerticalBox; // 0x2c8(0x08)
	struct FMulticastInlineDelegate ArticleButtonPressed; // 0x2d0(0x10)
	struct UTigerGrimoireEntry* GrimoireEntry; // 0x2e0(0x08)
	enum class ETigerGrimoireArticleType ArticleType; // 0x2e8(0x01)
	bool bIsAnimating; // 0x2e9(0x01)
	char pad_2EA[0x2]; // 0x2ea(0x02)
	struct FLinearColor BorderColor; // 0x2ec(0x10)

	void SetGrimoireEntry(struct UTigerGrimoireEntry* Grimoire Entry); // Function TBP_UI_Grimoire_ArticleLink_Random.TBP_UI_Grimoire_ArticleLink_Random_C.SetGrimoireEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Grimoire_ArticleLink_Random.TBP_UI_Grimoire_ArticleLink_Random_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Grimoire_ArticleLink_Random.TBP_UI_Grimoire_ArticleLink_Random_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Grimoire_ArticleLink_Random.TBP_UI_Grimoire_ArticleLink_Random_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Grimoire_ArticleLink_Random.TBP_UI_Grimoire_ArticleLink_Random_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Anim Finished(); // Function TBP_UI_Grimoire_ArticleLink_Random.TBP_UI_Grimoire_ArticleLink_Random_C.Anim Finished // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Grimoire_ArticleLink_Random(int32_t EntryPoint); // Function TBP_UI_Grimoire_ArticleLink_Random.TBP_UI_Grimoire_ArticleLink_Random_C.ExecuteUbergraph_TBP_UI_Grimoire_ArticleLink_Random // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void ArticleButtonPressed__DelegateSignature(struct FString EntryId, enum class ETigerGrimoireArticleType ArticleType); // Function TBP_UI_Grimoire_ArticleLink_Random.TBP_UI_Grimoire_ArticleLink_Random_C.ArticleButtonPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

