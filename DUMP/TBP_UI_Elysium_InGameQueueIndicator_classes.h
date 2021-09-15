// WidgetBlueprintGeneratedClass TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C
// Size: 0x460 (Inherited: 0x280)
struct UTBP_UI_Elysium_InGameQueueIndicator_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* SwitchModeAnim; // 0x288(0x08)
	struct UImage* Arch_Bottom_Left; // 0x290(0x08)
	struct UImage* Arch_Bottom_Right; // 0x298(0x08)
	struct UImage* Arch_Top_Left; // 0x2a0(0x08)
	struct UImage* Arch_Top_Right; // 0x2a8(0x08)
	struct UImage* Arrow_Left; // 0x2b0(0x08)
	struct UImage* Arrow_Right; // 0x2b8(0x08)
	struct UImage* Arrow_Top; // 0x2c0(0x08)
	struct UImage* Diamond_Bottom_Left; // 0x2c8(0x08)
	struct UImage* Diamond_Bottom_Right; // 0x2d0(0x08)
	struct UImage* Diamond_Top_Left; // 0x2d8(0x08)
	struct UImage* Diamond_Top_Right; // 0x2e0(0x08)
	struct UTigerStyledRichTextBlock* GameModeTextWidget; // 0x2e8(0x08)
	struct UImage* GroupImage; // 0x2f0(0x08)
	struct UImage* HorizLine_Left; // 0x2f8(0x08)
	struct UImage* HorizLine_Right; // 0x300(0x08)
	struct UImage* Horn_InnerLeft; // 0x308(0x08)
	struct UImage* Horn_InnerRight; // 0x310(0x08)
	struct UImage* Horn_OuterLeft; // 0x318(0x08)
	struct UImage* Horn_OuterRight; // 0x320(0x08)
	struct UImage* Horn_Top; // 0x328(0x08)
	struct UImage* Image_2; // 0x330(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_GameMode; // 0x338(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_Ready; // 0x340(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_GameMode; // 0x348(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_Ready; // 0x350(0x08)
	struct UTigerStyledRichTextBlock* MapName; // 0x358(0x08)
	struct UHorizontalBox* MatchMakingContainer; // 0x360(0x08)
	struct UTigerStyledRichTextBlock* MatchMakingTextWidget; // 0x368(0x08)
	struct UImage* ModeIcon; // 0x370(0x08)
	struct UHorizontalBox* ReadyButtonContainer; // 0x378(0x08)
	struct UImage* SoloImage; // 0x380(0x08)
	struct UTBP_UI_TransitionMenuButton_C* StartGameUIButton; // 0x388(0x08)
	struct UWidgetSwitcher* StatusWidgetSwitcher; // 0x390(0x08)
	struct UOverlay* SwitchGameModeContainer; // 0x398(0x08)
	struct UTBP_UI_Gradient_C* TBP_UI_Gradient; // 0x3a0(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_3; // 0x3a8(0x08)
	struct UTBP_UI_QueueIndicator_C* TBP_UI_QueueIndicator; // 0x3b0(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x3b8(0x08)
	struct UImage* VertLine_Left; // 0x3c0(0x08)
	struct UImage* VertLine_Middle; // 0x3c8(0x08)
	struct UImage* VertLine_Right; // 0x3d0(0x08)
	struct UImage* VertLine_Top; // 0x3d8(0x08)
	struct FText Config_ReadyText; // 0x3e0(0x18)
	struct FText Config_CancelText; // 0x3f8(0x18)
	struct FText Config_SoloMode; // 0x410(0x18)
	struct FText Config_GroupFillMode; // 0x428(0x18)
	bool bIsGroupMode; // 0x440(0x01)
	bool bIsMatchmaking; // 0x441(0x01)
	char pad_442[0x6]; // 0x442(0x06)
	struct ATigerElysiumPlayerState* ElysiumPlayerState; // 0x448(0x08)
	struct UTBP_TigerGameInstance_C* TigerGameInstance; // 0x450(0x08)
	struct UTBP_UI_MoviePlayer_C* MovieWidget; // 0x458(0x08)

	void ShowTrainingVideo(struct UTigerGrimoireEntry* InGrimoireEntry); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.ShowTrainingVideo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InitializeIsGroupMode(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.InitializeIsGroupMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetLastSelectedGroupingMode(bool IsGroup); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.SetLastSelectedGroupingMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Is Sole Member Of Group and Not in Party(bool bOnlyGroupMemberAndNotInParty); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Is Sole Member Of Group and Not in Party // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void UpdateGroupLayout(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.UpdateGroupLayout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IsInGroup(bool bIsInGroup); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.IsInGroup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	bool IsFindingGameServer(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.IsFindingGameServer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void SetReadyButtonState(bool bInIsReady, bool bIsQuickAnimation); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.SetReadyButtonState // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnSwitchGameMode(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnSwitchGameMode // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnShowPlayerList(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnShowPlayerList // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnReadyInput(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnReadyInput // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnGroupChangedDelegate(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGroupChangedDelegate // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnFindMatchFailed(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnFindMatchFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnValidTigerPlayerState(struct ATigerPlayerState* TigerPlayerState); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnValidTigerPlayerState // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnGroupReadyStateChanged(bool bInIsGroupReady); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGroupReadyStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CancelMatchmaking(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.CancelMatchmaking // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void DisableStartGameButton(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.DisableStartGameButton // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnTrainingVideoCompleted(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnTrainingVideoCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Elysium_InGameQueueIndicator(int32_t EntryPoint); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.ExecuteUbergraph_TBP_UI_Elysium_InGameQueueIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

