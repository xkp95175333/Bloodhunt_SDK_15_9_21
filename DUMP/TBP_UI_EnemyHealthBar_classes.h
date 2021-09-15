// WidgetBlueprintGeneratedClass TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C
// Size: 0x37b (Inherited: 0x2b0)
struct UTBP_UI_EnemyHealthBar_C : UTBP_UI_EnemyHealthBarDamageOnly_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UOverlay* BarContainer; // 0x2b8(0x08)
	struct UImage* ClanIcon; // 0x2c0(0x08)
	struct UCanvasPanel* IconRootCanvas; // 0x2c8(0x08)
	struct UImage* PlayerColorBox; // 0x2d0(0x08)
	struct UTigerStyledRichTextBlock* PlayerNameplate; // 0x2d8(0x08)
	struct UOverlay* ReviveDiaberieOverlay; // 0x2e0(0x08)
	struct UTigerStyledRichTextBlock* ReviveDiablerieLabel; // 0x2e8(0x08)
	struct UCanvasPanel* RootPanel; // 0x2f0(0x08)
	struct UTBP_UI_HorizontalFadeSlot_C* TBP_UI_HorizontalFadeSlot; // 0x2f8(0x08)
	struct UTBP_UI_ResourceBar_Health_C* TBP_UI_ResourceBar_Health; // 0x300(0x08)
	struct UTBP_UI_ResourceBar_Health_C* TBP_UI_ResourceBar_Health_; // 0x308(0x08)
	struct UTBP_UI_ResourceBar_Health_C* TBP_UI_ResourceBar_HealthEmpty; // 0x310(0x08)
	struct UTBP_UI_ResourceBar_Shield_C* TBP_UI_ResourceBar_Shield; // 0x318(0x08)
	struct UTBP_UI_ResourceBar_Shield_C* TBP_UI_ResourceBar_Shield_; // 0x320(0x08)
	struct UTBP_UI_ResourceBar_Shield_C* TBP_UI_ResourceBar_ShieldBase; // 0x328(0x08)
	struct UTBP_UI_StatusIcon_C* TBP_UI_StatusIcon; // 0x330(0x08)
	bool bIsVisible; // 0x338(0x01)
	bool bIsNameplateVisible; // 0x339(0x01)
	char pad_33A[0x2]; // 0x33a(0x02)
	float CurrentOpacity; // 0x33c(0x04)
	float TimeLeftUntilFade; // 0x340(0x04)
	float CONST_AlwaysVisibleDistance; // 0x344(0x04)
	float CONST_FadeOutSpeedOnDeath; // 0x348(0x04)
	float CONST_FadeOutDelayOnDeath; // 0x34c(0x04)
	float CONST_FadeOutDelay; // 0x350(0x04)
	float CONST_FadeSpeedInOut; // 0x354(0x04)
	float CONST_DisplayTimeAfterDamage; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct ATigerPlayer* TigerPlayer; // 0x360(0x08)
	struct ATigerPlayer* GroupMember; // 0x368(0x08)
	struct ATigerPlayerState* GroupMemberState; // 0x370(0x08)
	bool bCanSetIsGroupMember; // 0x378(0x01)
	bool bCanSetIsNotGroupMember; // 0x379(0x01)
	bool NewVar_1; // 0x37a(0x01)

	void SetTigerCharacter(struct ATigerCharacter* TigerCharacter); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.SetTigerCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateHealthBar(float CurrentShield, float CurrentHealth, float MaxHealth); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateHealthBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPowerKitChanged(); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnPowerKitChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FSlateBrush GetClanIcon(); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.GetClanIcon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void OnPlayerStatusChanged(enum class TBE_StatusIcon InNewState); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnPlayerStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateIsGroupMember(); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateIsGroupMember // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	bool IsAlliedWithLocalPlayer(struct ATigerCharacter* TigerCharacter); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.IsAlliedWithLocalPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void ShieldBreak(); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ShieldBreak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExtraHealthBreak(); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ExtraHealthBreak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OldShouldBeVisible(bool bVisible, bool bIsAlive); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OldShouldBeVisible // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateDownedTimer(); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateDownedTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnUpdatedPlayerState(struct APlayerState* PlayerState); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnUpdatedPlayerState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RemoveMarkingAsGroupMember(); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.RemoveMarkingAsGroupMember // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void MarkAsGroupMember(); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.MarkAsGroupMember // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IsPlayerInElysim(bool IsPlayerInElyusium); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.IsPlayerInElysim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void UpdateVisibility(bool InIsVisible, bool bIsAlive, float DeltaSeconds); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShouldBeVisible(bool bVisible, bool bIsAlive); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ShouldBeVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerNameChanged(); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnPlayerNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddHealAmount(int32_t InHealAmount); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.AddHealAmount // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_EnemyHealthBar(int32_t EntryPoint); // Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ExecuteUbergraph_TBP_UI_EnemyHealthBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

