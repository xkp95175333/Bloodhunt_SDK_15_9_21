// WidgetBlueprintGeneratedClass TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C
// Size: 0x432 (Inherited: 0x290)
struct UTBP_UI_JoinGameMenu_C : UTigerMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetAnimation* CountdownAnimation; // 0x298(0x08)
	struct UButton* BackButton; // 0x2a0(0x08)
	struct URichTextBlock* Countdown; // 0x2a8(0x08)
	struct UThrobber* LoadingThrobber; // 0x2b0(0x08)
	struct UBorder* PopupRoot; // 0x2b8(0x08)
	struct UCanvasPanel* RootWidget; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_1; // 0x2c8(0x08)
	struct UButton* TryAgainButton; // 0x2d0(0x08)
	struct UTBP_TigerGameInstance_C* GameInstanceRef; // 0x2d8(0x08)
	enum class ESlateVisibility ThrobberVisibility; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct FText TitleText; // 0x2e8(0x18)
	enum class ESlateVisibility ButtonVisibility; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	int32_t CountdownValueLeft; // 0x304(0x04)
	struct FTigerBpFindSessionSelectedSession SessionToJoin; // 0x308(0x110)
	bool bIsFadingOut; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct FString SessionURL; // 0x420(0x10)
	bool bJoinThroughUrl; // 0x430(0x01)
	enum class ESessionType SESSIONTYPE; // 0x431(0x01)

	void OnFailed_EBC24ED74F5F36E2DCB45EB973C97E17(); // Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.OnFailed_EBC24ED74F5F36E2DCB45EB973C97E17 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnSuccess_EBC24ED74F5F36E2DCB45EB973C97E17(); // Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.OnSuccess_EBC24ED74F5F36E2DCB45EB973C97E17 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HandleFailure(); // Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.HandleFailure // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Join(struct FTigerBpFindSessionSelectedSession FoundSession); // Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.Join // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnFadeInComplete(); // Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.OnFadeInComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_CountdownAnimation_K2Node_WidgetAnimationEvent_1(); // Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.WidgetAnimationEvt_CountdownAnimation_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x16c0340
	void TriggerCountdownAnimation(int32_t NewCountDownValue); // Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.TriggerCountdownAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__SearchButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.BndEvt__SearchButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void CancelJoin(); // Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.CancelJoin // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void JoinThroughUrl(struct FString InSessionURL); // Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.JoinThroughUrl // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_JoinGameMenu(int32_t EntryPoint); // Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.ExecuteUbergraph_TBP_UI_JoinGameMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

