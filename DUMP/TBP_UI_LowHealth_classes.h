// WidgetBlueprintGeneratedClass TBP_UI_LowHealth.TBP_UI_LowHealth_C
// Size: 0x31c (Inherited: 0x291)
struct UTBP_UI_LowHealth_C : UTBP_UI_DamageBase_C {
	char pad_291[0x7]; // 0x291(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* ShieldDepleted; // 0x2a0(0x08)
	struct UWidgetAnimation* ExtraHealthDepleted; // 0x2a8(0x08)
	struct UWidgetAnimation* TakeDamage; // 0x2b0(0x08)
	struct UImage* BorderDamageIndicator; // 0x2b8(0x08)
	struct UCanvasPanel* CP_BloodSplatter; // 0x2c0(0x08)
	struct UImage* ExtraHealthDepletedWidget; // 0x2c8(0x08)
	struct UImage* LowHealthWidget; // 0x2d0(0x08)
	struct UImage* ShieldDepletedWidget; // 0x2d8(0x08)
	float CurrentDamageIndicator; // 0x2e0(0x04)
	float MaxDamageIndicator; // 0x2e4(0x04)
	float DesiredDamageIndicator; // 0x2e8(0x04)
	float LowHealthIndicatorPower; // 0x2ec(0x04)
	float DamageIndicatorSpeed; // 0x2f0(0x04)
	float Pulse; // 0x2f4(0x04)
	float CurrentPulse; // 0x2f8(0x04)
	struct FVector DamageLocation; // 0x2fc(0x0c)
	bool CanSetLowHealthPower; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	int32_t PlayerLowHealthAkEventID; // 0x30c(0x04)
	struct ATBP_Player_C* Player; // 0x310(0x08)
	float PreviousHealthPercentage; // 0x318(0x04)

	void UpdateBloodSplatter(); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.UpdateBloodSplatter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	bool IsLowHealth(); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.IsLowHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void StopLowHealthAudio(); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.StopLowHealthAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetHitDirection(struct ATBP_Player_C* Player, struct FVector DamageLocation, struct FVector Output); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.GetHitDirection // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnDamage(struct FVector DamageLocation, float DamageAmount, float NewHealthAmount, bool IsHandled); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.OnDamage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdatePulse(float Delta Seconds); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.UpdatePulse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateLowHealthOverlay(float Delta Seconds); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.UpdateLowHealthOverlay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnExtraHealthDepleted(); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.OnExtraHealthDepleted // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExtraHealthAnimationFinished(); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ExtraHealthAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExtraHealthAnimationStarted(); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ExtraHealthAnimationStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TakeDamageAnimationFinished(); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.TakeDamageAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TakeDamageAnimationStarted(); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.TakeDamageAnimationStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnShieldDepleted(); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.OnShieldDepleted // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShieldDepletedAnimationFinished(); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ShieldDepletedAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShieldDepletedAnimationStarted(); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ShieldDepletedAnimationStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayLowHealthOneShot(float NewHealth); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.PlayLowHealthOneShot // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_LowHealth(int32_t EntryPoint); // Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ExecuteUbergraph_TBP_UI_LowHealth // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

