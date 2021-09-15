// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C
// Size: 0x348 (Inherited: 0x280)
struct UTBP_UI_Grimoire_InfoBox_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTigerStyledRichTextBlock* GameplayText; // 0x288(0x08)
	struct UImage* Image_119; // 0x290(0x08)
	struct UVerticalBox* InfoContainer; // 0x298(0x08)
	struct UTBP_UI_Grimoire_InfoLocked_C* InfoLocked; // 0x2a0(0x08)
	struct UScrollBox* InfoScrollBox; // 0x2a8(0x08)
	struct UTigerStyledRichTextBlock* LockedSummaryText; // 0x2b0(0x08)
	struct UWidgetSwitcher* Switcher; // 0x2b8(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x2c0(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider_2; // 0x2c8(0x08)
	struct UTigerStyledRichTextBlock* TigerStyledRichTextBlock_112; // 0x2d0(0x08)
	struct UTigerStyledRichTextBlock* Title; // 0x2d8(0x08)
	struct UImage* TitleImage; // 0x2e0(0x08)
	struct USizeBox* TitleImageBox; // 0x2e8(0x08)
	struct UVerticalBox* UnlockedBox; // 0x2f0(0x08)
	struct UTigerStyledRichTextBlock* UnlockedPartsText; // 0x2f8(0x08)
	bool IsDisplayed; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct FText DefaultLockedBodyText; // 0x308(0x18)
	struct UTigerGrimoireTree* GrimoireTree; // 0x320(0x08)
	bool AutoScroll; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct UTigerWidget* WidgetToScrollIntoView; // 0x330(0x08)
	struct UTigerGrimoireEntry* CurrentEntry; // 0x338(0x08)
	bool Scrollable; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	float InfoScrollTime; // 0x344(0x04)

	void FormatUnlockedPartsText(struct FText InEntriesUnlocked, int32_t InUnlockedNo, int32_t InTotalNo, struct FText OutResult); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.FormatUnlockedPartsText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Get Entry Description(struct UTigerGrimoireEntry* InEntry, struct FText Out Text); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Get Entry Description // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddChildToInfoContainer(struct UTBP_UI_Grimoire_InfoTextBlock_C* NewParam); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.AddChildToInfoContainer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnTitleImageLoaded(); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.OnTitleImageLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void StringStripHead(struct FString inString, struct FString InPattern, struct FString OutString); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.StringStripHead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void StringStripTail(struct FString inString, struct FString InPattern, struct FString OutString); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.StringStripTail // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetLastInfoBlock(struct UTBP_UI_Grimoire_InfoTextBlock_C* OutLastTextBlock); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.GetLastInfoBlock // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AppendToInfoTextBlock(struct UTBP_UI_Grimoire_InfoTextBlock_C* InInfoTextBlock, struct FText InText); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.AppendToInfoTextBlock // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Clear Info Text(); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Clear Info Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateInfoTextHeading(struct FText InText, bool InIsRead); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.CreateInfoTextHeading // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateInfoTextSpacer(struct FText InText); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.CreateInfoTextSpacer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateInfoTextBlock(struct FText InLoreText, struct FText InHeadingText, bool InIsRead, bool InAllowSpacers, struct UTBP_UI_Grimoire_InfoTextBlock_C* OutWidget); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.CreateInfoTextBlock // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetCategoryEntriesUnlockedAndTotal(struct UTigerGrimoireCategory* Category, int32_t UnlockedCount, int32_t TotalCount); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.GetCategoryEntriesUnlockedAndTotal // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateUnlockedPartsText(int32_t UnlockedNo, int32_t TotalNo, bool IsSubCategory); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.UpdateUnlockedPartsText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IsEntryInfoPartLocked(struct UTigerGrimoireEntry* Entry, bool IsLocked); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.IsEntryInfoPartLocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowSectionsLocked(struct FText UnlockInfo); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowSectionsLocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowSubCategory(struct UTigerGrimoireCategory* InCategory); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowSubCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowLockedBody(); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowLockedBody // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IsShown(bool ShowStatus); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.IsShown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowUnlockedBody(); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowUnlockedBody // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateTitleText(struct FText EntryName); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.UpdateTitleText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Hide(); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Hide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Show(bool Unlocked, struct UTigerGrimoireEntry* SelectedEntry); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Grimoire_InfoBox(int32_t EntryPoint); // Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ExecuteUbergraph_TBP_UI_Grimoire_InfoBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

