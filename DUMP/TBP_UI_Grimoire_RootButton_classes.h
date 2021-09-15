// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C
// Size: 0x398 (Inherited: 0x361)
struct UTBP_UI_Grimoire_RootButton_C : UTBP_UI_MatchMaker_TabButton_C {
	char pad_361[0x7]; // 0x361(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UTigerIngameSubmenuWidget* MenuWidget; // 0x370(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x378(0x10)
	bool IsSelected; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct UTigerGrimoireCategory* MenuItemCategory; // 0x390(0x08)

	void OnNewMenuSelected(struct UTigerGrimoireCategory* NewCategory); // Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.OnNewMenuSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnButtonClicked(); // Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.OnButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Grimoire_RootButton(int32_t EntryPoint); // Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.ExecuteUbergraph_TBP_UI_Grimoire_RootButton // (Final|UbergraphFunction) // @ game+0x16c0340
	void OnClicked__DelegateSignature(struct UTigerGrimoireCategory* SubmenuWidget); // Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

