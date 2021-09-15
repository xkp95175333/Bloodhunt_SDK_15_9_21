// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C
// Size: 0x2dc (Inherited: 0x280)
struct UTBP_UI_Grimoire_ArticleBox_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UHorizontalBox* ArticlesList; // 0x288(0x08)
	struct UScrollBox* ArticlesScrollBox; // 0x290(0x08)
	struct UTBP_UI_Grimoire_Landing_C* GrimoireLandingUI; // 0x298(0x08)
	struct UTBP_UI_Grimoire_C* GrimoireUI; // 0x2a0(0x08)
	struct TArray<struct FString> TestFeaturedEntryIDs; // 0x2a8(0x10)
	struct TArray<struct FString> TestSuggestedEntryIDs; // 0x2b8(0x10)
	struct TArray<struct FString> TestNewEntryIDs; // 0x2c8(0x10)
	float ArticleScrollTime; // 0x2d8(0x04)

	void ResetScroll(); // Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ResetScroll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddArticleRandom(struct UTigerGrimoireEntry* GrimoireEntry); // Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.AddArticleRandom // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetNewArticleEntryIDs(struct TArray<struct FString> EntryIds); // Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.GetNewArticleEntryIDs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddArticleDouble(struct UTigerGrimoireEntry* GrimoireEntry1, struct UTigerGrimoireEntry* GrimoireEntry2, enum class ETigerGrimoireArticleType ArticleType); // Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.AddArticleDouble // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddArticle(struct UTigerGrimoireEntry* GrimoireEntry, enum class ETigerGrimoireArticleType ArticleType); // Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.AddArticle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateArticleLinks(struct UTBP_UI_Grimoire_C* GrimoireUI, struct UTBP_UI_Grimoire_Landing_C* GrimoireLandingUI, int32_t TotalArticles); // Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.CreateArticleLinks // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetTestEntries(struct TArray<struct FString> EntryIds, struct TArray<struct UTigerGrimoireEntry*> Entries); // Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.GetTestEntries // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ClearArticleLinks(); // Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ClearArticleLinks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ArticleSelected(struct FString EntryId, enum class ETigerGrimoireArticleType ArticleType); // Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ArticleSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Grimoire_ArticleBox(int32_t EntryPoint); // Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ExecuteUbergraph_TBP_UI_Grimoire_ArticleBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

