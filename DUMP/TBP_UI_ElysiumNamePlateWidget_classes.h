// WidgetBlueprintGeneratedClass TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C
// Size: 0x2e9 (Inherited: 0x280)
struct UTBP_UI_ElysiumNamePlateWidget_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTigerStyledRichTextBlock* PlayerName; // 0x288(0x08)
	struct UTBP_UI_HorizontalFadeSlot_C* TBP_UI_HorizontalFadeSlot; // 0x290(0x08)
	struct ATBP_Player_C* Player; // 0x298(0x08)
	float AlphaTarget; // 0x2a0(0x04)
	float Alpha; // 0x2a4(0x04)
	float AlphaLerpSpeed; // 0x2a8(0x04)
	float Scale; // 0x2ac(0x04)
	struct ATigerPlayerState* Player State; // 0x2b0(0x08)
	float CONFIG_BarelyVisibleDistance; // 0x2b8(0x04)
	float CONFIG_FullyVisisibleDistance; // 0x2bc(0x04)
	struct FSlateColor PlayerNameColor; // 0x2c0(0x28)
	bool PlayerNameColorChanged; // 0x2e8(0x01)

	void OnMemberLeftParty(struct FTigerPartyId InPartyId, struct FString InDepartingPlayerId); // Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnMemberLeftParty // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerLeftParty(struct FTigerParty InParty); // Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnPlayerLeftParty // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdatePlayerNameColor(struct FSlateColor PlayerNameColor); // Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdatePlayerNameColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateAlphaAndScaleTargets(); // Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdateAlphaAndScaleTargets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetupPlayerIndexChanged(struct ATigerPlayerState* self2, struct ATigerPlayerState* self3); // Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.SetupPlayerIndexChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateAlpha(); // Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdateAlpha // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateAlphaValue(float Delta); // Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdateAlphaValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetPlayer(struct ATBP_Player_C* Player); // Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.SetPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnGroupChanged(); // Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnGroupChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerNameChanged(); // Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnPlayerNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerIndexChanged(char InIndex); // Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnPlayerIndexChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ClearPlayerNameColor(); // Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.ClearPlayerNameColor // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ElysiumNamePlateWidget(int32_t EntryPoint); // Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.ExecuteUbergraph_TBP_UI_ElysiumNamePlateWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

