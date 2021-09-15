// WidgetBlueprintGeneratedClass TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C
// Size: 0x478 (Inherited: 0x280)
struct UTBP_UI_Battlepass_BuyMenu_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* RankSkipError; // 0x288(0x08)
	struct UWidgetAnimation* BattlepassError; // 0x290(0x08)
	struct UWidgetAnimation* FadeIn; // 0x298(0x08)
	struct UTBP_UI_Button_CTA_C* BackSkipButton; // 0x2a0(0x08)
	struct UTigerStyledRichTextBlock* BattlepassDestricptionText; // 0x2a8(0x08)
	struct UCanvasPanel* BattlepassHorizontalBox; // 0x2b0(0x08)
	struct UVerticalBox* BundleVerticalBox; // 0x2b8(0x08)
	struct UTBP_UI_Button_CTA_C* BuyBattlepassBundleButton_Front; // 0x2c0(0x08)
	struct UTBP_UI_Button_CTA_C* BuyBattlepassButton; // 0x2c8(0x08)
	struct UTBP_UI_Button_CTA_C* BuyBattlepassButton_Front; // 0x2d0(0x08)
	struct UWidgetSwitcher* BuyButtonSwitcher; // 0x2d8(0x08)
	struct UTBP_UI_Button_CTA_C* BuyTierSkipButton; // 0x2e0(0x08)
	struct UTBP_UI_CurrencyText_C* Cost_Battlepass; // 0x2e8(0x08)
	struct UTBP_UI_CurrencyText_C* Cost_Bundle; // 0x2f0(0x08)
	struct UTBP_UI_CurrencyText_C* CurrencyCost; // 0x2f8(0x08)
	struct UOverlay* DividerOverlay; // 0x300(0x08)
	struct UOverlay* GetBattlepassConfigFailedOverlay; // 0x308(0x08)
	struct UOverlay* GetRankSkipConfigFailedOverlay; // 0x310(0x08)
	struct UTigerStyledRichTextBlock* InstantRewardDescritionText; // 0x318(0x08)
	struct UWidgetSwitcher* MenuWidgetSwitcher; // 0x320(0x08)
	struct UTBP_UI_Loading_Throbber_C* PurchaseTrobber; // 0x328(0x08)
	struct UVerticalBox* RankSkipVerticalBox; // 0x330(0x08)
	struct UTBP_UI_Divider_Vertical_C* TBP_UI_Divider_Vertical; // 0x338(0x08)
	struct UTBP_UI_InputMenuPrompt_C* TBP_UI_InputMenuPrompt; // 0x340(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* TBP_UI_Menu_Button_Prompt_Footer; // 0x348(0x08)
	struct UTBP_UI_Popup_Base_C* TBP_UI_Popup_Base; // 0x350(0x08)
	struct UTBP_UI_StoreEntry_C* TBP_UI_StoreEntry_Battlepass; // 0x358(0x08)
	struct UTBP_UI_StoreEntry_C* TBP_UI_StoreEntry_BattlepassBundle; // 0x360(0x08)
	struct UTigerStyledRichTextBlock* TierSkipBetweenRanksText; // 0x368(0x08)
	struct UTigerStyledRichTextBlock* TierSkipPurchaseSummaryText; // 0x370(0x08)
	struct UTBP_UI_Battlepass_C* Battlepass; // 0x378(0x08)
	struct TMap<int32_t, struct FTigerMetaStoreEntry> RankSkips; // 0x380(0x50)
	struct TArray<struct FTigerMetaStoreBuyPayloadElement> RankSkipStoreEntry; // 0x3d0(0x10)
	int32_t SelectedBattlepassCost; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct UTBP_UI_StoreEntry_C* SelectedStoreEntry; // 0x3e8(0x08)
	struct FTimerHandle TimeoutHandle; // 0x3f0(0x08)
	struct FText InstantRewardDescrition_Text; // 0x3f8(0x18)
	struct FText BattlepassDestricption_Text; // 0x410(0x18)
	struct FString Subheader_TextFormatting; // 0x428(0x10)
	struct FString Subtitle_TextFormatting; // 0x438(0x10)
	struct FString UL_TextFormatting; // 0x448(0x10)
	struct FString Bold_TextFormating; // 0x458(0x10)
	struct FString EF_TextFormatting; // 0x468(0x10)

	void ClearTimeoutHandleAndHideThrobber(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ClearTimeoutHandleAndHideThrobber // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetRankSkipsCount(struct FTigerMetaStoreEntry InEntry, int32_t Count, bool bContainsNonRankSkipItem); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.GetRankSkipsCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void SetBattlepassMenuData(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetBattlepassMenuData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateRankSkipsBuyEntry(bool bFoundBuyEntries); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.CreateRankSkipsBuyEntry // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void SetRankSkipMenuData(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetRankSkipMenuData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ParseRankSkipEntries(struct FTigerMetaStoreEntriesConfig InConfig); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ParseRankSkipEntries // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ParseBattlepassEntries(struct FTigerMetaStoreEntriesConfig InConfig); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ParseBattlepassEntries // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetBattlepassParent(struct UTBP_UI_Battlepass_C* Battlepass); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetBattlepassParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Show(bool IsBuyBattlepass); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Hide(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Hide // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetStoreEntry(struct FTigerMetaStoreEntry InStoreEntry, bool bInIsBundle); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetStoreEntry // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void On Get Battlepass Store Config(struct FTigerMetaStoreEntriesConfig InConfig, enum class ETigerMetaStoreEventType InEventType); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.On Get Battlepass Store Config // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnBattlepassPurchased(struct FTigerBuyStoreEntryResponsePayload InBuyResponse); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnBattlepassPurchased // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void On Get Season Rank Skip Store Config(struct FTigerMetaStoreEntriesConfig InConfig, enum class ETigerMetaStoreEventType InEventType); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.On Get Season Rank Skip Store Config // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnTierSkipsBought(struct FTigerBuyStoreEntryResponsePayload InBuyResponse); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnTierSkipsBought // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnBattlepassTypeChosen(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnBattlepassTypeChosen // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__BuyBattlepassButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BuyBattlepassButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__BackSkipButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BackSkipButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void FetchStoreConfigs(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.FetchStoreConfigs // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Buy Battlepass(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Buy Battlepass // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_Battlepass_BuyMenu_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_10_OnInputPressed__DelegateSignature(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_10_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void CreateTimeoutHandle(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.CreateTimeoutHandle // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnTimedOut(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnTimedOut // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassButton_Front_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassButton_Front_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassBundleButton_Front_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassBundleButton_Front_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Battlepass_BuyMenu(int32_t EntryPoint); // Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ExecuteUbergraph_TBP_UI_Battlepass_BuyMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

