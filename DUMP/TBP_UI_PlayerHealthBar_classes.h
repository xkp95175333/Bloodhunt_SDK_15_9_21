// WidgetBlueprintGeneratedClass TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C
// Size: 0x2c8 (Inherited: 0x280)
struct UTBP_UI_PlayerHealthBar_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UCanvasPanel* CanvasPanel_694; // 0x288(0x08)
	struct UTBP_UI_ActiveBuffsPanel_C* TBP_UI_ActiveBuffsPanel; // 0x290(0x08)
	struct UTBP_UI_SharedPlayerStatus_C* TBP_UI_SharedStatusPanel; // 0x298(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x2a0(0x08)
	bool bIsVisible; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct UTigerPingBase* PingClass; // 0x2b0(0x08)
	struct ATigerElysiumPlayerState* ElysiumPlayerState; // 0x2b8(0x08)
	struct ATigerPlayerState* OwningPlayerState; // 0x2c0(0x08)

	void OnReadyStateChanged(bool InReady); // Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.OnReadyStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DisableHover(); // Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.DisableHover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void EnableHover(); // Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.EnableHover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetPlayerState(struct ATigerPlayerState* PlayerState); // Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.SetPlayerState // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OverridePlayerState(struct ATigerPlayerState* OverridePlayerState); // Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.OverridePlayerState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerStateReceived(struct ATigerPlayerState* InPlayerState); // Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.OnPlayerStateReceived // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_PlayerHealthBar(int32_t EntryPoint); // Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.ExecuteUbergraph_TBP_UI_PlayerHealthBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

