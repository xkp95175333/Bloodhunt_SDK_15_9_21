// WidgetBlueprintGeneratedClass TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C
// Size: 0x2b0 (Inherited: 0x280)
struct UTBP_UI_EnemyHealthBarDamageOnly_C : UTigerUIEnemyHealthBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	float LastDamageTime; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct UTBP_UI_DamageNumber_C* CurrentDamageNumberUI; // 0x290(0x08)
	bool bIsGroupMember; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	float DamageNumberUpdateTime; // 0x29c(0x04)
	float DamageNumberUpdateGraceTime; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct ATigerCharacter* TigerCharacterOwner; // 0x2a8(0x08)

	void SetTigerCharacter(struct ATigerCharacter* TigerCharacter); // Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.SetTigerCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Set Damage Amount(struct FVector InHitLocation, struct FLinearColor InDamageColor, int32_t InTotalDamageAmount, int32_t InHealthDamageAmount, bool InHasExtraHealth, bool InHasShield, float InRangedDamageFalloffPercent, bool InBelowLowHealthThreshold); // Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.Set Damage Amount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateCurrentDamageNumber(); // Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.UpdateCurrentDamageNumber // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_EnemyHealthBarDamageOnly(int32_t EntryPoint); // Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.ExecuteUbergraph_TBP_UI_EnemyHealthBarDamageOnly // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

