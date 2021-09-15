// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C
// Size: 0x2b8 (Inherited: 0x280)
struct UTBP_UI_Grimoire_Background_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* FadeOutVignette; // 0x288(0x08)
	struct UTBP_UI_FullscreenImage_C* TBP_UI_FullscreenImage; // 0x290(0x08)
	struct UImage* Vignette; // 0x298(0x08)
	struct UTigerGrimoireEntry* GrimoireEntry; // 0x2a0(0x08)
	struct UTexture2D* DefaultBackgroundTexture; // 0x2a8(0x08)
	struct UTBP_UI_Grimoire_C* GrimoireUI; // 0x2b0(0x08)

	void Show(); // Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Hide(); // Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.Hide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayVignetteFadeInAnim(); // Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.PlayVignetteFadeInAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayVignetteFadeOutAnim(); // Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.PlayVignetteFadeOutAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void On Media Loaded(); // Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.On Media Loaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowEntryBackground(struct UTigerGrimoireEntry* SelectedEntry); // Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.ShowEntryBackground // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowDefaultBackground(); // Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.ShowDefaultBackground // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Grimoire_Background(int32_t EntryPoint); // Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.ExecuteUbergraph_TBP_UI_Grimoire_Background // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

