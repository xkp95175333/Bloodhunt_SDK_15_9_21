// WidgetBlueprintGeneratedClass TBP_UI_JoinPartyElysiumScreen.TBP_UI_JoinPartyElysiumScreen_C
// Size: 0x318 (Inherited: 0x290)
struct UTBP_UI_JoinPartyElysiumScreen_C : UTigerMenuWidget {
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

	void FindGameInstanceRef(); // Function TBP_UI_JoinPartyElysiumScreen.TBP_UI_JoinPartyElysiumScreen_C.FindGameInstanceRef // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature(); // Function TBP_UI_JoinPartyElysiumScreen.TBP_UI_JoinPartyElysiumScreen_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_MenuButton_C_0_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature(); // Function TBP_UI_JoinPartyElysiumScreen.TBP_UI_JoinPartyElysiumScreen_C.BndEvt__TBP_UI_MenuButton_C_0_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Join(); // Function TBP_UI_JoinPartyElysiumScreen.TBP_UI_JoinPartyElysiumScreen_C.Join // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_JoinPartyElysiumScreen.TBP_UI_JoinPartyElysiumScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void SetupUiForJoining(); // Function TBP_UI_JoinPartyElysiumScreen.TBP_UI_JoinPartyElysiumScreen_C.SetupUiForJoining // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HandleFailure(); // Function TBP_UI_JoinPartyElysiumScreen.TBP_UI_JoinPartyElysiumScreen_C.HandleFailure // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_JoinPartyElysiumScreen(int32_t EntryPoint); // Function TBP_UI_JoinPartyElysiumScreen.TBP_UI_JoinPartyElysiumScreen_C.ExecuteUbergraph_TBP_UI_JoinPartyElysiumScreen // (Final|UbergraphFunction) // @ game+0x16c0340
	void OnSuccess__DelegateSignature(); // Function TBP_UI_JoinPartyElysiumScreen.TBP_UI_JoinPartyElysiumScreen_C.OnSuccess__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnFailed__DelegateSignature(struct FString ErrorString); // Function TBP_UI_JoinPartyElysiumScreen.TBP_UI_JoinPartyElysiumScreen_C.OnFailed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

