// BlueprintGeneratedClass TBP_TigerGameInstance.TBP_TigerGameInstance_C
// Size: 0x990 (Inherited: 0x760)
struct UTBP_TigerGameInstance_C : UTigerGameInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x760(0x08)
	struct UTBP_UI_JoinElysiumScreen_C* JoinElysiumScreenWB; // 0x768(0x08)
	struct UTBP_UI_LobbyMenu_C* LobbyMenuWB; // 0x770(0x08)
	struct UTBP_UI_HostMenu_C* HostMenuWB; // 0x778(0x08)
	struct UTBP_UI_FindGameFailedMenu_C* FindGameFailedMenuWB; // 0x780(0x08)
	int32_t MaxPlayers; // 0x788(0x04)
	char pad_78C[0x4]; // 0x78c(0x04)
	struct FText ServerName; // 0x790(0x18)
	struct UTBP_UI_MatchMenu_C* MatchMenuWB; // 0x7a8(0x08)
	struct FString PlayerSettingsSave; // 0x7b0(0x10)
	bool bMainMenuIsOpen; // 0x7c0(0x01)
	char pad_7C1[0x7]; // 0x7c1(0x07)
	struct UTBP_UI_JoinGameMenu_C* JoinGameMenuWB; // 0x7c8(0x08)
	struct UTBP_UI_GroupInvitationList_C* InvitationListWB; // 0x7d0(0x08)
	struct UTBP_UI_WinScreen_C* WinScreenWB; // 0x7d8(0x08)
	struct UTBP_UI_ServerSelection_C* ServerSelectionMenuWB; // 0x7e0(0x08)
	struct FMulticastInlineDelegate OnLoadingScreenFullyOpaque; // 0x7e8(0x10)
	struct FString JoinErrorString; // 0x7f8(0x10)
	struct FMulticastInlineDelegate OnJoinGameCountdownBegin; // 0x808(0x10)
	struct UTBP_UI_TutorialMenu_C* TutorialMenuWB; // 0x818(0x08)
	struct UTBP_UI_JoinPartyElysiumScreen_C* JoinPartyElysiumScreenWB; // 0x820(0x08)
	struct TSoftObjectPtr<struct UObject> ErrorStringTable; // 0x828(0x28)
	struct FString TraveledFrom; // 0x850(0x10)
	struct FTigerBpFindSessionSelectedSession SelectedSession; // 0x860(0x110)
	struct UAkAudioEvent* MenuMusicEvent; // 0x970(0x08)
	struct UTBP_UI_Tutorial_IntroText_C* TutorialIntroWB; // 0x978(0x08)
	struct FMulticastInlineDelegate OnTitleScreenFadeOutStarted; // 0x980(0x10)

	void AddBlackLoadingScreen(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.AddBlackLoadingScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetIngameMenuUI(struct UTigerIngameMenuWidget* IngameMenuUI); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetIngameMenuUI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
	struct FLinearColor GetUIColor(enum class ETigerUIColor UIColor, enum class ETigerColourSpace ColorSpace); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetUIColor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	bool IsAllowedToOpenMainMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsAllowedToOpenMainMenu // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetJoinErrorText(struct FText OutErrorText, bool bHadError); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetJoinErrorText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetErrorStringTableId(struct FName TableId); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetErrorStringTableId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
	void IsInMatch(bool InMatch); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsInMatch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void CreateLoadingScreenWidgetBP(struct UTigerLoadingScreenUI* InWidgetClass, float InFadeInTime, struct UTigerLoadingScreenAsset* InLoadingScreenAsset, struct UTigerLoadingScreenUI* LoadingScreen); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateLoadingScreenWidgetBP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IsElysiumGameMenuOpen(bool bIsOpen); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsElysiumGameMenuOpen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
	void CreateJoinGameMenu(struct UTBP_UI_JoinGameMenu_C* Output_Get); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateJoinGameMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ValidateBloodTrackPresets(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ValidateBloodTrackPresets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CloseMenuWidget(struct UTigerMenuWidget* Widget); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseMenuWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OpenMenuWidget(struct UTigerMenuWidget* Widget, int32_t ZOrder); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenMenuWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TravelErrorToString(enum class ETravelFailure FailureType, struct FString OutString); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TravelErrorToString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void NetErrorToString(enum class ENetworkFailure FailureType, struct FString OutString); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.NetErrorToString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void OnPreLoadingDone_CA1249C244C7069F7709069D760517F5(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnPreLoadingDone_CA1249C244C7069F7709069D760517F5 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnEnterElysium_CA1249C244C7069F7709069D760517F5(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnEnterElysium_CA1249C244C7069F7709069D760517F5 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnEnterElysiumFirstTime_CA1249C244C7069F7709069D760517F5(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnEnterElysiumFirstTime_CA1249C244C7069F7709069D760517F5 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLaunchTutorial_CA1249C244C7069F7709069D760517F5(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLaunchTutorial_CA1249C244C7069F7709069D760517F5 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnFailed_3610B3364B95E4E2F5EC2286C6423010(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnFailed_3610B3364B95E4E2F5EC2286C6423010 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnSuccess_3610B3364B95E4E2F5EC2286C6423010(struct FTigerBpFindSessionResultList Result); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSuccess_3610B3364B95E4E2F5EC2286C6423010 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowHostMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowHostMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OpenLobbyMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenLobbyMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLoginSucceeded(struct TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoginSucceeded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnLoginFailed(struct FTigerLoginFailedInfo InLoginFailedInfo); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoginFailed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void LaunchElysiumServer(int32_t NumberOfPlayers, bool EnableLan?, struct FText ServerName); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.LaunchElysiumServer // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCreateCharacterResult(struct FTigerPersistentCharacterID CharacterId, bool bWasCharacterCreated); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCreateCharacterResult // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnCharacterSelected(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCharacterSelected // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.HandleNetworkError // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void HandleTravelError(enum class ETravelFailure FailureType); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.HandleTravelError // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void EnterBootFlow(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.EnterBootFlow // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ToggleLobbyMeny(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleLobbyMeny // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CloseLobbyMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseLobbyMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CloseFindGameFailedMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseFindGameFailedMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OpenFindElysiumMenu(bool bStartSearch, bool bStartHidden); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenFindElysiumMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CloseFindElysiumMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseFindElysiumMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OpenMatchMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenMatchMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OpenLoadingScreen(SoftClassProperty TigerGameMode); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenLoadingScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CloseLoadingScreen(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseLoadingScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReturnToCharacterSelection(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToCharacterSelection // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OpenJoinGameMenu(struct FTigerBpFindSessionSelectedSession SessionToJoin); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenJoinGameMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CloseJoinGameMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseJoinGameMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveInvitation(struct FTigerGroupInvitation Invitation, struct ATigerPlayerState* Inviter); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReceiveInvitation // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void RemoveInvitationList(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.RemoveInvitationList // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OpenServerSelectionMenu(struct FTigerBpFindSessionResultList Sessions); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenServerSelectionMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CloseServerSelectionMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseServerSelectionMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OpenFindGameFailedMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenFindGameFailedMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnSelected(struct FTigerBpFindSessionSelectedSession Session); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FadeInLoadingScreen(SoftClassProperty TigerGameMode); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FadeInLoadingScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FadeOutLoadingScreen(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FadeOutLoadingScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnInitialLevelStreamingCompleted(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnInitialLevelStreamingCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClosedJoinElysium(struct FString ErrorString); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnClosedJoinElysium // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnSuccessfulJoin(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSuccessfulJoin // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReturnToBootStartMapTransfer(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToBootStartMapTransfer // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PostLoadMapWithWorld(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.PostLoadMapWithWorld // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnGetValidGameVersionResult(enum class ETigerVersionIsValidResult Result); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnGetValidGameVersionResult // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnIgnored_Dispatch_Event_1(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnIgnored_Dispatch_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FindMatch(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FindMatch // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RetryPostLoadMap(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.RetryPostLoadMap // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CancelJoinGame(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CancelJoinGame // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveInit(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReceiveInit // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OpenTutorialMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenTutorialMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CloseTutorialMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseTutorialMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateLoadingScreenWidget(float InFadeInTime, struct UTigerLoadingScreenAsset* InLoadingScreenAsset, struct UTigerLoadingScreenUI* InWidgetClass); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateLoadingScreenWidget // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnTransferLoadingScreenOpaque(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTransferLoadingScreenOpaque // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TransferToElysium(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferToElysium // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TransferFromMatch(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferFromMatch // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnJoinPartyElysiumFailed(struct FString ErrorString); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinPartyElysiumFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CloseJoinPartyElysiumMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseJoinPartyElysiumMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnJoinPartyElysiumSuccess(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinPartyElysiumSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnTransferToPartyElysiumFadeComplete(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTransferToPartyElysiumFadeComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OpenJoinPartyElysiumScreen(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenJoinPartyElysiumScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void KickToLoginScreen(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.KickToLoginScreen // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLoadingScreenFullyOpaque_Event(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoadingScreenFullyOpaque_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCreateGameSessionFailed(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCreateGameSessionFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void JoinSessionThroughUrl(struct FString SessionURL); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.JoinSessionThroughUrl // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ShowTitleScreen(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowTitleScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DispatchTitleScreenClosed(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.DispatchTitleScreenClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowMoviesAndTitleScreen(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowMoviesAndTitleScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Cheat_QuitTutorial(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.Cheat_QuitTutorial // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ShowWinScreen(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowWinScreen // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Transfer from Match(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.Transfer from Match // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CloseMatchMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseMatchMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TitleScreenFadeOutStarted(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TitleScreenFadeOutStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ToggleTutorialMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleTutorialMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReturnToElysium(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToElysium // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CloseWinScreen(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseWinScreen // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowPostMatchScreen(bool bInShouldLeaveParty); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowPostMatchScreen // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ToggleMatchMeny(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleMatchMeny // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReturnToBootWithError(struct FString InError); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToBootWithError // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TransferToPartyElysium(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferToPartyElysium // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_TigerGameInstance(int32_t EntryPoint); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ExecuteUbergraph_TBP_TigerGameInstance // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnTitleScreenFadeOutStarted__DelegateSignature(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTitleScreenFadeOutStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnJoinGameCountdownBegin__DelegateSignature(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinGameCountdownBegin__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLoadingScreenFullyOpaque__DelegateSignature(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoadingScreenFullyOpaque__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

