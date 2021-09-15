// WidgetBlueprintGeneratedClass TBP_UI_MenuContainer.TBP_UI_MenuContainer_C
// Size: 0x379 (Inherited: 0x2c8)
struct UTBP_UI_MenuContainer_C : UTigerIngameMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UCanvasPanel* ContentCanvas; // 0x2d0(0x08)
	struct UButton* CurrencyButton; // 0x2d8(0x08)
	struct UTigerStyledRichTextBlock* GroupNumberText; // 0x2e0(0x08)
	struct UImage* IsReadyLines; // 0x2e8(0x08)
	struct UOverlay* IsReadyOverlay; // 0x2f0(0x08)
	struct UCanvasPanel* LeftDivider; // 0x2f8(0x08)
	struct UHorizontalBox* MenuItems; // 0x300(0x08)
	struct UTBP_UI_CurrentHardCurrencyText_C* PlayerCurrencyWidget; // 0x308(0x08)
	struct UCanvasPanel* PopUpCanvas; // 0x310(0x08)
	struct UButton* SystemButton; // 0x318(0x08)
	struct UImage* SystemSelectedIcon; // 0x320(0x08)
	struct UWidgetSwitcher* SystemSelectedSwitcher; // 0x328(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x330(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad; // 0x338(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad_216; // 0x340(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x348(0x08)
	struct UTBP_UI_PremiumCurrencyPopUp_C* TBP_UI_PremiumCurrencyPopUp; // 0x350(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x358(0x08)
	bool bHasLocalPlayerSpawned; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct TArray<struct UTBP_UI_IngameMenuButton_C*> MenuButtons; // 0x368(0x10)
	bool bOverrideAllowMouseButtons; // 0x378(0x01)

	void OnPartyUpdate(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnPartyUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCurrencyButtonReleased(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnCurrencyButtonReleased // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ClosePremiumCurrencyPopUpMenu(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ClosePremiumCurrencyPopUpMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OpenPremiumCurrencyPopUpMenu(struct FText InItemName, int32_t InItemCost, struct UTBP_UI_PremiumCurrencyPopUp_C* OpenedPopUpMenu); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenPremiumCurrencyPopUpMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HasValidString(struct FText InText, bool HasValidString); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.HasValidString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OpenSubMenuForActiveIndex(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenSubMenuForActiveIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetupButtons(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SetupButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IncrementActiveMenuIndex(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.IncrementActiveMenuIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DecrementActiveMenuIndex(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.DecrementActiveMenuIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OpenSystem(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenSystem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateMenu(struct UTigerIngameSubmenuWidget* SubMenuClass); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.CreateMenu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent InMouseEvent); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InitializeMenus(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.InitializeMenus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SelectMenuToTheRight(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuToTheRight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SelectMenuToTheLeft(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuToTheLeft // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void LocalPlayerSpawned(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.LocalPlayerSpawned // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ConstructSubMenusIfNotConstructed(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ConstructSubMenusIfNotConstructed // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void SelectMenuOnClick(struct UTigerIngameSubmenuWidget* SubmenuWidget); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuOnClick // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ToggleUIVisibility(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ToggleUIVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnMenuSelected(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMenuSelected // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__SystemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.BndEvt__SystemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CurrencyButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.BndEvt__CurrencyButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void PartyUpdate(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PartyUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PartyUpdate2(struct FTigerPartyId InPartyId, struct FString InJoiningPlayerId); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PartyUpdate2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_MenuContainer(int32_t EntryPoint); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ExecuteUbergraph_TBP_UI_MenuContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

