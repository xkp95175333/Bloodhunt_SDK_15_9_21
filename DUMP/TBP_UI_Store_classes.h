// WidgetBlueprintGeneratedClass TBP_UI_Store.TBP_UI_Store_C
// Size: 0x53c (Inherited: 0x3c8)
struct UTBP_UI_Store_C : UTigerOutfitVendorUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWidgetAnimation* FailedLoadStore; // 0x3d0(0x08)
	struct UImage* Background; // 0x3d8(0x08)
	struct UTBP_UI_TransitionMenuButton_C* Button_Back; // 0x3e0(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* CurrencyButton; // 0x3e8(0x08)
	struct UImage* FailedGetStoreConfigBackground; // 0x3f0(0x08)
	struct UOverlay* GetStoreConfigFailedOverlay; // 0x3f8(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* Preview_Footer; // 0x400(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* Store_Footer; // 0x408(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* StoreButton; // 0x410(0x08)
	struct UTBP_UI_InputMenuPrompt_C* TBP_UI_InputMenuPrompt; // 0x418(0x08)
	struct UTBP_UI_InputMenuPrompt_C* TBP_UI_InputMenuPrompt_2; // 0x420(0x08)
	struct UTBP_UI_InputMenuPrompt_C* TBP_UI_InputMenuPrompt_3; // 0x428(0x08)
	struct UTBP_UI_ItemPreview_C* TBP_UI_ItemPreview; // 0x430(0x08)
	struct UTBP_UI_OutfitItem_Store_C* TBP_UI_OutfitItem_Store; // 0x438(0x08)
	struct UTBP_UI_OutfitItem_Store_C* TBP_UI_OutfitItem_Store_2; // 0x440(0x08)
	struct UTBP_UI_OutfitItem_Store_C* TBP_UI_OutfitItem_Store_3; // 0x448(0x08)
	struct UTBP_UI_OutfitItem_Store_C* TBP_UI_OutfitItem_Store_4; // 0x450(0x08)
	struct UTBP_UI_PremiumCurrency_C* TBP_UI_PremiumCurrency; // 0x458(0x08)
	struct UTBP_UI_Submenu_Header_C* TBP_UI_Submenu_Header_41; // 0x460(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x468(0x08)
	struct FTigerVendorStoreCategoryItem SelectedItem; // 0x470(0x98)
	enum class EStorePage CurrentPage; // 0x508(0x01)
	char pad_509[0x7]; // 0x509(0x07)
	struct TArray<struct UTBP_UI_OutfitItem_Store_C*> StoreItemsWidgets; // 0x510(0x10)
	struct UTBP_UI_OutfitItem_C* SelectedOutfitSlot; // 0x520(0x08)
	struct FTimerHandle TickTimerHandle; // 0x528(0x08)
	struct UTBP_UI_OutfitItem_Store_C* Selected Outfit Store Slot; // 0x530(0x08)
	int32_t OldTemporalAASampleCount; // 0x538(0x04)

	void TickStoreEntries(); // Function TBP_UI_Store.TBP_UI_Store_C.TickStoreEntries // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetStoreAsUnavailable(); // Function TBP_UI_Store.TBP_UI_Store_C.SetStoreAsUnavailable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ContainsRankSkipsOnlyAtMaxLevel(struct FTigerMetaStoreEntry StoreEntry, bool Result); // Function TBP_UI_Store.TBP_UI_Store_C.ContainsRankSkipsOnlyAtMaxLevel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void FillFlashStore(struct FTigerMetaStoreEntriesConfig InStoreConfig); // Function TBP_UI_Store.TBP_UI_Store_C.FillFlashStore // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void On Switch Active Page(enum class EStorePage New Page); // Function TBP_UI_Store.TBP_UI_Store_C.On Switch Active Page // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnItemHovered(struct FTigerVendorStoreCategoryItem Item); // Function TBP_UI_Store.TBP_UI_Store_C.OnItemHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnItemUnhovered(); // Function TBP_UI_Store.TBP_UI_Store_C.OnItemUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnItemPreview(struct FTigerVendorStoreCategoryItem InItem); // Function TBP_UI_Store.TBP_UI_Store_C.OnItemPreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_Store.TBP_UI_Store_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Store.TBP_UI_Store_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void On Active Page Changed(); // Function TBP_UI_Store.TBP_UI_Store_C.On Active Page Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnConfirmBuyItem(struct FTigerMetaStoreEntry StoreEntry, bool bEquipItem); // Function TBP_UI_Store.TBP_UI_Store_C.OnConfirmBuyItem // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCancelBuyPopup(); // Function TBP_UI_Store.TBP_UI_Store_C.OnCancelBuyPopup // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnBackgroundSceneShown(); // Function TBP_UI_Store.TBP_UI_Store_C.OnBackgroundSceneShown // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnBuySuccessful(); // Function TBP_UI_Store.TBP_UI_Store_C.OnBuySuccessful // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_MatchMaker_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_MatchMaker_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_MatchMaker_TabButton_85_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_MatchMaker_TabButton_85_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_Store.TBP_UI_Store_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnMenuBackPressed(); // Function TBP_UI_Store.TBP_UI_Store_C.OnMenuBackPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void On Flash Store Items Received(struct FTigerMetaStoreEntriesConfig InConfig, enum class ETigerMetaStoreEventType InEventType); // Function TBP_UI_Store.TBP_UI_Store_C.On Flash Store Items Received // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Buy Item Response(struct FTigerBuyStoreEntryResponsePayload InBuyResponse); // Function TBP_UI_Store.TBP_UI_Store_C.Buy Item Response // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_Store.TBP_UI_Store_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Enable Tick Remaining Store Durations(); // Function TBP_UI_Store.TBP_UI_Store_C.Enable Tick Remaining Store Durations // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Disable Tick Remaining Store Durations(); // Function TBP_UI_Store.TBP_UI_Store_C.Disable Tick Remaining Store Durations // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick Timers(); // Function TBP_UI_Store.TBP_UI_Store_C.Tick Timers // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnItemSelected(struct FTigerVendorStoreCategoryItem Item, struct UTBP_UI_OutfitItem_Store_C* OutfitItem_Store); // Function TBP_UI_Store.TBP_UI_Store_C.OnItemSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature(); // Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature(); // Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_2_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature(); // Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_2_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Store(int32_t EntryPoint); // Function TBP_UI_Store.TBP_UI_Store_C.ExecuteUbergraph_TBP_UI_Store // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

