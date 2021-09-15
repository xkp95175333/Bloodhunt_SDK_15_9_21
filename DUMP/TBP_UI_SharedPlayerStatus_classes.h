// WidgetBlueprintGeneratedClass TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C
// Size: 0x500 (Inherited: 0x280)
struct UTBP_UI_SharedPlayerStatus_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* BreakShield; // 0x288(0x08)
	struct UImage* ArchetypeIcon; // 0x290(0x08)
	struct UImage* ArchetypeIcon_Member; // 0x298(0x08)
	struct UTigerStyledRichTextBlock* DisconnectedText_Local; // 0x2a0(0x08)
	struct UTigerStyledRichTextBlock* DisconnectedText_Member; // 0x2a8(0x08)
	struct UTigerStyledRichTextBlock* HealthCurrentText; // 0x2b0(0x08)
	struct UTigerStyledRichTextBlock* HealthMaxText; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Image_261; // 0x2c8(0x08)
	struct UImage* MatchmakingNotReady_Local; // 0x2d0(0x08)
	struct UImage* MatchmakingNotReady_Member; // 0x2d8(0x08)
	struct UImage* MatchmakingReady_Local; // 0x2e0(0x08)
	struct UImage* MatchmakingReady_Member; // 0x2e8(0x08)
	struct UWidgetSwitcher* MatchmakingReadyStatus_Local; // 0x2f0(0x08)
	struct UWidgetSwitcher* MatchmakingReadyStatus_Member; // 0x2f8(0x08)
	struct UCanvasPanel* MemberPlayer; // 0x300(0x08)
	struct UWidgetSwitcher* MemberPlayerSwitcher; // 0x308(0x08)
	struct UImage* PlayerColorBox; // 0x310(0x08)
	struct UImage* PlayerColorBox_Member; // 0x318(0x08)
	struct UTigerStyledRichTextBlock* PlayerLevelTeammateText; // 0x320(0x08)
	struct UTigerStyledRichTextBlock* PlayerNameText_Member; // 0x328(0x08)
	struct UImage* ShielBrokenImage; // 0x330(0x08)
	struct UImage* ShieldImage; // 0x338(0x08)
	struct UImage* SpeakingIcon_Local; // 0x340(0x08)
	struct UImage* SpeakingIcon_Member; // 0x348(0x08)
	struct UTBP_UI_CoterieNavigatorIcon_C* TBP_UI_CoterieNavigatorIcon_Local; // 0x350(0x08)
	struct UTBP_UI_CoterieNavigatorIcon_C* TBP_UI_CoterieNavigatorIcon_Member; // 0x358(0x08)
	struct UTBP_UI_PlayerActionIndicator_C* TBP_UI_PlayerActionIndicator_Local; // 0x360(0x08)
	struct UTBP_UI_PlayerActionIndicator_C* TBP_UI_PlayerActionIndicator_Member; // 0x368(0x08)
	struct UTBP_UI_ResourceBar_Health_C* TBP_UI_ResourceBar_HealthEmpty_Local; // 0x370(0x08)
	struct UTBP_UI_ResourceBar_Health_C* TBP_UI_ResourceBar_HealthEmpty_Member; // 0x378(0x08)
	struct UTBP_UI_ResourceBar_Shield_C* TBP_UI_ResourceBar_ShieldBase_Local; // 0x380(0x08)
	struct UTBP_UI_ResourceBar_Shield_C* TBP_UI_ResourceBar_ShieldBase_Member; // 0x388(0x08)
	struct UTBP_UI_StatusIcon_C* TBP_UI_StatusIcon_Local; // 0x390(0x08)
	struct UTBP_UI_StatusIcon_C* TBP_UI_StatusIcon_Member; // 0x398(0x08)
	bool bIsReadyForMatchmaking; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct ATigerPlayerState* GroupMemberState; // 0x3a8(0x08)
	struct ATigerPlayer* GroupMember; // 0x3b0(0x08)
	struct FSlateColor DesiredBackgroundColor; // 0x3b8(0x28)
	bool bIsDead; // 0x3e0(0x01)
	bool bIsInElysium; // 0x3e1(0x01)
	bool bIsDisconnected; // 0x3e2(0x01)
	char pad_3E3[0x5]; // 0x3e3(0x05)
	struct FSlateBrush LastKnownClanIcon; // 0x3e8(0x88)
	struct FSlateBrush LastKnownPlayerEmblem; // 0x470(0x88)
	struct UTigerItemAsset* ItemAsset; // 0x4f8(0x08)

	void SetShieldVisibility(int32_t Amount); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.SetShieldVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowSpeakIconIfSpeaking(); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.ShowSpeakIconIfSpeaking // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLevelChanged(int32_t InLevel, int32_t InOldLevel); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnLevelChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerNameChanged(); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnPlayerNameChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnArchetypeChanged(struct UTigerPlayerClanData* InClanData, struct UTigerPowerKit* InArchetypeData); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnArchetypeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FText GetPlayerHealthNumber(struct FText HealthCurrent, struct FText HealthMax); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.GetPlayerHealthNumber // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	struct FSlateBrush GetPlayerEmblem(); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.GetPlayerEmblem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void OnDisconnectedStateChanged(); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnDisconnectedStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnDeathStatusChanged(); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnDeathStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLifeStatusChanged(enum class ETigerPlayerLifeStatus InNewLifeStatus); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnLifeStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnShieldChanged(float InNewHealth, float InNewHealthPercentage); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnShieldChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnHealthChanged(float InNewHealth, float InNewHealthPercentage); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnHealthChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetDesiredBackgroundColor(struct FSlateColor InColor); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.SetDesiredBackgroundColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnStatusIconChanged(enum class TBE_StatusIcon InStatusIcon); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnStatusIconChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetPlayerColor(char PlayerIndex); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.SetPlayerColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IsDowned(bool Is Downed); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.IsDowned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void OnPawnChanged(struct APawn* NewPawn); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnPawnChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateElysiumVisibility(); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.UpdateElysiumVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Set Member(struct ATigerPlayerState* InGroupMemberState); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.Set Member // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void UpdateMatchmakingReadyStatus(bool bInIsReadyForMatchmaking); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.UpdateMatchmakingReadyStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_SharedPlayerStatus(int32_t EntryPoint); // Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.ExecuteUbergraph_TBP_UI_SharedPlayerStatus // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

