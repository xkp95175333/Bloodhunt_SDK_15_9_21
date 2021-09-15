// WidgetBlueprintGeneratedClass TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C
// Size: 0x2c8 (Inherited: 0x280)
struct UTBP_UI_ElysiumHUD_Battlepass_Preview_C : UTigerDataDependentWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* Counter_BG; // 0x288(0x08)
	struct UImage* Counter_Outline; // 0x290(0x08)
	struct UOverlay* ExtraRewardsCount; // 0x298(0x08)
	struct UOverlay* PremiumRewardContainer; // 0x2a0(0x08)
	struct UTigerStyledRichTextBlock* PremiumRewardText; // 0x2a8(0x08)
	struct UUniformGridPanel* RewardContainer; // 0x2b0(0x08)
	struct UVerticalBox* RewardInfo_Box; // 0x2b8(0x08)
	struct UTigerStyledRichTextBlock* RewardsCounter; // 0x2c0(0x08)

	bool IsDataLoaded(struct ATigerPlayerController* InTigerPlayerController); // Function TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C.IsDataLoaded // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Update Battlepass Reward(); // Function TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C.Update Battlepass Reward // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnDataLoaded(); // Function TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C.OnDataLoaded // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ListenToDataLoadingEvent(); // Function TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C.ListenToDataLoadingEvent // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void Data Listen Event(); // Function TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C.Data Listen Event // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ElysiumHUD_Battlepass_Preview(int32_t EntryPoint); // Function TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C.ExecuteUbergraph_TBP_UI_ElysiumHUD_Battlepass_Preview // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

