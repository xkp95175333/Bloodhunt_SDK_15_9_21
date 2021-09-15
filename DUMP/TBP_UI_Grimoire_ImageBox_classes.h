// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C
// Size: 0x2a8 (Inherited: 0x280)
struct UTBP_UI_Grimoire_ImageBox_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* Image; // 0x288(0x08)
	bool IsDisplayed; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct UTigerGrimoireEntry* GrimoireEntry; // 0x298(0x08)
	struct UTBP_UI_Grimoire_C* GrimoireUI; // 0x2a0(0x08)

	void OnMediaLoaded(); // Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.OnMediaLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IsShown(bool ShowStatus); // Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.IsShown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Hide(); // Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.Hide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Show(struct UTigerGrimoireEntry* SelectedItem); // Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.Show // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Grimoire_ImageBox(int32_t EntryPoint); // Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.ExecuteUbergraph_TBP_UI_Grimoire_ImageBox // (Final|UbergraphFunction) // @ game+0x16c0340
};

