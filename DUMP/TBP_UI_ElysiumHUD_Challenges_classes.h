// WidgetBlueprintGeneratedClass TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C
// Size: 0x298 (Inherited: 0x280)
struct UTBP_UI_ElysiumHUD_Challenges_C : UTigerDataDependentWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UVerticalBox* ChallengesContainer; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* ChallengesText; // 0x290(0x08)

	bool IsDataLoaded(struct ATigerPlayerController* InTigerPlayerController); // Function TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C.IsDataLoaded // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PopulateChallenges(int32_t NrOfChallenges); // Function TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C.PopulateChallenges // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnDataLoaded(); // Function TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C.OnDataLoaded // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ListenToDataLoadingEvent(); // Function TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C.ListenToDataLoadingEvent // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void Data Listen Event(); // Function TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C.Data Listen Event // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ElysiumHUD_Challenges(int32_t EntryPoint); // Function TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C.ExecuteUbergraph_TBP_UI_ElysiumHUD_Challenges // (Final|UbergraphFunction) // @ game+0x16c0340
};

