// WidgetBlueprintGeneratedClass TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C
// Size: 0x5c4 (Inherited: 0x3d0)
struct UTBP_UI_ElysiumChangeCharacter_C : UTigerArchetypeSelectElysiumUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UWidgetAnimation* ShowArchetypeDetailsAnim_Fast; // 0x3d8(0x08)
	struct UWidgetAnimation* HideArchetypeDetailsAnim_Fast; // 0x3e0(0x08)
	struct UWidgetAnimation* FadeOutBackground; // 0x3e8(0x08)
	struct UWidgetAnimation* VideoStopped; // 0x3f0(0x08)
	struct UWidgetAnimation* VideoStarted; // 0x3f8(0x08)
	struct UWidgetAnimation* ShowArchetypeDetailsAnim; // 0x400(0x08)
	struct UWidgetAnimation* HideArchetypeDetailsAnim; // 0x408(0x08)
	struct UWidgetAnimation* LoadingDone; // 0x410(0x08)
	struct UTBP_UI_ArchetypeDescription_C* ArchetypeDescription; // 0x418(0x08)
	struct UCanvasPanel* ArchetypeDetails; // 0x420(0x08)
	struct UTBP_UI_ArchetypeInfo_C* ArchetypeInfo; // 0x428(0x08)
	struct UVerticalBox* ArchetypeInfoBox; // 0x430(0x08)
	struct UImage* BlackBackground; // 0x438(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* ButtonArchetype; // 0x440(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* ButtonPresets; // 0x448(0x08)
	struct UButton* Carousel_Button_Left; // 0x450(0x08)
	struct UButton* Carousel_Button_Right; // 0x458(0x08)
	struct UTBP_UI_CharacterSkin_Elysium_C* CharacterSkin_1; // 0x460(0x08)
	struct UTBP_UI_CharacterSkin_Elysium_C* CharacterSkin_2; // 0x468(0x08)
	struct UTBP_UI_CharacterSkin_Elysium_C* CharacterSkin_3; // 0x470(0x08)
	struct UTBP_UI_CharacterSkin_Elysium_C* CharacterSkin_4; // 0x478(0x08)
	struct UTBP_UI_CharacterSkin_Elysium_C* CharacterSkin_5; // 0x480(0x08)
	struct UCanvasPanel* CharacterSkins; // 0x488(0x08)
	struct UCircularThrobber* CircularThrobber_56; // 0x490(0x08)
	struct UTBP_UI_InputMenuPrompt_C* ClosePrompt; // 0x498(0x08)
	struct UTBP_UI_ConfirmSlotPurchase_C* ConfirmSlotPurchase; // 0x4a0(0x08)
	struct UTBP_UI_FullScreen_PopUp_Base_C* CreatingCharacterPopup; // 0x4a8(0x08)
	struct UTBP_UI_ErrorPrompt_C* ErrorPrompt; // 0x4b0(0x08)
	struct UImage* HACKY_INPUT_BLOCKER; // 0x4b8(0x08)
	struct UTBP_UI_InputMenuPrompt_C* HideArchetypeDetails_2; // 0x4c0(0x08)
	struct UTBP_UI_HorizontalArchetypeSelector_Default_C* HorizontalArchetypeSelector; // 0x4c8(0x08)
	struct UOverlay* LoadingOverlay; // 0x4d0(0x08)
	struct UImage* PaperdollBackground; // 0x4d8(0x08)
	struct UTigerStyledRichTextBlock* PlAYCINEMATIC; // 0x4e0(0x08)
	struct UTBP_UI_TransitionMenuButton_C* PlayCinematicButton; // 0x4e8(0x08)
	struct UImage* PlayVideoIcon; // 0x4f0(0x08)
	struct UTBP_UI_InputMenuPrompt_C* ShowArchetypeDetails; // 0x4f8(0x08)
	struct UTBP_UI_InputPromptCombined_C* ShowCinematicKeyPrompt_2; // 0x500(0x08)
	struct UTBP_UI_ArchetypeSelect_BloodTrack_C* TBP_UI_ArchetypeSelect_BloodTrack; // 0x508(0x08)
	struct UTBP_UI_MenuButton_C* TBP_UI_MenuButton; // 0x510(0x08)
	struct UTBP_UI_PageIndicator_C* TBP_UI_PageIndicator; // 0x518(0x08)
	struct UTBP_UI_Submenu_Header_C* TBP_UI_Submenu_Header; // 0x520(0x08)
	struct UTigerStyledRichTextBlock* Text; // 0x528(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x530(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_ShowHide; // 0x538(0x08)
	struct TArray<struct UTBP_UI_CharacterSkin_Elysium_C*> ArchetypeSkinWidgets; // 0x540(0x10)
	struct UTigerPowerKit* CurrentArchetypeData; // 0x550(0x08)
	enum class E_ElysiumChangeCharacterState CurrentUiState; // 0x558(0x01)
	bool bIsPlayingPowerVideo; // 0x559(0x01)
	char pad_55A[0x6]; // 0x55a(0x06)
	struct UTBP_UI_MoviePlayer_C* MoviePlayerUI; // 0x560(0x08)
	bool bHasValidCharacterForArchetype; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct TArray<int32_t> Archetype Character Indices; // 0x570(0x10)
	struct UTBP_UI_CharacterSkin_Elysium_C* PendingCreateCharacterWidget; // 0x580(0x08)
	struct FTigerPersistentCharacterID ActiveCharacterSlot; // 0x588(0x01)
	char pad_589[0x7]; // 0x589(0x07)
	struct TArray<struct ATBP_PaperDoll_C*> All Paperdolls; // 0x590(0x10)
	int32_t ActiveCharacterIndex; // 0x5a0(0x04)
	char pad_5A4[0x4]; // 0x5a4(0x04)
	struct TArray<struct FVector> Original Location; // 0x5a8(0x10)
	struct AActor* CameraController; // 0x5b8(0x08)
	int32_t OldTemporalAASampleCount; // 0x5c0(0x04)

	void CloseFullscreenCinematic(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.CloseFullscreenCinematic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Reset Selection to 0(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Reset Selection to 0 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SelectCharacterIfValid(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.SelectCharacterIfValid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Update Paperdoll Positions(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Update Paperdoll Positions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ResetMenu(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ResetMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddTaggedActorsToCaptureComponent(bool bUseCaptureComponent); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.AddTaggedActorsToCaptureComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ChangeSelection(struct UTBP_UI_CharacterSkin_Elysium_C* InNewSelection); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ChangeSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TogglePresets(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.TogglePresets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ToggleArchetypeDetails(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ToggleArchetypeDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ResetSlotStates(struct TArray<int32_t> inArray); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ResetSlotStates // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SelectOrCreateCharacter(struct FTigerPersistentPlayerCharacter InPlayerCharacter); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.SelectOrCreateCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCharacterSelected(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnCharacterSelected // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnGetValidGameVersionResult(enum class ETigerVersionIsValidResult Result); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnGetValidGameVersionResult // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnLoginFailed(struct FTigerLoginFailedInfo InLoginFailedInfo); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnLoginFailed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnLoginSucceeded(struct TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnLoginSucceeded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_HorizontalArchetypeSelector_Default_K2Node_ComponentBoundEvent_0_OnArchetypeSelected__DelegateSignature(struct UTigerPowerKit* InArchetypeData); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_HorizontalArchetypeSelector_Default_K2Node_ComponentBoundEvent_0_OnArchetypeSelected__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CharacterSkin_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(struct FTigerPersistentPlayerCharacter InPersistentCharacter); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CharacterSkin_1_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(struct FTigerPersistentPlayerCharacter InPersistentCharacter); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_1_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnCreateCharacterResult(struct FTigerPersistentCharacterID CharacterId, bool bWasCharacterCreated); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnCreateCharacterResult // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnArchetypeChanged(struct UTigerPowerKit* InArchetypeData, struct TArray<int32_t> InPlayerArchetypeCharacterIndices); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnArchetypeChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CharacterSkin_2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(struct FTigerPersistentPlayerCharacter InPersistentCharacter); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CharacterSkin_3_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(struct FTigerPersistentPlayerCharacter InPersistentCharacter); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_3_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CharacterSkin_4_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(struct FTigerPersistentPlayerCharacter InPersistentCharacter); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_4_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void Create Character On Existing Slot(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Create Character On Existing Slot // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnBuyCharacterSlotResults(bool bInSuccess, struct FString InErrorString); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnBuyCharacterSlotResults // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ShowArchetypeDetails_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ShowArchetypeDetails_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ClosePrompt_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ClosePrompt_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_LoadingDone_K2Node_WidgetAnimationEvent_1(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_LoadingDone_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_ShowArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_2(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_ShowArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_HideArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_3(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_HideArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_8_OnVideoStarted__DelegateSignature(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_8_OnVideoStarted__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_9_OnVideoEnded__DelegateSignature(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_9_OnVideoEnded__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ShowFullscreenCinematic(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ShowFullscreenCinematic // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnFullscreenCinematicClosed(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnFullscreenCinematicClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ConfirmSlotPurchase_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature(bool ConfirmedPurchase); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ConfirmSlotPurchase_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnBackgroundSceneShown(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnBackgroundSceneShown // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__PlayCinematicButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__PlayCinematicButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__HideArchetypeDetails_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__HideArchetypeDetails_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_84_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__Button_84_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_117_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__Button_117_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Update Carousel Change(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Update Carousel Change // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ButtonPresets_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ButtonPresets_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ButtonArchetype_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ButtonArchetype_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_HideArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_4(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_HideArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_4 // (BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_ShowArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_5(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_ShowArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_5 // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ElysiumChangeCharacter(int32_t EntryPoint); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ExecuteUbergraph_TBP_UI_ElysiumChangeCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

