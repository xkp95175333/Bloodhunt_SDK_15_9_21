// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C
// Size: 0x2b8 (Inherited: 0x280)
struct UTBP_UI_Grimoire_RootCategoryMenu_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UHorizontalBox* MenuItems; // 0x288(0x08)
	struct TArray<struct UTBP_UI_Grimoire_RootButton_C*> MenuButtons; // 0x290(0x10)
	struct UTBP_UI_Grimoire_C* GrimoireUI; // 0x2a0(0x08)
	int32_t ActiveIndex; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct UTBP_UI_Grimoire_Searchbar_C* SearchBar; // 0x2b0(0x08)

	void DecrementMenuIndex(); // Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.DecrementMenuIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IncrementMenuIndex(); // Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.IncrementMenuIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetupMenuButtons(); // Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.SetupMenuButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SelectMenuOnClick(struct UTigerGrimoireCategory* SelectedCategory); // Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.SelectMenuOnClick // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(struct UTBP_UI_Grimoire_C* GrimoireUI); // Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.OnOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void MenuLeftPressed(); // Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.MenuLeftPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void MenuRightPressed(); // Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.MenuRightPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.OnClose // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Grimoire_RootCategoryMenu(int32_t EntryPoint); // Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.ExecuteUbergraph_TBP_UI_Grimoire_RootCategoryMenu // (Final|UbergraphFunction) // @ game+0x16c0340
};

