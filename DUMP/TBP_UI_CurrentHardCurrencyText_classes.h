// WidgetBlueprintGeneratedClass TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C
// Size: 0x2f4 (Inherited: 0x280)
struct UTBP_UI_CurrentHardCurrencyText_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* CurrencyImage; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* CurrencyText; // 0x290(0x08)
	struct UCanvasPanel* RootCanvas; // 0x298(0x08)
	struct FSlateColor TintSlateColor; // 0x2a0(0x28)
	float Currency Image Size; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct FDataTableRowHandle RichTextFont; // 0x2d0(0x10)
	int32_t OldPremiumCurrencyBalance; // 0x2e0(0x04)
	int32_t CurrentPremiumCurrencyBalance; // 0x2e4(0x04)
	struct UCurveFloat* HardCurrencyCurveAnim; // 0x2e8(0x08)
	float PremiumCurrencyBalanceChangedTimeStamp; // 0x2f0(0x04)

	int32_t GetInterpolatedPremiumCurrencyBalance(); // Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.GetInterpolatedPremiumCurrencyBalance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void SetCurrencyAmount(int32_t CurrencyAmount); // Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.SetCurrencyAmount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateToCurrentPlayerAmount(); // Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.UpdateToCurrentPlayerAmount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetCurrencyAppearance(); // Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.SetCurrencyAppearance // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerStateCreated(struct ATigerPlayerState* TigerPlayerState); // Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.OnPlayerStateCreated // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClientTransactionalPlayerDataChangedEvent(struct FTigerPersistentPlayerTransactionalData TransactionalPlayerData); // Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.OnClientTransactionalPlayerDataChangedEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_CurrentHardCurrencyText(int32_t EntryPoint); // Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.ExecuteUbergraph_TBP_UI_CurrentHardCurrencyText // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

