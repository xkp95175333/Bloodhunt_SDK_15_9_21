// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C
// Size: 0x328 (Inherited: 0x280)
struct UTBP_UI_Grimoire_Searchbar_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* ExpansionAnim; // 0x288(0x08)
	struct UExpandableArea* Area; // 0x290(0x08)
	struct UBorder* BlurBorder; // 0x298(0x08)
	struct UCanvasPanel* Panel; // 0x2a0(0x08)
	struct UBorder* ResultsBorder; // 0x2a8(0x08)
	struct UScrollBox* ResultsList; // 0x2b0(0x08)
	struct UEditableTextBox* SearchBox; // 0x2b8(0x08)
	struct TArray<struct FTigerGrimoireSearchEntry> CurrentSearchResults; // 0x2c0(0x10)
	bool bAreResultsPrepared; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct UTBP_UI_Grimoire_C* GrimoireUI; // 0x2d8(0x08)
	struct FText CurrentInputText; // 0x2e0(0x18)
	int32_t MaxSortingIterations; // 0x2f8(0x04)
	float InUseOpacity; // 0x2fc(0x04)
	float NoUseOpacity; // 0x300(0x04)
	int32_t CharLimit; // 0x304(0x04)
	bool IsOpen; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	float FirstEntryTopPadding; // 0x30c(0x04)
	struct FText NoEntriesText; // 0x310(0x18)

	void Refresh Search Bar(); // Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Refresh Search Bar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Open Search Bar(); // Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Open Search Bar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Close Search Bar(); // Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Close Search Bar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateSearchList(); // Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.UpdateSearchList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void GetLastestSearchResults(struct TArray<struct FTigerGrimoireSearchEntry> OutSearchResults); // Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.GetLastestSearchResults // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ExpandableArea_570_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature(struct UExpandableArea* Area, bool bIsExpanded); // Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.BndEvt__ExpandableArea_570_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Destruct(); // Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__SearchBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Grimoire_Searchbar(int32_t EntryPoint); // Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.ExecuteUbergraph_TBP_UI_Grimoire_Searchbar // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

