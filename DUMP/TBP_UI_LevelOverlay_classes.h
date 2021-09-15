// WidgetBlueprintGeneratedClass TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C
// Size: 0x31c (Inherited: 0x280)
struct UTBP_UI_LevelOverlay_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* LevelUpAnim; // 0x288(0x08)
	struct UWidgetAnimation* OnGainXP; // 0x290(0x08)
	struct UWidgetAnimation* FadeIn; // 0x298(0x08)
	struct UImage* CurrentExperienceBackground; // 0x2a0(0x08)
	struct UImage* CurrentExperienceImage; // 0x2a8(0x08)
	struct UTigerStyledRichTextBlock* ExperienceGainedText; // 0x2b0(0x08)
	struct UTigerStyledRichTextBlock* LevelText; // 0x2b8(0x08)
	struct UImage* TargetExperienceImage; // 0x2c0(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x2c8(0x08)
	struct UTigerLevelComponent* Level Component; // 0x2d0(0x08)
	float CurrentExperiencePercentage; // 0x2d8(0x04)
	float DeltaTime; // 0x2dc(0x04)
	float BarHeight; // 0x2e0(0x04)
	char DisplayLevel; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	int32_t MaxExpForLevel; // 0x2e8(0x04)
	int32_t TargetExp; // 0x2ec(0x04)
	float TargetExpPercent; // 0x2f0(0x04)
	float InterperetToTargetSpeed; // 0x2f4(0x04)
	bool IsAnimating; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FDateTime AnimatingWaitUntilStartAnimation; // 0x300(0x08)
	struct FTimespan WaitTimeBeforeAnimation; // 0x308(0x08)
	float ExperienceBarHeight; // 0x310(0x04)
	float ExperienceBarWidth; // 0x314(0x04)
	int32_t Experience Gained; // 0x318(0x04)

	void OnLevelChanged(int32_t InLevel); // Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.OnLevelChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateBars(); // Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.UpdateBars // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetupUpdateConstants(struct UTigerLevelComponent* Level Component); // Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.SetupUpdateConstants // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateCurrentExperianceLevelReset(); // Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.UpdateCurrentExperianceLevelReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateCurrentExperience(struct UTigerLevelComponent* Level Component); // Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.UpdateCurrentExperience // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnAddExperience(int32_t Add Experience); // Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.OnAddExperience // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_LevelOverlay(int32_t EntryPoint); // Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.ExecuteUbergraph_TBP_UI_LevelOverlay // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

