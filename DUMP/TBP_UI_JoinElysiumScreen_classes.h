// WidgetBlueprintGeneratedClass TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C
// Size: 0x428 (Inherited: 0x290)
struct UTBP_UI_JoinElysiumScreen_C : UTigerMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UTBP_UI_MenuButton_C* ExitButton; // 0x298(0x08)
	struct UThrobber* LoadingThrobber; // 0x2a0(0x08)
	struct UTBP_UI_BasicMenu_C* TBP_UI_BasicMenu; // 0x2a8(0x08)
	struct UTBP_UI_MenuButton_C* TryAgainButton; // 0x2b0(0x08)
	struct UTBP_TigerGameInstance_C* GameInstanceRef; // 0x2b8(0x08)
	struct TArray<struct FBlueprintSessionResult> FoundSessions; // 0x2c0(0x10)
	enum class ESlateVisibility ThrobberVisibility; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FText TitleText; // 0x2d8(0x18)
	enum class ESlateVisibility ButtonVisibility; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct FMulticastInlineDelegate OnFailed; // 0x2f8(0x10)
	struct FMulticastInlineDelegate OnSuccess; // 0x308(0x10)
	struct FTigerBpFindSessionSelectedSession SelectedSession; // 0x318(0x110)

	void FindGameInstanceRef(); // Function TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C.FindGameInstanceRef // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnFailed_EF38A8D3483D5FC1A700ED9F4BDCF63E(); // Function TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C.OnFailed_EF38A8D3483D5FC1A700ED9F4BDCF63E // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnSuccess_EF38A8D3483D5FC1A700ED9F4BDCF63E(struct FTigerBpFindSessionResultList Result); // Function TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C.OnSuccess_EF38A8D3483D5FC1A700ED9F4BDCF63E // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnFailed_10BF259245486274DC90C3B7AE437352(); // Function TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C.OnFailed_10BF259245486274DC90C3B7AE437352 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnSuccess_10BF259245486274DC90C3B7AE437352(); // Function TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C.OnSuccess_10BF259245486274DC90C3B7AE437352 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Search(); // Function TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C.Search // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature(); // Function TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_MenuButton_C_0_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature(); // Function TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C.BndEvt__TBP_UI_MenuButton_C_0_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnServerSelected(struct FTigerBpFindSessionSelectedSession Session); // Function TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C.OnServerSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCancel(); // Function TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C.OnCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void SetupUiForSearch(); // Function TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C.SetupUiForSearch // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HandleFailure(); // Function TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C.HandleFailure // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCreateGameSessionFailed(); // Function TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C.OnCreateGameSessionFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_JoinElysiumScreen(int32_t EntryPoint); // Function TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C.ExecuteUbergraph_TBP_UI_JoinElysiumScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnSuccess__DelegateSignature(); // Function TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C.OnSuccess__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnFailed__DelegateSignature(struct FString ErrorString); // Function TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C.OnFailed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

