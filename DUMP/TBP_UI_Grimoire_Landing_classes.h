// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C
// Size: 0x2e8 (Inherited: 0x2c8)
struct UTBP_UI_Grimoire_Landing_C : UTigerGrimoireLandingUi {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* FadeOnExit; // 0x2d0(0x08)
	struct UTBP_UI_Grimoire_ArticleBox_C* ArticleBox; // 0x2d8(0x08)
	struct UTigerStyledRichTextBlock* UnlockedText; // 0x2e0(0x08)

	void Hide(); // Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.Hide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Show(struct UTBP_UI_Grimoire_C* GrimoireUI, bool IsShown); // Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.Show // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateUnlockedStatus(); // Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.UpdateUnlockedStatus // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Grimoire_Landing(int32_t EntryPoint); // Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.ExecuteUbergraph_TBP_UI_Grimoire_Landing // (Final|UbergraphFunction) // @ game+0x16c0340
};

