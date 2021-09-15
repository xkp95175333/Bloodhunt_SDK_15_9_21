// WidgetBlueprintGeneratedClass TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C
// Size: 0x2d0 (Inherited: 0x260)
struct UTBP_UI_BloodTrackCustomizer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AnimatedBloodTrackFadeIn; // 0x268(0x08)
	struct UTBP_UI_BloodTrackCategory_C* ArchetypeCategory; // 0x270(0x08)
	struct UTigerStyledRichTextBlock* ArchetypeNameText; // 0x278(0x08)
	struct UTBP_UI_BloodTrackCategory_C* GeneralCategory; // 0x280(0x08)
	struct UTBP_UI_BloodTrack_C* TBP_UI_BloodTrack; // 0x288(0x08)
	struct UTBP_UI_FullscreenImage_C* TBP_UI_FullscreenImage; // 0x290(0x08)
	struct UTigerStyledRichTextBlock* TigerStyledRichTextBlock; // 0x298(0x08)
	struct UTigerStyledRichTextBlock* TigerStyledRichTextBlock_2; // 0x2a0(0x08)
	struct UTigerStyledRichTextBlock* TigerStyledRichTextBlock_150; // 0x2a8(0x08)
	struct TArray<struct UTigerBloodTrackPassiveConfig*> CurrentBloodTrack; // 0x2b0(0x10)
	struct TArray<struct UTigerBloodTrackPassiveConfig*> InitialBloodTrack; // 0x2c0(0x10)

	void PopulateMenus(); // Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.PopulateMenus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SwitchSelectedPassive(int32_t Index, struct UTigerBloodTrackPassiveConfig* New Passive); // Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.SwitchSelectedPassive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void MenuClosing(); // Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.MenuClosing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreviewMove(struct TArray<int32_t> Movement Data); // Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.PreviewMove // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ModifyBloodTrack(struct TArray<int32_t> Movement Data); // Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.ModifyBloodTrack // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void MenuOpening(); // Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.MenuOpening // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateBackgroundVisibility(); // Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.UpdateBackgroundVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Destruct(); // Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnBloodTrackUpdatedEvent_Event_1(struct ATigerPlayer* InPlayer); // Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.OnBloodTrackUpdatedEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_BloodTrackCustomizer(int32_t EntryPoint); // Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.ExecuteUbergraph_TBP_UI_BloodTrackCustomizer // (Final|UbergraphFunction) // @ game+0x16c0340
};

