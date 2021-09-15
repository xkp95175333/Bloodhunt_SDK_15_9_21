// WidgetBlueprintGeneratedClass TBP_UI_CurrencyText.TBP_UI_CurrencyText_C
// Size: 0x314 (Inherited: 0x280)
struct UTBP_UI_CurrencyText_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* CurrencyImage; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* CurrencyText; // 0x290(0x08)
	struct UCanvasPanel* RootCanvas; // 0x298(0x08)
	SoftClassProperty CurrencyItemPath; // 0x2a0(0x28)
	struct FSlateColor TintSlateColor; // 0x2c8(0x28)
	bool AutoUpdateCurrency; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	int32_t Currency Text Size; // 0x2f4(0x04)
	float Currency Image Size; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct FDataTableRowHandle RichTextFont; // 0x300(0x10)
	int32_t OldHardCurrency; // 0x310(0x04)

	void SetCurrencyAmount(int32_t CurrencyAmount); // Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.SetCurrencyAmount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateToCurrentPlayerAmount(); // Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.UpdateToCurrentPlayerAmount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLoaded_1FBBDA1045CBB28C294A3DB584E90C6E(struct UObject* Loaded); // Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.OnLoaded_1FBBDA1045CBB28C294A3DB584E90C6E // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void SetCurrencyPath(SoftClassProperty InCurrencyItemPath); // Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.SetCurrencyPath // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerStateCreated(struct ATigerPlayerState* TigerPlayerState); // Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.OnPlayerStateCreated // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPremiumCurrencyBalanceChanged(struct FTigerPersistentPlayerTransactionalData TransactionalPlayerData); // Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.OnPremiumCurrencyBalanceChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_CurrencyText(int32_t EntryPoint); // Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.ExecuteUbergraph_TBP_UI_CurrencyText // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

