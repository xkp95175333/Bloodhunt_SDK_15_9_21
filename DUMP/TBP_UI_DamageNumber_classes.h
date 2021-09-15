// WidgetBlueprintGeneratedClass TBP_UI_DamageNumber.TBP_UI_DamageNumber_C
// Size: 0x314 (Inherited: 0x280)
struct UTBP_UI_DamageNumber_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* ExtraHealthBreak; // 0x288(0x08)
	struct UWidgetAnimation* FadeOut; // 0x290(0x08)
	struct UImage* Background; // 0x298(0x08)
	struct UOverlay* DamageBackgroundContainer; // 0x2a0(0x08)
	struct UOverlay* DamageNumberContainer; // 0x2a8(0x08)
	struct UTigerStyledRichTextBlock* DamageNumberText; // 0x2b0(0x08)
	struct UImage* ShieldImage; // 0x2b8(0x08)
	int32_t DamageNumberValue; // 0x2c0(0x04)
	struct FVector2D MoveDirection; // 0x2c4(0x08)
	struct FVector2D CurrentOffsetFromSpawnPos; // 0x2cc(0x08)
	struct FVector WorldSpawnPosition; // 0x2d4(0x0c)
	struct FLinearColor ExtraHealthBracketColor; // 0x2e0(0x10)
	struct FLinearColor ShieldBracketColor; // 0x2f0(0x10)
	bool bIsEnemy; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	struct FLinearColor NewVar_1; // 0x304(0x10)

	void OnShieldBreakUI(); // Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.OnShieldBreakUI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnExtraHelathBreakUI(); // Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.OnExtraHelathBreakUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateFontSize(); // Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.UpdateFontSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void StartMoving(); // Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.StartMoving // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdatePosition(float InDeltaSeconds); // Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.UpdatePosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateNumber(struct FVector InWorldSpawnPosition, int32_t InDamageAmount, struct FLinearColor InDamageColor, float InHealthLeft, bool InHasExtraHealth, bool InHasShield, float InRangedDamageFalloffPercent, bool InBelowLowHealthThreshold); // Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.UpdateNumber // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_DamageNumber(int32_t EntryPoint); // Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.ExecuteUbergraph_TBP_UI_DamageNumber // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

