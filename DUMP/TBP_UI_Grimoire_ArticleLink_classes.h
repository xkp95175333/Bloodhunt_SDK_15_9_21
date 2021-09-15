// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C
// Size: 0x3c9 (Inherited: 0x280)
struct UTBP_UI_Grimoire_ArticleLink_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* BigExpandBoxAnim; // 0x288(0x08)
	struct UWidgetAnimation* SmallExpandBoxAnim; // 0x290(0x08)
	struct UButton* ArticleButton; // 0x298(0x08)
	struct UImage* ArticleImage; // 0x2a0(0x08)
	struct UVerticalBox* ArticleInfo; // 0x2a8(0x08)
	struct UTigerStyledRichTextBlock* ArticleNameText; // 0x2b0(0x08)
	struct UScaleBox* ArticleScaleBox; // 0x2b8(0x08)
	struct UTigerStyledRichTextBlock* ArticleTypeText; // 0x2c0(0x08)
	struct UImage* BlackBackground; // 0x2c8(0x08)
	struct UTBP_UI_MaskedCardBorder_C* CardBorder; // 0x2d0(0x08)
	struct UImage* GradientImage; // 0x2d8(0x08)
	struct UOverlay* Group; // 0x2e0(0x08)
	struct FMulticastInlineDelegate ArticleButtonPressed; // 0x2e8(0x10)
	struct UTigerGrimoireEntry* GrimoireEntry; // 0x2f8(0x08)
	struct UTexture2D* DefaultImage; // 0x300(0x08)
	float FeaturedWidth; // 0x308(0x04)
	float SuggestedWidth; // 0x30c(0x04)
	enum class ETigerGrimoireEntryMediaDisplayMode MediaType; // 0x310(0x01)
	enum class ETigerGrimoireArticleType ArticleType; // 0x311(0x01)
	char pad_312[0x6]; // 0x312(0x06)
	struct FSlateBrush AriticleImageBrush; // 0x318(0x88)
	struct UMaterialInstanceDynamic* CardMaterialInst; // 0x3a0(0x08)
	struct UWidgetAnimation* ExpandBoxAnim; // 0x3a8(0x08)
	struct UTextureRenderTarget2D* Texture Render Target; // 0x3b0(0x08)
	struct FLinearColor BorderColor; // 0x3b8(0x10)
	bool bIsAnimating; // 0x3c8(0x01)

	void UpdateCardAppearance(struct UTexture* FrontCardTexture, struct FDataTableRowHandle CardBorderRow); // Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateCardAppearance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateArticleApperance(enum class ETigerGrimoireArticleType ArticleType); // Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleApperance // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateArticleEntry(struct UTigerGrimoireEntry* GrimoireEntry, enum class ETigerGrimoireArticleType ArticleType); // Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnMediaLoaded(); // Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.OnMediaLoaded // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateArticleImage(); // Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleImage // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateArticleType(enum class ETigerGrimoireArticleType ArticleType); // Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleType // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateArticleName(struct FText EntryName); // Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleName // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Anim Finished(); // Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.Anim Finished // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Grimoire_ArticleLink(int32_t EntryPoint); // Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.ExecuteUbergraph_TBP_UI_Grimoire_ArticleLink // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void ArticleButtonPressed__DelegateSignature(struct FString EntryId, enum class ETigerGrimoireArticleType ArticleType); // Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.ArticleButtonPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

