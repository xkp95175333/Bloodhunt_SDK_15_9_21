// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C
// Size: 0x2fa (Inherited: 0x280)
struct UTBP_UI_Grimoire_CategoryBox_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UVerticalBox* CategoryBox; // 0x288(0x08)
	struct UScrollBox* CategoryScrollBox; // 0x290(0x08)
	struct UTBP_UI_Grimoire_CategoryBox_Filter_C* SortDropDown; // 0x298(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x2a0(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider_43; // 0x2a8(0x08)
	struct UTigerStyledRichTextBlock* TitleTextBlock; // 0x2b0(0x08)
	struct UTigerGrimoireTree* Tree; // 0x2b8(0x08)
	bool IsUnlocked; // 0x2c0(0x01)
	bool hasBeenRead; // 0x2c1(0x01)
	char pad_2C2[0x2]; // 0x2c2(0x02)
	struct FColor UnreadColor; // 0x2c4(0x04)
	struct UTBP_UI_Grimoire_C* GrimoireUI; // 0x2c8(0x08)
	int32_t RootCatTotalEntryCount; // 0x2d0(0x04)
	int32_t RootCatUnlockedEntryCount; // 0x2d4(0x04)
	float CategoryScrollTime; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct UWidget* ScrollViewWidget; // 0x2e0(0x08)
	bool Scrollable; // 0x2e8(0x01)
	enum class ETigerGrimoireSortType CurrentSortingOrder; // 0x2e9(0x01)
	char pad_2EA[0x6]; // 0x2ea(0x06)
	struct UTigerGrimoireCategory* CurrentParentCategory; // 0x2f0(0x08)
	bool bGamepadDpadMoved; // 0x2f8(0x01)
	bool bGamepadJumpToEntry; // 0x2f9(0x01)

	void AnyExpanding(bool OutExpanding); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.AnyExpanding // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void MoveMouseToHighlightedWidget(); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MoveMouseToHighlightedWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GamepadSelectHoveredEntryButton(); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GamepadSelectHoveredEntryButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetHighlightWidgetIndex(int32_t OutIndex); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GetHighlightWidgetIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ChangeSortingOrder(enum class ETigerGrimoireSortType InSortingOrder); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.ChangeSortingOrder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FindExpandingWidget(struct TArray<struct UWidget*> InWidgets, int32_t OutExpandingIndex); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.FindExpandingWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void MouseFollowExpandingWidget(bool MouseMoved); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MouseFollowExpandingWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void MoveMouseInWidgetDirection(int32_t InDirection, int32_t InHoverIndex); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MoveMouseInWidgetDirection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CalcHoverIndex(struct TArray<struct UWidget*> InWidgets, int32_t OutHoverindex); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.CalcHoverIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetHoverableWidgetsRecurse(struct TArray<struct UWidget*> InWidgetList, struct TArray<struct UWidget*> OutVisibleWidgets); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GetHoverableWidgetsRecurse // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetLocationWidgets(struct TArray<struct UWidget*> InWidgetList, struct TArray<struct UWidget*> OutVisibleWidgets); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GetLocationWidgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SelectButtonOfEntry(struct FString InEntryId, struct UTBP_UI_Grimoire_CategoryButton_C* SelectedCategoryButton); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectButtonOfEntry // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SelectButtonOfCategory(struct UTigerGrimoireCategory* InCategory); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectButtonOfCategory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HighlightCategory(struct UTBP_UI_Grimoire_CategoryButton_C* CategoryButton); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.HighlightCategory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HighlightEntry(struct UTBP_UI_Grimoire_CategoryButton_C* CategoryButton); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.HighlightEntry // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Show Categories(struct UTigerGrimoireCategory* ParentCategory); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Show Categories // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Get Entry Flags(struct UTigerPersistentPlayerState* InPersistentState, struct UTigerGrimoireEntry* InEntry, bool IsEntryUnlocked, bool IsEntryRead); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Get Entry Flags // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Get Category Info(struct UTigerPersistentPlayerState* InPersistentState, struct UTigerGrimoireCategory* InCategory, bool InIncludeSubCategories, struct FString IgnoreEntryId, bool IsUnlocked, bool IsRead, int32_t Out UnlockedCount, int32_t Out NumberOfEntries); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Get Category Info // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Make Entry Widget(struct UTigerPersistentPlayerState* PersistentState, struct UTigerGrimoireEntry* Entry, struct UPanelWidget* InPanelWidget, struct UTBP_UI_Grimoire_CategoryButton_C* ParentButtonWidget, struct UTigerGrimoireCategory* ParentCat, struct UTBP_UI_Grimoire_CategoryButton_C* OutCreatedWidget); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Make Entry Widget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Make Sub Category Widget(struct UPanelWidget* ParentPanelWidget, struct UTigerPersistentPlayerState* InPersistentState, struct UTigerGrimoireCategory* InSubCategory, struct UTBP_UI_Grimoire_CategoryButton_C* OutCreatedWidget); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Make Sub Category Widget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(struct UTBP_UI_Grimoire_C* GrimoireUI); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.OnOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SelectMenuOnClickCategoryButton(struct UTBP_UI_Grimoire_CategoryButton_C* SelectedCategoryButton); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectMenuOnClickCategoryButton // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SelectMenuOnClickEntryButton(struct UTBP_UI_Grimoire_CategoryButton_C* SelectedCategoryButton); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectMenuOnClickEntryButton // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void MenuDownPressed(); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MenuDownPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void MenuUpPressed(); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MenuUpPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.OnClose // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Grimoire_CategoryBox(int32_t EntryPoint); // Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.ExecuteUbergraph_TBP_UI_Grimoire_CategoryBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

